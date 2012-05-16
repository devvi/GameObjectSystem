#ifndef __GAME_OBJECT_SYSTEM_GC_PHYSICS_BODY_H__
#define __GAME_OBJECT_SYSTEM_GC_PHYSICS_BODY_H__
#include "GOSDecl.h"
#include "gameObject.h"
#include "btBulletDynamicsCommon.h"
#include "OGRE/OgreSceneNode.h"

namespace DAISY
{
	class PhysicsBody: public GameComponent
	{
	public:
		PhysicsBody(GameObject* game_object = NULL);
		~PhysicsBody();
		void onUpdate(float interval);
		void onAttachObject();
		void onDetachObject();


		void initBody(float mass,  unsigned int id);
		unsigned int getCollisionID();
		void setCollisionID(unsigned int id);
		void setMass(float mass);
		void impulse(Ogre::Vector3& offset);
		void setNeedCallBack(bool needCallBcak);
		bool needCallBack();
	private:
		void refreshBodyForNode();

		btCollisionObject* _collisionObject;
		btRigidBody* _rigidBody;
		btDynamicsWorld* _phyWorld;
		btCollisionShape* _colShape;
		
		float _mass;
		unsigned int _collisionID;
		bool _hasCallBack;
	};

	class OgreMostionState: public btMotionState
	{
	public:
		OgreMostionState(const btTransform &initalPos, Ogre::SceneNode* node)
		{
			ogreNode = node;
			mPosl = initalPos;
		}
		~OgreMostionState(){}
		void setNode(Ogre::SceneNode* node)
		{
			ogreNode = node;
		}

		void getWorldTransform(btTransform& worldTrans ) const
		{
			worldTrans = mPosl;
		}

		void setWorldTransform(const btTransform& worldTrans)
		{
			if(NULL == ogreNode)
				return;
			btQuaternion q = worldTrans.getRotation();
			ogreNode->_setDerivedOrientation(Ogre::Quaternion(q.getW(), q.getX(), q.getY(), q.getZ()));
			btVector3 v = worldTrans.getOrigin();
			ogreNode->_setDerivedPosition(Ogre::Vector3(v.getX(), v.getY(), v.getZ() ) );
		}
	private:
		Ogre::SceneNode* ogreNode;
		btTransform mPosl;
	};

	class PhysicsBodyComponentFactory: public GameComponentFactory
	{
	public:
		PhysicsBodyComponentFactory();
		~PhysicsBodyComponentFactory();
		GameComponent* createComponent();
		void releaseGameComponent(GameComponent* gc);
	};
}



#endif
