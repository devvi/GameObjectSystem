#include "GameObject.h"
using namespace  DAISY;
GameComponent::GameComponent(GC_TYPE gc_type, GameObject* game_object):
	_gc_type(gc_type),
	_game_object(game_object){}
GameComponent::~GameComponent(){}
GameObject* GameComponent::getGameObject()
{
	if (_game_object)
		return _game_object;
	else
		return NULL;
}
void GameComponent::setGameObejct(GameObject* go)
{
	assert(go);
	_game_object = go;
}
GC_TYPE GameComponent::getType()
{
	return _gc_type;
}
void GameComponent::onAttachObject(){}
void GameComponent::onUpdate(float interval){}
void GameComponent::onDetachObject(){}

GameObject::GameObject(const std::string name)
:_name(name)
{}
GameObject::~GameObject()
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();)
	{
		if(*it)
		{
			GameComponentManager::getInstance().releaseGameComponent(*it);
			it = _gameComponentList.erase(it);
		}
	}
		
}

void GameObject::addGC(GameComponent* gameComponent)
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();++it)
	{
		if((*it)->getType() == gameComponent->getType())
			return;
	}
	if( gameComponent->getGameObject() == NULL)
		gameComponent->setGameObejct(this);
	
	gameComponent->onAttachObject();
	
	_gameComponentList.push_back(gameComponent);
}

GameComponent* GameObject::getCC(GC_TYPE gc_type)
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();++it)
	{
		if((*it)->getType() == gc_type)
			return *it;
	}
	return NULL;
}

bool GameObject::hasGC(GC_TYPE gc_type)
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();++it)
	{
		if((*it)->getType() == gc_type)
			return true;
	}
	return false;
}

void GameObject::removeGC(GC_TYPE gc_type)
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();++it)
	{
		if((*it)->getType() == gc_type)
		{
			(*it)->onDetachObject();
			_gameComponentList.remove(*it);
			return;
		}
	}
}

void GameObject::removeAllGC()
{
	while(!_gameComponentList.empty())
	{
		GameComponent* gc = _gameComponentList.back();
		GameComponentManager::getInstance().releaseGameComponent(gc);
		_gameComponentList.pop_back();
	}
}


GameObjectManager::GameObjectManager(){}
GameObjectManager::~GameObjectManager(){}

GameObject* GameObjectManager::getGameObject(const std::string& name)
{
	GameObjectMap::iterator it = _gameObjectMap.find(name);
	if(it != _gameObjectMap.end())
		return it->second;
	else
		return NULL;
}

GameObject* GameObjectManager::createGameObject(const std::string& name)
{
	
	GameObjectMap::const_iterator it = _gameObjectMap.find(name);
	if(it == _gameObjectMap.end())
	{
		GameObject* go = new GameObject(name);
		_gameObjectMap.insert(std::make_pair(name, go));
		return go;
	}
	else
		return NULL;
}

void GameObjectManager::releaseGameObject(const std::string& name)
{
	
	GameObjectMap::iterator it = _gameObjectMap.begin();
	for(;it!= _gameObjectMap.end();++it)
	{
		if(it->first == name)
		{
			delete (it->second);
			_gameObjectMap.erase(it);
		}
	}
}

void GameObjectManager::releaseGameObject(GameObject* gameObject)
{
	GameObjectMap::iterator it = _gameObjectMap.begin();
	for(;it!= _gameObjectMap.end();++it)
	{
		if(it->second == gameObject)
		{
			delete (it->second);
			_gameObjectMap.erase(it);
		}
	}
}
void GameObjectManager::shutdown()
{
	GameObjectMap::iterator it = _gameObjectMap.begin();
	for(;it!= _gameObjectMap.end();)
	{
		it->second->removeAllGC();
		delete it->second;
		it = _gameObjectMap.erase(it);
	}
}
GameComponentManager::GameComponentManager(){}
GameComponentManager::~GameComponentManager(){}

GameComponent* GameComponentManager::createGameComponent(GC_TYPE gc_type,GameObject* gameObject)
{
	GameComponent* gc = _gameComponentFactoryMap[gc_type]->createComponent();
	if (gameObject)
		gameObject->addGC(gc);
	return gc;
}

void GameComponentManager::releaseGameComponent(GameComponent* gameComponent)
{
	_gameComponentFactoryMap[gameComponent->getType()]->releaseGameComponent(gameComponent);
}

void GameComponentManager::setFactory(GC_TYPE type, GameComponentFactory* factory)
{
	_gameComponentFactoryMap.insert(std::make_pair(type, factory));
}

bool GameComponentManager::hasFactory(GC_TYPE type)
{
	GameComponentFactoyMap::const_iterator it = _gameComponentFactoryMap.find(type);
	if(it != _gameComponentFactoryMap.end())
		return true;
	else
		return false;
}

GameComponentFactory::GameComponentFactory(){}
GameComponentFactory::~GameComponentFactory(){}
GameComponent* GameComponentFactory::createComponent(){return NULL;}
void GameComponentFactory::releaseGameComponent(GameComponent* gc){}

template<> GameObjectManager* Singleton<GameObjectManager>::_singleton = NULL;
template<> GameComponentManager* Singleton<GameComponentManager>::_singleton = NULL;