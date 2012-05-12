#ifndef __GAME_OBJECT_SYSTEM_GC_NODE_H__
#define __GAME_OBJECT_SYSTEM_GC_NODE_H__


#include "GameObject.h"
#include <OGRE/Ogre.h>
namespace DAISY{

class Node:public GameComponent
{
public:	
	Node(GameObject* game_object = NULL);
	Node(GameObject* game_object, Node* parent, Ogre::Vector3 &pos, Ogre::Quaternion &orient);
	~Node();
	void onUpdate(float interval);
	void onAttachObject();
	void onDetachObject();
	Ogre::SceneNode* getOgreNode();
	void translate( Ogre::Vector3 &pos);
	void setPosition(Ogre::Vector3 &pos);
	void setOrientation(Ogre::Quaternion& orient);
	void setVisible(bool isVisible);
private:
	Ogre::SceneNode* _node;
	Ogre::SceneManager* _sceneManager;
};

class OgreCamera:public GameComponent
{
public:	
	OgreCamera(GameObject* game_object = NULL);
	~OgreCamera();
	void initCamera(const std::string& cameraName);
	void onUpdate(float interval);
	void onAttachObject();
	void onDetachObject();
	Ogre::Camera* getOgreCamera();
private:
	Ogre::Camera* _camera;
	Ogre::SceneManager* _sceneManager;
};

class OgreEntity: public GameComponent
{
public:
	OgreEntity(GameObject* game_object = NULL);
	OgreEntity(GameObject* game_object,const std::string& entityName,  const std::string& modelName);
	~OgreEntity();
	void initEntity(const std::string& entityName,  const std::string& modelName);
	void onUpdate(float interval);
	void onAttachObject();
	void onDetachObject();
	bool attachToOgreNode();
	bool detachFromOgreNode();
	Ogre::Entity* getOgreEntity();
	std::string getModelName();
	std::string getEntityName();
	void setMaterialName(const std::string& materialName);
private:
	Ogre::SceneManager* _sceneManager;

	Ogre::Entity* _entity;
	std::string _modelName;
	std::string _entityName;

};

class OgreEntityComponentFactory :public GameComponentFactory
{
public:
	OgreEntityComponentFactory();
	~OgreEntityComponentFactory();

	GameComponent*  createComponent();
	void releaseGameComponent(GameComponent* gc);
private:
	// may be later, we can construct a memery pool for the this factory to restore components
};

class CameraComponentFactory :public GameComponentFactory
{
public:
	CameraComponentFactory();
	~CameraComponentFactory();

	GameComponent*  createComponent();
	void releaseGameComponent(GameComponent* gc);
private:
	// may be later, we can construct a memery pool for the this factory to restore components
};
class NodeComponentFactory :public GameComponentFactory
{
public:
	NodeComponentFactory();
	~NodeComponentFactory();

	GameComponent*  createComponent();
	void releaseGameComponent(GameComponent* gc);
private:
	// may be later, we can construct a memery pool for the this factory to restore components
};
}
#endif