#ifndef __GAME_OBJECT_SYSTEM_GAME_OBJECT_H__
#define __GAME_OBJECT_SYSTEM_GAME_OBJECT_H__
#include "GOSDecl.h"
namespace DAISY{
/************************************************************************/
/*                  Base class for Game Component                       */
/************************************************************************/
class GameComponent
{
public:
	GameComponent(TYPE_ID gc_type = INVALID,  GameObject* game_object = NULL);
	virtual ~GameComponent();


	virtual void onUpdate(float interval);
	virtual void onAttachObject();
	virtual void onDetachObject();
	TYPE_ID getType();
	void setGameObejct(GameObject* go);
	void detachFromObject();
	void setUserType(TYPE_ID type);
	TYPE_ID getUserType();
	GameObject* getGameObject();
	
protected:
	TYPE_ID _gc_type;
	TYPE_ID _user_type;
	GameObject* _game_object;
};

class GameComponentFactory
{
public:
	GameComponentFactory();
	virtual ~GameComponentFactory();
	virtual GameComponent* createComponent();
	virtual void releaseGameComponent(GameComponent* gc);
};

class GameObject
{
public:
	GameObject(const std::string name = "default");
	virtual ~GameObject();
	void addGC(GameComponent* gameComponent);
	GameComponent* getCC(TYPE_ID gc_type);
	GameComponent* getUserGC(TYPE_ID user_type);
	void removeGC(TYPE_ID gc_type);
	bool hasGC(TYPE_ID gc_type);
	bool hasUserGC(TYPE_ID user_type);
	void removeAllGC();
	bool update();
private:
	std::string _name;
	lua_State* _L;
	GameComponentList _gameComponentList;
};

class GameObjectManager: public Singleton<GameObjectManager>
{
public:
	GameObjectManager();
	~GameObjectManager();
	GameObject* createGameObject(const std::string& name = "default");
	GameObject* getGameObject(const std::string& name);
	void releaseGameObject(const std::string& name);
	void releaseGameObject(GameObject* gameObject);
	void shutdown();
	bool update();
private:
	GameObjectMap _gameObjectMap;	
};

class GameComponentManager: public Singleton<GameComponentManager>
{
public:
	GameComponentManager();
	~GameComponentManager();
	GameComponent* createGameComponent(TYPE_ID gc_type, TYPE_ID user_type = INVALID, GameObject* gameObject = NULL);
	void releaseGameComponent(GameComponent* gameComponent);
	void setFactory(TYPE_ID type, GameComponentFactory* factory);
	bool hasFactory(TYPE_ID type);
	void registerUserComponent(TYPE_ID type, std::string& typeName);
	//void shutdown();
private:
	GameComponentMap _gameComponentMap;
	GameComponentFactoyMap _gameComponentFactoryMap;
	UserRegList _userRegList;
};
}
#endif