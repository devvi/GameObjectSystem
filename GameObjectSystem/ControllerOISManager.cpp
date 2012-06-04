/*
-----------------------------------------------------------------------------
This soure file is part of GameObjectSystem.
Copyright (c) 2012 Devvi
-----------------------------------------------------------------------------
*/
#include "ControllerOISManager.h"
#include "ViewOgreManager.h"
#include "Director.h"
#include "GOSScriptManager.h"
#include <tolua++.h>
#include "Debug.h"
using namespace DAISY;
template<> OISManager* Singleton<OISManager>::_singleton = NULL;

OISManager::OISManager():
_inputManager(NULL),
_mouse(NULL),
_keyboard(NULL),
_L(NULL)
{

}
OISManager::~OISManager()
{

}

bool OISManager::init()
{
	OIS::ParamList pl;
	size_t windowHnd = 0;
	std::ostringstream windowHndStr;
	Ogre::RenderWindow* rw = OgreManager::getInstance().getRenderWindow();
	rw->getCustomAttribute("WINDOW", &windowHnd);
	windowHndStr << windowHnd;
	pl.insert(std::make_pair(std::string("WINDOW"), windowHndStr.str()));

	_inputManager = OIS::InputManager::createInputSystem( pl );

	 _keyboard = static_cast<OIS::Keyboard*>(_inputManager->createInputObject( OIS::OISKeyboard, true ));
	_mouse = static_cast<OIS::Mouse*>(_inputManager->createInputObject( OIS::OISMouse, true ));
	const OIS::MouseState &ms = _mouse->getMouseState();
	ms.width = static_cast<int>(rw->getWidth());
	ms.height = static_cast<int>(rw->getHeight());

	_keyboard->setEventCallback(this);
	_mouse->setEventCallback(this);

	_L = ScriptManager::getInstance().getLuaVM();
	return true;
}

bool OISManager::keyPressed( const OIS::KeyEvent &arg )
{
	if(arg.key == OIS::KC_ESCAPE)
	{
		//quit from currsystem
		Director::getInstance().setExit(true);
		return true;
	}
	
	
	lua_getglobal(_L, "KeyPressed");						/* STACK: func? */
	
	if(lua_isfunction(_L, -1))								
	{
		tolua_pushusertype(_L, (void*)&arg, "KeyEvent");		/* STACK: func arg */

		if(lua_pcall(_L, 1, 0, 0) != 0)
		{
			
			TRACE(lua_tostring(_L, -1));
			assert(0);
		}
	}
	else
	{
		lua_pop(_L, 1);
		assert(0);
	}
// 	KeyboardList::iterator it = _keyboardList.begin();
// 	
// 	bool ret = true;
// 	for(;it != _keyboardList.end(); it++)
// 	{
// 		if(ret)
// 			ret = (*it)->keyPressed(arg);
// 		else
// 			break;
// 	}

	return true;
}


bool OISManager::keyReleased( const OIS::KeyEvent &arg )
{
	lua_getglobal(_L, "KeyReleased");						/* STACK: func? */

	if(lua_isfunction(_L, -1))								
	{
		tolua_pushusertype(_L, (void*)&arg, "KeyEvent");		/* STACK: func arg */

		if(lua_pcall(_L, 1, 0, 0) != 0)
		{

			//printf("error from keypressed info: %s", lua_tostring(_L, -1));

			TRACE(lua_tostring(_L, -1));
			assert(0);
		}
	}
	else
	{
		lua_pop(_L, 1);
		assert(0);
	}


// 	KeyboardList::iterator it = _keyboardList.begin();
// 
// 	bool ret = true;
// 	for(;it != _keyboardList.end(); it++)
// 	{
// 		if(ret)
// 			ret = (*it)->keyReleased(arg);
// 		else
// 			break;
// 	}

	return true;
}


