#include "GameObject.h"
#include "GOSScriptManager.h"
#include "tolua++.h"
using namespace  DAISY;
GameComponent::GameComponent(TYPE_ID gc_type, GameObject* game_object):
_gc_type(gc_type),
_user_type(INVALID),
_game_object(game_object)
{}
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
void GameComponent::setUserType(TYPE_ID type)
{
	_user_type = type;
}
TYPE_ID GameComponent::getUserType()
{
	return _user_type;
}
TYPE_ID GameComponent::getType()
{
	return _gc_type;
}

void GameComponent::detachFromObject()
{
	if(_game_object)
	{
		_game_object->removeGC(getType());
	}
}
void GameComponent::onAttachObject(){}
void GameComponent::onUpdate(float interval){}
void GameComponent::onDetachObject(){}

GameObject::GameObject(const std::string name):
_name(name),
_L(ScriptManager::getInstance().getLuaVM())
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
		{
			if( (*it)->getType() == USER )
				break;
			else
				return;
		}
			
	}
	if( gameComponent->getGameObject() == NULL)
		gameComponent->setGameObejct(this);
	
	gameComponent->onAttachObject();
	
	_gameComponentList.push_back(gameComponent);
}

GameComponent* GameObject::getGC(TYPE_ID gc_type)
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();++it)
	{
		if((*it)->getType() == gc_type)
			return *it;
	}
	return NULL;
}
GameComponent* GameObject::getUserGC(TYPE_ID user_type)
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();++it)
	{
		if((*it)->getType() == USER)
		{
			if( (*it)->getUserType() == user_type )
				return *it;
		}
			
	}
	return NULL;
}

bool GameObject::hasGC(TYPE_ID gc_type)
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();++it)
	{
		if((*it)->getType() == gc_type)
			return true;
	}
	return false;
}
bool GameObject::hasUserGC(TYPE_ID user_type)
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();++it)
	{
		if((*it)->getType() == USER)
			if( (*it)->getUserType() == user_type)
				return true;
	}
	return false;
}
void GameObject::removeGC(TYPE_ID gc_type)
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
bool GameObject::update()
{
	GameComponentList::const_iterator it = _gameComponentList.begin();
	for(;it!= _gameComponentList.end();++it)
	{
		GameComponent* gc = (*it);
		if(gc->getType() == USER)
			daisy_object_call_lua(_L, (void*)gc, "onUpdate", 2, (void*)gc, "GameComponent");
	}

	return true;
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

		lua_State* L = ScriptManager::getInstance().getLuaVM();
		object_retain(L, go, "GameObject");
		
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
			lua_State* L = ScriptManager::getInstance().getLuaVM();
			object_release(L, (void *)it->second);

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
			lua_State* L = ScriptManager::getInstance().getLuaVM();
			object_release(L, (void *)it->second);

			delete (it->second);
			_gameObjectMap.erase(it);
		}
	}
}

bool GameObjectManager::update()
{
	GameObjectMap::iterator it = _gameObjectMap.begin();
	for(;it!= _gameObjectMap.end();it++)
	{
		GameObject* go = it->second;
		go->update();
	}
	return true;
}
void GameObjectManager::shutdown()
{
	GameObjectMap::iterator it = _gameObjectMap.begin();
	for(;it!= _gameObjectMap.end();)
	{
		it->second->removeAllGC();

		lua_State* L = ScriptManager::getInstance().getLuaVM();
		object_release(L, (void *)it->second);

		delete it->second;
		it = _gameObjectMap.erase(it);
	}
}
GameComponentManager::GameComponentManager(){}
GameComponentManager::~GameComponentManager(){}

GameComponent* GameComponentManager::createGameComponent(TYPE_ID gc_type,TYPE_ID user_type, GameObject* gameObject)
{
	GameComponent* gc = NULL;
	if(gc_type == USER)
	{
		if(user_type != INVALID)
		{
			UserRegList::iterator it = std::find(_userRegList.begin(), _userRegList.end(), user_type);
			if(it != _userRegList.end())
			{
				gc = _gameComponentFactoryMap[gc_type]->createComponent();
				if (gameObject)
					gameObject->addGC(gc);
				gc->setUserType(user_type);
				
			}
			else
			{
				// haven't registered this user type
				
			}
		}
	}
	else
	{
		gc = _gameComponentFactoryMap[gc_type]->createComponent();
		if (gameObject)
			gameObject->addGC(gc);
	}
	lua_State* L = ScriptManager::getInstance().getLuaVM();
	object_retain(L, gc, "GameComponent");

	return gc;
}

void GameComponentManager::releaseGameComponent(GameComponent* gameComponent)
{
	lua_State* L = ScriptManager::getInstance().getLuaVM();
	object_release(L, (void *)gameComponent);

	_gameComponentFactoryMap[gameComponent->getType()]->releaseGameComponent(gameComponent);
}

void GameComponentManager::setFactory(TYPE_ID type, GameComponentFactory* factory)
{
	_gameComponentFactoryMap.insert(std::make_pair(type, factory));
}

bool GameComponentManager::hasFactory(TYPE_ID type)
{
	GameComponentFactoyMap::const_iterator it = _gameComponentFactoryMap.find(type);
	if(it != _gameComponentFactoryMap.end())
		return true;
	else
		return false;
}

void GameComponentManager::registerUserComponent(TYPE_ID type, std::string& typeName)
{
	UserRegList::iterator it = std::find(_userRegList.begin(), _userRegList.end(), type);
	if ( it!= _userRegList.end())
	{
		//duplicated !!!
	}
	else
	{
		_userRegList.push_back(type);
	}
}








GameComponentFactory::GameComponentFactory(){}
GameComponentFactory::~GameComponentFactory(){}
GameComponent* GameComponentFactory::createComponent(){return NULL;}
void GameComponentFactory::releaseGameComponent(GameComponent* gc){}

template<> GameObjectManager* Singleton<GameObjectManager>::_singleton = NULL;
template<> GameComponentManager* Singleton<GameComponentManager>::_singleton = NULL;