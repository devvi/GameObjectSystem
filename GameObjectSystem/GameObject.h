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
	GameComponent(GC_TYPE gc_type = INVALID, GameObject* game_object = NULL);
	virtual ~GameComponent();

public:
	virtual void onUpdate(float interval);
	virtual void onAttachObject();
	virtual void onDetachObject();
	GC_TYPE getType();
	void setGameObejct(GameObject* go);
	GameObject* getGameObject();

protected:
	GC_TYPE _gc_type;
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
	GameComponent* getCC(GC_TYPE gc_type);
	void removeGC(GC_TYPE gc_type);
	bool hasGC(GC_TYPE gc_type);
	void removeAllGC();
private:
	GameComponentList _gameComponentList;
	std::string _name;
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
private:
	GameObjectMap _gameObjectMap;	
};

class GameComponentManager: public Singleton<GameComponentManager>
{
public:
	GameComponentManager();
	~GameComponentManager();
	GameComponent* createGameComponent(GC_TYPE gc_type,GameObject* gameObject = NULL);
	void releaseGameComponent(GameComponent* gameComponent);
	void setFactory(GC_TYPE type, GameComponentFactory* factory);
	bool hasFactory(GC_TYPE type);
	//void shutdown();
private:
	GameComponentMap _gameComponentMap;
	GameComponentFactoyMap _gameComponentFactoryMap;
};
}
#endif