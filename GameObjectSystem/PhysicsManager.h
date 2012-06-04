/*
-----------------------------------------------------------------------------
This soure file is part of GameObjectSystem.
Copyright (c) 2012 Devvi
-----------------------------------------------------------------------------
*/

#ifndef __GAME_OBJECT_SYSTEM_PHYSICS_MANAGER_H__
#define __GAME_OBJECT_SYSTEM_PHYSICS_MANAGER_H__
#include "GOSDecl.h"
#include "btBulletDynamicsCommon.h"

namespace DAISY
{
	typedef std::list<btRigidBody*> BodyList;
	class PhysicsManager: public Singleton<PhysicsManager>
	{
	public:
		PhysicsManager();
		~PhysicsManager();
		bool update(float interval);
		bool init();
		void shutdown();
		btDynamicsWorld* getWorld();
		void pushShap(btCollisionShape* shap);
		
	private:

		// a set of collision shaps
		btAlignedObjectArray<btCollisionShape*>	_collisionShapes;

		//broadphase to simulate a physic world
		btBroadphaseInterface*	_broadphase;

		btCollisionDispatcher*	_dispatcher;

		// main solver
		btConstraintSolver*	_solver;

		btDefaultCollisionConfiguration* _collisionConfiguration;

		//physics world interface
		btDynamicsWorld*		_dynamicsWorld;

		lua_State* _L;

		// for internal usage
		btRigidBody* _floorBody;
	};

}




#endif