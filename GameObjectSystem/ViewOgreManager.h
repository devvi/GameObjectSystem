#ifndef __GAME_OBJECT_SYSTEM_VIEW_OGER_MANAGER_H__
#define __GAME_OBJECT_SYSTEM_VIEW_OGER_MANAGER_H__
#include <OGRE/Ogre.h>
#include "GOSDecl.h"
namespace DAISY {

	class  OgreManager: public Singleton<OgreManager>
	{
	public:
		OgreManager();
		~OgreManager();
		Ogre::SceneManager * getSceneManager();
		Ogre::RenderWindow * getRenderWindow();
		void createSecondSceneManager(Ogre::SceneTypeMask type);
		void swapSceneManager();
		bool update(float interval);
		bool init();
		void shutdown();
	private:
		bool configure();
		void setupResources();
		void clearResources();

		void createSceneManager();

		void createCamera();
	
		void createViewports();

		void loadResources();

		void createSimpleScene();
		void _swapSceneManager(Ogre::SceneManager *&first, Ogre::SceneManager *&second);

	private:
		Ogre::Root* _root;
		Ogre::RenderWindow* _window;
		Ogre::SceneManager* _sceneManager;
		Ogre::SceneManager* _secondSceneManager;
		Ogre::Camera* _camera;
		Ogre::Viewport* _viewport;
		std::string _resourcesCfg;
		std::string _pluginsCfg;
		bool _init;
		bool _exit;


	};
}
#endif
