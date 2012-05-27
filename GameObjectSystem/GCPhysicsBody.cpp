#include "GCPhysicsBody.h"
#include "PhysicsManager.h"
#include "GCnode.h"
using namespace DAISY;

PhysicsBody::PhysicsBody(GameObject* game_object):
GameComponent(PHYBODY, game_object),
_rigidBody(NULL),
_collisionObject(NULL),
_colShape (new btBoxShape(btVector3(1, 1, 1))),
_phyWorld(PhysicsManager::getInstancePtr()->getWorld()),
_colFlg(CF_DEFAULT),
_mass(0),
_collisionID(0),
_hasCallBack(false)
{}

PhysicsBody::~PhysicsBody()
{
	if(_rigidBody)
	{
		btMotionState* ms = _rigidBody->getMotionState();
		delete ms;

		if(_phyWorld)
			_phyWorld->removeRigidBody(_rigidBody);
	}
};

void PhysicsBody::initBody(float mass, unsigned int id, CollisionFlags flg)
{
	_mass = mass;
	_collisionID = id;
	_colFlg = flg;
}

void PhysicsBody::refreshBodyForNode()
{
	if(_game_object->hasGC(OGRENODE))
	{
		// first clear old body for physics world
		if(_rigidBody)
		{
			btMotionState* ms = _rigidBody->getMotionState();
			delete ms;
			_phyWorld->removeRigidBody(_rigidBody);

		}

		Ogre::AxisAlignedBox box;
		// then see if object has entitry component,if it does,change the size of collision shap adapted to entity 
		if(_game_object->hasGC(RENDER_ENTITY))
		{
			GCEntity* entity = (GCEntity*)_game_object->getGC(RENDER_ENTITY);
			Ogre::Entity* ogreEntity = entity->getOgreEntity();
			box = ogreEntity->getBoundingBox();
		}else
		{	// handle the situation where there is no entity component just ogrenode eg. the terrain formed by only manually mesh
			Ogre::SceneNode* ogreNode = ((GCNode*)_game_object->getGC(OGRENODE))->getOgreNode();
			box = ogreNode->_getWorldAABB();
		}

		Ogre::Vector3 boxSize = box.getSize();

		// set the size of collision shap,the value need to pass is the half of real size
		_colShape->setLocalScaling(btVector3(boxSize.x/2, boxSize.y/2, boxSize.z/2));

		GCNode* node = (GCNode*) _game_object->getGC(OGRENODE);
		Ogre::SceneNode* ogreNode = node->getOgreNode();


		bool isDynamic = (_mass != 0.f);

		btVector3 localInertia(0,0,0);
		if (isDynamic)
			_colShape->calculateLocalInertia(_mass,localInertia);
		
			
		
		Ogre::Vector3 orignalPos = ogreNode->_getDerivedPosition();
		Ogre::Quaternion orient = ogreNode->_getDerivedOrientation();
		btTransform trans;
		trans.setRotation(btQuaternion(orient.x, orient.y, orient.z, orient.w));
		trans.setOrigin(btVector3(orignalPos.x, orignalPos.y, orignalPos.z));
		//using motionstate is recommended, it provides interpolation capabilities, and only synchronizes 'active' objects
		btMotionState* myMotionState = new OgreMostionState(trans, ogreNode);

		btRigidBody::btRigidBodyConstructionInfo rbInfo(_mass,myMotionState,_colShape,localInertia);

		_rigidBody = new btRigidBody(rbInfo);

		// set the reference of this component inorder to let physics manager pass collision message 
		_rigidBody->setUserPointer( (void*)this);
		
		if(_colFlg != CF_DEFAULT)
		{
			_rigidBody->setCollisionFlags(_rigidBody->getCollisionFlags()|_colFlg);
		}

		
		//add the body to the dynamics world
		_phyWorld->addRigidBody(_rigidBody);

	}
}
void PhysicsBody::onAttachObject()
{
	refreshBodyForNode();
}

void PhysicsBody::onDetachObject()
{
	OgreMostionState* ms = (OgreMostionState*)_rigidBody->getMotionState();
	 
 	// deactivate this body
	_rigidBody->setActivationState(WANTS_DEACTIVATION);



	// and stop to update ogre node see OgreMotionState
	ms->setNode(NULL);
}

void PhysicsBody::onUpdate(float interval){}

void PhysicsBody::setCollisionID(unsigned int id)
{
	_collisionID = id;
}

unsigned int PhysicsBody::getCollisionID()
{
	return _collisionID;
}

void PhysicsBody::setMass(float mass)
{
	_mass = mass;
	refreshBodyForNode();
}

void PhysicsBody::impulse(Ogre::Vector3& offset)
{
	if(_rigidBody)
	{
		btVector3 pos = _rigidBody->getCenterOfMassPosition();
		btVector3 impulse(offset.x, offset.y, offset.z);
		_rigidBody->applyImpulse(impulse , pos);
	}
}
void DAISY::PhysicsBody::setNeedCallBack( bool needCallBcak )
{
	_hasCallBack = needCallBcak;
}

bool DAISY::PhysicsBody::needCallBack()
{
	return _hasCallBack;
}

PhysicsBodyComponentFactory::PhysicsBodyComponentFactory(){}
PhysicsBodyComponentFactory::~PhysicsBodyComponentFactory(){}

GameComponent* PhysicsBodyComponentFactory::createComponent()
{
	return new PhysicsBody();
}

void PhysicsBodyComponentFactory::releaseGameComponent(GameComponent* gc)
{
	if(gc)
	{
		delete gc;
	}
}


