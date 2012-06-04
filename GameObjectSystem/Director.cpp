/*
-----------------------------------------------------------------------------
This soure file is part of GameObjectSystem.
Copyright (c) 2012 Devvi
-----------------------------------------------------------------------------
*/
#include "Director.h"
#include "GameObjectSystem.h"
#include <tolua++.h>
using namespace  DAISY;
/*
static NodeComponentFactory* nodeFactory = NULL;
static OgreEntityComponentFactory* entityFactory = NULL;
static CameraComponentFactory* cameraFactory = NULL;
*/
const static float FIXED_UPDATE_FRAMERATE = 0.0167f; // 1/60

Director::Director():
_isExit(false),
_ogreManager(NULL),
_componentManager(NULL),
_gameObjectManager(NULL),
_oisManager(NULL),
_scriptManager(NULL),
_physicsManager(NULL),
_currTime(0),
_lastTime(0),
_interval(0),
_passedTime(0)
{}
Director::~Director(){}

bool Director::init()
{
	_ogreManager  =  new OgreManager();
	_scriptManager = new ScriptManager();
	_oisManager = new OISManager();
	_componentManager  = new GameComponentManager();
	_gameObjectManager = new GameObjectManager();
	_physicsManager = new PhysicsManager();

	if(_ogreManager->init() && _scriptManager->init()&&_physicsManager->init() && _oisManager->init())
		return true;
	else
		return false;
}

bool Director::run()
{
	_lastTime = timeGetTime();

	while(true)
	{
		_currTime = timeGetTime();
		_interval = _currTime - _lastTime;
		_interval = _interval / 1000;
		_passedTime  = _passedTime + _interval;
		_lastTime = _currTime;
		
		
		if(_passedTime >= FIXED_UPDATE_FRAMERATE)
		{
			_physicsManager->update(FIXED_UPDATE_FRAMERATE);

			_oisManager->update();

			_gameObjectManager->update();

			_scriptManager->update();

			_ogreManager->update(FIXED_UPDATE_FRAMERATE);
			
			_passedTime = 0;
		}
		if(_isExit)
			break;
	}
	shutdown();
	return true;
}

void Director::shutdown()
{
	_gameObjectManager->shutdown();
	_oisManager->shutdown();
	_scriptManager->shutdown();
	_physicsManager->shutdown();
	_ogreManager->shutdown();

	delete _gameObjectManager;
	delete _componentManager;
	delete _oisManager;
	delete _physicsManager;
	delete _ogreManager;
	delete _scriptManager;
}
void Director::setExit(bool exit)
{
	_isExit = exit;
}
template<> Director* Singleton<Director>::_singleton = NULL;