bool OISManager::mouseMoved( const OIS::MouseEvent &arg )
{

	lua_getglobal(_L, "MouseMoved");						/* STACK: func? */

	if(lua_isfunction(_L, -1))								
	{
		tolua_pushusertype(_L, (void*)&arg, "MouseEvent");		/* STACK: func arg */

		if(lua_pcall(_L, 1, 0, 0) != 0)
		{

			//printf("error from keypressed info: %s", lua_tostring(_L, -1));

			TRACE(lua_tostring(_L, -1));
			assert(0);
		}
	}
	else
	{
		lua_pop(_L, 1);
		assert(0);
	}
// 	MouseList::iterator it = _mouseList.begin();
// 
// 	bool ret = true;
// 	for(;it != _mouseList.end(); it++)
// 	{
// 		if(ret)
// 			ret = (*it)->mouseMoved(arg);
// 		else
// 			break;
// 	}

	return true;
}



bool OISManager::mousePressed( const OIS::MouseEvent &arg, OIS::MouseButtonID id )
{
	lua_getglobal(_L, "MousePressed");						/* STACK: func? */

	if(lua_isfunction(_L, -1))								
	{
		tolua_pushusertype(_L, (void*)&arg, "MouseEvent");		/* STACK: func arg */
		tolua_pushnumber(_L, id);								/* STACK: func arg id */
		if(lua_pcall(_L, 2, 0, 0) != 0)							
		{

			//printf("error from keypressed info: %s", lua_tostring(_L, -1));

			TRACE(lua_tostring(_L, -1));
			assert(0);
		}
	}
	else
	{
		lua_pop(_L, 1);
		assert(0);
	}

// 	MouseList::iterator it = _mouseList.begin();
// 
// 	bool ret = true;
// 	for(;it != _mouseList.end(); it++)
// 	{
// 		if(ret)
// 			ret = (*it)->mousePressed(arg, id);
// 		else
// 			break;
// 	}

	return true;
}


bool OISManager::mouseReleased( const OIS::MouseEvent &arg, OIS::MouseButtonID id )
{
	lua_getglobal(_L, "MouseReleased");						/* STACK: func? */

	if(lua_isfunction(_L, -1))								
	{
		tolua_pushusertype(_L, (void*)&arg, "MouseEvent");		/* STACK: func arg */
		tolua_pushnumber(_L, id);								/* STACK: func arg id */
		if(lua_pcall(_L, 2, 0, 0) != 0)
		{

			//printf("error from keypressed info: %s", lua_tostring(_L, -1));

			TRACE(lua_tostring(_L, -1));
			assert(0);
		}
	}
	else
	{
		lua_pop(_L, 1);
		assert(0);
	}



// 	MouseList::iterator it = _mouseList.begin();
// 
// 	bool ret = true;
// 	for(;it != _mouseList.end(); it++)
// 	{
// 		if(ret)
// 			ret = (*it)->mouseReleased(arg, id);
// 		else
// 			break;
// 	}

return true;
}

bool OISManager::update()
{
	_mouse->capture();
	_keyboard->capture();
	return true;
}

void OISManager::shutdown()
{
	_inputManager->destroyInputObject( _mouse );
	_inputManager->destroyInputObject( _keyboard );
	OIS::InputManager::destroyInputSystem(_inputManager);
	_inputManager = NULL;//y::TDiJoyConnecter& Orz::Joy::TDiJoyConnecter::getSingleton(): Assertion `_singleton' failed.

	_mouse = NULL;
	_keyboard = NULL;
}

void OISManager::addKeyboardListener(OIS::KeyListener* keyboard)
{
	_keyboardList.push_back(keyboard);
}

void OISManager::releaseKeyboard(OIS::KeyListener* keyboard)
{
	_keyboardList.erase(std::remove(_keyboardList.begin(), _keyboardList.end(), keyboard), _keyboardList.end());
}

void OISManager::addMouseListener(OIS::MouseListener* listener)
{
	_mouseList.push_back(listener);
}

void OISManager::releaseMouseListener(OIS::MouseListener* listener)
{
	_mouseList.erase(std::remove(_mouseList.begin(), _mouseList.end(), listener), _mouseList.end());
}