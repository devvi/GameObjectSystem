#ifndef __GAME_OBJECT_SYSTEM_DIRECTOR_H__
#define __GAME_OBJECT_SYSTEM_DIRECTOR_H__
#include "GOSDecl.h"

namespace DAISY{

	class Director:public Singleton<Director>
	{
	public:
		Director();
		~Director();
		bool init();
		bool run();
		void shutdown();
		void setExit(bool exit);
	private:
		bool _isExit;
		OgreManager* _ogreManager; 
		GameComponentManager* _componentManager;
		GameObjectManager* _gameObjectManager;
		OISManager* _oisManager;
		ScriptManager* _scriptManager;
		PhysicsManager* _physicsManager;
		time_t _currTime;
		time_t _lastTime;
		float _interval;
		float _passedTime;
	};
}
#endif