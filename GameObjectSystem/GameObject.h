#include <string>
#include <map>
#include <list>
#include <boost/shared_ptr.hpp>
#ifndef __GAMEOBJECTSYSTEM_GAMEOBJECT__
#define __GAMEOBJECTSYSTEM_GAMEOBJECT__

class GameComponent
{
public:
	enum gc_type  {
		moveble = 0,
		renderable,
		timer,
		input_receiver,
		rigidbody,
		collision
	}; 
	GameComponent();
	~GameComponent();
	void onUpdate();
	void onAttatchToObject();
	void onLeaveFromObject();
private:
	gc_type _componentType;
	std::string _componentName;
};
typedef boost::shared_ptr<GameComponent> GameComponentPtr;
class GameObject
{
public:
	GameObject();
	~GameObject();
	void addGC(GameComponentPtr gcptr);
	GameComponentPtr getCC(const std::string& gc_name);
	bool hasGC(const std::string& gc_name);
private:
	std::list<GameComponentPtr> _components;
};
#endif