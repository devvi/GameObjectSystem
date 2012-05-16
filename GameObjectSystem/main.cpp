#include "GameObjectSystem.h"
#include <windows.h>


using namespace DAISY;
static NodeComponentFactory* nodeFactory = NULL;
static OgreEntityComponentFactory* entityFactory = NULL;

void createSimpleSceneTest()
{
	nodeFactory = new NodeComponentFactory();
	entityFactory = new OgreEntityComponentFactory();
	
	GameComponentManager::getInstance().setFactory(OGRENODE, nodeFactory);
	GameComponentManager::getInstance().setFactory(RENDER_ENTITY, entityFactory);

	GameObject* robotGo = GameObjectManager::getInstance().createGameObject("robot");
	GCNode* node = (GCNode*)GameComponentManager::getInstance().createGameComponent(OGRENODE);
	node->translate(Ogre::Vector3(Ogre::Vector3(20, 20, 20)));
	robotGo->addGC(node);

	GCEntity* robotEntity  = (GCEntity*)GameComponentManager::getInstance().createGameComponent(RENDER_ENTITY);
	robotEntity->initEntity("robot", "robot.mesh");
	robotEntity->setMaterialName("CelRobot");
	robotGo->addGC(robotEntity);
	

}

void destroySimpleSceneTest()
{
	GameComponent* node =  GameObjectManager::getInstance().getGameObject("test")->getGC(OGRENODE);
	GameComponent* entity =  GameObjectManager::getInstance().getGameObject("test")->getGC(RENDER_ENTITY);
	GameComponentManager::getInstance().releaseGameComponent(node);
	GameComponentManager::getInstance().releaseGameComponent(entity);
	GameObjectManager::getInstance().releaseGameObject("robot");
}

INT WINAPI WinMain( __in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd )

{
	using namespace DAISY;
	
	Director director;
	if(director.init())
	{
		director.run();
	}
	else
		exit(0);

	return 0;
}

