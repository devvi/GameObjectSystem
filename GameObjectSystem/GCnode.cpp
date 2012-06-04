/*
-----------------------------------------------------------------------------
This soure file is part of GameObjectSystem.
Copyright (c) 2012 Devvi
-----------------------------------------------------------------------------
*/
#include "GCnode.h"
#include "ViewOgreManager.h"
#include "GOSDecl.h"

using namespace DAISY;

GCNode::GCNode(GameObject* game_object):
GameComponent(OGRENODE, game_object),
_sceneManager(OgreManager::getInstance().getSceneManager())
{
	_node = _sceneManager->getRootSceneNode()->createChildSceneNode();
	
	if (game_object)

	{
		game_object->addGC(this);
	}
	
}
GCNode::GCNode(GameObject* game_object, GCNode* parent, Ogre::Vector3 &pos, Ogre::Quaternion &orient)
{
	_node  = parent->getOgreNode()->createChildSceneNode(pos, orient);
	if (game_object)
	{
		game_object->addGC(this);
	}
}
GCNode::~GCNode()
{
	if(_sceneManager)
	{
		_sceneManager->destroySceneNode(_node);
	}
}

void GCNode::attachNode(GCNode* child)
{
	assert(child);
	
	// check if this child node has a parent,if it does,then detach from its parent
	
	Ogre::SceneNode* childOgreNode = child->getOgreNode();
	
	if(childOgreNode->getParent())
	{
		childOgreNode->getParent()->removeChild(childOgreNode);
	}

	
	_node->addChild(childOgreNode);

}
void GCNode::attachOgreObject( Ogre::MovableObject* object )
{
	_node->attachObject(object);
}

void GCNode::detachOgreObject(Ogre::MovableObject* object)
{
	_node->detachObject(object);
}
void GCNode::detachFromParentNode()
{
	Ogre::SceneNode* parent = _node->getParentSceneNode();
	if( _sceneManager->hasSceneNode(parent->getName()) )
	{
		parent->removeChild(_node);
	}
}

void GCNode::detachNode(GCNode* child)
{
	assert(child);

	_node->removeChild(child->getOgreNode());
	
}

void GCNode::yaw(float value)
{
	Ogre::Degree d(value);
	Ogre::Radian r(d);
	_node->yaw(r);
}

void GCNode::roll(float value)
{
	Ogre::Degree d(value);
	Ogre::Radian r(d);
	_node->roll(r);
}

void GCNode::pitch(float value)
{
	Ogre::Degree d(value);
	Ogre::Radian r(d);
	_node->pitch(r);
}
void GCNode::translate(Ogre::Vector3 &pos)
{
	_node->translate(pos);
}

void GCNode::setPosition(Ogre::Vector3 &pos)
{
	_node->setPosition(pos);
}
void GCNode::setWorldPosition(Ogre::Vector3 &pos)
{
	_node->_setDerivedPosition(pos);
}
Ogre::Vector3 GCNode::getPosition()
{
	return _node->getPosition();
}
Ogre::Vector3 GCNode::getWorldPosition()
{
	return _node->_getDerivedPosition();
}
void GCNode::setOrientation(Ogre::Quaternion& orient)
{
	_node->setOrientation(orient);
}

void GCNode::onUpdate(float interval)
{
	//placeholder here
	//when a separated renrdersystem is established,this function is uesed to update render or transform component
}

// call this function when attach to a gameobject
void GCNode::onAttachObject()
{

}

void GCNode::setVisible(bool isVisible)
{
	_node->setVisible(isVisible);
}
// call this function when detach from a gameobject
void GCNode::onDetachObject()
{
}

Ogre::SceneNode* GCNode::getOgreNode()
{
	return _node;
}

