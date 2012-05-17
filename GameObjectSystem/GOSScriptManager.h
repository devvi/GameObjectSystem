#ifndef __GAME_OBJECT_SYSTEM_SCRIPT_MANAGER_H__
#define __GAME_OBJECT_SYSTEM_SCRIPT_MANAGER_H__
#include "GOSInc.h"
#include <assert.h>
extern "C"{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

#define DAISY_GOS_VTBL "daisy_gos_vtbl"
#define DAISY_OLM "daisy_olm"
#define SCRIPT_DEBUG 1; //full gc for lua vm



void object_remove_vtable(lua_State*L, void* object);

void daisy_object_call_lua(lua_State *L, void* object, const char* function_name, int arg_count, ...);

int daisy_object_remove_vtable(lua_State *L);

void push_object_vtable(lua_State *L, void* object);

int daisy_object_set_lua_function(lua_State *L);

void object_retain(lua_State *L, void *object, const char* object_typename);

void object_release(lua_State *L, void *object);

void appendlib(lua_State *L, const char* libname, const luaL_Reg *l);   



int tolua_OIS_open(lua_State* tolua_S);
int tolua_Ogre_open (lua_State* tolua_S);



#define BEGIN_CHECK_STACK()\
	int __stack_top = lua_gettop(L);

#define END_CHECK_STACK()\
	if (__stack_top != lua_gettop(L))\
{\
	fprintf(stderr, "Previous top: %d, current top: %d\n", __stack_top, lua_gettop(L));\
	assert(__stack_top == lua_gettop(L));\
}

namespace DAISY{

	class ScriptManager:public Singleton<ScriptManager>
	{
	public:
		ScriptManager();
		~ScriptManager();
		bool init();
		bool update();
		void shutdown();
		lua_State* getLuaVM();
		static lua_State* L;
	private:
		void openManuallyLib();
	};

}

#endif