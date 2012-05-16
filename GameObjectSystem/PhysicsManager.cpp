#include "PhysicsManager.h"
#include "GCPhysicsBody.h"
#include "GOSScriptManager.h"
using namespace DAISY;

PhysicsManager::PhysicsManager():
_broadphase(NULL),
_dispatcher(NULL),
_solver(NULL),
_collisionConfiguration(NULL),
_dynamicsWorld(NULL),
_L(NULL)
{}

PhysicsManager::~PhysicsManager(){}



bool PhysicsManager::init()
{
	_L = ScriptManager::getInstance().getLuaVM();

	///collision configuration contains default setup for memory, collision setup
	_collisionConfiguration = new btDefaultCollisionConfiguration();
	//m_collisionConfiguration->setConvexConvexMultipointIterations();

	///use the default collision dispatcher. For parallel processing you can use a diffent dispatcher (see Extras/BulletMultiThreaded)
	_dispatcher = new	btCollisionDispatcher(_collisionConfiguration);

	_broadphase = new btDbvtBroadphase();

	///the default constraint solver. For parallel processing you can use a different solver (see Extras/BulletMultiThreaded)
	btSequentialImpulseConstraintSolver* sol = new btSequentialImpulseConstraintSolver;

	_solver = sol;

	_dynamicsWorld = new btDiscreteDynamicsWorld(_dispatcher,_broadphase,_solver,_collisionConfiguration);

	_dynamicsWorld->setGravity(btVector3(0,-10,0));

	return true;
}

bool PhysicsManager::update(float interval)
{
	if (_dynamicsWorld)
	{
		_dynamicsWorld->stepSimulation(interval);
		//optional but useful: debug drawing
		//m_dynamicsWorld->debugDrawWorld();

	

		int numManifolds = _dynamicsWorld->getDispatcher()->getNumManifolds();
		
		for (int i=0;i<numManifolds;i++)
		{
			btPersistentManifold* contactManifold =  _dynamicsWorld->getDispatcher()->getManifoldByIndexInternal(i);
			btCollisionObject* obA = static_cast<btCollisionObject*>(contactManifold->getBody0());
			btCollisionObject* obB = static_cast<btCollisionObject*>(contactManifold->getBody1());
			
			void* gc = obA->getUserPointer();
			
			if(gc!= NULL)
			{
				PhysicsBody* body = static_cast<PhysicsBody*>(gc);
				
				// optimize for runtime update 
				if(! body->needCallBack())
					continue;

				int numContacts = contactManifold->getNumContacts();

				//	hack: we know that one body collide with others,the count of contaced point could be more than 1
				//	but in this system, we just need invoke the registered callbcak function once! so we modify it manually
				if(numContacts > 1) numContacts = 1;

				for (int j=0;j<numContacts;j++)
				{
					btManifoldPoint& pt = contactManifold->getContactPoint(j);
					if (pt.getDistance()<0.f)
					{	
						const btVector3& ptA = pt.getPositionWorldOnA();
						const btVector3& ptB = pt.getPositionWorldOnB();
						const btVector3& normalOnB = pt.m_normalWorldOnB;
						int lifeTime = pt.getLifeTime();
						void* gcOther = obB->getUserPointer();

						// we need convert btVector3 to Ogre::Vecntor3 because we don't need to expose bullet type to lua and we have exposed Ogre type to it
						Ogre::Vector3 posA(ptA.getX(), ptA.getY(), ptA.getZ());
						Ogre::Vector3 posB(ptB.getX(), ptB.getY(), ptB.getZ());
						Ogre::Vector3 normal(normalOnB.getX(), normalOnB.getY(), normalOnB.getZ());
						
						if(lifeTime == 1)
							daisy_object_call_lua(_L, gc, "startContacted", 5, gcOther, "PhysicsBody",
							posA, "Ogre::Vector3", posB, "Ogre::Vector3", normal, "Ogre::Vector3");
						else if(lifeTime > 1 )
							daisy_object_call_lua(_L, gc, "contacting", 5, gcOther, "PhysicsBody",
							posA, "Ogre::Vector3", posB, "Ogre::Vector3", normal, "Ogre::Vector3");
					}
				}
			}
		}
	}
	return true;
}
btDynamicsWorld* PhysicsManager::getWorld()
{
	return _dynamicsWorld;
}
void PhysicsManager::shutdown()
{
	int i;
	for (i=_dynamicsWorld->getNumCollisionObjects()-1; i>=0 ;i--)
	{
		btCollisionObject* obj = _dynamicsWorld->getCollisionObjectArray()[i];
		btRigidBody* body = btRigidBody::upcast(obj);
		if (body && body->getMotionState())
		{
			delete body->getMotionState();
		}
		_dynamicsWorld->removeCollisionObject( obj );
		delete obj;
	}

	//delete collision shapes
	for (int j=0;j<_collisionShapes.size();j++)
	{
		btCollisionShape* shape = _collisionShapes[j];
		delete shape;
	}
	_collisionShapes.clear();

	delete _dynamicsWorld;

	delete _solver;

	delete _broadphase;

	delete _dispatcher;

	delete _collisionConfiguration;
}
template<> PhysicsManager* Singleton<PhysicsManager>::_singleton = NULL;