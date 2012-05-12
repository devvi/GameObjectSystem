#include "ViewOgreManager.h"
using namespace DAISY;

OgreManager::OgreManager():
_root(NULL),
_window(NULL),
_sceneManager(NULL),
_secondSceneManager(NULL),
_camera(NULL),
_viewport(NULL)
{
#ifdef _DEBUG
	_resourcesCfg = "resources_d.cfg";
	_pluginsCfg = "plugins_d.cfg";
#else
	_resourcesCfg = "resources.cfg";
	_pluginsCfg = "plugins.cfg";
#endif
}
OgreManager::~OgreManager()
{
	
}
Ogre::SceneManager* OgreManager::getSceneManager()
{
	return _sceneManager;
}

Ogre::RenderWindow* OgreManager::getRenderWindow()
{
	return _window;
}

bool OgreManager::update(float interval)
{

	//Pump system event otherwise will lead to some input error
	//see http://www.ogre3d.org/tikiwiki/Using+OIS
	Ogre::WindowEventUtilities::messagePump();

	_root->renderOneFrame(interval);
	return true;
}
void OgreManager::shutdown()
{
	_sceneManager->destroyCamera(_camera);

	if(_sceneManager)
		_root->destroySceneManager(_sceneManager);
	if(_secondSceneManager)
		_root->destroySceneManager(_secondSceneManager);
	delete _root;
}
void OgreManager::createSecondSceneManager(Ogre::SceneTypeMask type)
{
	_secondSceneManager = _root->createSceneManager(type);
};

void OgreManager::swapSceneManager()
{
	_swapSceneManager(_sceneManager, _secondSceneManager);
}

void OgreManager::_swapSceneManager(Ogre::SceneManager *&first, Ogre::SceneManager *&second)
{
	Ogre::SceneManager* temp  = first;
	first = second;
	second = temp;
}
bool OgreManager::configure()
{
	// Show the configuration dialog and initialise the system
	// You can skip this and use root.restoreConfig() to load configuration
	// settings if you were sure there are valid ones saved in ogre.cfg
	if(_root->showConfigDialog())
	{
		// If returned true, user clicked OK so initialise
		_window = _root->initialise(true);

	
		return true;
	}
	else
	{
		return false;
	}
}
void OgreManager::createSceneManager()
{
	// create the sceneManager
	_sceneManager = _root->createSceneManager(Ogre::ST_GENERIC);
}

void OgreManager::createCamera()
{
	// Create the camera
	_camera = _sceneManager->createCamera("DefaultCamera");

	_camera->setPosition(Ogre::Vector3(0,0,80));
	
	_camera->lookAt(Ogre::Vector3(0,0,-300));

	_camera->setNearClipDistance(5);
}

void OgreManager::createViewports()
{
	// Create one viewport, entire window
	_viewport = _window->addViewport(_camera);
	_viewport->setBackgroundColour(Ogre::ColourValue(0,0,0));

	// Alter the camera aspect ratio to match the viewport
	_camera->setAspectRatio(
		Ogre::Real(_viewport->getActualWidth()) / Ogre::Real(_viewport->getActualHeight()));
	_viewport->setBackgroundColour(Ogre::ColourValue::Green);
}

void OgreManager::setupResources()
{
	// Load resource paths from config file
	Ogre::ConfigFile cf;
	cf.load(_resourcesCfg);

	// Go through all sections & settings in the file
	Ogre::ConfigFile::SectionIterator seci = cf.getSectionIterator();

	Ogre::String secName, typeName, archName;
	while (seci.hasMoreElements())
	{
		secName = seci.peekNextKey();
		Ogre::ConfigFile::SettingsMultiMap *settings = seci.getNext();
		Ogre::ConfigFile::SettingsMultiMap::iterator i;
		for (i = settings->begin(); i != settings->end(); ++i)
		{
			typeName = i->first;
			archName = i->second;
			Ogre::ResourceGroupManager::getSingleton().addResourceLocation(
				archName, typeName, secName);
		}
	}
}

void OgreManager::loadResources()
{
	Ogre::ResourceGroupManager::getSingleton().initialiseAllResourceGroups();
}
void OgreManager::clearResources()
{
	
}
void OgreManager::createSimpleScene()
{
	/*
	Ogre::Entity* ogreHead = _sceneManager->createEntity("terrain", "simple_terrain.mesh");
	Ogre::Entity* penguin = _sceneManager->createEntity("penguin", "cube.mesh");
	Ogre::Entity* robot = _sceneManager->createEntity("robot", "robot.mesh");
	penguin->setMaterialName("cube");
	ogreHead->setMaterialName("cg/Hatch");
	robot->setMaterialName("cg/Hatch");
	Ogre::SceneNode* headNode = _sceneManager->getRootSceneNode()->createChildSceneNode();
	Ogre::SceneNode* penguinNode = _sceneManager->getRootSceneNode()->createChildSceneNode(Ogre::Vector3(0, 400, 0));
	Ogre::SceneNode* robotNode = _sceneManager->getRootSceneNode()->createChildSceneNode(Ogre::Vector3(20, 20, 20));
	headNode->attachObject(ogreHead);
	penguinNode->attachObject(penguin);
	robotNode->attachObject(robot);
	// Set ambient light
*/
	//mSceneMgr->setAmbientLight(Ogre::ColourValue::Blue);

	// Create a light
	Ogre::Light* l = _sceneManager->createLight("MainLight");
	l->setType(Ogre::Light::LT_POINT);
	l->setPosition(20,80,50);
}

bool OgreManager::init()
{
	_root = new Ogre::Root(_pluginsCfg);

	setupResources();

	bool carryOn = configure();
	if (!carryOn) return false;

	createSceneManager();
	createCamera();
	createViewports();

	// Set default mipmap level (NB some APIs ignore this)
	Ogre::TextureManager::getSingleton().setDefaultNumMipmaps(5);

	// Create any resource listeners (for loading screens)
	//createResourceListener();
	// Load resources
	loadResources();

	// Create the scene
	createSimpleScene();
	return true;
}

template<> OgreManager* Singleton<OgreManager>::_singleton = NULL;