#ifndef __GAME_OBJECT_SYSTEM_CONTROLLER_OIS_MANAGER_H__
#define __GAME_OBJECT_SYSTEM_CONTROLLER_OIS_MANAGER_H__
#include <OIS/OIS.h>
#include "gameObject.h"
#include "GOSDecl.h"

namespace DAISY{
	typedef std::list<OIS::MouseListener*> MouseList;
	typedef std::list<OIS::KeyListener*> KeyboardList;
	class OISManager:public OIS::MouseListener, OIS::KeyListener, Singleton<OISManager>
	{
	public:
		OISManager();
		~OISManager();
		bool init();
		bool update();
		void shutdown();
		void addMouseListener(OIS::MouseListener* listener);
		void releaseMouseListener(OIS::MouseListener* listener);
		void addKeyboardListener(OIS::KeyListener* keyboard);
		void releaseKeyboard(OIS::KeyListener* keyboard);

		// OIS::KeyListener
		virtual bool keyPressed( const OIS::KeyEvent &arg );
		virtual bool keyReleased( const OIS::KeyEvent &arg );
		// OIS::MouseListener
		virtual bool mouseMoved( const OIS::MouseEvent &arg );
		virtual bool mousePressed( const OIS::MouseEvent &arg, OIS::MouseButtonID id );
		virtual bool mouseReleased( const OIS::MouseEvent &arg, OIS::MouseButtonID id );
	private:
		MouseList _mouseList;
		KeyboardList _keyboardList;
		OIS::InputManager*  _inputManager;
		OIS::Mouse* _mouse;
		OIS::Keyboard* _keyboard;
	};
}

#endif