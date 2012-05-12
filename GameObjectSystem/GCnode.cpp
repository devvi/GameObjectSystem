#include "GCnode.h"
#include "ViewOgreManager.h"
#include "GOSDecl.h"

using namespace DAISY;

Node::Node(GameObject* game_object):
GameComponent(OGRENODE, game_object),
_sceneManager(OgreManager::getInstance().getSceneManager())
{
	_node = _sceneManager->getRootSceneNode()->createChildSceneNode();
	
	if (game_object)

	{
		game_object->addGC(this);
	}
	
}
Node::Node(GameObject* game_object, Node* parent, Ogre::Vector3 &pos, Ogre::Quaternion &orient)
{
	_node  = parent->getOgreNode()->createChildSceneNode(pos, orient);
	if (game_object)
	{
		game_object->addGC(this);
	}
}
Node::~Node()
{
	if(_sceneManager)
	{
		_sceneManager->destroySceneNode(_node);
	}
}
void Node::translate(Ogre::Vector3 &pos)
{
	_node->translate(pos);
}

void Node::setPosition(Ogre::Vector3 &pos)
{
	_node->setPosition(pos);
}

void Node::setOrientation(Ogre::Quaternion& orient)
{
	_node->setOrientation(orient);
}

void Node::onUpdate(float interval)
{
	//placeholder here
	//when a separated renrdersystem is established,this function is uesed to update render or transform component
}

// call this function when attach to a gameobject
void Node::onAttachObject()
{

}

// call this function when detach from a gameobject
void Node::onDetachObject()
{
}

Ogre::SceneNode* Node::getOgreNode()
{
	return _node;
}

OgreEntity::OgreEntity(GameObject* game_object):
GameComponent(RENDER_ENTITY, game_object),
_entity(NULL), _sceneManager( OgreManager::getInstance().getSceneManager())
{
	if( game_object )
		game_object->addGC(this);
}
OgreEntity::OgreEntity(GameObject* game_object,const std::string& entityName, const std::string& modelName):

_sceneManager( OgreManager::getInstance().getSceneManager()),
_entity(_sceneManager->createEntity(entityName, modelName))

{
	if( game_object )
		game_object->addGC(this);
}
OgreEntity::~OgreEntity()
{
	if(_entity)
	{
		_sceneManager->destroyEntity(_entity);
	}
}
void OgreEntity::initEntity(const std::string& entityName, const std::string& modelName)
{
	if (!_entity)
	{
		_entity = _sceneManager->createEntity(entityName, modelName);
	}
}

void OgreEntity::onUpdate(float interval)
{

}
void OgreEntity::onAttachObject()
{
	if(_game_object->hasGC(OGRENODE))
	{
		Node* node = (Node*)_game_object->getCC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->attachObject(_entity);
	}
}
void OgreEntity::onDetachObject()
{
	if(_game_object->hasGC(OGRENODE))
	{
		Node* node = (Node*)_game_object->getCC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->detachObject(_entity);
	}
}

Ogre::Entity* OgreEntity::getOgreEntity()
{
	return _entity;
}
std::string OgreEntity::getModelName()
{
	return _modelName;
}
std::string OgreEntity::getEntityName()
{
	return _entityName;
}
void OgreEntity::setMaterialName(const std::string& materialName)
{
	if(_entity)
		_entity->setMaterialName(materialName);
}

bool OgreEntity::attachToOgreNode()
{
	if(_game_object->hasGC(OGRENODE))
	{
		Node* node = (Node*)_game_object->getCC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->attachObject(_entity);
		return true;
	}
	else
		return false;
}

bool OgreEntity::detachFromOgreNode()
{
	if(_game_object->hasGC(OGRENODE))
	{
		Node* node = (Node*)_game_object->getCC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->detachObject(_entity);
		return true;
	}
	else
		return false;
}

OgreCamera::OgreCamera(GameObject* game_object ):
GameComponent(RENDER_CAM, game_object),
_sceneManager(OgreManager::getInstance().getSceneManager()),
_camera(NULL)
{
	if(game_object)
		game_object->addGC(this);
}

OgreCamera::~OgreCamera()
{
	if (_camera)
		_sceneManager->destroyCamera(_camera);
}

void OgreCamera::initCamera(const std::string& cameraName)
{
	if(!_camera)
		_camera = _sceneManager->createCamera(cameraName);
}
void OgreCamera::onUpdate(float interval)
{
	
}
void OgreCamera::onAttachObject()
{
	if(_game_object->hasGC(OGRENODE))
	{
		Node* node = (Node*)_game_object->getCC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->attachObject(_camera);
	}
}
void OgreCamera::onDetachObject()
{
	if(_game_object->hasGC(OGRENODE))
	{
		Node* node = (Node*)_game_object->getCC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->detachObject(_camera);
	}

}
Ogre::Camera* OgreCamera::getOgreCamera()
{
	if(_camera)
		return _camera;
	else
		return NULL;
}

CameraComponentFactory::CameraComponentFactory(){}
CameraComponentFactory::~CameraComponentFactory(){}
GameComponent* CameraComponentFactory::createComponent()
{
	return new OgreCamera();
}

void CameraComponentFactory::releaseGameComponent(GameComponent* gc)
{
	if(gc)
	{
		gc = (OgreCamera*)gc;
		delete gc;
	}
}

OgreEntityComponentFactory::OgreEntityComponentFactory()
{

}
OgreEntityComponentFactory::~OgreEntityComponentFactory()
{

}

GameComponent* OgreEntityComponentFactory::createComponent()
{
	return new OgreEntity();
}

void OgreEntityComponentFactory::releaseGameComponent(GameComponent* gc)
{
	if(gc)
	{
		gc = (OgreEntity*)gc;
		delete gc;
	}
	
}
NodeComponentFactory::NodeComponentFactory()
{

}
NodeComponentFactory::~NodeComponentFactory()
{

}

GameComponent* NodeComponentFactory::createComponent()
{
	return new Node();
}

void NodeComponentFactory::releaseGameComponent(GameComponent* gc)
{
	if (gc)
	{
		gc = (Node*)gc;
		delete gc;
	}
}
