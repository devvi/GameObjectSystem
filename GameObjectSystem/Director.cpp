#include "Director.h"
#include "GameObjectSystem.h"
#include <mmsystem.h>
using namespace  DAISY;
/*
static NodeComponentFactory* nodeFactory = NULL;
static OgreEntityComponentFactory* entityFactory = NULL;
static CameraComponentFactory* cameraFactory = NULL;
*/
const static float FIXED_UPDATE_FRAMERATE = 1/60; 

Director::Director():
_isExit(false),
_ogreManager(NULL),
_componentManager(NULL),
_gameObjectManager(NULL),
_oisManager(NULL),
_currTime(0),
_lastTime(0),
_interval(0),
_passedTime(0)
{}
Director::~Director(){}

bool Director::init()
{
	_ogreManager  =  new OgreManager();
	_oisManager = new OISManager();
	_componentManager  = new GameComponentManager();
	_gameObjectManager = new GameObjectManager();
	
	_ogreManager->init();
	_oisManager->init();
	return true;
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
			_ogreManager->update(_passedTime);

			_oisManager->update();

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
	_ogreManager->shutdown();

	delete _gameObjectManager;
	delete _componentManager;
	delete _oisManager;
	delete _ogreManager;
}
void Director::setExit(bool exit)
{
	_isExit = exit;
}
template<> Director* Singleton<Director>::_singleton = NULL;