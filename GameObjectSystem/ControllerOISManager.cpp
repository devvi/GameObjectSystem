#include "ControllerOISManager.h"
#include "ViewOgreManager.h"
#include "Director.h"
using namespace DAISY;
template<> OISManager* Singleton<OISManager>::_singleton = NULL;

OISManager::OISManager()
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
	
	KeyboardList::iterator it = _keyboardList.begin();
	
	bool ret = true;
	for(;it != _keyboardList.end(); it++)
	{
		if(ret)
			ret = (*it)->keyPressed(arg);
		else
			break;
	}

	return true;
}


bool OISManager::keyReleased( const OIS::KeyEvent &arg )
{
	KeyboardList::iterator it = _keyboardList.begin();

	bool ret = true;
	for(;it != _keyboardList.end(); it++)
	{
		if(ret)
			ret = (*it)->keyReleased(arg);
		else
			break;
	}

	return true;
}


bool OISManager::mouseMoved( const OIS::MouseEvent &arg )
{
	MouseList::iterator it = _mouseList.begin();

	bool ret = true;
	for(;it != _mouseList.end(); it++)
	{
		if(ret)
			ret = (*it)->mouseMoved(arg);
		else
			break;
	}

	return true;
}



bool OISManager::mousePressed( const OIS::MouseEvent &arg, OIS::MouseButtonID id )
{
	MouseList::iterator it = _mouseList.begin();

	bool ret = true;
	for(;it != _mouseList.end(); it++)
	{
		if(ret)
			ret = (*it)->mousePressed(arg, id);
		else
			break;
	}

	return true;
}


bool OISManager::mouseReleased( const OIS::MouseEvent &arg, OIS::MouseButtonID id )
{
	MouseList::iterator it = _mouseList.begin();

bool ret = true;
for(;it != _mouseList.end(); it++)
{
	if(ret)
		ret = (*it)->mouseReleased(arg, id);
	else
		break;
}

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