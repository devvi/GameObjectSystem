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
class PhysicsManager;


const int INVALID			= 1;
const int OGRENODE			= 2;
const int PHYBODY			= 3;
const int EVENTRECIEVER     = 4;
const int RENDER_CAM        = 5;
const int RENDER_ENTITY     = 6;
const int USER				= 7;

// internal collision ID
const int COL_TERRAIN		= 5000; 



typedef int TYPE_ID;
typedef std::list<GameComponent*> GameComponentList;
typedef std::map<const std::string, GameComponent*> GameComponentMap;
typedef std::list<GameObject*> GameObjectList;
typedef std::map<const std::string, GameObject*> GameObjectMap;
typedef std::map<TYPE_ID, GameComponentFactory*> GameComponentFactoyMap;
typedef std::list<TYPE_ID> UserRegList;
//typedef std::map<TYPE_ID, >
}

namespace Ogre
{
	class Vector3;
	class Vector4;
}
#endif