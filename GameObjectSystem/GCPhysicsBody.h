/*
-----------------------------------------------------------------------------
This soure file is part of GameObjectSystem.
Copyright (c) 2012 Devvi
-----------------------------------------------------------------------------
*/

#ifndef __GAME_OBJECT_SYSTEM_GC_PHYSICS_BODY_H__
#define __GAME_OBJECT_SYSTEM_GC_PHYSICS_BODY_H__
#include "GOSDecl.h"
#include "gameObject.h"
#include "btBulletDynamicsCommon.h"
#include "OGRE/OgreSceneNode.h"

namespace DAISY
{
	enum CollisionFlags
	{
		CF_DEFAULT = 0,
		CF_STATIC_OBJECT= 1,
		CF_KINEMATIC_OBJECT= 2,
		CF_NO_CONTACT_RESPONSE = 4,
		CF_CUSTOM_MATERIAL_CALLBACK = 8,//this allows per-triangle material (friction/restitution)
		CF_CHARACTER_OBJECT = 16,
		CF_DISABLE_VISUALIZE_OBJECT = 32, //disable debug drawing
		CF_DISABLE_SPU_COLLISION_PROCESSING = 64//disable parallel/SPU processing
	};

	class PhysicsBody: public GameComponent
	{
	public:
		PhysicsBody(GameObject* game_object = NULL);
		~PhysicsBody();
		void onUpdate(float interval);
		void onAttachObject();
		void onDetachObject();


		void initBody(float mass,  unsigned int id, CollisionFlags flag = CF_DEFAULT);
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
		int _colFlg;
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
			if (NULL == ogreNode)
				worldTrans = mPosl;
			else
			{
				Ogre::Vector3 pos = ogreNode->_getDerivedPosition();
				Ogre::Quaternion orient = ogreNode->_getDerivedOrientation();
				worldTrans.setOrigin(btVector3(pos.x, pos.y, pos.z));
				worldTrans.setRotation(btQuaternion(orient.x, orient.y, orient.z, orient.w));
			}
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
