/*
** Lua binding: OIS
** Generated automatically by tolua++-1.0.92 on 05/16/12 19:47:35.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_OIS_open (lua_State* tolua_S);

#include "OIS/OIS.h"
#include "GameObject.h"
#include "GOSScriptManager.h"
#include "GCnode.h"
#include "GCUserComponent.h"
#include "GCPhysicsBody.h"
using namespace OIS;
using namespace DAISY;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_MouseState (lua_State* tolua_S)
{
	MouseState* self = (MouseState*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CameraComponentFactory (lua_State* tolua_S)
{
	CameraComponentFactory* self = (CameraComponentFactory*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_MouseEvent (lua_State* tolua_S)
{
	MouseEvent* self = (MouseEvent*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_UserComponentFactory (lua_State* tolua_S)
{
	UserComponentFactory* self = (UserComponentFactory*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Axis (lua_State* tolua_S)
{
	Axis* self = (Axis*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_KeyEvent (lua_State* tolua_S)
{
	KeyEvent* self = (KeyEvent*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_GameComponentFactory (lua_State* tolua_S)
{
	GameComponentFactory* self = (GameComponentFactory*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_PhysicsBodyComponentFactory (lua_State* tolua_S)
{
	PhysicsBodyComponentFactory* self = (PhysicsBodyComponentFactory*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Button (lua_State* tolua_S)
{
	Button* self = (Button*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_NodeComponentFactory (lua_State* tolua_S)
{
	NodeComponentFactory* self = (NodeComponentFactory*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_OgreEntityComponentFactory (lua_State* tolua_S)
{
	OgreEntityComponentFactory* self = (OgreEntityComponentFactory*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Component (lua_State* tolua_S)
{
	Component* self = (Component*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
	tolua_usertype(tolua_S,"CameraComponentFactory");
	tolua_usertype(tolua_S,"MouseEvent");
	tolua_usertype(tolua_S,"PhysicsBodyComponentFactory");
	tolua_usertype(tolua_S,"Axis");
	tolua_usertype(tolua_S,"Component");
	tolua_usertype(tolua_S,"PhysicsBody");
	tolua_usertype(tolua_S,"GameComponentFactory");
	tolua_usertype(tolua_S,"Ogre::Quaternion");
	tolua_usertype(tolua_S,"Button");
	tolua_usertype(tolua_S,"EventArg");
	tolua_usertype(tolua_S,"GameComponentManager");
	tolua_usertype(tolua_S,"Ogre::SceneNode");
	tolua_usertype(tolua_S,"MouseState");
	tolua_usertype(tolua_S,"GCNode");
	tolua_usertype(tolua_S,"UserComponent");
	tolua_usertype(tolua_S,"GCCamera");
	tolua_usertype(tolua_S,"UserComponentFactory");
	tolua_usertype(tolua_S,"GameComponent");
	tolua_usertype(tolua_S,"GameObject");
	tolua_usertype(tolua_S,"Ogre::Entity");
	tolua_usertype(tolua_S,"KeyEvent");
	tolua_usertype(tolua_S,"Ogre::Vector3");
	tolua_usertype(tolua_S,"Object");
	tolua_usertype(tolua_S,"GCEntity");
	tolua_usertype(tolua_S,"Ogre::Camera");
	tolua_usertype(tolua_S,"NodeComponentFactory");
	tolua_usertype(tolua_S,"OgreEntityComponentFactory");
	tolua_usertype(tolua_S,"GameObjectManager");
}

/* method: new of class  Component */
#ifndef TOLUA_DISABLE_tolua_OIS_Component_new00
static int tolua_OIS_Component_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Component* tolua_ret = (Component*)  Mtolua_new((Component)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Component */
#ifndef TOLUA_DISABLE_tolua_OIS_Component_new00_local
static int tolua_OIS_Component_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Component* tolua_ret = (Component*)  Mtolua_new((Component)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Component */
#ifndef TOLUA_DISABLE_tolua_OIS_Component_new01
static int tolua_OIS_Component_new01(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		ComponentType type = ((ComponentType) (int)  tolua_tonumber(tolua_S,2,0));
		{
			Component* tolua_ret = (Component*)  Mtolua_new((Component)(type));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
		}
	}
	return 1;
tolua_lerror:
	return tolua_OIS_Component_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Component */
#ifndef TOLUA_DISABLE_tolua_OIS_Component_new01_local
static int tolua_OIS_Component_new01_local(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		ComponentType type = ((ComponentType) (int)  tolua_tonumber(tolua_S,2,0));
		{
			Component* tolua_ret = (Component*)  Mtolua_new((Component)(type));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
tolua_lerror:
	return tolua_OIS_Component_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cType of class  Component */
#ifndef TOLUA_DISABLE_tolua_get_Component_cType
static int tolua_get_Component_cType(lua_State* tolua_S)
{
	Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cType'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->cType);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cType of class  Component */
#ifndef TOLUA_DISABLE_tolua_set_Component_cType
static int tolua_set_Component_cType(lua_State* tolua_S)
{
	Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cType'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->cType = ((ComponentType) (int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Button */
#ifndef TOLUA_DISABLE_tolua_OIS_Button_new00
static int tolua_OIS_Button_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Button* tolua_ret = (Button*)  Mtolua_new((Button)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Button");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Button */
#ifndef TOLUA_DISABLE_tolua_OIS_Button_new00_local
static int tolua_OIS_Button_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Button* tolua_ret = (Button*)  Mtolua_new((Button)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Button");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Button */
#ifndef TOLUA_DISABLE_tolua_OIS_Button_new01
static int tolua_OIS_Button_new01(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
		!tolua_isboolean(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		bool bPushed = ((bool)  tolua_toboolean(tolua_S,2,0));
		{
			Button* tolua_ret = (Button*)  Mtolua_new((Button)(bPushed));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Button");
		}
	}
	return 1;
tolua_lerror:
	return tolua_OIS_Button_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Button */
#ifndef TOLUA_DISABLE_tolua_OIS_Button_new01_local
static int tolua_OIS_Button_new01_local(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
		!tolua_isboolean(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		bool bPushed = ((bool)  tolua_toboolean(tolua_S,2,0));
		{
			Button* tolua_ret = (Button*)  Mtolua_new((Button)(bPushed));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Button");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
tolua_lerror:
	return tolua_OIS_Button_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: pushed of class  Button */
#ifndef TOLUA_DISABLE_tolua_get_Button_pushed
static int tolua_get_Button_pushed(lua_State* tolua_S)
{
	Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pushed'",NULL);
#endif
	tolua_pushboolean(tolua_S,(bool)self->pushed);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pushed of class  Button */
#ifndef TOLUA_DISABLE_tolua_set_Button_pushed
static int tolua_set_Button_pushed(lua_State* tolua_S)
{
	Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pushed'",NULL);
	if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->pushed = ((bool)  tolua_toboolean(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Axis */
#ifndef TOLUA_DISABLE_tolua_OIS_Axis_new00
static int tolua_OIS_Axis_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Axis",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Axis* tolua_ret = (Axis*)  Mtolua_new((Axis)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Axis");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Axis */
#ifndef TOLUA_DISABLE_tolua_OIS_Axis_new00_local
static int tolua_OIS_Axis_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Axis",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Axis* tolua_ret = (Axis*)  Mtolua_new((Axis)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Axis");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: abs of class  Axis */
#ifndef TOLUA_DISABLE_tolua_get_Axis_abs
static int tolua_get_Axis_abs(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'abs'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->abs);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: abs of class  Axis */
#ifndef TOLUA_DISABLE_tolua_set_Axis_abs
static int tolua_set_Axis_abs(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'abs'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->abs = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rel of class  Axis */
#ifndef TOLUA_DISABLE_tolua_get_Axis_rel
static int tolua_get_Axis_rel(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rel'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->rel);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rel of class  Axis */
#ifndef TOLUA_DISABLE_tolua_set_Axis_rel
static int tolua_set_Axis_rel(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rel'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->rel = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: absOnly of class  Axis */
#ifndef TOLUA_DISABLE_tolua_get_Axis_absOnly
static int tolua_get_Axis_absOnly(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'absOnly'",NULL);
#endif
	tolua_pushboolean(tolua_S,(bool)self->absOnly);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: absOnly of class  Axis */
#ifndef TOLUA_DISABLE_tolua_set_Axis_absOnly
static int tolua_set_Axis_absOnly(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'absOnly'",NULL);
	if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->absOnly = ((bool)  tolua_toboolean(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  Axis */
#ifndef TOLUA_DISABLE_tolua_OIS_Axis_clear00
static int tolua_OIS_Axis_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"Axis",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
		{
			self->clear();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseState_new00
static int tolua_OIS_MouseState_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"MouseState",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			MouseState* tolua_ret = (MouseState*)  Mtolua_new((MouseState)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"MouseState");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseState_new00_local
static int tolua_OIS_MouseState_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"MouseState",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			MouseState* tolua_ret = (MouseState*)  Mtolua_new((MouseState)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"MouseState");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: width of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_width
static int tolua_get_MouseState_width(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->width);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: width of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_width
static int tolua_set_MouseState_width(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->width = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_height
static int tolua_get_MouseState_height(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->height);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_height
static int tolua_set_MouseState_height(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->height = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: X of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_X
static int tolua_get_MouseState_X(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
#endif
	tolua_pushusertype(tolua_S,(void*)&self->X,"Axis");
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: X of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_X
static int tolua_set_MouseState_X(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
	if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Axis",0,&tolua_err)))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->X = *((Axis*)  tolua_tousertype(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Y of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_Y
static int tolua_get_MouseState_Y(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
#endif
	tolua_pushusertype(tolua_S,(void*)&self->Y,"Axis");
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Y of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_Y
static int tolua_set_MouseState_Y(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
	if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Axis",0,&tolua_err)))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->Y = *((Axis*)  tolua_tousertype(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Z of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_Z
static int tolua_get_MouseState_Z(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Z'",NULL);
#endif
	tolua_pushusertype(tolua_S,(void*)&self->Z,"Axis");
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Z of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_Z
static int tolua_set_MouseState_Z(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Z'",NULL);
	if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Axis",0,&tolua_err)))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->Z = *((Axis*)  tolua_tousertype(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: buttons of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_buttons
static int tolua_get_MouseState_buttons(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'buttons'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->buttons);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: buttons of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_buttons
static int tolua_set_MouseState_buttons(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'buttons'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->buttons = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: buttonDown of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseState_buttonDown00
static int tolua_OIS_MouseState_buttonDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"const MouseState",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		const MouseState* self = (const MouseState*)  tolua_tousertype(tolua_S,1,0);
		MouseButtonID button = ((MouseButtonID) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'buttonDown'", NULL);
#endif
		{
			bool tolua_ret = (bool)  self->buttonDown(button);
			tolua_pushboolean(tolua_S,(bool)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'buttonDown'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseState_clear00
static int tolua_OIS_MouseState_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"MouseState",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
		{
			self->clear();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  MouseEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseEvent_new00
static int tolua_OIS_MouseEvent_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"MouseEvent",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
		(tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const MouseState",0,&tolua_err)) ||
		!tolua_isnoobj(tolua_S,4,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
		const MouseState* ms = ((const MouseState*)  tolua_tousertype(tolua_S,3,0));
		{
			MouseEvent* tolua_ret = (MouseEvent*)  Mtolua_new((MouseEvent)(obj,*ms));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"MouseEvent");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  MouseEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseEvent_new00_local
static int tolua_OIS_MouseEvent_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"MouseEvent",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
		(tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const MouseState",0,&tolua_err)) ||
		!tolua_isnoobj(tolua_S,4,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
		const MouseState* ms = ((const MouseState*)  tolua_tousertype(tolua_S,3,0));
		{
			MouseEvent* tolua_ret = (MouseEvent*)  Mtolua_new((MouseEvent)(obj,*ms));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"MouseEvent");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  MouseEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseEvent_delete00
static int tolua_OIS_MouseEvent_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"MouseEvent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		MouseEvent* self = (MouseEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: state of class  MouseEvent */
#ifndef TOLUA_DISABLE_tolua_get_MouseEvent_state_ref
static int tolua_get_MouseEvent_state_ref(lua_State* tolua_S)
{
	MouseEvent* self = (MouseEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
	tolua_pushusertype(tolua_S,(void*)&self->state,"const MouseState");
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_KeyEvent_new00
static int tolua_OIS_KeyEvent_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"KeyEvent",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,3,0,&tolua_err) ||
		!tolua_isnumber(tolua_S,4,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,5,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
		KeyCode kc = ((KeyCode) (int)  tolua_tonumber(tolua_S,3,0));
		unsigned int txt = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
		{
			KeyEvent* tolua_ret = (KeyEvent*)  Mtolua_new((KeyEvent)(obj,kc,txt));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"KeyEvent");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_KeyEvent_new00_local
static int tolua_OIS_KeyEvent_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"KeyEvent",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,3,0,&tolua_err) ||
		!tolua_isnumber(tolua_S,4,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,5,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
		KeyCode kc = ((KeyCode) (int)  tolua_tonumber(tolua_S,3,0));
		unsigned int txt = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
		{
			KeyEvent* tolua_ret = (KeyEvent*)  Mtolua_new((KeyEvent)(obj,kc,txt));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"KeyEvent");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_KeyEvent_delete00
static int tolua_OIS_KeyEvent_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"KeyEvent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		KeyEvent* self = (KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: key of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_KeyEvent_key
static int tolua_get_KeyEvent_key(lua_State* tolua_S)
{
	KeyEvent* self = (KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'key'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->key);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: text of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_KeyEvent_unsigned_text
static int tolua_get_KeyEvent_unsigned_text(lua_State* tolua_S)
{
	KeyEvent* self = (KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->text);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: text of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_set_KeyEvent_unsigned_text
static int tolua_set_KeyEvent_unsigned_text(lua_State* tolua_S)
{
	KeyEvent* self = (KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->text = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: addGC of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObject_addGC00
static int tolua_OIS_GameObject_addGC00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"GameComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
		GameComponent* gameComponent = ((GameComponent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addGC'", NULL);
#endif
		{
			self->addGC(gameComponent);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'addGC'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGC of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObject_getGC00
static int tolua_OIS_GameObject_getGC00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
		int gc_type = ((  int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGC'", NULL);
#endif
		{
			GameComponent* tolua_ret = (GameComponent*)  self->getGC(gc_type);
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameComponent");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getGC'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeGC of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObject_removeGC00
static int tolua_OIS_GameObject_removeGC00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
		int gc_type = ((  int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeGC'", NULL);
#endif
		{
			self->removeGC(gc_type);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'removeGC'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasGC of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObject_hasGC00
static int tolua_OIS_GameObject_hasGC00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
		int gc_type = ((  int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasGC'", NULL);
#endif
		{
			bool tolua_ret = (bool)  self->hasGC(gc_type);
			tolua_pushboolean(tolua_S,(bool)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'hasGC'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllGC of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObject_removeAllGC00
static int tolua_OIS_GameObject_removeAllGC00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllGC'", NULL);
#endif
		{
			self->removeAllGC();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'removeAllGC'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onUpdate of class  GameComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponent_onUpdate00
static int tolua_OIS_GameComponent_onUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponent",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponent* self = (GameComponent*)  tolua_tousertype(tolua_S,1,0);
		float interval = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onUpdate'", NULL);
#endif
		{
			self->onUpdate(interval);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onUpdate'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onAttachObject of class  GameComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponent_onAttachObject00
static int tolua_OIS_GameComponent_onAttachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponent* self = (GameComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onAttachObject'", NULL);
#endif
		{
			self->onAttachObject();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onAttachObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDetachObject of class  GameComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponent_onDetachObject00
static int tolua_OIS_GameComponent_onDetachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponent* self = (GameComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDetachObject'", NULL);
#endif
		{
			self->onDetachObject();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onDetachObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getType of class  GameComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponent_getType00
static int tolua_OIS_GameComponent_getType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponent* self = (GameComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getType'", NULL);
#endif
		{
			int tolua_ret = (  int)  self->getType();
			tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getType'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGameObejct of class  GameComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponent_setGameObejct00
static int tolua_OIS_GameComponent_setGameObejct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponent",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"GameObject",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponent* self = (GameComponent*)  tolua_tousertype(tolua_S,1,0);
		GameObject* go = ((GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGameObejct'", NULL);
#endif
		{
			self->setGameObejct(go);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setGameObejct'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: detachFromObject of class  GameComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponent_detachFromObject00
static int tolua_OIS_GameComponent_detachFromObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponent* self = (GameComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'detachFromObject'", NULL);
#endif
		{
			self->detachFromObject();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'detachFromObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserType of class  GameComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponent_setUserType00
static int tolua_OIS_GameComponent_setUserType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponent",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponent* self = (GameComponent*)  tolua_tousertype(tolua_S,1,0);
		int type = ((  int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserType'", NULL);
#endif
		{
			self->setUserType(type);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setUserType'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserType of class  GameComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponent_getUserType00
static int tolua_OIS_GameComponent_getUserType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponent* self = (GameComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserType'", NULL);
#endif
		{
			int tolua_ret = (  int)  self->getUserType();
			tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getUserType'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGameObject of class  GameComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponent_getGameObject00
static int tolua_OIS_GameComponent_getGameObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponent* self = (GameComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGameObject'", NULL);
#endif
		{
			GameObject* tolua_ret = (GameObject*)  self->getGameObject();
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getGameObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createGameObject of class  GameObjectManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObjectManager_createGameObject00
static int tolua_OIS_GameObjectManager_createGameObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObjectManager",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameObjectManager* self = (GameObjectManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createGameObject'", NULL);
#endif
		{
			GameObject* tolua_ret = (GameObject*)  self->createGameObject();
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'createGameObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createGameObject of class  GameObjectManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObjectManager_createGameObject01
static int tolua_OIS_GameObjectManager_createGameObject01(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObjectManager",0,&tolua_err) ||
		!tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		GameObjectManager* self = (GameObjectManager*)  tolua_tousertype(tolua_S,1,0);
		const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createGameObject'", NULL);
#endif
		{
			GameObject* tolua_ret = (GameObject*)  self->createGameObject(name);
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
			tolua_pushcppstring(tolua_S,(const char*)name);
		}
	}
	return 2;
tolua_lerror:
	return tolua_OIS_GameObjectManager_createGameObject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGameObject of class  GameObjectManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObjectManager_getGameObject00
static int tolua_OIS_GameObjectManager_getGameObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObjectManager",0,&tolua_err) ||
		!tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameObjectManager* self = (GameObjectManager*)  tolua_tousertype(tolua_S,1,0);
		const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGameObject'", NULL);
#endif
		{
			GameObject* tolua_ret = (GameObject*)  self->getGameObject(name);
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
			tolua_pushcppstring(tolua_S,(const char*)name);
		}
	}
	return 2;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getGameObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseGameObject of class  GameObjectManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObjectManager_releaseGameObject00
static int tolua_OIS_GameObjectManager_releaseGameObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObjectManager",0,&tolua_err) ||
		!tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameObjectManager* self = (GameObjectManager*)  tolua_tousertype(tolua_S,1,0);
		const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'releaseGameObject'", NULL);
#endif
		{
			self->releaseGameObject(name);
			tolua_pushcppstring(tolua_S,(const char*)name);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'releaseGameObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseGameObject of class  GameObjectManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObjectManager_releaseGameObject01
static int tolua_OIS_GameObjectManager_releaseGameObject01(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObjectManager",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"GameObject",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		GameObjectManager* self = (GameObjectManager*)  tolua_tousertype(tolua_S,1,0);
		GameObject* gameObject = ((GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'releaseGameObject'", NULL);
#endif
		{
			self->releaseGameObject(gameObject);
		}
	}
	return 0;
tolua_lerror:
	return tolua_OIS_GameObjectManager_releaseGameObject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: shutdown of class  GameObjectManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameObjectManager_shutdown00
static int tolua_OIS_GameObjectManager_shutdown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameObjectManager",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameObjectManager* self = (GameObjectManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'shutdown'", NULL);
#endif
		{
			self->shutdown();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'shutdown'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  GameComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentFactory_new00
static int tolua_OIS_GameComponentFactory_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"GameComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			GameComponentFactory* tolua_ret = (GameComponentFactory*)  Mtolua_new((GameComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameComponentFactory");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  GameComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentFactory_new00_local
static int tolua_OIS_GameComponentFactory_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"GameComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			GameComponentFactory* tolua_ret = (GameComponentFactory*)  Mtolua_new((GameComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameComponentFactory");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  GameComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentFactory_delete00
static int tolua_OIS_GameComponentFactory_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponentFactory* self = (GameComponentFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createComponent of class  GameComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentFactory_createComponent00
static int tolua_OIS_GameComponentFactory_createComponent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponentFactory* self = (GameComponentFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createComponent'", NULL);
#endif
		{
			GameComponent* tolua_ret = (GameComponent*)  self->createComponent();
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameComponent");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'createComponent'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseGameComponent of class  GameComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentFactory_releaseGameComponent00
static int tolua_OIS_GameComponentFactory_releaseGameComponent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponentFactory",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"GameComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponentFactory* self = (GameComponentFactory*)  tolua_tousertype(tolua_S,1,0);
		GameComponent* gc = ((GameComponent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'releaseGameComponent'", NULL);
#endif
		{
			self->releaseGameComponent(gc);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'releaseGameComponent'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createGameComponent of class  GameComponentManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentManager_createGameComponent00
static int tolua_OIS_GameComponentManager_createGameComponent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponentManager",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnumber(tolua_S,3,1,&tolua_err) ||
		!tolua_isusertype(tolua_S,4,"GameObject",1,&tolua_err) ||
		!tolua_isnoobj(tolua_S,5,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponentManager* self = (GameComponentManager*)  tolua_tousertype(tolua_S,1,0);
		int gc_type = ((  int)  tolua_tonumber(tolua_S,2,0));
		int user_type = ((  int)  tolua_tonumber(tolua_S,3,INVALID));
		GameObject* gameObject = ((GameObject*)  tolua_tousertype(tolua_S,4,NULL));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createGameComponent'", NULL);
#endif
		{
			GameComponent* tolua_ret = (GameComponent*)  self->createGameComponent(gc_type,user_type,gameObject);
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameComponent");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'createGameComponent'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseGameComponent of class  GameComponentManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentManager_releaseGameComponent00
static int tolua_OIS_GameComponentManager_releaseGameComponent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponentManager",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"GameComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponentManager* self = (GameComponentManager*)  tolua_tousertype(tolua_S,1,0);
		GameComponent* gameComponent = ((GameComponent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'releaseGameComponent'", NULL);
#endif
		{
			self->releaseGameComponent(gameComponent);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'releaseGameComponent'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFactory of class  GameComponentManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentManager_setFactory00
static int tolua_OIS_GameComponentManager_setFactory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponentManager",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isusertype(tolua_S,3,"GameComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,4,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponentManager* self = (GameComponentManager*)  tolua_tousertype(tolua_S,1,0);
		int type = ((  int)  tolua_tonumber(tolua_S,2,0));
		GameComponentFactory* factory = ((GameComponentFactory*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFactory'", NULL);
#endif
		{
			self->setFactory(type,factory);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setFactory'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasFactory of class  GameComponentManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentManager_hasFactory00
static int tolua_OIS_GameComponentManager_hasFactory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponentManager",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponentManager* self = (GameComponentManager*)  tolua_tousertype(tolua_S,1,0);
		int type = ((  int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasFactory'", NULL);
#endif
		{
			bool tolua_ret = (bool)  self->hasFactory(type);
			tolua_pushboolean(tolua_S,(bool)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'hasFactory'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerUserComponent of class  GameComponentManager */
#ifndef TOLUA_DISABLE_tolua_OIS_GameComponentManager_registerUserComponent00
static int tolua_OIS_GameComponentManager_registerUserComponent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GameComponentManager",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,4,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GameComponentManager* self = (GameComponentManager*)  tolua_tousertype(tolua_S,1,0);
		int type = ((  int)  tolua_tonumber(tolua_S,2,0));
		std::string typeName = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerUserComponent'", NULL);
#endif
		{
			self->registerUserComponent(type,typeName);
			tolua_pushcppstring(tolua_S,(const char*)typeName);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'registerUserComponent'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onUpdate of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_onUpdate00
static int tolua_OIS_GCNode_onUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		float interval = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onUpdate'", NULL);
#endif
		{
			self->onUpdate(interval);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onUpdate'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onAttachObject of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_onAttachObject00
static int tolua_OIS_GCNode_onAttachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onAttachObject'", NULL);
#endif
		{
			self->onAttachObject();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onAttachObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDetachObject of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_onDetachObject00
static int tolua_OIS_GCNode_onDetachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDetachObject'", NULL);
#endif
		{
			self->onDetachObject();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onDetachObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOgreNode of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_getOgreNode00
static int tolua_OIS_GCNode_getOgreNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOgreNode'", NULL);
#endif
		{
			Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->getOgreNode();
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getOgreNode'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: translate of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_translate00
static int tolua_OIS_GCNode_translate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		(tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		Ogre::Vector3* pos = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'translate'", NULL);
#endif
		{
			self->translate(*pos);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'translate'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_setPosition00
static int tolua_OIS_GCNode_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		(tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		Ogre::Vector3* pos = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
		{
			self->setPosition(*pos);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOrientation of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_setOrientation00
static int tolua_OIS_GCNode_setOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		(tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Quaternion",0,&tolua_err)) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		Ogre::Quaternion* orient = ((Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOrientation'", NULL);
#endif
		{
			self->setOrientation(*orient);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setOrientation'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_setVisible00
static int tolua_OIS_GCNode_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isboolean(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		bool isVisible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
		{
			self->setVisible(isVisible);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: roll of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_roll00
static int tolua_OIS_GCNode_roll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		float value = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'roll'", NULL);
#endif
		{
			self->roll(value);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'roll'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pitch of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_pitch00
static int tolua_OIS_GCNode_pitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		float value = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pitch'", NULL);
#endif
		{
			self->pitch(value);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'pitch'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: yaw of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_yaw00
static int tolua_OIS_GCNode_yaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		float value = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'yaw'", NULL);
#endif
		{
			self->yaw(value);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'yaw'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: attachNode of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_attachNode00
static int tolua_OIS_GCNode_attachNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"GCNode",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		GCNode* child = ((GCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'attachNode'", NULL);
#endif
		{
			self->attachNode(child);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'attachNode'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: detachNode of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_detachNode00
static int tolua_OIS_GCNode_detachNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"GCNode",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
		GCNode* child = ((GCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'detachNode'", NULL);
#endif
		{
			self->detachNode(child);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'detachNode'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: detachFromParentNode of class  GCNode */
#ifndef TOLUA_DISABLE_tolua_OIS_GCNode_detachFromParentNode00
static int tolua_OIS_GCNode_detachFromParentNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCNode",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCNode* self = (GCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'detachFromParentNode'", NULL);
#endif
		{
			self->detachFromParentNode();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'detachFromParentNode'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initCamera of class  GCCamera */
#ifndef TOLUA_DISABLE_tolua_OIS_GCCamera_initCamera00
static int tolua_OIS_GCCamera_initCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCCamera",0,&tolua_err) ||
		!tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCCamera* self = (GCCamera*)  tolua_tousertype(tolua_S,1,0);
		const std::string cameraName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initCamera'", NULL);
#endif
		{
			self->initCamera(cameraName);
			tolua_pushcppstring(tolua_S,(const char*)cameraName);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'initCamera'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOgreCamera of class  GCCamera */
#ifndef TOLUA_DISABLE_tolua_OIS_GCCamera_getOgreCamera00
static int tolua_OIS_GCCamera_getOgreCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCCamera",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCCamera* self = (GCCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOgreCamera'", NULL);
#endif
		{
			Ogre::Camera* tolua_ret = (Ogre::Camera*)  self->getOgreCamera();
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getOgreCamera'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initEntity of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_initEntity00
static int tolua_OIS_GCEntity_initEntity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
		!tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,4,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
		const std::string entityName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
		const std::string modelName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initEntity'", NULL);
#endif
		{
			self->initEntity(entityName,modelName);
			tolua_pushcppstring(tolua_S,(const char*)entityName);
			tolua_pushcppstring(tolua_S,(const char*)modelName);
		}
	}
	return 2;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'initEntity'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onUpdate of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_onUpdate00
static int tolua_OIS_GCEntity_onUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
		float interval = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onUpdate'", NULL);
#endif
		{
			self->onUpdate(interval);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onUpdate'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onAttachObject of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_onAttachObject00
static int tolua_OIS_GCEntity_onAttachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onAttachObject'", NULL);
#endif
		{
			self->onAttachObject();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onAttachObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDetachObject of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_onDetachObject00
static int tolua_OIS_GCEntity_onDetachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDetachObject'", NULL);
#endif
		{
			self->onDetachObject();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onDetachObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: attachToOgreNode of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_attachToOgreNode00
static int tolua_OIS_GCEntity_attachToOgreNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'attachToOgreNode'", NULL);
#endif
		{
			bool tolua_ret = (bool)  self->attachToOgreNode();
			tolua_pushboolean(tolua_S,(bool)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'attachToOgreNode'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: detachFromOgreNode of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_detachFromOgreNode00
static int tolua_OIS_GCEntity_detachFromOgreNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'detachFromOgreNode'", NULL);
#endif
		{
			bool tolua_ret = (bool)  self->detachFromOgreNode();
			tolua_pushboolean(tolua_S,(bool)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'detachFromOgreNode'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOgreEntity of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_getOgreEntity00
static int tolua_OIS_GCEntity_getOgreEntity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOgreEntity'", NULL);
#endif
		{
			Ogre::Entity* tolua_ret = (Ogre::Entity*)  self->getOgreEntity();
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Entity");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getOgreEntity'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getModelName of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_getModelName00
static int tolua_OIS_GCEntity_getModelName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getModelName'", NULL);
#endif
		{
			std::string tolua_ret = (std::string)  self->getModelName();
			tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getModelName'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEntityName of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_getEntityName00
static int tolua_OIS_GCEntity_getEntityName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEntityName'", NULL);
#endif
		{
			std::string tolua_ret = (std::string)  self->getEntityName();
			tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getEntityName'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaterialName of class  GCEntity */
#ifndef TOLUA_DISABLE_tolua_OIS_GCEntity_setMaterialName00
static int tolua_OIS_GCEntity_setMaterialName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"GCEntity",0,&tolua_err) ||
		!tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		GCEntity* self = (GCEntity*)  tolua_tousertype(tolua_S,1,0);
		const std::string materialName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaterialName'", NULL);
#endif
		{
			self->setMaterialName(materialName);
			tolua_pushcppstring(tolua_S,(const char*)materialName);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setMaterialName'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  OgreEntityComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_OgreEntityComponentFactory_new00
static int tolua_OIS_OgreEntityComponentFactory_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"OgreEntityComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			OgreEntityComponentFactory* tolua_ret = (OgreEntityComponentFactory*)  Mtolua_new((OgreEntityComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"OgreEntityComponentFactory");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  OgreEntityComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_OgreEntityComponentFactory_new00_local
static int tolua_OIS_OgreEntityComponentFactory_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"OgreEntityComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			OgreEntityComponentFactory* tolua_ret = (OgreEntityComponentFactory*)  Mtolua_new((OgreEntityComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"OgreEntityComponentFactory");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  OgreEntityComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_OgreEntityComponentFactory_delete00
static int tolua_OIS_OgreEntityComponentFactory_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"OgreEntityComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		OgreEntityComponentFactory* self = (OgreEntityComponentFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CameraComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_CameraComponentFactory_new00
static int tolua_OIS_CameraComponentFactory_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"CameraComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			CameraComponentFactory* tolua_ret = (CameraComponentFactory*)  Mtolua_new((CameraComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"CameraComponentFactory");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CameraComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_CameraComponentFactory_new00_local
static int tolua_OIS_CameraComponentFactory_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"CameraComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			CameraComponentFactory* tolua_ret = (CameraComponentFactory*)  Mtolua_new((CameraComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"CameraComponentFactory");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CameraComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_CameraComponentFactory_delete00
static int tolua_OIS_CameraComponentFactory_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"CameraComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		CameraComponentFactory* self = (CameraComponentFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  NodeComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_NodeComponentFactory_new00
static int tolua_OIS_NodeComponentFactory_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"NodeComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			NodeComponentFactory* tolua_ret = (NodeComponentFactory*)  Mtolua_new((NodeComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"NodeComponentFactory");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  NodeComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_NodeComponentFactory_new00_local
static int tolua_OIS_NodeComponentFactory_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"NodeComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			NodeComponentFactory* tolua_ret = (NodeComponentFactory*)  Mtolua_new((NodeComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"NodeComponentFactory");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  NodeComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_NodeComponentFactory_delete00
static int tolua_OIS_NodeComponentFactory_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"NodeComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		NodeComponentFactory* self = (NodeComponentFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onUpdate of class  UserComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_UserComponent_onUpdate00
static int tolua_OIS_UserComponent_onUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"UserComponent",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		UserComponent* self = (UserComponent*)  tolua_tousertype(tolua_S,1,0);
		float interval = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onUpdate'", NULL);
#endif
		{
			self->onUpdate(interval);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onUpdate'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onAttachObject of class  UserComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_UserComponent_onAttachObject00
static int tolua_OIS_UserComponent_onAttachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"UserComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		UserComponent* self = (UserComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onAttachObject'", NULL);
#endif
		{
			self->onAttachObject();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onAttachObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDetachObject of class  UserComponent */
#ifndef TOLUA_DISABLE_tolua_OIS_UserComponent_onDetachObject00
static int tolua_OIS_UserComponent_onDetachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"UserComponent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		UserComponent* self = (UserComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDetachObject'", NULL);
#endif
		{
			self->onDetachObject();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'onDetachObject'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UserComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_UserComponentFactory_new00
static int tolua_OIS_UserComponentFactory_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"UserComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			UserComponentFactory* tolua_ret = (UserComponentFactory*)  Mtolua_new((UserComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"UserComponentFactory");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  UserComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_UserComponentFactory_new00_local
static int tolua_OIS_UserComponentFactory_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"UserComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			UserComponentFactory* tolua_ret = (UserComponentFactory*)  Mtolua_new((UserComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"UserComponentFactory");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  UserComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_UserComponentFactory_delete00
static int tolua_OIS_UserComponentFactory_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"UserComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		UserComponentFactory* self = (UserComponentFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initBody of class  PhysicsBody */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBody_initBody00
static int tolua_OIS_PhysicsBody_initBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"PhysicsBody",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnumber(tolua_S,3,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,4,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		PhysicsBody* self = (PhysicsBody*)  tolua_tousertype(tolua_S,1,0);
		float mass = ((float)  tolua_tonumber(tolua_S,2,0));
		unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initBody'", NULL);
#endif
		{
			self->initBody(mass,id);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'initBody'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCollisionID of class  PhysicsBody */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBody_getCollisionID00
static int tolua_OIS_PhysicsBody_getCollisionID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"PhysicsBody",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		PhysicsBody* self = (PhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCollisionID'", NULL);
#endif
		{
			unsigned int tolua_ret = (unsigned int)  self->getCollisionID();
			tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'getCollisionID'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCollisionID of class  PhysicsBody */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBody_setCollisionID00
static int tolua_OIS_PhysicsBody_setCollisionID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"PhysicsBody",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		PhysicsBody* self = (PhysicsBody*)  tolua_tousertype(tolua_S,1,0);
		unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCollisionID'", NULL);
#endif
		{
			self->setCollisionID(id);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setCollisionID'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMass of class  PhysicsBody */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBody_setMass00
static int tolua_OIS_PhysicsBody_setMass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"PhysicsBody",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		PhysicsBody* self = (PhysicsBody*)  tolua_tousertype(tolua_S,1,0);
		float mass = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMass'", NULL);
#endif
		{
			self->setMass(mass);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setMass'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: impulse of class  PhysicsBody */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBody_impulse00
static int tolua_OIS_PhysicsBody_impulse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"PhysicsBody",0,&tolua_err) ||
		(tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		PhysicsBody* self = (PhysicsBody*)  tolua_tousertype(tolua_S,1,0);
		Ogre::Vector3* offset = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'impulse'", NULL);
#endif
		{
			self->impulse(*offset);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'impulse'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNeedCallBack of class  PhysicsBody */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBody_setNeedCallBack00
static int tolua_OIS_PhysicsBody_setNeedCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"PhysicsBody",0,&tolua_err) ||
		!tolua_isboolean(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		PhysicsBody* self = (PhysicsBody*)  tolua_tousertype(tolua_S,1,0);
		bool needCallBcak = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNeedCallBack'", NULL);
#endif
		{
			self->setNeedCallBack(needCallBcak);
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'setNeedCallBack'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: needCallBack of class  PhysicsBody */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBody_needCallBack00
static int tolua_OIS_PhysicsBody_needCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"PhysicsBody",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		PhysicsBody* self = (PhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'needCallBack'", NULL);
#endif
		{
			bool tolua_ret = (bool)  self->needCallBack();
			tolua_pushboolean(tolua_S,(bool)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'needCallBack'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  PhysicsBodyComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBodyComponentFactory_new00
static int tolua_OIS_PhysicsBodyComponentFactory_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"PhysicsBodyComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			PhysicsBodyComponentFactory* tolua_ret = (PhysicsBodyComponentFactory*)  Mtolua_new((PhysicsBodyComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"PhysicsBodyComponentFactory");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  PhysicsBodyComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBodyComponentFactory_new00_local
static int tolua_OIS_PhysicsBodyComponentFactory_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"PhysicsBodyComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			PhysicsBodyComponentFactory* tolua_ret = (PhysicsBodyComponentFactory*)  Mtolua_new((PhysicsBodyComponentFactory)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"PhysicsBodyComponentFactory");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  PhysicsBodyComponentFactory */
#ifndef TOLUA_DISABLE_tolua_OIS_PhysicsBodyComponentFactory_delete00
static int tolua_OIS_PhysicsBodyComponentFactory_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"PhysicsBodyComponentFactory",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		PhysicsBodyComponentFactory* self = (PhysicsBodyComponentFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: daisy_object_set_lua_function */
#ifndef TOLUA_DISABLE_tolua_OIS_daisy_object_set_lua_function00
static int tolua_OIS_daisy_object_set_lua_function00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isnoobj(tolua_S,1,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		lua_State* L =  tolua_S;
		{
			int tolua_ret = (int)  daisy_object_set_lua_function(L);
			tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'daisy_object_set_lua_function'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: daisy_object_remove_vtable */
#ifndef TOLUA_DISABLE_tolua_OIS_daisy_object_remove_vtable00
static int tolua_OIS_daisy_object_remove_vtable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isnoobj(tolua_S,1,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		lua_State* L =  tolua_S;
		{
			int tolua_ret = (int)  daisy_object_remove_vtable(L);
			tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'daisy_object_remove_vtable'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_OIS_open (lua_State* tolua_S)
{
	tolua_open(tolua_S);
	tolua_reg_types(tolua_S);
	tolua_module(tolua_S,NULL,0);
	tolua_beginmodule(tolua_S,NULL);
	tolua_constant(tolua_S,"OIS_Unknown",OIS_Unknown);
	tolua_constant(tolua_S,"OIS_Button",OIS_Button);
	tolua_constant(tolua_S,"OIS_Axis",OIS_Axis);
	tolua_constant(tolua_S,"OIS_Slider",OIS_Slider);
	tolua_constant(tolua_S,"OIS_POV",OIS_POV);
	tolua_constant(tolua_S,"OIS_Vector3",OIS_Vector3);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"Component","Component","",tolua_collect_Component);
#else
	tolua_cclass(tolua_S,"Component","Component","",NULL);
#endif
	tolua_beginmodule(tolua_S,"Component");
	tolua_function(tolua_S,"new",tolua_OIS_Component_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_Component_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_Component_new00_local);
	tolua_function(tolua_S,"new",tolua_OIS_Component_new01);
	tolua_function(tolua_S,"new_local",tolua_OIS_Component_new01_local);
	tolua_function(tolua_S,".call",tolua_OIS_Component_new01_local);
	tolua_variable(tolua_S,"cType",tolua_get_Component_cType,tolua_set_Component_cType);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"Button","Button","Component",tolua_collect_Button);
#else
	tolua_cclass(tolua_S,"Button","Button","Component",NULL);
#endif
	tolua_beginmodule(tolua_S,"Button");
	tolua_function(tolua_S,"new",tolua_OIS_Button_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_Button_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_Button_new00_local);
	tolua_function(tolua_S,"new",tolua_OIS_Button_new01);
	tolua_function(tolua_S,"new_local",tolua_OIS_Button_new01_local);
	tolua_function(tolua_S,".call",tolua_OIS_Button_new01_local);
	tolua_variable(tolua_S,"pushed",tolua_get_Button_pushed,tolua_set_Button_pushed);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"Axis","Axis","Component",tolua_collect_Axis);
#else
	tolua_cclass(tolua_S,"Axis","Axis","Component",NULL);
#endif
	tolua_beginmodule(tolua_S,"Axis");
	tolua_function(tolua_S,"new",tolua_OIS_Axis_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_Axis_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_Axis_new00_local);
	tolua_variable(tolua_S,"abs",tolua_get_Axis_abs,tolua_set_Axis_abs);
	tolua_variable(tolua_S,"rel",tolua_get_Axis_rel,tolua_set_Axis_rel);
	tolua_variable(tolua_S,"absOnly",tolua_get_Axis_absOnly,tolua_set_Axis_absOnly);
	tolua_function(tolua_S,"clear",tolua_OIS_Axis_clear00);
	tolua_endmodule(tolua_S);
	tolua_constant(tolua_S,"MB_Left",MB_Left);
	tolua_constant(tolua_S,"MB_Right",MB_Right);
	tolua_constant(tolua_S,"MB_Middle",MB_Middle);
	tolua_constant(tolua_S,"MB_Button3",MB_Button3);
	tolua_constant(tolua_S,"MB_Button4",MB_Button4);
	tolua_constant(tolua_S,"MB_Button5",MB_Button5);
	tolua_constant(tolua_S,"MB_Button6",MB_Button6);
	tolua_constant(tolua_S,"MB_Button7",MB_Button7);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"MouseState","MouseState","",tolua_collect_MouseState);
#else
	tolua_cclass(tolua_S,"MouseState","MouseState","",NULL);
#endif
	tolua_beginmodule(tolua_S,"MouseState");
	tolua_function(tolua_S,"new",tolua_OIS_MouseState_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_MouseState_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_MouseState_new00_local);
	tolua_variable(tolua_S,"width",tolua_get_MouseState_width,tolua_set_MouseState_width);
	tolua_variable(tolua_S,"height",tolua_get_MouseState_height,tolua_set_MouseState_height);
	tolua_variable(tolua_S,"X",tolua_get_MouseState_X,tolua_set_MouseState_X);
	tolua_variable(tolua_S,"Y",tolua_get_MouseState_Y,tolua_set_MouseState_Y);
	tolua_variable(tolua_S,"Z",tolua_get_MouseState_Z,tolua_set_MouseState_Z);
	tolua_variable(tolua_S,"buttons",tolua_get_MouseState_buttons,tolua_set_MouseState_buttons);
	tolua_function(tolua_S,"buttonDown",tolua_OIS_MouseState_buttonDown00);
	tolua_function(tolua_S,"clear",tolua_OIS_MouseState_clear00);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"MouseEvent","MouseEvent","EventArg",tolua_collect_MouseEvent);
#else
	tolua_cclass(tolua_S,"MouseEvent","MouseEvent","EventArg",NULL);
#endif
	tolua_beginmodule(tolua_S,"MouseEvent");
	tolua_function(tolua_S,"new",tolua_OIS_MouseEvent_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_MouseEvent_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_MouseEvent_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_MouseEvent_delete00);
	tolua_variable(tolua_S,"state",tolua_get_MouseEvent_state_ref,NULL);
	tolua_endmodule(tolua_S);
	tolua_constant(tolua_S,"KC_UNASSIGNED",KC_UNASSIGNED);
	tolua_constant(tolua_S,"KC_ESCAPE",KC_ESCAPE);
	tolua_constant(tolua_S,"KC_1",KC_1);
	tolua_constant(tolua_S,"KC_2",KC_2);
	tolua_constant(tolua_S,"KC_3",KC_3);
	tolua_constant(tolua_S,"KC_4",KC_4);
	tolua_constant(tolua_S,"KC_5",KC_5);
	tolua_constant(tolua_S,"KC_6",KC_6);
	tolua_constant(tolua_S,"KC_7",KC_7);
	tolua_constant(tolua_S,"KC_8",KC_8);
	tolua_constant(tolua_S,"KC_9",KC_9);
	tolua_constant(tolua_S,"KC_0",KC_0);
	tolua_constant(tolua_S,"KC_MINUS",KC_MINUS);
	tolua_constant(tolua_S,"KC_EQUALS",KC_EQUALS);
	tolua_constant(tolua_S,"KC_BACK",KC_BACK);
	tolua_constant(tolua_S,"KC_TAB",KC_TAB);
	tolua_constant(tolua_S,"KC_Q",KC_Q);
	tolua_constant(tolua_S,"KC_W",KC_W);
	tolua_constant(tolua_S,"KC_E",KC_E);
	tolua_constant(tolua_S,"KC_R",KC_R);
	tolua_constant(tolua_S,"KC_T",KC_T);
	tolua_constant(tolua_S,"KC_Y",KC_Y);
	tolua_constant(tolua_S,"KC_U",KC_U);
	tolua_constant(tolua_S,"KC_I",KC_I);
	tolua_constant(tolua_S,"KC_O",KC_O);
	tolua_constant(tolua_S,"KC_P",KC_P);
	tolua_constant(tolua_S,"KC_LBRACKET",KC_LBRACKET);
	tolua_constant(tolua_S,"KC_RBRACKET",KC_RBRACKET);
	tolua_constant(tolua_S,"KC_RETURN",KC_RETURN);
	tolua_constant(tolua_S,"KC_LCONTROL",KC_LCONTROL);
	tolua_constant(tolua_S,"KC_A",KC_A);
	tolua_constant(tolua_S,"KC_S",KC_S);
	tolua_constant(tolua_S,"KC_D",KC_D);
	tolua_constant(tolua_S,"KC_F",KC_F);
	tolua_constant(tolua_S,"KC_G",KC_G);
	tolua_constant(tolua_S,"KC_H",KC_H);
	tolua_constant(tolua_S,"KC_J",KC_J);
	tolua_constant(tolua_S,"KC_K",KC_K);
	tolua_constant(tolua_S,"KC_L",KC_L);
	tolua_constant(tolua_S,"KC_SEMICOLON",KC_SEMICOLON);
	tolua_constant(tolua_S,"KC_APOSTROPHE",KC_APOSTROPHE);
	tolua_constant(tolua_S,"KC_GRAVE",KC_GRAVE);
	tolua_constant(tolua_S,"KC_LSHIFT",KC_LSHIFT);
	tolua_constant(tolua_S,"KC_BACKSLASH",KC_BACKSLASH);
	tolua_constant(tolua_S,"KC_Z",KC_Z);
	tolua_constant(tolua_S,"KC_X",KC_X);
	tolua_constant(tolua_S,"KC_C",KC_C);
	tolua_constant(tolua_S,"KC_V",KC_V);
	tolua_constant(tolua_S,"KC_B",KC_B);
	tolua_constant(tolua_S,"KC_N",KC_N);
	tolua_constant(tolua_S,"KC_M",KC_M);
	tolua_constant(tolua_S,"KC_COMMA",KC_COMMA);
	tolua_constant(tolua_S,"KC_PERIOD",KC_PERIOD);
	tolua_constant(tolua_S,"KC_SLASH",KC_SLASH);
	tolua_constant(tolua_S,"KC_RSHIFT",KC_RSHIFT);
	tolua_constant(tolua_S,"KC_MULTIPLY",KC_MULTIPLY);
	tolua_constant(tolua_S,"KC_LMENU",KC_LMENU);
	tolua_constant(tolua_S,"KC_SPACE",KC_SPACE);
	tolua_constant(tolua_S,"KC_CAPITAL",KC_CAPITAL);
	tolua_constant(tolua_S,"KC_F1",KC_F1);
	tolua_constant(tolua_S,"KC_F2",KC_F2);
	tolua_constant(tolua_S,"KC_F3",KC_F3);
	tolua_constant(tolua_S,"KC_F4",KC_F4);
	tolua_constant(tolua_S,"KC_F5",KC_F5);
	tolua_constant(tolua_S,"KC_F6",KC_F6);
	tolua_constant(tolua_S,"KC_F7",KC_F7);
	tolua_constant(tolua_S,"KC_F8",KC_F8);
	tolua_constant(tolua_S,"KC_F9",KC_F9);
	tolua_constant(tolua_S,"KC_F10",KC_F10);
	tolua_constant(tolua_S,"KC_NUMLOCK",KC_NUMLOCK);
	tolua_constant(tolua_S,"KC_SCROLL",KC_SCROLL);
	tolua_constant(tolua_S,"KC_NUMPAD7",KC_NUMPAD7);
	tolua_constant(tolua_S,"KC_NUMPAD8",KC_NUMPAD8);
	tolua_constant(tolua_S,"KC_NUMPAD9",KC_NUMPAD9);
	tolua_constant(tolua_S,"KC_SUBTRACT",KC_SUBTRACT);
	tolua_constant(tolua_S,"KC_NUMPAD4",KC_NUMPAD4);
	tolua_constant(tolua_S,"KC_NUMPAD5",KC_NUMPAD5);
	tolua_constant(tolua_S,"KC_NUMPAD6",KC_NUMPAD6);
	tolua_constant(tolua_S,"KC_ADD",KC_ADD);
	tolua_constant(tolua_S,"KC_NUMPAD1",KC_NUMPAD1);
	tolua_constant(tolua_S,"KC_NUMPAD2",KC_NUMPAD2);
	tolua_constant(tolua_S,"KC_NUMPAD3",KC_NUMPAD3);
	tolua_constant(tolua_S,"KC_NUMPAD0",KC_NUMPAD0);
	tolua_constant(tolua_S,"KC_DECIMAL",KC_DECIMAL);
	tolua_constant(tolua_S,"KC_OEM_102",KC_OEM_102);
	tolua_constant(tolua_S,"KC_F11",KC_F11);
	tolua_constant(tolua_S,"KC_F12",KC_F12);
	tolua_constant(tolua_S,"KC_F13",KC_F13);
	tolua_constant(tolua_S,"KC_F14",KC_F14);
	tolua_constant(tolua_S,"KC_F15",KC_F15);
	tolua_constant(tolua_S,"KC_KANA",KC_KANA);
	tolua_constant(tolua_S,"KC_ABNT_C1",KC_ABNT_C1);
	tolua_constant(tolua_S,"KC_CONVERT",KC_CONVERT);
	tolua_constant(tolua_S,"KC_NOCONVERT",KC_NOCONVERT);
	tolua_constant(tolua_S,"KC_YEN",KC_YEN);
	tolua_constant(tolua_S,"KC_ABNT_C2",KC_ABNT_C2);
	tolua_constant(tolua_S,"KC_NUMPADEQUALS",KC_NUMPADEQUALS);
	tolua_constant(tolua_S,"KC_PREVTRACK",KC_PREVTRACK);
	tolua_constant(tolua_S,"KC_AT",KC_AT);
	tolua_constant(tolua_S,"KC_COLON",KC_COLON);
	tolua_constant(tolua_S,"KC_UNDERLINE",KC_UNDERLINE);
	tolua_constant(tolua_S,"KC_KANJI",KC_KANJI);
	tolua_constant(tolua_S,"KC_STOP",KC_STOP);
	tolua_constant(tolua_S,"KC_AX",KC_AX);
	tolua_constant(tolua_S,"KC_UNLABELED",KC_UNLABELED);
	tolua_constant(tolua_S,"KC_NEXTTRACK",KC_NEXTTRACK);
	tolua_constant(tolua_S,"KC_NUMPADENTER",KC_NUMPADENTER);
	tolua_constant(tolua_S,"KC_RCONTROL",KC_RCONTROL);
	tolua_constant(tolua_S,"KC_MUTE",KC_MUTE);
	tolua_constant(tolua_S,"KC_CALCULATOR",KC_CALCULATOR);
	tolua_constant(tolua_S,"KC_PLAYPAUSE",KC_PLAYPAUSE);
	tolua_constant(tolua_S,"KC_MEDIASTOP",KC_MEDIASTOP);
	tolua_constant(tolua_S,"KC_VOLUMEDOWN",KC_VOLUMEDOWN);
	tolua_constant(tolua_S,"KC_VOLUMEUP",KC_VOLUMEUP);
	tolua_constant(tolua_S,"KC_WEBHOME",KC_WEBHOME);
	tolua_constant(tolua_S,"KC_NUMPADCOMMA",KC_NUMPADCOMMA);
	tolua_constant(tolua_S,"KC_DIVIDE",KC_DIVIDE);
	tolua_constant(tolua_S,"KC_SYSRQ",KC_SYSRQ);
	tolua_constant(tolua_S,"KC_RMENU",KC_RMENU);
	tolua_constant(tolua_S,"KC_PAUSE",KC_PAUSE);
	tolua_constant(tolua_S,"KC_HOME",KC_HOME);
	tolua_constant(tolua_S,"KC_UP",KC_UP);
	tolua_constant(tolua_S,"KC_PGUP",KC_PGUP);
	tolua_constant(tolua_S,"KC_LEFT",KC_LEFT);
	tolua_constant(tolua_S,"KC_RIGHT",KC_RIGHT);
	tolua_constant(tolua_S,"KC_END",KC_END);
	tolua_constant(tolua_S,"KC_DOWN",KC_DOWN);
	tolua_constant(tolua_S,"KC_PGDOWN",KC_PGDOWN);
	tolua_constant(tolua_S,"KC_INSERT",KC_INSERT);
	tolua_constant(tolua_S,"KC_DELETE",KC_DELETE);
	tolua_constant(tolua_S,"KC_LWIN",KC_LWIN);
	tolua_constant(tolua_S,"KC_RWIN",KC_RWIN);
	tolua_constant(tolua_S,"KC_APPS",KC_APPS);
	tolua_constant(tolua_S,"KC_POWER",KC_POWER);
	tolua_constant(tolua_S,"KC_SLEEP",KC_SLEEP);
	tolua_constant(tolua_S,"KC_WAKE",KC_WAKE);
	tolua_constant(tolua_S,"KC_WEBSEARCH",KC_WEBSEARCH);
	tolua_constant(tolua_S,"KC_WEBFAVORITES",KC_WEBFAVORITES);
	tolua_constant(tolua_S,"KC_WEBREFRESH",KC_WEBREFRESH);
	tolua_constant(tolua_S,"KC_WEBSTOP",KC_WEBSTOP);
	tolua_constant(tolua_S,"KC_WEBFORWARD",KC_WEBFORWARD);
	tolua_constant(tolua_S,"KC_WEBBACK",KC_WEBBACK);
	tolua_constant(tolua_S,"KC_MYCOMPUTER",KC_MYCOMPUTER);
	tolua_constant(tolua_S,"KC_MAIL",KC_MAIL);
	tolua_constant(tolua_S,"KC_MEDIASELECT",KC_MEDIASELECT);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"KeyEvent","KeyEvent","EventArg",tolua_collect_KeyEvent);
#else
	tolua_cclass(tolua_S,"KeyEvent","KeyEvent","EventArg",NULL);
#endif
	tolua_beginmodule(tolua_S,"KeyEvent");
	tolua_function(tolua_S,"new",tolua_OIS_KeyEvent_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_KeyEvent_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_KeyEvent_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_KeyEvent_delete00);
	tolua_variable(tolua_S,"key",tolua_get_KeyEvent_key,NULL);
	tolua_variable(tolua_S,"text",tolua_get_KeyEvent_unsigned_text,tolua_set_KeyEvent_unsigned_text);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S,"GameObject","GameObject","",NULL);
	tolua_beginmodule(tolua_S,"GameObject");
	tolua_function(tolua_S,"addGC",tolua_OIS_GameObject_addGC00);
	tolua_function(tolua_S,"getGC",tolua_OIS_GameObject_getGC00);
	tolua_function(tolua_S,"removeGC",tolua_OIS_GameObject_removeGC00);
	tolua_function(tolua_S,"hasGC",tolua_OIS_GameObject_hasGC00);
	tolua_function(tolua_S,"removeAllGC",tolua_OIS_GameObject_removeAllGC00);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S,"GameComponent","GameComponent","",NULL);
	tolua_beginmodule(tolua_S,"GameComponent");
	tolua_function(tolua_S,"onUpdate",tolua_OIS_GameComponent_onUpdate00);
	tolua_function(tolua_S,"onAttachObject",tolua_OIS_GameComponent_onAttachObject00);
	tolua_function(tolua_S,"onDetachObject",tolua_OIS_GameComponent_onDetachObject00);
	tolua_function(tolua_S,"getType",tolua_OIS_GameComponent_getType00);
	tolua_function(tolua_S,"setGameObejct",tolua_OIS_GameComponent_setGameObejct00);
	tolua_function(tolua_S,"detachFromObject",tolua_OIS_GameComponent_detachFromObject00);
	tolua_function(tolua_S,"setUserType",tolua_OIS_GameComponent_setUserType00);
	tolua_function(tolua_S,"getUserType",tolua_OIS_GameComponent_getUserType00);
	tolua_function(tolua_S,"getGameObject",tolua_OIS_GameComponent_getGameObject00);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S,"GameObjectManager","GameObjectManager","",NULL);
	tolua_beginmodule(tolua_S,"GameObjectManager");
	tolua_function(tolua_S,"createGameObject",tolua_OIS_GameObjectManager_createGameObject00);
	tolua_function(tolua_S,"createGameObject",tolua_OIS_GameObjectManager_createGameObject01);
	tolua_function(tolua_S,"getGameObject",tolua_OIS_GameObjectManager_getGameObject00);
	tolua_function(tolua_S,"releaseGameObject",tolua_OIS_GameObjectManager_releaseGameObject00);
	tolua_function(tolua_S,"releaseGameObject",tolua_OIS_GameObjectManager_releaseGameObject01);
	tolua_function(tolua_S,"shutdown",tolua_OIS_GameObjectManager_shutdown00);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"GameComponentFactory","GameComponentFactory","",tolua_collect_GameComponentFactory);
#else
	tolua_cclass(tolua_S,"GameComponentFactory","GameComponentFactory","",NULL);
#endif
	tolua_beginmodule(tolua_S,"GameComponentFactory");
	tolua_function(tolua_S,"new",tolua_OIS_GameComponentFactory_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_GameComponentFactory_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_GameComponentFactory_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_GameComponentFactory_delete00);
	tolua_function(tolua_S,"createComponent",tolua_OIS_GameComponentFactory_createComponent00);
	tolua_function(tolua_S,"releaseGameComponent",tolua_OIS_GameComponentFactory_releaseGameComponent00);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S,"GameComponentManager","GameComponentManager","",NULL);
	tolua_beginmodule(tolua_S,"GameComponentManager");
	tolua_function(tolua_S,"createGameComponent",tolua_OIS_GameComponentManager_createGameComponent00);
	tolua_function(tolua_S,"releaseGameComponent",tolua_OIS_GameComponentManager_releaseGameComponent00);
	tolua_function(tolua_S,"setFactory",tolua_OIS_GameComponentManager_setFactory00);
	tolua_function(tolua_S,"hasFactory",tolua_OIS_GameComponentManager_hasFactory00);
	tolua_function(tolua_S,"registerUserComponent",tolua_OIS_GameComponentManager_registerUserComponent00);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S,"GCNode","GCNode","GameComponent",NULL);
	tolua_beginmodule(tolua_S,"GCNode");
	tolua_function(tolua_S,"onUpdate",tolua_OIS_GCNode_onUpdate00);
	tolua_function(tolua_S,"onAttachObject",tolua_OIS_GCNode_onAttachObject00);
	tolua_function(tolua_S,"onDetachObject",tolua_OIS_GCNode_onDetachObject00);
	tolua_function(tolua_S,"getOgreNode",tolua_OIS_GCNode_getOgreNode00);
	tolua_function(tolua_S,"translate",tolua_OIS_GCNode_translate00);
	tolua_function(tolua_S,"setPosition",tolua_OIS_GCNode_setPosition00);
	tolua_function(tolua_S,"setOrientation",tolua_OIS_GCNode_setOrientation00);
	tolua_function(tolua_S,"setVisible",tolua_OIS_GCNode_setVisible00);
	tolua_function(tolua_S,"roll",tolua_OIS_GCNode_roll00);
	tolua_function(tolua_S,"pitch",tolua_OIS_GCNode_pitch00);
	tolua_function(tolua_S,"yaw",tolua_OIS_GCNode_yaw00);
	tolua_function(tolua_S,"attachNode",tolua_OIS_GCNode_attachNode00);
	tolua_function(tolua_S,"detachNode",tolua_OIS_GCNode_detachNode00);
	tolua_function(tolua_S,"detachFromParentNode",tolua_OIS_GCNode_detachFromParentNode00);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S,"GCCamera","GCCamera","GameComponent",NULL);
	tolua_beginmodule(tolua_S,"GCCamera");
	tolua_function(tolua_S,"initCamera",tolua_OIS_GCCamera_initCamera00);
	tolua_function(tolua_S,"getOgreCamera",tolua_OIS_GCCamera_getOgreCamera00);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S,"GCEntity","GCEntity","GameComponent",NULL);
	tolua_beginmodule(tolua_S,"GCEntity");
	tolua_function(tolua_S,"initEntity",tolua_OIS_GCEntity_initEntity00);
	tolua_function(tolua_S,"onUpdate",tolua_OIS_GCEntity_onUpdate00);
	tolua_function(tolua_S,"onAttachObject",tolua_OIS_GCEntity_onAttachObject00);
	tolua_function(tolua_S,"onDetachObject",tolua_OIS_GCEntity_onDetachObject00);
	tolua_function(tolua_S,"attachToOgreNode",tolua_OIS_GCEntity_attachToOgreNode00);
	tolua_function(tolua_S,"detachFromOgreNode",tolua_OIS_GCEntity_detachFromOgreNode00);
	tolua_function(tolua_S,"getOgreEntity",tolua_OIS_GCEntity_getOgreEntity00);
	tolua_function(tolua_S,"getModelName",tolua_OIS_GCEntity_getModelName00);
	tolua_function(tolua_S,"getEntityName",tolua_OIS_GCEntity_getEntityName00);
	tolua_function(tolua_S,"setMaterialName",tolua_OIS_GCEntity_setMaterialName00);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"OgreEntityComponentFactory","OgreEntityComponentFactory","GameComponentFactory",tolua_collect_OgreEntityComponentFactory);
#else
	tolua_cclass(tolua_S,"OgreEntityComponentFactory","OgreEntityComponentFactory","GameComponentFactory",NULL);
#endif
	tolua_beginmodule(tolua_S,"OgreEntityComponentFactory");
	tolua_function(tolua_S,"new",tolua_OIS_OgreEntityComponentFactory_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_OgreEntityComponentFactory_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_OgreEntityComponentFactory_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_OgreEntityComponentFactory_delete00);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"CameraComponentFactory","CameraComponentFactory","GameComponentFactory",tolua_collect_CameraComponentFactory);
#else
	tolua_cclass(tolua_S,"CameraComponentFactory","CameraComponentFactory","GameComponentFactory",NULL);
#endif
	tolua_beginmodule(tolua_S,"CameraComponentFactory");
	tolua_function(tolua_S,"new",tolua_OIS_CameraComponentFactory_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_CameraComponentFactory_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_CameraComponentFactory_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_CameraComponentFactory_delete00);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"NodeComponentFactory","NodeComponentFactory","GameComponentFactory",tolua_collect_NodeComponentFactory);
#else
	tolua_cclass(tolua_S,"NodeComponentFactory","NodeComponentFactory","GameComponentFactory",NULL);
#endif
	tolua_beginmodule(tolua_S,"NodeComponentFactory");
	tolua_function(tolua_S,"new",tolua_OIS_NodeComponentFactory_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_NodeComponentFactory_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_NodeComponentFactory_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_NodeComponentFactory_delete00);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S,"UserComponent","UserComponent","GameComponent",NULL);
	tolua_beginmodule(tolua_S,"UserComponent");
	tolua_function(tolua_S,"onUpdate",tolua_OIS_UserComponent_onUpdate00);
	tolua_function(tolua_S,"onAttachObject",tolua_OIS_UserComponent_onAttachObject00);
	tolua_function(tolua_S,"onDetachObject",tolua_OIS_UserComponent_onDetachObject00);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"UserComponentFactory","UserComponentFactory","GameComponentFactory",tolua_collect_UserComponentFactory);
#else
	tolua_cclass(tolua_S,"UserComponentFactory","UserComponentFactory","GameComponentFactory",NULL);
#endif
	tolua_beginmodule(tolua_S,"UserComponentFactory");
	tolua_function(tolua_S,"new",tolua_OIS_UserComponentFactory_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_UserComponentFactory_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_UserComponentFactory_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_UserComponentFactory_delete00);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S,"PhysicsBody","PhysicsBody","GameComponent",NULL);
	tolua_beginmodule(tolua_S,"PhysicsBody");
	tolua_function(tolua_S,"initBody",tolua_OIS_PhysicsBody_initBody00);
	tolua_function(tolua_S,"getCollisionID",tolua_OIS_PhysicsBody_getCollisionID00);
	tolua_function(tolua_S,"setCollisionID",tolua_OIS_PhysicsBody_setCollisionID00);
	tolua_function(tolua_S,"setMass",tolua_OIS_PhysicsBody_setMass00);
	tolua_function(tolua_S,"impulse",tolua_OIS_PhysicsBody_impulse00);
	tolua_function(tolua_S,"setNeedCallBack",tolua_OIS_PhysicsBody_setNeedCallBack00);
	tolua_function(tolua_S,"needCallBack",tolua_OIS_PhysicsBody_needCallBack00);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"PhysicsBodyComponentFactory","PhysicsBodyComponentFactory","GameComponentFactory",tolua_collect_PhysicsBodyComponentFactory);
#else
	tolua_cclass(tolua_S,"PhysicsBodyComponentFactory","PhysicsBodyComponentFactory","GameComponentFactory",NULL);
#endif
	tolua_beginmodule(tolua_S,"PhysicsBodyComponentFactory");
	tolua_function(tolua_S,"new",tolua_OIS_PhysicsBodyComponentFactory_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_PhysicsBodyComponentFactory_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_PhysicsBodyComponentFactory_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_PhysicsBodyComponentFactory_delete00);
	tolua_endmodule(tolua_S);
	tolua_function(tolua_S,"daisy_object_set_lua_function",tolua_OIS_daisy_object_set_lua_function00);
	tolua_function(tolua_S,"daisy_object_remove_vtable",tolua_OIS_daisy_object_remove_vtable00);
	tolua_endmodule(tolua_S);
	return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
TOLUA_API int luaopen_OIS (lua_State* tolua_S) {
	return tolua_OIS_open(tolua_S);
};
#endif

