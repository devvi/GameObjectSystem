#include "GOSScriptManager.h"
#include <iostream>
using namespace  DAISY;

ScriptManager::ScriptManager(){}
ScriptManager::~ScriptManager(){}

static const struct luaL_Reg mylib[] = 
{
	{"am_set_music_update", /*am_set_music_update*/},

	{NULL, NULL}
};


bool ScriptManager::init()
{
	L =  lua_open();
	luaL_openlibs(L);
	tolua_OIS_open(L);
	if(luaL_dofile(L, "first.lua"))
	{
		std::cout<<"loadfile error[]: "<<lua_tostring(L, -1)<<std::endl;
	}
	return true;
}

bool ScriptManager::update()
{
	return true;
}

void ScriptManager::shutdown()
{
	lua_close(L);
}

lua_State* ScriptManager::getLuaVM()
{
	return L;
}

void ScriptManager::appendlib(lua_State *L, const char* libname, const luaL_Reg *l)
{
	if (libname) {

		/* check whether lib already exists */
		lua_getglobal(L, libname);									/* STACK: table? */
		if ( !lua_istable(L, -1) )
		{
			lua_pop(L, 1);  /* remove previous result */			/* STACK: */
			/* create global variable(does not care whether it exists or not) */
			lua_newtable(L);										/* STACK: table */
			lua_pushvalue(L, -1);									/* STACK: table table */
			/* GLOBAL[libname] = new table */
			lua_setfield(L, LUA_GLOBALSINDEX, libname);  			/* STACK: table */
		}
	}
	else {
		lua_pushvalue(L, LUA_GLOBALSINDEX);							/* STACK: table(g) */
	}

	/* set the function to table */
	for (; l->name; l++) {
		lua_pushcfunction(L, l->func);								/* STACK: table cfunc*/
		lua_setfield(L, -2, l->name);								/* STACK: table */
	}

	lua_pop(L, 1);
}



template <> ScriptManager* Singleton<ScriptManager>::_singleton = NULL;

lua_State* ScriptManager::L = NULL;