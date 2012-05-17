#ifndef __GAME_OBJECT_SYSTEM_GC_NODE_H__
#define __GAME_OBJECT_SYSTEM_GC_NODE_H__


#include "GameObject.h"
#include <OGRE/Ogre.h>
namespace DAISY{

class GCNode:public GameComponent
{
public:	
	GCNode(GameObject* game_object = NULL);
	GCNode(GameObject* game_object, GCNode* parent, Ogre::Vector3 &pos, Ogre::Quaternion &orient);
	~GCNode();
	void onUpdate(float interval);
	void onAttachObject();
	void onDetachObject();
	Ogre::SceneNode* getOgreNode();
	void attachOgreObject(Ogre::MovableObject* object);
	void detachOgreObject(Ogre::MovableObject* object);
	void attachNode(GCNode* child);
	void detachNode(GCNode* child);
	void detachFromParentNode();
	void translate( Ogre::Vector3 &pos);
	void roll(float value);
	void pitch(float value);
	void yaw(float value);
	void setPosition(Ogre::Vector3 &pos);
	void setOrientation(Ogre::Quaternion& orient);
	void setVisible(bool isVisible);
private:
	Ogre::SceneNode* _node;
	Ogre::SceneManager* _sceneManager;
};

class GCCamera:public GameComponent
{
public:	
	GCCamera(GameObject* game_object = NULL);
	~GCCamera();
	void initCamera(const std::string& cameraName);
	void onUpdate(float interval);
	void onAttachObject();
	void onDetachObject();
	Ogre::Camera* getOgreCamera();
private:
	Ogre::Camera* _camera;
	Ogre::SceneManager* _sceneManager;
};

class GCEntity: public GameComponent
{
public:
	GCEntity(GameObject* game_object = NULL);
	GCEntity(GameObject* game_object,const std::string& entityName,  const std::string& modelName);
	~GCEntity();
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