GCEntity::GCEntity(GameObject* game_object):
GameComponent(RENDER_ENTITY, game_object),
_entity(NULL), _sceneManager( OgreManager::getInstance().getSceneManager())
{
	if( game_object )
		game_object->addGC(this);
}
GCEntity::GCEntity(GameObject* game_object,const std::string& entityName, const std::string& modelName):

_sceneManager( OgreManager::getInstance().getSceneManager()),
_entity(_sceneManager->createEntity(entityName, modelName))

{
	if( game_object )
		game_object->addGC(this);
}
GCEntity::~GCEntity()
{
	if(_entity)
	{
		_sceneManager->destroyEntity(_entity);
	}
}
void GCEntity::initEntity(const std::string& entityName, const std::string& modelName)
{
	if (!_entity)
	{
		_entity = _sceneManager->createEntity(entityName, modelName);
	}
}

void GCEntity::onUpdate(float interval)
{

}
void GCEntity::onAttachObject()
{
	if(_game_object->hasGC(OGRENODE))
	{
		GCNode* node = (GCNode*)_game_object->getGC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->attachObject(_entity);
	}
}
void GCEntity::onDetachObject()
{
	if(_game_object->hasGC(OGRENODE))
	{
		GCNode* node = (GCNode*)_game_object->getGC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->detachObject(_entity);
	}
}

Ogre::Entity* GCEntity::getOgreEntity()
{
	return _entity;
}
std::string GCEntity::getModelName()
{
	return _modelName;
}
std::string GCEntity::getEntityName()
{
	return _entityName;
}
void GCEntity::setMaterialName(const std::string& materialName)
{
	if(_entity)
		_entity->setMaterialName(materialName);
}

bool GCEntity::attachToOgreNode()
{
	if(_game_object->hasGC(OGRENODE))
	{
		GCNode* node = (GCNode*)_game_object->getGC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->attachObject(_entity);
		return true;
	}
	else
		return false;
}

bool GCEntity::detachFromOgreNode()
{
	if(_game_object->hasGC(OGRENODE))
	{
		GCNode* node = (GCNode*)_game_object->getGC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->detachObject(_entity);
		return true;
	}
	else
		return false;
}

GCCamera::GCCamera(GameObject* game_object ):
GameComponent(RENDER_CAM, game_object),
_sceneManager(OgreManager::getInstance().getSceneManager()),
_camera(NULL)
{
	if(game_object)
		game_object->addGC(this);
}

GCCamera::~GCCamera()
{
	if (_camera)
		_sceneManager->destroyCamera(_camera);
}

void GCCamera::initCamera(const std::string& cameraName)
{
	if(!_camera)
		_camera = _sceneManager->createCamera(cameraName);
}
void GCCamera::onUpdate(float interval)
{
	
}
void GCCamera::onAttachObject()
{
	if(_game_object->hasGC(OGRENODE))
	{
		GCNode* node = (GCNode*)_game_object->getGC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->attachObject(_camera);
	}
}
void GCCamera::onDetachObject()
{
	if(_game_object->hasGC(OGRENODE))
	{
		GCNode* node = (GCNode*)_game_object->getGC(OGRENODE);
		Ogre::SceneNode* sceneNode = node->getOgreNode();
		sceneNode ->detachObject(_camera);
	}

}
Ogre::Camera* GCCamera::getOgreCamera()
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
	return new GCCamera();
}

void CameraComponentFactory::releaseGameComponent(GameComponent* gc)
{
	if(gc)
	{
		gc = (GCCamera*)gc;
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
	return new GCEntity();
}

void OgreEntityComponentFactory::releaseGameComponent(GameComponent* gc)
{
	if(gc)
	{
		gc = (GCEntity*)gc;
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
	return new GCNode();
}

void NodeComponentFactory::releaseGameComponent(GameComponent* gc)
{
	if (gc)
	{
		gc = (GCNode*)gc;
		delete gc;
	}
}



void DAISY::GCNode::scale( float x, float y, float z)
{
	_node->setScale(x, y, z);
}
