/*
-----------------------------------------------------------------------------
This soure file is part of GameObjectSystem.
Copyright (c) 2012 Devvi
-----------------------------------------------------------------------------
*/

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
	// for script
	public:
		Ogre::Camera* createCamera(std::string& name);
		Ogre::Camera* getCamera(std::string& name);
		void destroyCamera(Ogre::Camera* camera);
		void destroyCamera(std::string& name);
		void setAmbientColor(Ogre::ColourValue& color);
		void setBackGroundColor(Ogre::ColourValue& color);
		void setCurrentCamera(Ogre::Camera* camera);
		Ogre::Light* createLight(Ogre::Light::LightTypes type);
		void destroyLight(Ogre::Light* light);

		void setSkyDome(bool enable, std::string& materialName);
		void setFloor(bool enable, Ogre::Vector3& initPos, int width, int height, bool needCollision, std::string& materialName);
		void createPlaneMesh(int width, int height, std::string& meshName);
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
