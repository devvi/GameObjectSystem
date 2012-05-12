#ifndef __GAME_OBJECT_SYSTEM_GAME_DECL_H__
#define __GAME_OBJECT_SYSTEM_GAME_DECL_H__
#include "GOSInc.h"


struct lua_State;
namespace DAISY{
class GameComponent;
class GameObject;
class GameObjectManager;
class GameComponentFactory;
class GameComponentManager;
class OISManager;
class OgreManager;
class ScriptManager;

enum GC_TYPE
{
	INVALID = 1,
	OGRENODE,
	FIXTURE,
	BODY,
	EVENTRECIEVER,
	RENDER_CAM,
	RENDER_ENTITY
};
typedef std::list<GameComponent*> GameComponentList;
typedef std::map<const std::string, GameComponent*> GameComponentMap;
typedef std::list<GameObject*> GameObjectList;
typedef std::map<const std::string, GameObject*> GameObjectMap;
typedef std::map<GC_TYPE, GameComponentFactory*> GameComponentFactoyMap;
}
#endif