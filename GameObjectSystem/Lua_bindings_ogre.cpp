/*
** Lua binding: Ogre
** Generated automatically by tolua++-1.0.92 on 05/17/12 18:05:06.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Ogre_open (lua_State* tolua_S);

#include "OGRE/Ogre.h"
#include <string>
#include "ViewOgreManager.h"
using namespace DAISY;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Ogre__Vector2 (lua_State* tolua_S)
{
 Ogre::Vector2* self = (Ogre::Vector2*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Math (lua_State* tolua_S)
{
 Ogre::Math* self = (Ogre::Math*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__ColourValue (lua_State* tolua_S)
{
 Ogre::ColourValue* self = (Ogre::ColourValue*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Angle (lua_State* tolua_S)
{
 Ogre::Angle* self = (Ogre::Angle*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Radian (lua_State* tolua_S)
{
 Ogre::Radian* self = (Ogre::Radian*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Vector4 (lua_State* tolua_S)
{
 Ogre::Vector4* self = (Ogre::Vector4*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Vector3 (lua_State* tolua_S)
{
 Ogre::Vector3* self = (Ogre::Vector3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Matrix4 (lua_State* tolua_S)
{
 Ogre::Matrix4* self = (Ogre::Matrix4*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Degree (lua_State* tolua_S)
{
 Ogre::Degree* self = (Ogre::Degree*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Quaternion (lua_State* tolua_S)
{
 Ogre::Quaternion* self = (Ogre::Quaternion*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Matrix3 (lua_State* tolua_S)
{
 Ogre::Matrix3* self = (Ogre::Matrix3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Ogre::Vector2");
 tolua_usertype(tolua_S,"Ogre::Math");
 tolua_usertype(tolua_S,"Ogre::Radian");
 tolua_usertype(tolua_S,"Ogre::Light");
 tolua_usertype(tolua_S,"Ogre::Vector4");
 tolua_usertype(tolua_S,"Ogre::SceneManager");
 tolua_usertype(tolua_S,"Ogre::SceneNode");
 tolua_usertype(tolua_S,"Ogre::Degree");
 tolua_usertype(tolua_S,"Ogre::ColourValue");
 tolua_usertype(tolua_S,"Ogre::SceneTypeMask");
 tolua_usertype(tolua_S,"Ogre::Angle");
 tolua_usertype(tolua_S,"Ogre::Vector3");
 tolua_usertype(tolua_S,"OgreManager");
 tolua_usertype(tolua_S,"Ogre::Quaternion");
 tolua_usertype(tolua_S,"Ogre::Matrix4");
 tolua_usertype(tolua_S,"Ogre::MovableObject");
 tolua_usertype(tolua_S,"Ogre::Camera");
 tolua_usertype(tolua_S,"Ogre::Matrix3");
}

/* method: new of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_new00
static int tolua_Ogre_Ogre_Radian_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float r = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
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

/* method: new_local of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_new00_local
static int tolua_Ogre_Ogre_Radian_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float r = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
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

/* method: new of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_new01
static int tolua_Ogre_Ogre_Radian_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(*d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Radian_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_new01_local
static int tolua_Ogre_Ogre_Radian_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(*d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Radian_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueDegrees of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_valueDegrees00
static int tolua_Ogre_Ogre_Radian_valueDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueDegrees'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueDegrees();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueRadians of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_valueRadians00
static int tolua_Ogre_Ogre_Radian_valueRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueRadians'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueRadians();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueAngleUnits of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_valueAngleUnits00
static int tolua_Ogre_Ogre_Radian_valueAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueAngleUnits'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueAngleUnits();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__add00
static int tolua_Ogre_Ogre_Radian__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   const Ogre::Radian& tolua_ret = (const Ogre::Radian&)  self->operator+();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Radian");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__add01
static int tolua_Ogre_Ogre_Radian__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator+(*r);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Radian__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__add02
static int tolua_Ogre_Ogre_Radian__add02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator+(*d);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Radian__add01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__sub00
static int tolua_Ogre_Ogre_Radian__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__sub01
static int tolua_Ogre_Ogre_Radian__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator-(*r);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Radian__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__sub02
static int tolua_Ogre_Ogre_Radian__sub02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator-(*d);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Radian__sub01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__mul00
static int tolua_Ogre_Ogre_Radian__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
   float f = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator*(f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__mul01
static int tolua_Ogre_Ogre_Radian__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Radian* self = (Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* f = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator*(*f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Radian__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__div00
static int tolua_Ogre_Ogre_Radian__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
   float f = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator/(f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__lt00
static int tolua_Ogre_Ogre_Radian__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*r);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator<= of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__le00
static int tolua_Ogre_Ogre_Radian__le00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<=(*r);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.le'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian__eq00
static int tolua_Ogre_Ogre_Radian__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*r);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_new00
static int tolua_Ogre_Ogre_Degree_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float d = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
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

/* method: new_local of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_new00_local
static int tolua_Ogre_Ogre_Degree_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float d = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
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

/* method: new of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_new01
static int tolua_Ogre_Ogre_Degree_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(*r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Degree_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_new01_local
static int tolua_Ogre_Ogre_Degree_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(*r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Degree_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueDegrees of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_valueDegrees00
static int tolua_Ogre_Ogre_Degree_valueDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueDegrees'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueDegrees();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueRadians of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_valueRadians00
static int tolua_Ogre_Ogre_Degree_valueRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueRadians'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueRadians();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueAngleUnits of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_valueAngleUnits00
static int tolua_Ogre_Ogre_Degree_valueAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueAngleUnits'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueAngleUnits();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__add00
static int tolua_Ogre_Ogre_Degree__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   const Ogre::Degree& tolua_ret = (const Ogre::Degree&)  self->operator+();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Degree");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__add01
static int tolua_Ogre_Ogre_Degree__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator+(*d);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Degree__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__add02
static int tolua_Ogre_Ogre_Degree__add02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator+(*r);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Degree__add01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__sub00
static int tolua_Ogre_Ogre_Degree__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__sub01
static int tolua_Ogre_Ogre_Degree__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator-(*d);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Degree__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__sub02
static int tolua_Ogre_Ogre_Degree__sub02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator-(*r);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Degree__sub01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__mul00
static int tolua_Ogre_Ogre_Degree__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
   float f = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator*(f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__mul01
static int tolua_Ogre_Ogre_Degree__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* f = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator*(*f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Degree__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__div00
static int tolua_Ogre_Ogre_Degree__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
   float f = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator/(f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__lt00
static int tolua_Ogre_Ogre_Degree__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*d);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator<= of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__le00
static int tolua_Ogre_Ogre_Degree__le00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<=(*d);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.le'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree__eq00
static int tolua_Ogre_Ogre_Degree__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*d);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Angle */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Angle_new00
static int tolua_Ogre_Ogre_Angle_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Angle",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float angle = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Angle* tolua_ret = (Ogre::Angle*)  Mtolua_new((Ogre::Angle)(angle));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Angle");
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

/* method: new_local of class  Ogre::Angle */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Angle_new00_local
static int tolua_Ogre_Ogre_Angle_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Angle",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float angle = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Angle* tolua_ret = (Ogre::Angle*)  Mtolua_new((Ogre::Angle)(angle));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Angle");
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

/* method: operatorRadian of class  Ogre::Angle */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Angle__Radian00
static int tolua_Ogre_Ogre_Angle__Radian00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Angle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Angle* self = (const Ogre::Angle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operatorRadian'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator  Ogre::Radian();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Radian'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operatorDegree of class  Ogre::Angle */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Angle__Degree00
static int tolua_Ogre_Ogre_Angle__Degree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Angle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Angle* self = (const Ogre::Angle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operatorDegree'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator  Ogre::Degree();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Degree'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_new00
static int tolua_Ogre_Ogre_Math_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int trigTableSize = ((unsigned int)  tolua_tonumber(tolua_S,2,4096));
  {
   Ogre::Math* tolua_ret = (Ogre::Math*)  Mtolua_new((Ogre::Math)(trigTableSize));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Math");
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

/* method: new_local of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_new00_local
static int tolua_Ogre_Ogre_Math_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int trigTableSize = ((unsigned int)  tolua_tonumber(tolua_S,2,4096));
  {
   Ogre::Math* tolua_ret = (Ogre::Math*)  Mtolua_new((Ogre::Math)(trigTableSize));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Math");
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

/* method: delete of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_delete00
static int tolua_Ogre_Ogre_Math_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Math* self = (Ogre::Math*)  tolua_tousertype(tolua_S,1,0);
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

/* method: DegreesToRadians of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_DegreesToRadians00
static int tolua_Ogre_Ogre_Math_DegreesToRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float degrees = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::DegreesToRadians(degrees);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DegreesToRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RadiansToDegrees of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_RadiansToDegrees00
static int tolua_Ogre_Ogre_Math_RadiansToDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float radians = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::RadiansToDegrees(radians);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RadiansToDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngleUnit of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_setAngleUnit00
static int tolua_Ogre_Ogre_Math_setAngleUnit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Math::AngleUnit unit = ((Ogre::Math::AngleUnit) (int)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Math::setAngleUnit(unit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngleUnit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngleUnit of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_getAngleUnit00
static int tolua_Ogre_Ogre_Math_getAngleUnit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Math::AngleUnit tolua_ret = (Ogre::Math::AngleUnit)  Ogre::Math::getAngleUnit();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngleUnit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AngleUnitsToRadians of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_AngleUnitsToRadians00
static int tolua_Ogre_Ogre_Math_AngleUnitsToRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float units = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::AngleUnitsToRadians(units);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AngleUnitsToRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RadiansToAngleUnits of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_RadiansToAngleUnits00
static int tolua_Ogre_Ogre_Math_RadiansToAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float radians = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::RadiansToAngleUnits(radians);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RadiansToAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AngleUnitsToDegrees of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_AngleUnitsToDegrees00
static int tolua_Ogre_Ogre_Math_AngleUnitsToDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float units = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::AngleUnitsToDegrees(units);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AngleUnitsToDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DegreesToAngleUnits of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_DegreesToAngleUnits00
static int tolua_Ogre_Ogre_Math_DegreesToAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float degrees = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::DegreesToAngleUnits(degrees);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DegreesToAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pointInTri2D of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_pointInTri2D00
static int tolua_Ogre_Ogre_Math_pointInTri2D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* p = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector2* a = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector2* b = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,4,0));
  const Ogre::Vector2* c = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::pointInTri2D(*p,*a,*b,*c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pointInTri2D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pointInTri3D of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_pointInTri3D00
static int tolua_Ogre_Ogre_Math_pointInTri3D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* p = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* a = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* b = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  const Ogre::Vector3* c = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,5,0));
  const Ogre::Vector3* normal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,6,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::pointInTri3D(*p,*a,*b,*c,*normal);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pointInTri3D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateTangentSpaceVector of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_calculateTangentSpaceVector00
static int tolua_Ogre_Ogre_Math_calculateTangentSpaceVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* position1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* position2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* position3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
   float u1 = ((  float)  tolua_tonumber(tolua_S,5,0));
   float v1 = ((  float)  tolua_tonumber(tolua_S,6,0));
   float u2 = ((  float)  tolua_tonumber(tolua_S,7,0));
   float v2 = ((  float)  tolua_tonumber(tolua_S,8,0));
   float u3 = ((  float)  tolua_tonumber(tolua_S,9,0));
   float v3 = ((  float)  tolua_tonumber(tolua_S,10,0));
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  Ogre::Math::calculateTangentSpaceVector(*position1,*position2,*position3,u1,v1,u2,v2,u3,v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateTangentSpaceVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateFaceNormal of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_calculateFaceNormal00
static int tolua_Ogre_Ogre_Math_calculateFaceNormal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* v1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* v2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* v3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  Ogre::Math::calculateFaceNormal(*v1,*v2,*v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateFaceNormal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateBasicFaceNormal of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_calculateBasicFaceNormal00
static int tolua_Ogre_Ogre_Math_calculateBasicFaceNormal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* v1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* v2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* v3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  Ogre::Math::calculateBasicFaceNormal(*v1,*v2,*v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateBasicFaceNormal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateFaceNormalWithoutNormalize of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_calculateFaceNormalWithoutNormalize00
static int tolua_Ogre_Ogre_Math_calculateFaceNormalWithoutNormalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* v1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* v2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* v3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  Ogre::Math::calculateFaceNormalWithoutNormalize(*v1,*v2,*v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateFaceNormalWithoutNormalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateBasicFaceNormalWithoutNormalize of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_calculateBasicFaceNormalWithoutNormalize00
static int tolua_Ogre_Ogre_Math_calculateBasicFaceNormalWithoutNormalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* v1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* v2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* v3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  Ogre::Math::calculateBasicFaceNormalWithoutNormalize(*v1,*v2,*v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateBasicFaceNormalWithoutNormalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gaussianDistribution of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_gaussianDistribution00
static int tolua_Ogre_Ogre_Math_gaussianDistribution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float offset = ((  float)  tolua_tonumber(tolua_S,3,0.0f));
   float scale = ((  float)  tolua_tonumber(tolua_S,4,1.0f));
  {
   float tolua_ret = (float)  Ogre::Math::gaussianDistribution(x,offset,scale);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gaussianDistribution'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeViewMatrix of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Math_makeViewMatrix00
static int tolua_Ogre_Ogre_Math_makeViewMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,4,"const Ogre::Matrix4",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Quaternion* orientation = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Matrix4* reflectMatrix = ((const Ogre::Matrix4*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  Ogre::Math::makeViewMatrix(*position,*orientation,reflectMatrix);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeViewMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_new00
static int tolua_Ogre_Ogre_Matrix4_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Matrix4* tolua_ret = (Ogre::Matrix4*)  Mtolua_new((Ogre::Matrix4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix4");
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

/* method: new_local of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_new00_local
static int tolua_Ogre_Ogre_Matrix4_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Matrix4* tolua_ret = (Ogre::Matrix4*)  Mtolua_new((Ogre::Matrix4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix4");
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

/* method: new of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_new01
static int tolua_Ogre_Ogre_Matrix4_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,13,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,14,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,15,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,16,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,17,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,18,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float m00 = ((  float)  tolua_tonumber(tolua_S,2,0));
   float m01 = ((  float)  tolua_tonumber(tolua_S,3,0));
   float m02 = ((  float)  tolua_tonumber(tolua_S,4,0));
   float m03 = ((  float)  tolua_tonumber(tolua_S,5,0));
   float m10 = ((  float)  tolua_tonumber(tolua_S,6,0));
   float m11 = ((  float)  tolua_tonumber(tolua_S,7,0));
   float m12 = ((  float)  tolua_tonumber(tolua_S,8,0));
   float m13 = ((  float)  tolua_tonumber(tolua_S,9,0));
   float m20 = ((  float)  tolua_tonumber(tolua_S,10,0));
   float m21 = ((  float)  tolua_tonumber(tolua_S,11,0));
   float m22 = ((  float)  tolua_tonumber(tolua_S,12,0));
   float m23 = ((  float)  tolua_tonumber(tolua_S,13,0));
   float m30 = ((  float)  tolua_tonumber(tolua_S,14,0));
   float m31 = ((  float)  tolua_tonumber(tolua_S,15,0));
   float m32 = ((  float)  tolua_tonumber(tolua_S,16,0));
   float m33 = ((  float)  tolua_tonumber(tolua_S,17,0));
  {
   Ogre::Matrix4* tolua_ret = (Ogre::Matrix4*)  Mtolua_new((Ogre::Matrix4)(m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23,m30,m31,m32,m33));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_new01_local
static int tolua_Ogre_Ogre_Matrix4_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,13,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,14,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,15,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,16,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,17,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,18,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float m00 = ((  float)  tolua_tonumber(tolua_S,2,0));
   float m01 = ((  float)  tolua_tonumber(tolua_S,3,0));
   float m02 = ((  float)  tolua_tonumber(tolua_S,4,0));
   float m03 = ((  float)  tolua_tonumber(tolua_S,5,0));
   float m10 = ((  float)  tolua_tonumber(tolua_S,6,0));
   float m11 = ((  float)  tolua_tonumber(tolua_S,7,0));
   float m12 = ((  float)  tolua_tonumber(tolua_S,8,0));
   float m13 = ((  float)  tolua_tonumber(tolua_S,9,0));
   float m20 = ((  float)  tolua_tonumber(tolua_S,10,0));
   float m21 = ((  float)  tolua_tonumber(tolua_S,11,0));
   float m22 = ((  float)  tolua_tonumber(tolua_S,12,0));
   float m23 = ((  float)  tolua_tonumber(tolua_S,13,0));
   float m30 = ((  float)  tolua_tonumber(tolua_S,14,0));
   float m31 = ((  float)  tolua_tonumber(tolua_S,15,0));
   float m32 = ((  float)  tolua_tonumber(tolua_S,16,0));
   float m33 = ((  float)  tolua_tonumber(tolua_S,17,0));
  {
   Ogre::Matrix4* tolua_ret = (Ogre::Matrix4*)  Mtolua_new((Ogre::Matrix4)(m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23,m30,m31,m32,m33));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_new02
static int tolua_Ogre_Ogre_Matrix4_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix3* m3x3 = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Matrix4* tolua_ret = (Ogre::Matrix4*)  Mtolua_new((Ogre::Matrix4)(*m3x3));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_new02_local
static int tolua_Ogre_Ogre_Matrix4_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix3* m3x3 = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Matrix4* tolua_ret = (Ogre::Matrix4*)  Mtolua_new((Ogre::Matrix4)(*m3x3));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_new03
static int tolua_Ogre_Ogre_Matrix4_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* rot = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Matrix4* tolua_ret = (Ogre::Matrix4*)  Mtolua_new((Ogre::Matrix4)(*rot));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_new03_local
static int tolua_Ogre_Ogre_Matrix4_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* rot = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Matrix4* tolua_ret = (Ogre::Matrix4*)  Mtolua_new((Ogre::Matrix4)(*rot));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: swap of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_swap00
static int tolua_Ogre_Ogre_Matrix4_swap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Matrix4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix4* self = (Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Matrix4* other = ((Ogre::Matrix4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'swap'", NULL);
#endif
  {
   self->swap(*other);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'swap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: concatenate of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_concatenate00
static int tolua_Ogre_Ogre_Matrix4_concatenate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix4* m2 = ((const Ogre::Matrix4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'concatenate'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->concatenate(*m2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'concatenate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4__mul00
static int tolua_Ogre_Ogre_Matrix4__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix4* m2 = ((const Ogre::Matrix4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->operator*(*m2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4__mul01
static int tolua_Ogre_Ogre_Matrix4__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator*(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4__mul02
static int tolua_Ogre_Ogre_Matrix4__mul02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector4* v = ((const Ogre::Vector4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  self->operator*(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4__mul01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4__add00
static int tolua_Ogre_Ogre_Matrix4__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix4* m2 = ((const Ogre::Matrix4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->operator+(*m2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4__sub00
static int tolua_Ogre_Ogre_Matrix4__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix4* m2 = ((const Ogre::Matrix4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->operator-(*m2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4__eq00
static int tolua_Ogre_Ogre_Matrix4__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix4* m2 = ((const Ogre::Matrix4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*m2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transpose of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_transpose00
static int tolua_Ogre_Ogre_Matrix4_transpose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'transpose'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->transpose();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transpose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTrans of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_setTrans00
static int tolua_Ogre_Ogre_Matrix4_setTrans00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix4* self = (Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTrans'", NULL);
#endif
  {
   self->setTrans(*v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTrans'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTrans of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_getTrans00
static int tolua_Ogre_Ogre_Matrix4_getTrans00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTrans'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getTrans();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTrans'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeTrans of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_makeTrans00
static int tolua_Ogre_Ogre_Matrix4_makeTrans00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix4* self = (Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeTrans'", NULL);
#endif
  {
   self->makeTrans(*v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeTrans'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeTrans of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_makeTrans01
static int tolua_Ogre_Ogre_Matrix4_makeTrans01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Matrix4* self = (Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
   float tx = ((  float)  tolua_tonumber(tolua_S,2,0));
   float ty = ((  float)  tolua_tonumber(tolua_S,3,0));
   float tz = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeTrans'", NULL);
#endif
  {
   self->makeTrans(tx,ty,tz);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_makeTrans00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTrans of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_getTrans01
static int tolua_Ogre_Ogre_Matrix4_getTrans01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  Ogre::Matrix4::getTrans(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_getTrans00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTrans of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_getTrans02
static int tolua_Ogre_Ogre_Matrix4_getTrans02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float t_x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float t_y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float t_z = ((  float)  tolua_tonumber(tolua_S,4,0));
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  Ogre::Matrix4::getTrans(t_x,t_y,t_z);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_getTrans01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_setScale00
static int tolua_Ogre_Ogre_Matrix4_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix4* self = (Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(*v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScale of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_getScale00
static int tolua_Ogre_Ogre_Matrix4_getScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  Ogre::Matrix4::getScale(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScale of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_getScale01
static int tolua_Ogre_Ogre_Matrix4_getScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float s_x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float s_y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float s_z = ((  float)  tolua_tonumber(tolua_S,4,0));
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  Ogre::Matrix4::getScale(s_x,s_y,s_z);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_getScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract3x3Matrix of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_extract3x3Matrix00
static int tolua_Ogre_Ogre_Matrix4_extract3x3Matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Matrix3* m3x3 = ((Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract3x3Matrix'", NULL);
#endif
  {
   self->extract3x3Matrix(*m3x3);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'extract3x3Matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasScale of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_hasScale00
static int tolua_Ogre_Ogre_Matrix4_hasScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasScale'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasScale();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasNegativeScale of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_hasNegativeScale00
static int tolua_Ogre_Ogre_Matrix4_hasNegativeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasNegativeScale'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasNegativeScale();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasNegativeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: extractQuaternion of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_extractQuaternion00
static int tolua_Ogre_Ogre_Matrix4_extractQuaternion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extractQuaternion'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->extractQuaternion();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'extractQuaternion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Matrix4_ZERO
static int tolua_get_Ogre__Matrix4_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Matrix4::ZERO,"const Ogre::Matrix4");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: IDENTITY of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Matrix4_IDENTITY
static int tolua_get_Ogre__Matrix4_IDENTITY(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Matrix4::IDENTITY,"const Ogre::Matrix4");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: CLIPSPACE2DTOIMAGESPACE of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Matrix4_CLIPSPACE2DTOIMAGESPACE
static int tolua_get_Ogre__Matrix4_CLIPSPACE2DTOIMAGESPACE(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Matrix4::CLIPSPACE2DTOIMAGESPACE,"const Ogre::Matrix4");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4__mul03
static int tolua_Ogre_Ogre_Matrix4__mul03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
   float scalar = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->operator*(scalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4__mul02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: adjoint of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_adjoint00
static int tolua_Ogre_Ogre_Matrix4_adjoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'adjoint'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->adjoint();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'adjoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: determinant of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_determinant00
static int tolua_Ogre_Ogre_Matrix4_determinant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'determinant'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->determinant();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'determinant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: inverse of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_inverse00
static int tolua_Ogre_Ogre_Matrix4_inverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'inverse'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->inverse();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'inverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeTransform of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_makeTransform00
static int tolua_Ogre_Ogre_Matrix4_makeTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix4* self = (Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* scale = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* orientation = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeTransform'", NULL);
#endif
  {
   self->makeTransform(*position,*scale,*orientation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeInverseTransform of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_makeInverseTransform00
static int tolua_Ogre_Ogre_Matrix4_makeInverseTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix4* self = (Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* scale = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* orientation = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeInverseTransform'", NULL);
#endif
  {
   self->makeInverseTransform(*position,*scale,*orientation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeInverseTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: decomposition of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_decomposition00
static int tolua_Ogre_Ogre_Matrix4_decomposition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3* position = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Vector3* scale = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Quaternion* orientation = ((Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'decomposition'", NULL);
#endif
  {
   self->decomposition(*position,*scale,*orientation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'decomposition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAffine of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_isAffine00
static int tolua_Ogre_Ogre_Matrix4_isAffine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAffine'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAffine();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAffine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: inverseAffine of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_inverseAffine00
static int tolua_Ogre_Ogre_Matrix4_inverseAffine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'inverseAffine'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->inverseAffine();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'inverseAffine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: concatenateAffine of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_concatenateAffine00
static int tolua_Ogre_Ogre_Matrix4_concatenateAffine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix4* m2 = ((const Ogre::Matrix4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'concatenateAffine'", NULL);
#endif
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  self->concatenateAffine(*m2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'concatenateAffine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transformAffine of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_transformAffine00
static int tolua_Ogre_Ogre_Matrix4_transformAffine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'transformAffine'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->transformAffine(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transformAffine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transformAffine of class  Ogre::Matrix4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix4_transformAffine01
static int tolua_Ogre_Ogre_Matrix4_transformAffine01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix4* self = (const Ogre::Matrix4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector4* v = ((const Ogre::Vector4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'transformAffine'", NULL);
#endif
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  self->transformAffine(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix4_transformAffine00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_new00
static int tolua_Ogre_Ogre_Matrix3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Matrix3* tolua_ret = (Ogre::Matrix3*)  Mtolua_new((Ogre::Matrix3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix3");
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

/* method: new_local of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_new00_local
static int tolua_Ogre_Ogre_Matrix3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Matrix3* tolua_ret = (Ogre::Matrix3*)  Mtolua_new((Ogre::Matrix3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix3");
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

/* method: new of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_new01
static int tolua_Ogre_Ogre_Matrix3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float fEntry00 = ((  float)  tolua_tonumber(tolua_S,2,0));
   float fEntry01 = ((  float)  tolua_tonumber(tolua_S,3,0));
   float fEntry02 = ((  float)  tolua_tonumber(tolua_S,4,0));
   float fEntry10 = ((  float)  tolua_tonumber(tolua_S,5,0));
   float fEntry11 = ((  float)  tolua_tonumber(tolua_S,6,0));
   float fEntry12 = ((  float)  tolua_tonumber(tolua_S,7,0));
   float fEntry20 = ((  float)  tolua_tonumber(tolua_S,8,0));
   float fEntry21 = ((  float)  tolua_tonumber(tolua_S,9,0));
   float fEntry22 = ((  float)  tolua_tonumber(tolua_S,10,0));
  {
   Ogre::Matrix3* tolua_ret = (Ogre::Matrix3*)  Mtolua_new((Ogre::Matrix3)(fEntry00,fEntry01,fEntry02,fEntry10,fEntry11,fEntry12,fEntry20,fEntry21,fEntry22));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_new01_local
static int tolua_Ogre_Ogre_Matrix3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float fEntry00 = ((  float)  tolua_tonumber(tolua_S,2,0));
   float fEntry01 = ((  float)  tolua_tonumber(tolua_S,3,0));
   float fEntry02 = ((  float)  tolua_tonumber(tolua_S,4,0));
   float fEntry10 = ((  float)  tolua_tonumber(tolua_S,5,0));
   float fEntry11 = ((  float)  tolua_tonumber(tolua_S,6,0));
   float fEntry12 = ((  float)  tolua_tonumber(tolua_S,7,0));
   float fEntry20 = ((  float)  tolua_tonumber(tolua_S,8,0));
   float fEntry21 = ((  float)  tolua_tonumber(tolua_S,9,0));
   float fEntry22 = ((  float)  tolua_tonumber(tolua_S,10,0));
  {
   Ogre::Matrix3* tolua_ret = (Ogre::Matrix3*)  Mtolua_new((Ogre::Matrix3)(fEntry00,fEntry01,fEntry02,fEntry10,fEntry11,fEntry12,fEntry20,fEntry21,fEntry22));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: swap of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_swap00
static int tolua_Ogre_Ogre_Matrix3_swap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Matrix3* other = ((Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'swap'", NULL);
#endif
  {
   self->swap(*other);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'swap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3__add00
static int tolua_Ogre_Ogre_Matrix3__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix3* rkMatrix = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Matrix3 tolua_ret = (Ogre::Matrix3)  self->operator+(*rkMatrix);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3__sub00
static int tolua_Ogre_Ogre_Matrix3__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix3* rkMatrix = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Matrix3 tolua_ret = (Ogre::Matrix3)  self->operator-(*rkMatrix);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3__mul00
static int tolua_Ogre_Ogre_Matrix3__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix3* rkMatrix = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Matrix3 tolua_ret = (Ogre::Matrix3)  self->operator*(*rkMatrix);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3__sub01
static int tolua_Ogre_Ogre_Matrix3__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Matrix3 tolua_ret = (Ogre::Matrix3)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix3__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3__mul01
static int tolua_Ogre_Ogre_Matrix3__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator*(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix3__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3__mul02
static int tolua_Ogre_Ogre_Matrix3__mul02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
   float fScalar = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Matrix3 tolua_ret = (Ogre::Matrix3)  self->operator*(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix3__mul01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Transpose of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_Transpose00
static int tolua_Ogre_Ogre_Matrix3_Transpose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Transpose'", NULL);
#endif
  {
   Ogre::Matrix3 tolua_ret = (Ogre::Matrix3)  self->Transpose();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Transpose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Inverse of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_Inverse00
static int tolua_Ogre_Ogre_Matrix3_Inverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Matrix3* rkInverse = ((Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
   float fTolerance = ((  float)  tolua_tonumber(tolua_S,3,1e-06));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Inverse'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Inverse(*rkInverse,fTolerance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Inverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Inverse of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_Inverse01
static int tolua_Ogre_Ogre_Matrix3_Inverse01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
   float fTolerance = ((  float)  tolua_tonumber(tolua_S,2,1e-06));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Inverse'", NULL);
#endif
  {
   Ogre::Matrix3 tolua_ret = (Ogre::Matrix3)  self->Inverse(fTolerance);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix3_Inverse00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Determinant of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_Determinant00
static int tolua_Ogre_Ogre_Matrix3_Determinant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Determinant'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->Determinant();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Determinant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SingularValueDecomposition of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_SingularValueDecomposition00
static int tolua_Ogre_Ogre_Matrix3_SingularValueDecomposition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Matrix3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Matrix3* rkL = ((Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Vector3* rkS = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Matrix3* rkR = ((Ogre::Matrix3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SingularValueDecomposition'", NULL);
#endif
  {
   self->SingularValueDecomposition(*rkL,*rkS,*rkR);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SingularValueDecomposition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SingularValueComposition of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_SingularValueComposition00
static int tolua_Ogre_Ogre_Matrix3_SingularValueComposition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix3* rkL = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkS = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Matrix3* rkR = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SingularValueComposition'", NULL);
#endif
  {
   self->SingularValueComposition(*rkL,*rkS,*rkR);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SingularValueComposition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Orthonormalize of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_Orthonormalize00
static int tolua_Ogre_Ogre_Matrix3_Orthonormalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Orthonormalize'", NULL);
#endif
  {
   self->Orthonormalize();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Orthonormalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: QDUDecomposition of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_QDUDecomposition00
static int tolua_Ogre_Ogre_Matrix3_QDUDecomposition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Matrix3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Matrix3* rkQ = ((Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Vector3* rkD = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Vector3* rkU = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'QDUDecomposition'", NULL);
#endif
  {
   self->QDUDecomposition(*rkQ,*rkD,*rkU);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'QDUDecomposition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SpectralNorm of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_SpectralNorm00
static int tolua_Ogre_Ogre_Matrix3_SpectralNorm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SpectralNorm'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->SpectralNorm();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SpectralNorm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAxisAngle of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_ToAxisAngle00
static int tolua_Ogre_Ogre_Matrix3_ToAxisAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3* rkAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Radian* rfAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAxisAngle'", NULL);
#endif
  {
   self->ToAxisAngle(*rkAxis,*rfAngle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToAxisAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAxisAngle of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_ToAxisAngle01
static int tolua_Ogre_Ogre_Matrix3_ToAxisAngle01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3* rkAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Degree* rfAngle = ((Ogre::Degree*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAxisAngle'", NULL);
#endif
  {
   self->ToAxisAngle(*rkAxis,*rfAngle);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Matrix3_ToAxisAngle00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromAxisAngle of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_FromAxisAngle00
static int tolua_Ogre_Ogre_Matrix3_FromAxisAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* fRadians = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromAxisAngle'", NULL);
#endif
  {
   self->FromAxisAngle(*rkAxis,*fRadians);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromAxisAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToEulerAnglesXYZ of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_ToEulerAnglesXYZ00
static int tolua_Ogre_Ogre_Matrix3_ToEulerAnglesXYZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Radian* rfYAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Radian* rfPAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Radian* rfRAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToEulerAnglesXYZ'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ToEulerAnglesXYZ(*rfYAngle,*rfPAngle,*rfRAngle);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToEulerAnglesXYZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToEulerAnglesXZY of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_ToEulerAnglesXZY00
static int tolua_Ogre_Ogre_Matrix3_ToEulerAnglesXZY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Radian* rfYAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Radian* rfPAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Radian* rfRAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToEulerAnglesXZY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ToEulerAnglesXZY(*rfYAngle,*rfPAngle,*rfRAngle);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToEulerAnglesXZY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToEulerAnglesYXZ of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_ToEulerAnglesYXZ00
static int tolua_Ogre_Ogre_Matrix3_ToEulerAnglesYXZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Radian* rfYAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Radian* rfPAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Radian* rfRAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToEulerAnglesYXZ'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ToEulerAnglesYXZ(*rfYAngle,*rfPAngle,*rfRAngle);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToEulerAnglesYXZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToEulerAnglesYZX of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_ToEulerAnglesYZX00
static int tolua_Ogre_Ogre_Matrix3_ToEulerAnglesYZX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Radian* rfYAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Radian* rfPAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Radian* rfRAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToEulerAnglesYZX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ToEulerAnglesYZX(*rfYAngle,*rfPAngle,*rfRAngle);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToEulerAnglesYZX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToEulerAnglesZXY of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_ToEulerAnglesZXY00
static int tolua_Ogre_Ogre_Matrix3_ToEulerAnglesZXY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Radian* rfYAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Radian* rfPAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Radian* rfRAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToEulerAnglesZXY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ToEulerAnglesZXY(*rfYAngle,*rfPAngle,*rfRAngle);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToEulerAnglesZXY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToEulerAnglesZYX of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_ToEulerAnglesZYX00
static int tolua_Ogre_Ogre_Matrix3_ToEulerAnglesZYX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Radian* rfYAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Radian* rfPAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Radian* rfRAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToEulerAnglesZYX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ToEulerAnglesZYX(*rfYAngle,*rfPAngle,*rfRAngle);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToEulerAnglesZYX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromEulerAnglesXYZ of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_FromEulerAnglesXYZ00
static int tolua_Ogre_Ogre_Matrix3_FromEulerAnglesXYZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* fYAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* fPAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Radian* fRAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromEulerAnglesXYZ'", NULL);
#endif
  {
   self->FromEulerAnglesXYZ(*fYAngle,*fPAngle,*fRAngle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromEulerAnglesXYZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromEulerAnglesXZY of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_FromEulerAnglesXZY00
static int tolua_Ogre_Ogre_Matrix3_FromEulerAnglesXZY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* fYAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* fPAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Radian* fRAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromEulerAnglesXZY'", NULL);
#endif
  {
   self->FromEulerAnglesXZY(*fYAngle,*fPAngle,*fRAngle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromEulerAnglesXZY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromEulerAnglesYXZ of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_FromEulerAnglesYXZ00
static int tolua_Ogre_Ogre_Matrix3_FromEulerAnglesYXZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* fYAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* fPAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Radian* fRAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromEulerAnglesYXZ'", NULL);
#endif
  {
   self->FromEulerAnglesYXZ(*fYAngle,*fPAngle,*fRAngle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromEulerAnglesYXZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromEulerAnglesYZX of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_FromEulerAnglesYZX00
static int tolua_Ogre_Ogre_Matrix3_FromEulerAnglesYZX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* fYAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* fPAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Radian* fRAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromEulerAnglesYZX'", NULL);
#endif
  {
   self->FromEulerAnglesYZX(*fYAngle,*fPAngle,*fRAngle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromEulerAnglesYZX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromEulerAnglesZXY of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_FromEulerAnglesZXY00
static int tolua_Ogre_Ogre_Matrix3_FromEulerAnglesZXY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* fYAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* fPAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Radian* fRAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromEulerAnglesZXY'", NULL);
#endif
  {
   self->FromEulerAnglesZXY(*fYAngle,*fPAngle,*fRAngle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromEulerAnglesZXY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromEulerAnglesZYX of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_FromEulerAnglesZYX00
static int tolua_Ogre_Ogre_Matrix3_FromEulerAnglesZYX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Matrix3* self = (Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* fYAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* fPAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Radian* fRAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromEulerAnglesZYX'", NULL);
#endif
  {
   self->FromEulerAnglesZYX(*fYAngle,*fPAngle,*fRAngle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromEulerAnglesZYX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EigenSolveSymmetric of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_EigenSolveSymmetric00
static int tolua_Ogre_Ogre_Matrix3_EigenSolveSymmetric00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_istable(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
   float afEigenvalue[3];
  Ogre::Vector3 akEigenvector[3];
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EigenSolveSymmetric'", NULL);
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    afEigenvalue[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,3,"Ogre::Vector3",3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    akEigenvector[i] = *((Ogre::Vector3*)  tolua_tofieldusertype(tolua_S,3,i+1,0));
   }
  }
  {
   self->EigenSolveSymmetric(afEigenvalue,akEigenvector);
  }
  {
   int i;
   for(i=0; i<3;i++)
    tolua_pushfieldnumber(tolua_S,2,i+1,(lua_Number) afEigenvalue[i]);
  }
  {
   int i;
   for(i=0; i<3;i++)
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(akEigenvector[i]));
    tolua_pushfieldusertype_and_takeownership(tolua_S,3,i+1,tolua_obj,"Ogre::Vector3");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)& akEigenvector[i],sizeof(Ogre::Vector3));
    tolua_pushfieldusertype(tolua_S,3,i+1,tolua_obj,"Ogre::Vector3");
#endif
   }
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EigenSolveSymmetric'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TensorProduct of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_TensorProduct00
static int tolua_Ogre_Ogre_Matrix3_TensorProduct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Matrix3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* rkU = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkV = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Matrix3* rkProduct = ((Ogre::Matrix3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Matrix3::TensorProduct(*rkU,*rkV,*rkProduct);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TensorProduct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasScale of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Matrix3_hasScale00
static int tolua_Ogre_Ogre_Matrix3_hasScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Matrix3* self = (const Ogre::Matrix3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasScale'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasScale();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: EPSILON of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Matrix3_EPSILON
static int tolua_get_Ogre__Matrix3_EPSILON(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Matrix3::EPSILON);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Matrix3_ZERO
static int tolua_get_Ogre__Matrix3_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Matrix3::ZERO,"const Ogre::Matrix3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: IDENTITY of class  Ogre::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Matrix3_IDENTITY
static int tolua_get_Ogre__Matrix3_IDENTITY(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Matrix3::IDENTITY,"const Ogre::Matrix3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_x
static int tolua_get_Ogre__Vector3_x(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector3_x
static int tolua_set_Ogre__Vector3_x(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_y
static int tolua_get_Ogre__Vector3_y(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector3_y
static int tolua_set_Ogre__Vector3_y(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_z
static int tolua_get_Ogre__Vector3_z(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector3_z
static int tolua_set_Ogre__Vector3_z(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new00
static int tolua_Ogre_Ogre_Vector3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
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

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new00_local
static int tolua_Ogre_Ogre_Vector3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
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

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new01
static int tolua_Ogre_Ogre_Vector3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  const float fZ = ((const float)  tolua_tonumber(tolua_S,4,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new01_local
static int tolua_Ogre_Ogre_Vector3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  const float fZ = ((const float)  tolua_tonumber(tolua_S,4,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new02
static int tolua_Ogre_Ogre_Vector3_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float afCoordinate[3];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    afCoordinate[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new02_local
static int tolua_Ogre_Ogre_Vector3_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float afCoordinate[3];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    afCoordinate[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new03
static int tolua_Ogre_Ogre_Vector3_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int afCoordinate[3];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    afCoordinate[i] = ((int)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new03_local
static int tolua_Ogre_Ogre_Vector3_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int afCoordinate[3];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    afCoordinate[i] = ((int)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new04
static int tolua_Ogre_Ogre_Vector3_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scaler = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(scaler));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new04_local
static int tolua_Ogre_Ogre_Vector3_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scaler = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(scaler));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: swap of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_swap00
static int tolua_Ogre_Ogre_Vector3_swap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3* other = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'swap'", NULL);
#endif
  {
   self->swap(*other);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'swap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__eq00
static int tolua_Ogre_Ogre_Vector3__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*rkVector);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__add00
static int tolua_Ogre_Ogre_Vector3__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator+(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__sub00
static int tolua_Ogre_Ogre_Vector3__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator-(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__mul00
static int tolua_Ogre_Ogre_Vector3__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const float fScalar = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator*(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__mul01
static int tolua_Ogre_Ogre_Vector3__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator*(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__div00
static int tolua_Ogre_Ogre_Vector3__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const float fScalar = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator/(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__div01
static int tolua_Ogre_Ogre_Vector3__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator/(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__add01
static int tolua_Ogre_Ogre_Vector3__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->operator+();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__sub01
static int tolua_Ogre_Ogre_Vector3__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_length00
static int tolua_Ogre_Ogre_Vector3_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: squaredLength of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_squaredLength00
static int tolua_Ogre_Ogre_Vector3_squaredLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'squaredLength'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->squaredLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'squaredLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: distance of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_distance00
static int tolua_Ogre_Ogre_Vector3_distance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'distance'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->distance(*rhs);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'distance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: squaredDistance of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_squaredDistance00
static int tolua_Ogre_Ogre_Vector3_squaredDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'squaredDistance'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->squaredDistance(*rhs);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'squaredDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dotProduct of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_dotProduct00
static int tolua_Ogre_Ogre_Vector3_dotProduct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dotProduct'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->dotProduct(*vec);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dotProduct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: absDotProduct of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_absDotProduct00
static int tolua_Ogre_Ogre_Vector3_absDotProduct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'absDotProduct'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->absDotProduct(*vec);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'absDotProduct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalise of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_normalise00
static int tolua_Ogre_Ogre_Vector3_normalise00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalise'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->normalise();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalise'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: crossProduct of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_crossProduct00
static int tolua_Ogre_Ogre_Vector3_crossProduct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'crossProduct'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->crossProduct(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'crossProduct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: midPoint of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_midPoint00
static int tolua_Ogre_Ogre_Vector3_midPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'midPoint'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->midPoint(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'midPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3__lt00
static int tolua_Ogre_Ogre_Vector3__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*rhs);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeFloor of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_makeFloor00
static int tolua_Ogre_Ogre_Vector3_makeFloor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* cmp = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeFloor'", NULL);
#endif
  {
   self->makeFloor(*cmp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeFloor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeCeil of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_makeCeil00
static int tolua_Ogre_Ogre_Vector3_makeCeil00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* cmp = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeCeil'", NULL);
#endif
  {
   self->makeCeil(*cmp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeCeil'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: perpendicular of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_perpendicular00
static int tolua_Ogre_Ogre_Vector3_perpendicular00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'perpendicular'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->perpendicular();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'perpendicular'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: randomDeviant of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_randomDeviant00
static int tolua_Ogre_Ogre_Vector3_randomDeviant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'randomDeviant'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->randomDeviant(*angle);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'randomDeviant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: randomDeviant of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_randomDeviant01
static int tolua_Ogre_Ogre_Vector3_randomDeviant01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* up = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'randomDeviant'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->randomDeviant(*angle,*up);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_randomDeviant00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: angleBetween of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_angleBetween00
static int tolua_Ogre_Ogre_Vector3_angleBetween00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* dest = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'angleBetween'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->angleBetween(*dest);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'angleBetween'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotationTo of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_getRotationTo00
static int tolua_Ogre_Ogre_Vector3_getRotationTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* dest = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotationTo'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->getRotationTo(*dest);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotationTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotationTo of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_getRotationTo01
static int tolua_Ogre_Ogre_Vector3_getRotationTo01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* dest = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* fallbackAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotationTo'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->getRotationTo(*dest,*fallbackAxis);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_getRotationTo00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: isZeroLength of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_isZeroLength00
static int tolua_Ogre_Ogre_Vector3_isZeroLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isZeroLength'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isZeroLength();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isZeroLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalisedCopy of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_normalisedCopy00
static int tolua_Ogre_Ogre_Vector3_normalisedCopy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalisedCopy'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->normalisedCopy();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalisedCopy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reflect of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_reflect00
static int tolua_Ogre_Ogre_Vector3_reflect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* normal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reflect'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->reflect(*normal);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reflect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: positionEquals of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_positionEquals00
static int tolua_Ogre_Ogre_Vector3_positionEquals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
   float tolerance = ((  float)  tolua_tonumber(tolua_S,3,1e-03));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'positionEquals'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->positionEquals(*rhs,tolerance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'positionEquals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: positionCloses of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_positionCloses00
static int tolua_Ogre_Ogre_Vector3_positionCloses00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
   float tolerance = ((  float)  tolua_tonumber(tolua_S,3,1e-03f));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'positionCloses'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->positionCloses(*rhs,tolerance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'positionCloses'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: directionEquals of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_directionEquals00
static int tolua_Ogre_Ogre_Vector3_directionEquals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* tolerance = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'directionEquals'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->directionEquals(*rhs,*tolerance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'directionEquals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isNaN of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_isNaN00
static int tolua_Ogre_Ogre_Vector3_isNaN00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isNaN'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isNaN();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isNaN'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_ZERO
static int tolua_get_Ogre__Vector3_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::ZERO,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_X of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_X
static int tolua_get_Ogre__Vector3_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_X,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_Y
static int tolua_get_Ogre__Vector3_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_Y,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_Z
static int tolua_get_Ogre__Vector3_UNIT_Z(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_Z,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_X of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_NEGATIVE_UNIT_X
static int tolua_get_Ogre__Vector3_NEGATIVE_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::NEGATIVE_UNIT_X,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_Y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Y
static int tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::NEGATIVE_UNIT_Y,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_Z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Z
static int tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Z(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::NEGATIVE_UNIT_Z,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_SCALE of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_SCALE
static int tolua_get_Ogre__Vector3_UNIT_SCALE(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_SCALE,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_x
static int tolua_get_Ogre__Vector2_x(lua_State* tolua_S)
{
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector2_x
static int tolua_set_Ogre__Vector2_x(lua_State* tolua_S)
{
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_y
static int tolua_get_Ogre__Vector2_y(lua_State* tolua_S)
{
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector2_y
static int tolua_set_Ogre__Vector2_y(lua_State* tolua_S)
{
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new00
static int tolua_Ogre_Ogre_Vector2_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
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

/* method: new_local of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new00_local
static int tolua_Ogre_Ogre_Vector2_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
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

/* method: new of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new01
static int tolua_Ogre_Ogre_Vector2_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(fX,fY));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new01_local
static int tolua_Ogre_Ogre_Vector2_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(fX,fY));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new02
static int tolua_Ogre_Ogre_Vector2_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scaler = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(scaler));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new02_local
static int tolua_Ogre_Ogre_Vector2_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scaler = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(scaler));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new03
static int tolua_Ogre_Ogre_Vector2_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float afCoordinate[2];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,2,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<2;i++)
    afCoordinate[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new03_local
static int tolua_Ogre_Ogre_Vector2_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float afCoordinate[2];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,2,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<2;i++)
    afCoordinate[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new04
static int tolua_Ogre_Ogre_Vector2_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int afCoordinate[2];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,2,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<2;i++)
    afCoordinate[i] = ((int)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new04_local
static int tolua_Ogre_Ogre_Vector2_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int afCoordinate[2];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,2,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<2;i++)
    afCoordinate[i] = ((int)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: swap of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_swap00
static int tolua_Ogre_Ogre_Vector2_swap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector2* other = ((Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'swap'", NULL);
#endif
  {
   self->swap(*other);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'swap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__eq00
static int tolua_Ogre_Ogre_Vector2__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* rkVector = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*rkVector);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__add00
static int tolua_Ogre_Ogre_Vector2__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* rkVector = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->operator+(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__sub00
static int tolua_Ogre_Ogre_Vector2__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* rkVector = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->operator-(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__mul00
static int tolua_Ogre_Ogre_Vector2__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const float fScalar = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->operator*(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__mul01
static int tolua_Ogre_Ogre_Vector2__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* rhs = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->operator*(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__div00
static int tolua_Ogre_Ogre_Vector2__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const float fScalar = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->operator/(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__div01
static int tolua_Ogre_Ogre_Vector2__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* rhs = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->operator/(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__add01
static int tolua_Ogre_Ogre_Vector2__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   const Ogre::Vector2& tolua_ret = (const Ogre::Vector2&)  self->operator+();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__sub01
static int tolua_Ogre_Ogre_Vector2__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_length00
static int tolua_Ogre_Ogre_Vector2_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: squaredLength of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_squaredLength00
static int tolua_Ogre_Ogre_Vector2_squaredLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'squaredLength'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->squaredLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'squaredLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: distance of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_distance00
static int tolua_Ogre_Ogre_Vector2_distance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* rhs = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'distance'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->distance(*rhs);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'distance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: squaredDistance of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_squaredDistance00
static int tolua_Ogre_Ogre_Vector2_squaredDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* rhs = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'squaredDistance'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->squaredDistance(*rhs);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'squaredDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dotProduct of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_dotProduct00
static int tolua_Ogre_Ogre_Vector2_dotProduct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* vec = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dotProduct'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->dotProduct(*vec);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dotProduct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalise of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_normalise00
static int tolua_Ogre_Ogre_Vector2_normalise00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalise'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->normalise();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalise'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: midPoint of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_midPoint00
static int tolua_Ogre_Ogre_Vector2_midPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* vec = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'midPoint'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->midPoint(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'midPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2__lt00
static int tolua_Ogre_Ogre_Vector2__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* rhs = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*rhs);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: perpendicular of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_perpendicular00
static int tolua_Ogre_Ogre_Vector2_perpendicular00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'perpendicular'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->perpendicular();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'perpendicular'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: crossProduct of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_crossProduct00
static int tolua_Ogre_Ogre_Vector2_crossProduct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* rkVector = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'crossProduct'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->crossProduct(*rkVector);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'crossProduct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: randomDeviant of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_randomDeviant00
static int tolua_Ogre_Ogre_Vector2_randomDeviant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
   float angle = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'randomDeviant'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->randomDeviant(angle);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'randomDeviant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isZeroLength of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_isZeroLength00
static int tolua_Ogre_Ogre_Vector2_isZeroLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isZeroLength'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isZeroLength();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isZeroLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalisedCopy of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_normalisedCopy00
static int tolua_Ogre_Ogre_Vector2_normalisedCopy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalisedCopy'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->normalisedCopy();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalisedCopy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reflect of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_reflect00
static int tolua_Ogre_Ogre_Vector2_reflect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* self = (const Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector2* normal = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reflect'", NULL);
#endif
  {
   Ogre::Vector2 tolua_ret = (Ogre::Vector2)  self->reflect(*normal);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector2));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reflect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_ZERO
static int tolua_get_Ogre__Vector2_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector2::ZERO,"const Ogre::Vector2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_X of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_UNIT_X
static int tolua_get_Ogre__Vector2_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector2::UNIT_X,"const Ogre::Vector2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Y of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_UNIT_Y
static int tolua_get_Ogre__Vector2_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector2::UNIT_Y,"const Ogre::Vector2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_X of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_NEGATIVE_UNIT_X
static int tolua_get_Ogre__Vector2_NEGATIVE_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector2::NEGATIVE_UNIT_X,"const Ogre::Vector2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_Y of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_NEGATIVE_UNIT_Y
static int tolua_get_Ogre__Vector2_NEGATIVE_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector2::NEGATIVE_UNIT_Y,"const Ogre::Vector2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_SCALE of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_UNIT_SCALE
static int tolua_get_Ogre__Vector2_UNIT_SCALE(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector2::UNIT_SCALE,"const Ogre::Vector2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector4_x
static int tolua_get_Ogre__Vector4_x(lua_State* tolua_S)
{
  Ogre::Vector4* self = (Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector4_x
static int tolua_set_Ogre__Vector4_x(lua_State* tolua_S)
{
  Ogre::Vector4* self = (Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector4_y
static int tolua_get_Ogre__Vector4_y(lua_State* tolua_S)
{
  Ogre::Vector4* self = (Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector4_y
static int tolua_set_Ogre__Vector4_y(lua_State* tolua_S)
{
  Ogre::Vector4* self = (Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector4_z
static int tolua_get_Ogre__Vector4_z(lua_State* tolua_S)
{
  Ogre::Vector4* self = (Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector4_z
static int tolua_set_Ogre__Vector4_z(lua_State* tolua_S)
{
  Ogre::Vector4* self = (Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: w of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector4_w
static int tolua_get_Ogre__Vector4_w(lua_State* tolua_S)
{
  Ogre::Vector4* self = (Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->w);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: w of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector4_w
static int tolua_set_Ogre__Vector4_w(lua_State* tolua_S)
{
  Ogre::Vector4* self = (Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->w = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new00
static int tolua_Ogre_Ogre_Vector4_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
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

/* method: new_local of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new00_local
static int tolua_Ogre_Ogre_Vector4_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
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

/* method: new of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new01
static int tolua_Ogre_Ogre_Vector4_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  const float fZ = ((const float)  tolua_tonumber(tolua_S,4,0));
  const float fW = ((const float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(fX,fY,fZ,fW));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new01_local
static int tolua_Ogre_Ogre_Vector4_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  const float fZ = ((const float)  tolua_tonumber(tolua_S,4,0));
  const float fW = ((const float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(fX,fY,fZ,fW));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new02
static int tolua_Ogre_Ogre_Vector4_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float afCoordinate[4];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,4,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<4;i++)
    afCoordinate[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new02_local
static int tolua_Ogre_Ogre_Vector4_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float afCoordinate[4];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,4,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<4;i++)
    afCoordinate[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new03
static int tolua_Ogre_Ogre_Vector4_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int afCoordinate[4];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,4,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<4;i++)
    afCoordinate[i] = ((int)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new03_local
static int tolua_Ogre_Ogre_Vector4_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int afCoordinate[4];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,4,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<4;i++)
    afCoordinate[i] = ((int)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new04
static int tolua_Ogre_Ogre_Vector4_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scaler = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(scaler));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new04_local
static int tolua_Ogre_Ogre_Vector4_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scaler = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(scaler));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new05
static int tolua_Ogre_Ogre_Vector4_new05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(*rhs));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_new05_local
static int tolua_Ogre_Ogre_Vector4_new05_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Vector4* tolua_ret = (Ogre::Vector4*)  Mtolua_new((Ogre::Vector4)(*rhs));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4_new04_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: swap of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_swap00
static int tolua_Ogre_Ogre_Vector4_swap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector4* self = (Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector4* other = ((Ogre::Vector4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'swap'", NULL);
#endif
  {
   self->swap(*other);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'swap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4__eq00
static int tolua_Ogre_Ogre_Vector4__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector4* rkVector = ((const Ogre::Vector4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*rkVector);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4__add00
static int tolua_Ogre_Ogre_Vector4__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector4* rkVector = ((const Ogre::Vector4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  self->operator+(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4__sub00
static int tolua_Ogre_Ogre_Vector4__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector4* rkVector = ((const Ogre::Vector4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  self->operator-(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4__mul00
static int tolua_Ogre_Ogre_Vector4__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
  const float fScalar = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  self->operator*(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4__mul01
static int tolua_Ogre_Ogre_Vector4__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector4* rhs = ((const Ogre::Vector4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  self->operator*(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4__div00
static int tolua_Ogre_Ogre_Vector4__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
  const float fScalar = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  self->operator/(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4__div01
static int tolua_Ogre_Ogre_Vector4__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector4* rhs = ((const Ogre::Vector4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  self->operator/(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4__add01
static int tolua_Ogre_Ogre_Vector4__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   const Ogre::Vector4& tolua_ret = (const Ogre::Vector4&)  self->operator+();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4__sub01
static int tolua_Ogre_Ogre_Vector4__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector4__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: dotProduct of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector4_dotProduct00
static int tolua_Ogre_Ogre_Vector4_dotProduct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector4* self = (const Ogre::Vector4*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector4* vec = ((const Ogre::Vector4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dotProduct'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->dotProduct(*vec);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dotProduct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::Vector4 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector4_ZERO
static int tolua_get_Ogre__Vector4_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector4::ZERO,"const Ogre::Vector4");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new00
static int tolua_Ogre_Ogre_Quaternion_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float fW = ((  float)  tolua_tonumber(tolua_S,2,1.0));
   float fX = ((  float)  tolua_tonumber(tolua_S,3,0.0));
   float fY = ((  float)  tolua_tonumber(tolua_S,4,0.0));
   float fZ = ((  float)  tolua_tonumber(tolua_S,5,0.0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(fW,fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
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

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new00_local
static int tolua_Ogre_Ogre_Quaternion_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float fW = ((  float)  tolua_tonumber(tolua_S,2,1.0));
   float fX = ((  float)  tolua_tonumber(tolua_S,3,0.0));
   float fY = ((  float)  tolua_tonumber(tolua_S,4,0.0));
   float fZ = ((  float)  tolua_tonumber(tolua_S,5,0.0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(fW,fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
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

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new01
static int tolua_Ogre_Ogre_Quaternion_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* rfAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rfAngle,*rkAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new01_local
static int tolua_Ogre_Ogre_Quaternion_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* rfAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rfAngle,*rkAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new02
static int tolua_Ogre_Ogre_Quaternion_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* xaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* yaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* zaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*xaxis,*yaxis,*zaxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new02_local
static int tolua_Ogre_Ogre_Quaternion_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* xaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* yaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* zaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*xaxis,*yaxis,*zaxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new03
static int tolua_Ogre_Ogre_Quaternion_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* akAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(akAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new03_local
static int tolua_Ogre_Ogre_Quaternion_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* akAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(akAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: swap of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_swap00
static int tolua_Ogre_Ogre_Quaternion_swap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Quaternion* other = ((Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'swap'", NULL);
#endif
  {
   self->swap(*other);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'swap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromRotationMatrix of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_FromRotationMatrix00
static int tolua_Ogre_Ogre_Quaternion_FromRotationMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix3* kRot = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromRotationMatrix'", NULL);
#endif
  {
   self->FromRotationMatrix(*kRot);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromRotationMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromAngleAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_FromAngleAxis00
static int tolua_Ogre_Ogre_Quaternion_FromAngleAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* rfAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromAngleAxis'", NULL);
#endif
  {
   self->FromAngleAxis(*rfAngle,*rkAxis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromAngleAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAngleAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_ToAngleAxis00
static int tolua_Ogre_Ogre_Quaternion_ToAngleAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Radian* rfAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Vector3* rkAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAngleAxis'", NULL);
#endif
  {
   self->ToAngleAxis(*rfAngle,*rkAxis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToAngleAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAngleAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_ToAngleAxis01
static int tolua_Ogre_Ogre_Quaternion_ToAngleAxis01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Degree",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Degree* dAngle = ((Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Vector3* rkAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAngleAxis'", NULL);
#endif
  {
   self->ToAngleAxis(*dAngle,*rkAxis);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_ToAngleAxis00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromAxes of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_FromAxes00
static int tolua_Ogre_Ogre_Quaternion_FromAxes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* akAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromAxes'", NULL);
#endif
  {
   self->FromAxes(akAxis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromAxes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromAxes of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_FromAxes01
static int tolua_Ogre_Ogre_Quaternion_FromAxes01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* xAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* yAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* zAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromAxes'", NULL);
#endif
  {
   self->FromAxes(*xAxis,*yAxis,*zAxis);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_FromAxes00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAxes of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_ToAxes00
static int tolua_Ogre_Ogre_Quaternion_ToAxes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3* akAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAxes'", NULL);
#endif
  {
   self->ToAxes(akAxis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToAxes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAxes of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_ToAxes01
static int tolua_Ogre_Ogre_Quaternion_ToAxes01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3* xAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Vector3* yAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Vector3* zAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAxes'", NULL);
#endif
  {
   self->ToAxes(*xAxis,*yAxis,*zAxis);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_ToAxes00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: xAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_xAxis00
static int tolua_Ogre_Ogre_Quaternion_xAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'xAxis'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->xAxis();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'xAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: yAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_yAxis00
static int tolua_Ogre_Ogre_Quaternion_yAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'yAxis'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->yAxis();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'yAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: zAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_zAxis00
static int tolua_Ogre_Ogre_Quaternion_zAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'zAxis'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->zAxis();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'zAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion__add00
static int tolua_Ogre_Ogre_Quaternion__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->operator+(*rkQ);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion__sub00
static int tolua_Ogre_Ogre_Quaternion__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->operator-(*rkQ);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion__mul00
static int tolua_Ogre_Ogre_Quaternion__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->operator*(*rkQ);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion__mul01
static int tolua_Ogre_Ogre_Quaternion__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
   float fScalar = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->operator*(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion__eq00
static int tolua_Ogre_Ogre_Quaternion__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rhs = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*rhs);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Dot of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_Dot00
static int tolua_Ogre_Ogre_Quaternion_Dot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Dot'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->Dot(*rkQ);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Dot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Norm of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_Norm00
static int tolua_Ogre_Ogre_Quaternion_Norm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Norm'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->Norm();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Norm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalise of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_normalise00
static int tolua_Ogre_Ogre_Quaternion_normalise00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalise'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->normalise();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalise'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Inverse of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_Inverse00
static int tolua_Ogre_Ogre_Quaternion_Inverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Inverse'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->Inverse();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Inverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnitInverse of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_UnitInverse00
static int tolua_Ogre_Ogre_Quaternion_UnitInverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UnitInverse'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->UnitInverse();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UnitInverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Exp of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_Exp00
static int tolua_Ogre_Ogre_Quaternion_Exp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Exp'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->Exp();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Exp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Log of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_Log00
static int tolua_Ogre_Ogre_Quaternion_Log00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Log'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->Log();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Log'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion__mul02
static int tolua_Ogre_Ogre_Quaternion__mul02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator*(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion__mul01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRoll of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_getRoll00
static int tolua_Ogre_Ogre_Quaternion_getRoll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  bool reprojectAxis = ((bool)  tolua_toboolean(tolua_S,2,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRoll'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->getRoll(reprojectAxis);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRoll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPitch of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_getPitch00
static int tolua_Ogre_Ogre_Quaternion_getPitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  bool reprojectAxis = ((bool)  tolua_toboolean(tolua_S,2,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPitch'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->getPitch(reprojectAxis);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPitch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getYaw of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_getYaw00
static int tolua_Ogre_Ogre_Quaternion_getYaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  bool reprojectAxis = ((bool)  tolua_toboolean(tolua_S,2,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getYaw'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->getYaw(reprojectAxis);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getYaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: equals of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_equals00
static int tolua_Ogre_Ogre_Quaternion_equals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rhs = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* tolerance = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'equals'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->equals(*rhs,*tolerance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'equals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Slerp of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_Slerp00
static int tolua_Ogre_Ogre_Quaternion_Slerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float fT = ((  float)  tolua_tonumber(tolua_S,2,0));
  const Ogre::Quaternion* rkP = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  bool shortestPath = ((bool)  tolua_toboolean(tolua_S,5,false));
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  Ogre::Quaternion::Slerp(fT,*rkP,*rkQ,shortestPath);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Slerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SlerpExtraSpins of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_SlerpExtraSpins00
static int tolua_Ogre_Ogre_Quaternion_SlerpExtraSpins00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float fT = ((  float)  tolua_tonumber(tolua_S,2,0));
  const Ogre::Quaternion* rkP = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  int iExtraSpins = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  Ogre::Quaternion::SlerpExtraSpins(fT,*rkP,*rkQ,iExtraSpins);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SlerpExtraSpins'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Intermediate of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_Intermediate00
static int tolua_Ogre_Ogre_Quaternion_Intermediate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* rkQ0 = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Quaternion* rkQ1 = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkQ2 = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  Ogre::Quaternion* rka = ((Ogre::Quaternion*)  tolua_tousertype(tolua_S,5,0));
  Ogre::Quaternion* rkB = ((Ogre::Quaternion*)  tolua_tousertype(tolua_S,6,0));
  {
   Ogre::Quaternion::Intermediate(*rkQ0,*rkQ1,*rkQ2,*rka,*rkB);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Intermediate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Squad of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_Squad00
static int tolua_Ogre_Ogre_Quaternion_Squad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float fT = ((  float)  tolua_tonumber(tolua_S,2,0));
  const Ogre::Quaternion* rkP = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkA = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  const Ogre::Quaternion* rkB = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,5,0));
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,6,0));
  bool shortestPath = ((bool)  tolua_toboolean(tolua_S,7,false));
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  Ogre::Quaternion::Squad(fT,*rkP,*rkA,*rkB,*rkQ,shortestPath);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Squad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nlerp of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_nlerp00
static int tolua_Ogre_Ogre_Quaternion_nlerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float fT = ((  float)  tolua_tonumber(tolua_S,2,0));
  const Ogre::Quaternion* rkP = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  bool shortestPath = ((bool)  tolua_toboolean(tolua_S,5,false));
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  Ogre::Quaternion::nlerp(fT,*rkP,*rkQ,shortestPath);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nlerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ms_fEpsilon of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_ms_fEpsilon
static int tolua_get_Ogre__Quaternion_ms_fEpsilon(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Quaternion::ms_fEpsilon);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_ZERO
static int tolua_get_Ogre__Quaternion_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Quaternion::ZERO,"const Ogre::Quaternion");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: IDENTITY of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_IDENTITY
static int tolua_get_Ogre__Quaternion_IDENTITY(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Quaternion::IDENTITY,"const Ogre::Quaternion");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: w of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_w
static int tolua_get_Ogre__Quaternion_w(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->w);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: w of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Quaternion_w
static int tolua_set_Ogre__Quaternion_w(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->w = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_x
static int tolua_get_Ogre__Quaternion_x(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Quaternion_x
static int tolua_set_Ogre__Quaternion_x(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_y
static int tolua_get_Ogre__Quaternion_y(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Quaternion_y
static int tolua_set_Ogre__Quaternion_y(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_z
static int tolua_get_Ogre__Quaternion_z(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Quaternion_z
static int tolua_set_Ogre__Quaternion_z(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_ZERO
static int tolua_get_Ogre__ColourValue_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::ZERO,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Black of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Black
static int tolua_get_Ogre__ColourValue_Black(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Black,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: White of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_White
static int tolua_get_Ogre__ColourValue_White(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::White,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Red of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Red
static int tolua_get_Ogre__ColourValue_Red(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Red,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Green of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Green
static int tolua_get_Ogre__ColourValue_Green(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Green,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Blue of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Blue
static int tolua_get_Ogre__ColourValue_Blue(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Blue,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_new00
static int tolua_Ogre_Ogre_ColourValue_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float red = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  float green = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float blue = ((float)  tolua_tonumber(tolua_S,4,1.0f));
  float alpha = ((float)  tolua_tonumber(tolua_S,5,1.0f));
  {
   Ogre::ColourValue* tolua_ret = (Ogre::ColourValue*)  Mtolua_new((Ogre::ColourValue)(red,green,blue,alpha));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::ColourValue");
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

/* method: new_local of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_new00_local
static int tolua_Ogre_Ogre_ColourValue_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float red = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  float green = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float blue = ((float)  tolua_tonumber(tolua_S,4,1.0f));
  float alpha = ((float)  tolua_tonumber(tolua_S,5,1.0f));
  {
   Ogre::ColourValue* tolua_ret = (Ogre::ColourValue*)  Mtolua_new((Ogre::ColourValue)(red,green,blue,alpha));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::ColourValue");
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

/* method: operator== of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue__eq00
static int tolua_Ogre_Ogre_ColourValue__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* rhs = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*rhs);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_r
static int tolua_get_Ogre__ColourValue_r(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ColourValue_r
static int tolua_set_Ogre__ColourValue_r(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_g
static int tolua_get_Ogre__ColourValue_g(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ColourValue_g
static int tolua_set_Ogre__ColourValue_g(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_b
static int tolua_get_Ogre__ColourValue_b(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ColourValue_b
static int tolua_set_Ogre__ColourValue_b(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_a
static int tolua_get_Ogre__ColourValue_a(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ColourValue_a
static int tolua_set_Ogre__ColourValue_a(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAsRGBA of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_getAsRGBA00
static int tolua_Ogre_Ogre_ColourValue_getAsRGBA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAsRGBA'", NULL);
#endif
  {
    unsigned int tolua_ret = (  unsigned int)  self->getAsRGBA();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAsRGBA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAsARGB of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_getAsARGB00
static int tolua_Ogre_Ogre_ColourValue_getAsARGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAsARGB'", NULL);
#endif
  {
    unsigned int tolua_ret = (  unsigned int)  self->getAsARGB();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAsARGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAsBGRA of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_getAsBGRA00
static int tolua_Ogre_Ogre_ColourValue_getAsBGRA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAsBGRA'", NULL);
#endif
  {
    unsigned int tolua_ret = (  unsigned int)  self->getAsBGRA();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAsBGRA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAsABGR of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_getAsABGR00
static int tolua_Ogre_Ogre_ColourValue_getAsABGR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAsABGR'", NULL);
#endif
  {
    unsigned int tolua_ret = (  unsigned int)  self->getAsABGR();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAsABGR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAsRGBA of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_setAsRGBA00
static int tolua_Ogre_Ogre_ColourValue_setAsRGBA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  unsigned const int val = ((unsigned const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAsRGBA'", NULL);
#endif
  {
   self->setAsRGBA(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAsRGBA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAsARGB of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_setAsARGB00
static int tolua_Ogre_Ogre_ColourValue_setAsARGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  unsigned const int val = ((unsigned const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAsARGB'", NULL);
#endif
  {
   self->setAsARGB(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAsARGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAsBGRA of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_setAsBGRA00
static int tolua_Ogre_Ogre_ColourValue_setAsBGRA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  unsigned const int val = ((unsigned const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAsBGRA'", NULL);
#endif
  {
   self->setAsBGRA(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAsBGRA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAsABGR of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_setAsABGR00
static int tolua_Ogre_Ogre_ColourValue_setAsABGR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  unsigned const int val = ((unsigned const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAsABGR'", NULL);
#endif
  {
   self->setAsABGR(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAsABGR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: saturate of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_saturate00
static int tolua_Ogre_Ogre_ColourValue_saturate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'saturate'", NULL);
#endif
  {
   self->saturate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'saturate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue__add00
static int tolua_Ogre_Ogre_ColourValue__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* rkVector = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator+(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue__sub00
static int tolua_Ogre_Ogre_ColourValue__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* rkVector = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator-(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue__mul00
static int tolua_Ogre_Ogre_ColourValue__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const float fScalar = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator*(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue__mul01
static int tolua_Ogre_Ogre_ColourValue__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* rhs = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator*(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_ColourValue__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue__div00
static int tolua_Ogre_Ogre_ColourValue__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* rhs = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator/(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue__div01
static int tolua_Ogre_Ogre_ColourValue__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const float fScalar = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator/(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_ColourValue__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setPosition00
static int tolua_Ogre_Ogre_Camera_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(x,y,z);
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

/* method: setPosition of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setPosition01
static int tolua_Ogre_Ogre_Camera_setPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*vec);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_setPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getPosition00
static int tolua_Ogre_Ogre_Camera_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: move of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_move00
static int tolua_Ogre_Ogre_Camera_move00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'move'", NULL);
#endif
  {
   self->move(*vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'move'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: moveRelative of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_moveRelative00
static int tolua_Ogre_Ogre_Camera_moveRelative00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveRelative'", NULL);
#endif
  {
   self->moveRelative(*vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveRelative'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setDirection00
static int tolua_Ogre_Ogre_Camera_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setDirection01
static int tolua_Ogre_Ogre_Camera_setDirection01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(*vec);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_setDirection00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getDirection00
static int tolua_Ogre_Ogre_Camera_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getDirection();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUp of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getUp00
static int tolua_Ogre_Ogre_Camera_getUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUp'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getUp();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRight of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getRight00
static int tolua_Ogre_Ogre_Camera_getRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRight'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getRight();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lookAt of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_lookAt00
static int tolua_Ogre_Ogre_Camera_lookAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* targetPoint = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lookAt'", NULL);
#endif
  {
   self->lookAt(*targetPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lookAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lookAt of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_lookAt01
static int tolua_Ogre_Ogre_Camera_lookAt01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lookAt'", NULL);
#endif
  {
   self->lookAt(x,y,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_lookAt00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: roll of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_roll00
static int tolua_Ogre_Ogre_Camera_roll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'roll'", NULL);
#endif
  {
   self->roll(*angle);
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

/* method: yaw of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_yaw00
static int tolua_Ogre_Ogre_Camera_yaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'yaw'", NULL);
#endif
  {
   self->yaw(*angle);
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

/* method: pitch of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_pitch00
static int tolua_Ogre_Ogre_Camera_pitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pitch'", NULL);
#endif
  {
   self->pitch(*angle);
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

/* method: rotate of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_rotate00
static int tolua_Ogre_Ogre_Camera_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* axis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rotate'", NULL);
#endif
  {
   self->rotate(*axis,*angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_rotate01
static int tolua_Ogre_Ogre_Camera_rotate01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* q = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rotate'", NULL);
#endif
  {
   self->rotate(*q);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_rotate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFixedYawAxis of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setFixedYawAxis00
static int tolua_Ogre_Ogre_Camera_setFixedYawAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  bool useFixed = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFixedYawAxis'", NULL);
#endif
  {
   self->setFixedYawAxis(useFixed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFixedYawAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFixedYawAxis of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setFixedYawAxis01
static int tolua_Ogre_Ogre_Camera_setFixedYawAxis01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  bool useFixed = ((bool)  tolua_toboolean(tolua_S,2,0));
  const Ogre::Vector3* fixedAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFixedYawAxis'", NULL);
#endif
  {
   self->setFixedYawAxis(useFixed,*fixedAxis);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_setFixedYawAxis00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOrientation of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getOrientation00
static int tolua_Ogre_Ogre_Camera_getOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOrientation'", NULL);
#endif
  {
   const Ogre::Quaternion& tolua_ret = (const Ogre::Quaternion&)  self->getOrientation();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Quaternion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOrientation of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setOrientation00
static int tolua_Ogre_Ogre_Camera_setOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* q = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOrientation'", NULL);
#endif
  {
   self->setOrientation(*q);
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

/* method: getDerivedOrientation of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getDerivedOrientation00
static int tolua_Ogre_Ogre_Camera_getDerivedOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDerivedOrientation'", NULL);
#endif
  {
   const Ogre::Quaternion& tolua_ret = (const Ogre::Quaternion&)  self->getDerivedOrientation();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Quaternion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDerivedOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDerivedPosition of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getDerivedPosition00
static int tolua_Ogre_Ogre_Camera_getDerivedPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDerivedPosition'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getDerivedPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDerivedPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDerivedDirection of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getDerivedDirection00
static int tolua_Ogre_Ogre_Camera_getDerivedDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDerivedDirection'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getDerivedDirection();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDerivedDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDerivedUp of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getDerivedUp00
static int tolua_Ogre_Ogre_Camera_getDerivedUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDerivedUp'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getDerivedUp();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDerivedUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDerivedRight of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getDerivedRight00
static int tolua_Ogre_Ogre_Camera_getDerivedRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDerivedRight'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getDerivedRight();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDerivedRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRealOrientation of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getRealOrientation00
static int tolua_Ogre_Ogre_Camera_getRealOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRealOrientation'", NULL);
#endif
  {
   const Ogre::Quaternion& tolua_ret = (const Ogre::Quaternion&)  self->getRealOrientation();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Quaternion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRealOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRealPosition of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getRealPosition00
static int tolua_Ogre_Ogre_Camera_getRealPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRealPosition'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getRealPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRealPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRealDirection of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getRealDirection00
static int tolua_Ogre_Ogre_Camera_getRealDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRealDirection'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getRealDirection();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRealDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRealUp of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getRealUp00
static int tolua_Ogre_Ogre_Camera_getRealUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRealUp'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getRealUp();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRealUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRealRight of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getRealRight00
static int tolua_Ogre_Ogre_Camera_getRealRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRealRight'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getRealRight();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRealRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoTracking of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setAutoTracking00
static int tolua_Ogre_Ogre_Camera_setAutoTracking00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Ogre::SceneNode",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
  Ogre::SceneNode* target = ((Ogre::SceneNode*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoTracking'", NULL);
#endif
  {
   self->setAutoTracking(enabled,target);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoTracking'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoTracking of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setAutoTracking01
static int tolua_Ogre_Ogre_Camera_setAutoTracking01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
  Ogre::SceneNode* target = ((Ogre::SceneNode*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* offset = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoTracking'", NULL);
#endif
  {
   self->setAutoTracking(enabled,target,*offset);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_setAutoTracking00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setType of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setType00
static int tolua_Ogre_Ogre_Light_setType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Light::LightTypes type = ((Ogre::Light::LightTypes) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setType'", NULL);
#endif
  {
   self->setType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getType of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getType00
static int tolua_Ogre_Ogre_Light_getType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getType'", NULL);
#endif
  {
   Ogre::Light::LightTypes tolua_ret = (Ogre::Light::LightTypes)  self->getType();
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

/* method: setDiffuseColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setDiffuseColour00
static int tolua_Ogre_Ogre_Light_setDiffuseColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float red = ((  float)  tolua_tonumber(tolua_S,2,0));
   float green = ((  float)  tolua_tonumber(tolua_S,3,0));
   float blue = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDiffuseColour'", NULL);
#endif
  {
   self->setDiffuseColour(red,green,blue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDiffuseColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDiffuseColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setDiffuseColour01
static int tolua_Ogre_Ogre_Light_setDiffuseColour01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDiffuseColour'", NULL);
#endif
  {
   self->setDiffuseColour(*colour);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_setDiffuseColour00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDiffuseColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getDiffuseColour00
static int tolua_Ogre_Ogre_Light_getDiffuseColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDiffuseColour'", NULL);
#endif
  {
   const Ogre::ColourValue& tolua_ret = (const Ogre::ColourValue&)  self->getDiffuseColour();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDiffuseColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpecularColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpecularColour00
static int tolua_Ogre_Ogre_Light_setSpecularColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float red = ((  float)  tolua_tonumber(tolua_S,2,0));
   float green = ((  float)  tolua_tonumber(tolua_S,3,0));
   float blue = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpecularColour'", NULL);
#endif
  {
   self->setSpecularColour(red,green,blue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpecularColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpecularColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpecularColour01
static int tolua_Ogre_Ogre_Light_setSpecularColour01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpecularColour'", NULL);
#endif
  {
   self->setSpecularColour(*colour);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_setSpecularColour00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpecularColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getSpecularColour00
static int tolua_Ogre_Ogre_Light_getSpecularColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpecularColour'", NULL);
#endif
  {
   const Ogre::ColourValue& tolua_ret = (const Ogre::ColourValue&)  self->getSpecularColour();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpecularColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAttenuation of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setAttenuation00
static int tolua_Ogre_Ogre_Light_setAttenuation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float range = ((  float)  tolua_tonumber(tolua_S,2,0));
   float constant = ((  float)  tolua_tonumber(tolua_S,3,0));
   float linear = ((  float)  tolua_tonumber(tolua_S,4,0));
   float quadratic = ((  float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAttenuation'", NULL);
#endif
  {
   self->setAttenuation(range,constant,linear,quadratic);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAttenuation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttenuationRange of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getAttenuationRange00
static int tolua_Ogre_Ogre_Light_getAttenuationRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttenuationRange'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getAttenuationRange();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttenuationRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttenuationConstant of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getAttenuationConstant00
static int tolua_Ogre_Ogre_Light_getAttenuationConstant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttenuationConstant'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getAttenuationConstant();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttenuationConstant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttenuationLinear of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getAttenuationLinear00
static int tolua_Ogre_Ogre_Light_getAttenuationLinear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttenuationLinear'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getAttenuationLinear();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttenuationLinear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttenuationQuadric of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getAttenuationQuadric00
static int tolua_Ogre_Ogre_Light_getAttenuationQuadric00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttenuationQuadric'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getAttenuationQuadric();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttenuationQuadric'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setPosition00
static int tolua_Ogre_Ogre_Light_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(x,y,z);
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

/* method: setPosition of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setPosition01
static int tolua_Ogre_Ogre_Light_setPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*vec);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_setPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getPosition00
static int tolua_Ogre_Ogre_Light_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setDirection00
static int tolua_Ogre_Ogre_Light_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setDirection01
static int tolua_Ogre_Ogre_Light_setDirection01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(*vec);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_setDirection00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getDirection00
static int tolua_Ogre_Ogre_Light_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getDirection();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpotlightRange of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpotlightRange00
static int tolua_Ogre_Ogre_Light_setSpotlightRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* innerAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* outerAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
   float falloff = ((  float)  tolua_tonumber(tolua_S,4,1.0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpotlightRange'", NULL);
#endif
  {
   self->setSpotlightRange(*innerAngle,*outerAngle,falloff);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpotlightRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpotlightInnerAngle of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getSpotlightInnerAngle00
static int tolua_Ogre_Ogre_Light_getSpotlightInnerAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpotlightInnerAngle'", NULL);
#endif
  {
   const Ogre::Radian& tolua_ret = (const Ogre::Radian&)  self->getSpotlightInnerAngle();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Radian");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpotlightInnerAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpotlightOuterAngle of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getSpotlightOuterAngle00
static int tolua_Ogre_Ogre_Light_getSpotlightOuterAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpotlightOuterAngle'", NULL);
#endif
  {
   const Ogre::Radian& tolua_ret = (const Ogre::Radian&)  self->getSpotlightOuterAngle();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Radian");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpotlightOuterAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpotlightFalloff of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getSpotlightFalloff00
static int tolua_Ogre_Ogre_Light_getSpotlightFalloff00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpotlightFalloff'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getSpotlightFalloff();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpotlightFalloff'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpotlightInnerAngle of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpotlightInnerAngle00
static int tolua_Ogre_Ogre_Light_setSpotlightInnerAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* val = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpotlightInnerAngle'", NULL);
#endif
  {
   self->setSpotlightInnerAngle(*val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpotlightInnerAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpotlightOuterAngle of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpotlightOuterAngle00
static int tolua_Ogre_Ogre_Light_setSpotlightOuterAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* val = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpotlightOuterAngle'", NULL);
#endif
  {
   self->setSpotlightOuterAngle(*val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpotlightOuterAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpotlightFalloff of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpotlightFalloff00
static int tolua_Ogre_Ogre_Light_setSpotlightFalloff00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float val = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpotlightFalloff'", NULL);
#endif
  {
   self->setSpotlightFalloff(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpotlightFalloff'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPowerScale of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setPowerScale00
static int tolua_Ogre_Ogre_Light_setPowerScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float power = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPowerScale'", NULL);
#endif
  {
   self->setPowerScale(power);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPowerScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPowerScale of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getPowerScale00
static int tolua_Ogre_Ogre_Light_getPowerScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPowerScale'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getPowerScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPowerScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDerivedPosition of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getDerivedPosition00
static int tolua_Ogre_Ogre_Light_getDerivedPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  bool cameraRelativeIfSet = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDerivedPosition'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getDerivedPosition(cameraRelativeIfSet);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDerivedPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDerivedDirection of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getDerivedDirection00
static int tolua_Ogre_Ogre_Light_getDerivedDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDerivedDirection'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getDerivedDirection();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDerivedDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setVisible00
static int tolua_Ogre_Ogre_Light_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible);
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

/* method: createCamera of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createCamera00
static int tolua_Ogre_Ogre_SceneManager_createCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createCamera'", NULL);
#endif
  {
   Ogre::Camera* tolua_ret = (Ogre::Camera*)  self->createCamera(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyCamera of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyCamera00
static int tolua_Ogre_Ogre_SceneManager_destroyCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Camera* cam = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyCamera'", NULL);
#endif
  {
   self->destroyCamera(cam);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createLight00
static int tolua_Ogre_Ogre_SceneManager_createLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createLight'", NULL);
#endif
  {
   Ogre::Light* tolua_ret = (Ogre::Light*)  self->createLight();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Light");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyLight00
static int tolua_Ogre_Ogre_SceneManager_destroyLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Light* light = ((Ogre::Light*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyLight'", NULL);
#endif
  {
   self->destroyLight(light);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createSecondSceneManager of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_createSecondSceneManager00
static int tolua_Ogre_OgreManager_createSecondSceneManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::SceneTypeMask",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::SceneTypeMask type = *((Ogre::SceneTypeMask*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createSecondSceneManager'", NULL);
#endif
  {
   self->createSecondSceneManager(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createSecondSceneManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: swapSceneManager of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_swapSceneManager00
static int tolua_Ogre_OgreManager_swapSceneManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'swapSceneManager'", NULL);
#endif
  {
   self->swapSceneManager();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'swapSceneManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createCamera of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_createCamera00
static int tolua_Ogre_OgreManager_createCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
  std::string name = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createCamera'", NULL);
#endif
  {
   Ogre::Camera* tolua_ret = (Ogre::Camera*)  self->createCamera(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyCamera of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_destroyCamera00
static int tolua_Ogre_OgreManager_destroyCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Camera* camera = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyCamera'", NULL);
#endif
  {
   self->destroyCamera(camera);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyCamera of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_destroyCamera01
static int tolua_Ogre_OgreManager_destroyCamera01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
  std::string name = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyCamera'", NULL);
#endif
  {
   self->destroyCamera(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_OgreManager_destroyCamera00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAmbientColor of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_setAmbientColor00
static int tolua_Ogre_OgreManager_setAmbientColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::ColourValue* color = ((Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAmbientColor'", NULL);
#endif
  {
   self->setAmbientColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAmbientColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColor of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_setBackGroundColor00
static int tolua_Ogre_OgreManager_setBackGroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::ColourValue* color = ((Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColor'", NULL);
#endif
  {
   self->setBackGroundColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCurrentCamera of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_setCurrentCamera00
static int tolua_Ogre_OgreManager_setCurrentCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Camera* camera = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCurrentCamera'", NULL);
#endif
  {
   self->setCurrentCamera(camera);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCurrentCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createLight of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_createLight00
static int tolua_Ogre_OgreManager_createLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Light::LightTypes type = ((Ogre::Light::LightTypes) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createLight'", NULL);
#endif
  {
   Ogre::Light* tolua_ret = (Ogre::Light*)  self->createLight(type);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Light");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyLight of class  OgreManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreManager_destroyLight00
static int tolua_Ogre_OgreManager_destroyLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreManager* self = (OgreManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Light* light = ((Ogre::Light*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyLight'", NULL);
#endif
  {
   self->destroyLight(light);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Ogre_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Radian","Ogre::Radian","",tolua_collect_Ogre__Radian);
   #else
   tolua_cclass(tolua_S,"Radian","Ogre::Radian","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Radian");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Radian_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Radian_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Radian_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Radian_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Radian_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Radian_new01_local);
    tolua_function(tolua_S,"valueDegrees",tolua_Ogre_Ogre_Radian_valueDegrees00);
    tolua_function(tolua_S,"valueRadians",tolua_Ogre_Ogre_Radian_valueRadians00);
    tolua_function(tolua_S,"valueAngleUnits",tolua_Ogre_Ogre_Radian_valueAngleUnits00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Radian__add00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Radian__add01);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Radian__add02);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Radian__sub00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Radian__sub01);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Radian__sub02);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Radian__mul00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Radian__mul01);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_Radian__div00);
    tolua_function(tolua_S,".lt",tolua_Ogre_Ogre_Radian__lt00);
    tolua_function(tolua_S,".le",tolua_Ogre_Ogre_Radian__le00);
    tolua_function(tolua_S,".eq",tolua_Ogre_Ogre_Radian__eq00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Degree","Ogre::Degree","",tolua_collect_Ogre__Degree);
   #else
   tolua_cclass(tolua_S,"Degree","Ogre::Degree","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Degree");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Degree_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Degree_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Degree_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Degree_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Degree_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Degree_new01_local);
    tolua_function(tolua_S,"valueDegrees",tolua_Ogre_Ogre_Degree_valueDegrees00);
    tolua_function(tolua_S,"valueRadians",tolua_Ogre_Ogre_Degree_valueRadians00);
    tolua_function(tolua_S,"valueAngleUnits",tolua_Ogre_Ogre_Degree_valueAngleUnits00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Degree__add00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Degree__add01);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Degree__add02);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Degree__sub00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Degree__sub01);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Degree__sub02);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Degree__mul00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Degree__mul01);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_Degree__div00);
    tolua_function(tolua_S,".lt",tolua_Ogre_Ogre_Degree__lt00);
    tolua_function(tolua_S,".le",tolua_Ogre_Ogre_Degree__le00);
    tolua_function(tolua_S,".eq",tolua_Ogre_Ogre_Degree__eq00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Angle","Ogre::Angle","",tolua_collect_Ogre__Angle);
   #else
   tolua_cclass(tolua_S,"Angle","Ogre::Angle","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Angle");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Angle_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Angle_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Angle_new00_local);
    tolua_function(tolua_S,".Radian",tolua_Ogre_Ogre_Angle__Radian00);
    tolua_function(tolua_S,".Degree",tolua_Ogre_Ogre_Angle__Degree00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Math","Ogre::Math","",tolua_collect_Ogre__Math);
   #else
   tolua_cclass(tolua_S,"Math","Ogre::Math","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Math");
    tolua_constant(tolua_S,"AU_DEGREE",Ogre::Math::AU_DEGREE);
    tolua_constant(tolua_S,"AU_RADIAN",Ogre::Math::AU_RADIAN);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Math_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Math_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Math_new00_local);
    tolua_function(tolua_S,"delete",tolua_Ogre_Ogre_Math_delete00);
    tolua_function(tolua_S,"DegreesToRadians",tolua_Ogre_Ogre_Math_DegreesToRadians00);
    tolua_function(tolua_S,"RadiansToDegrees",tolua_Ogre_Ogre_Math_RadiansToDegrees00);
    tolua_function(tolua_S,"setAngleUnit",tolua_Ogre_Ogre_Math_setAngleUnit00);
    tolua_function(tolua_S,"getAngleUnit",tolua_Ogre_Ogre_Math_getAngleUnit00);
    tolua_function(tolua_S,"AngleUnitsToRadians",tolua_Ogre_Ogre_Math_AngleUnitsToRadians00);
    tolua_function(tolua_S,"RadiansToAngleUnits",tolua_Ogre_Ogre_Math_RadiansToAngleUnits00);
    tolua_function(tolua_S,"AngleUnitsToDegrees",tolua_Ogre_Ogre_Math_AngleUnitsToDegrees00);
    tolua_function(tolua_S,"DegreesToAngleUnits",tolua_Ogre_Ogre_Math_DegreesToAngleUnits00);
    tolua_function(tolua_S,"pointInTri2D",tolua_Ogre_Ogre_Math_pointInTri2D00);
    tolua_function(tolua_S,"pointInTri3D",tolua_Ogre_Ogre_Math_pointInTri3D00);
    tolua_function(tolua_S,"calculateTangentSpaceVector",tolua_Ogre_Ogre_Math_calculateTangentSpaceVector00);
    tolua_function(tolua_S,"calculateFaceNormal",tolua_Ogre_Ogre_Math_calculateFaceNormal00);
    tolua_function(tolua_S,"calculateBasicFaceNormal",tolua_Ogre_Ogre_Math_calculateBasicFaceNormal00);
    tolua_function(tolua_S,"calculateFaceNormalWithoutNormalize",tolua_Ogre_Ogre_Math_calculateFaceNormalWithoutNormalize00);
    tolua_function(tolua_S,"calculateBasicFaceNormalWithoutNormalize",tolua_Ogre_Ogre_Math_calculateBasicFaceNormalWithoutNormalize00);
    tolua_function(tolua_S,"gaussianDistribution",tolua_Ogre_Ogre_Math_gaussianDistribution00);
    tolua_function(tolua_S,"makeViewMatrix",tolua_Ogre_Ogre_Math_makeViewMatrix00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Matrix4","Ogre::Matrix4","",tolua_collect_Ogre__Matrix4);
   #else
   tolua_cclass(tolua_S,"Matrix4","Ogre::Matrix4","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Matrix4");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Matrix4_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Matrix4_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Matrix4_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Matrix4_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Matrix4_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Matrix4_new01_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Matrix4_new02);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Matrix4_new02_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Matrix4_new02_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Matrix4_new03);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Matrix4_new03_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Matrix4_new03_local);
    tolua_function(tolua_S,"swap",tolua_Ogre_Ogre_Matrix4_swap00);
    tolua_function(tolua_S,"concatenate",tolua_Ogre_Ogre_Matrix4_concatenate00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Matrix4__mul00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Matrix4__mul01);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Matrix4__mul02);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Matrix4__add00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Matrix4__sub00);
    tolua_function(tolua_S,".eq",tolua_Ogre_Ogre_Matrix4__eq00);
    tolua_function(tolua_S,"transpose",tolua_Ogre_Ogre_Matrix4_transpose00);
    tolua_function(tolua_S,"setTrans",tolua_Ogre_Ogre_Matrix4_setTrans00);
    tolua_function(tolua_S,"getTrans",tolua_Ogre_Ogre_Matrix4_getTrans00);
    tolua_function(tolua_S,"makeTrans",tolua_Ogre_Ogre_Matrix4_makeTrans00);
    tolua_function(tolua_S,"makeTrans",tolua_Ogre_Ogre_Matrix4_makeTrans01);
    tolua_function(tolua_S,"getTrans",tolua_Ogre_Ogre_Matrix4_getTrans01);
    tolua_function(tolua_S,"getTrans",tolua_Ogre_Ogre_Matrix4_getTrans02);
    tolua_function(tolua_S,"setScale",tolua_Ogre_Ogre_Matrix4_setScale00);
    tolua_function(tolua_S,"getScale",tolua_Ogre_Ogre_Matrix4_getScale00);
    tolua_function(tolua_S,"getScale",tolua_Ogre_Ogre_Matrix4_getScale01);
    tolua_function(tolua_S,"extract3x3Matrix",tolua_Ogre_Ogre_Matrix4_extract3x3Matrix00);
    tolua_function(tolua_S,"hasScale",tolua_Ogre_Ogre_Matrix4_hasScale00);
    tolua_function(tolua_S,"hasNegativeScale",tolua_Ogre_Ogre_Matrix4_hasNegativeScale00);
    tolua_function(tolua_S,"extractQuaternion",tolua_Ogre_Ogre_Matrix4_extractQuaternion00);
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__Matrix4_ZERO,NULL);
    tolua_variable(tolua_S,"IDENTITY",tolua_get_Ogre__Matrix4_IDENTITY,NULL);
    tolua_variable(tolua_S,"CLIPSPACE2DTOIMAGESPACE",tolua_get_Ogre__Matrix4_CLIPSPACE2DTOIMAGESPACE,NULL);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Matrix4__mul03);
    tolua_function(tolua_S,"adjoint",tolua_Ogre_Ogre_Matrix4_adjoint00);
    tolua_function(tolua_S,"determinant",tolua_Ogre_Ogre_Matrix4_determinant00);
    tolua_function(tolua_S,"inverse",tolua_Ogre_Ogre_Matrix4_inverse00);
    tolua_function(tolua_S,"makeTransform",tolua_Ogre_Ogre_Matrix4_makeTransform00);
    tolua_function(tolua_S,"makeInverseTransform",tolua_Ogre_Ogre_Matrix4_makeInverseTransform00);
    tolua_function(tolua_S,"decomposition",tolua_Ogre_Ogre_Matrix4_decomposition00);
    tolua_function(tolua_S,"isAffine",tolua_Ogre_Ogre_Matrix4_isAffine00);
    tolua_function(tolua_S,"inverseAffine",tolua_Ogre_Ogre_Matrix4_inverseAffine00);
    tolua_function(tolua_S,"concatenateAffine",tolua_Ogre_Ogre_Matrix4_concatenateAffine00);
    tolua_function(tolua_S,"transformAffine",tolua_Ogre_Ogre_Matrix4_transformAffine00);
    tolua_function(tolua_S,"transformAffine",tolua_Ogre_Ogre_Matrix4_transformAffine01);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Matrix3","Ogre::Matrix3","",tolua_collect_Ogre__Matrix3);
   #else
   tolua_cclass(tolua_S,"Matrix3","Ogre::Matrix3","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Matrix3");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Matrix3_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Matrix3_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Matrix3_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Matrix3_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Matrix3_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Matrix3_new01_local);
    tolua_function(tolua_S,"swap",tolua_Ogre_Ogre_Matrix3_swap00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Matrix3__add00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Matrix3__sub00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Matrix3__mul00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Matrix3__sub01);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Matrix3__mul01);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Matrix3__mul02);
    tolua_function(tolua_S,"Transpose",tolua_Ogre_Ogre_Matrix3_Transpose00);
    tolua_function(tolua_S,"Inverse",tolua_Ogre_Ogre_Matrix3_Inverse00);
    tolua_function(tolua_S,"Inverse",tolua_Ogre_Ogre_Matrix3_Inverse01);
    tolua_function(tolua_S,"Determinant",tolua_Ogre_Ogre_Matrix3_Determinant00);
    tolua_function(tolua_S,"SingularValueDecomposition",tolua_Ogre_Ogre_Matrix3_SingularValueDecomposition00);
    tolua_function(tolua_S,"SingularValueComposition",tolua_Ogre_Ogre_Matrix3_SingularValueComposition00);
    tolua_function(tolua_S,"Orthonormalize",tolua_Ogre_Ogre_Matrix3_Orthonormalize00);
    tolua_function(tolua_S,"QDUDecomposition",tolua_Ogre_Ogre_Matrix3_QDUDecomposition00);
    tolua_function(tolua_S,"SpectralNorm",tolua_Ogre_Ogre_Matrix3_SpectralNorm00);
    tolua_function(tolua_S,"ToAxisAngle",tolua_Ogre_Ogre_Matrix3_ToAxisAngle00);
    tolua_function(tolua_S,"ToAxisAngle",tolua_Ogre_Ogre_Matrix3_ToAxisAngle01);
    tolua_function(tolua_S,"FromAxisAngle",tolua_Ogre_Ogre_Matrix3_FromAxisAngle00);
    tolua_function(tolua_S,"ToEulerAnglesXYZ",tolua_Ogre_Ogre_Matrix3_ToEulerAnglesXYZ00);
    tolua_function(tolua_S,"ToEulerAnglesXZY",tolua_Ogre_Ogre_Matrix3_ToEulerAnglesXZY00);
    tolua_function(tolua_S,"ToEulerAnglesYXZ",tolua_Ogre_Ogre_Matrix3_ToEulerAnglesYXZ00);
    tolua_function(tolua_S,"ToEulerAnglesYZX",tolua_Ogre_Ogre_Matrix3_ToEulerAnglesYZX00);
    tolua_function(tolua_S,"ToEulerAnglesZXY",tolua_Ogre_Ogre_Matrix3_ToEulerAnglesZXY00);
    tolua_function(tolua_S,"ToEulerAnglesZYX",tolua_Ogre_Ogre_Matrix3_ToEulerAnglesZYX00);
    tolua_function(tolua_S,"FromEulerAnglesXYZ",tolua_Ogre_Ogre_Matrix3_FromEulerAnglesXYZ00);
    tolua_function(tolua_S,"FromEulerAnglesXZY",tolua_Ogre_Ogre_Matrix3_FromEulerAnglesXZY00);
    tolua_function(tolua_S,"FromEulerAnglesYXZ",tolua_Ogre_Ogre_Matrix3_FromEulerAnglesYXZ00);
    tolua_function(tolua_S,"FromEulerAnglesYZX",tolua_Ogre_Ogre_Matrix3_FromEulerAnglesYZX00);
    tolua_function(tolua_S,"FromEulerAnglesZXY",tolua_Ogre_Ogre_Matrix3_FromEulerAnglesZXY00);
    tolua_function(tolua_S,"FromEulerAnglesZYX",tolua_Ogre_Ogre_Matrix3_FromEulerAnglesZYX00);
    tolua_function(tolua_S,"EigenSolveSymmetric",tolua_Ogre_Ogre_Matrix3_EigenSolveSymmetric00);
    tolua_function(tolua_S,"TensorProduct",tolua_Ogre_Ogre_Matrix3_TensorProduct00);
    tolua_function(tolua_S,"hasScale",tolua_Ogre_Ogre_Matrix3_hasScale00);
    tolua_variable(tolua_S,"EPSILON",tolua_get_Ogre__Matrix3_EPSILON,NULL);
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__Matrix3_ZERO,NULL);
    tolua_variable(tolua_S,"IDENTITY",tolua_get_Ogre__Matrix3_IDENTITY,NULL);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector3","Ogre::Vector3","",tolua_collect_Ogre__Vector3);
   #else
   tolua_cclass(tolua_S,"Vector3","Ogre::Vector3","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector3");
    tolua_variable(tolua_S,"x",tolua_get_Ogre__Vector3_x,tolua_set_Ogre__Vector3_x);
    tolua_variable(tolua_S,"y",tolua_get_Ogre__Vector3_y,tolua_set_Ogre__Vector3_y);
    tolua_variable(tolua_S,"z",tolua_get_Ogre__Vector3_z,tolua_set_Ogre__Vector3_z);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector3_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector3_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector3_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector3_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector3_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector3_new01_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector3_new02);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector3_new02_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector3_new02_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector3_new03);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector3_new03_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector3_new03_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector3_new04);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector3_new04_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector3_new04_local);
    tolua_function(tolua_S,"swap",tolua_Ogre_Ogre_Vector3_swap00);
    tolua_function(tolua_S,".eq",tolua_Ogre_Ogre_Vector3__eq00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Vector3__add00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Vector3__sub00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Vector3__mul00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Vector3__mul01);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_Vector3__div00);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_Vector3__div01);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Vector3__add01);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Vector3__sub01);
    tolua_function(tolua_S,"length",tolua_Ogre_Ogre_Vector3_length00);
    tolua_function(tolua_S,"squaredLength",tolua_Ogre_Ogre_Vector3_squaredLength00);
    tolua_function(tolua_S,"distance",tolua_Ogre_Ogre_Vector3_distance00);
    tolua_function(tolua_S,"squaredDistance",tolua_Ogre_Ogre_Vector3_squaredDistance00);
    tolua_function(tolua_S,"dotProduct",tolua_Ogre_Ogre_Vector3_dotProduct00);
    tolua_function(tolua_S,"absDotProduct",tolua_Ogre_Ogre_Vector3_absDotProduct00);
    tolua_function(tolua_S,"normalise",tolua_Ogre_Ogre_Vector3_normalise00);
    tolua_function(tolua_S,"crossProduct",tolua_Ogre_Ogre_Vector3_crossProduct00);
    tolua_function(tolua_S,"midPoint",tolua_Ogre_Ogre_Vector3_midPoint00);
    tolua_function(tolua_S,".lt",tolua_Ogre_Ogre_Vector3__lt00);
    tolua_function(tolua_S,"makeFloor",tolua_Ogre_Ogre_Vector3_makeFloor00);
    tolua_function(tolua_S,"makeCeil",tolua_Ogre_Ogre_Vector3_makeCeil00);
    tolua_function(tolua_S,"perpendicular",tolua_Ogre_Ogre_Vector3_perpendicular00);
    tolua_function(tolua_S,"randomDeviant",tolua_Ogre_Ogre_Vector3_randomDeviant00);
    tolua_function(tolua_S,"randomDeviant",tolua_Ogre_Ogre_Vector3_randomDeviant01);
    tolua_function(tolua_S,"angleBetween",tolua_Ogre_Ogre_Vector3_angleBetween00);
    tolua_function(tolua_S,"getRotationTo",tolua_Ogre_Ogre_Vector3_getRotationTo00);
    tolua_function(tolua_S,"getRotationTo",tolua_Ogre_Ogre_Vector3_getRotationTo01);
    tolua_function(tolua_S,"isZeroLength",tolua_Ogre_Ogre_Vector3_isZeroLength00);
    tolua_function(tolua_S,"normalisedCopy",tolua_Ogre_Ogre_Vector3_normalisedCopy00);
    tolua_function(tolua_S,"reflect",tolua_Ogre_Ogre_Vector3_reflect00);
    tolua_function(tolua_S,"positionEquals",tolua_Ogre_Ogre_Vector3_positionEquals00);
    tolua_function(tolua_S,"positionCloses",tolua_Ogre_Ogre_Vector3_positionCloses00);
    tolua_function(tolua_S,"directionEquals",tolua_Ogre_Ogre_Vector3_directionEquals00);
    tolua_function(tolua_S,"isNaN",tolua_Ogre_Ogre_Vector3_isNaN00);
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__Vector3_ZERO,NULL);
    tolua_variable(tolua_S,"UNIT_X",tolua_get_Ogre__Vector3_UNIT_X,NULL);
    tolua_variable(tolua_S,"UNIT_Y",tolua_get_Ogre__Vector3_UNIT_Y,NULL);
    tolua_variable(tolua_S,"UNIT_Z",tolua_get_Ogre__Vector3_UNIT_Z,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_X",tolua_get_Ogre__Vector3_NEGATIVE_UNIT_X,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_Y",tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Y,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_Z",tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Z,NULL);
    tolua_variable(tolua_S,"UNIT_SCALE",tolua_get_Ogre__Vector3_UNIT_SCALE,NULL);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector2","Ogre::Vector2","",tolua_collect_Ogre__Vector2);
   #else
   tolua_cclass(tolua_S,"Vector2","Ogre::Vector2","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector2");
    tolua_variable(tolua_S,"x",tolua_get_Ogre__Vector2_x,tolua_set_Ogre__Vector2_x);
    tolua_variable(tolua_S,"y",tolua_get_Ogre__Vector2_y,tolua_set_Ogre__Vector2_y);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector2_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector2_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector2_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector2_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector2_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector2_new01_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector2_new02);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector2_new02_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector2_new02_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector2_new03);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector2_new03_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector2_new03_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector2_new04);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector2_new04_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector2_new04_local);
    tolua_function(tolua_S,"swap",tolua_Ogre_Ogre_Vector2_swap00);
    tolua_function(tolua_S,".eq",tolua_Ogre_Ogre_Vector2__eq00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Vector2__add00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Vector2__sub00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Vector2__mul00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Vector2__mul01);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_Vector2__div00);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_Vector2__div01);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Vector2__add01);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Vector2__sub01);
    tolua_function(tolua_S,"length",tolua_Ogre_Ogre_Vector2_length00);
    tolua_function(tolua_S,"squaredLength",tolua_Ogre_Ogre_Vector2_squaredLength00);
    tolua_function(tolua_S,"distance",tolua_Ogre_Ogre_Vector2_distance00);
    tolua_function(tolua_S,"squaredDistance",tolua_Ogre_Ogre_Vector2_squaredDistance00);
    tolua_function(tolua_S,"dotProduct",tolua_Ogre_Ogre_Vector2_dotProduct00);
    tolua_function(tolua_S,"normalise",tolua_Ogre_Ogre_Vector2_normalise00);
    tolua_function(tolua_S,"midPoint",tolua_Ogre_Ogre_Vector2_midPoint00);
    tolua_function(tolua_S,".lt",tolua_Ogre_Ogre_Vector2__lt00);
    tolua_function(tolua_S,"perpendicular",tolua_Ogre_Ogre_Vector2_perpendicular00);
    tolua_function(tolua_S,"crossProduct",tolua_Ogre_Ogre_Vector2_crossProduct00);
    tolua_function(tolua_S,"randomDeviant",tolua_Ogre_Ogre_Vector2_randomDeviant00);
    tolua_function(tolua_S,"isZeroLength",tolua_Ogre_Ogre_Vector2_isZeroLength00);
    tolua_function(tolua_S,"normalisedCopy",tolua_Ogre_Ogre_Vector2_normalisedCopy00);
    tolua_function(tolua_S,"reflect",tolua_Ogre_Ogre_Vector2_reflect00);
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__Vector2_ZERO,NULL);
    tolua_variable(tolua_S,"UNIT_X",tolua_get_Ogre__Vector2_UNIT_X,NULL);
    tolua_variable(tolua_S,"UNIT_Y",tolua_get_Ogre__Vector2_UNIT_Y,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_X",tolua_get_Ogre__Vector2_NEGATIVE_UNIT_X,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_Y",tolua_get_Ogre__Vector2_NEGATIVE_UNIT_Y,NULL);
    tolua_variable(tolua_S,"UNIT_SCALE",tolua_get_Ogre__Vector2_UNIT_SCALE,NULL);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector4","Ogre::Vector4","",tolua_collect_Ogre__Vector4);
   #else
   tolua_cclass(tolua_S,"Vector4","Ogre::Vector4","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector4");
    tolua_variable(tolua_S,"x",tolua_get_Ogre__Vector4_x,tolua_set_Ogre__Vector4_x);
    tolua_variable(tolua_S,"y",tolua_get_Ogre__Vector4_y,tolua_set_Ogre__Vector4_y);
    tolua_variable(tolua_S,"z",tolua_get_Ogre__Vector4_z,tolua_set_Ogre__Vector4_z);
    tolua_variable(tolua_S,"w",tolua_get_Ogre__Vector4_w,tolua_set_Ogre__Vector4_w);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector4_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector4_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector4_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector4_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector4_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector4_new01_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector4_new02);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector4_new02_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector4_new02_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector4_new03);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector4_new03_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector4_new03_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector4_new04);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector4_new04_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector4_new04_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector4_new05);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector4_new05_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector4_new05_local);
    tolua_function(tolua_S,"swap",tolua_Ogre_Ogre_Vector4_swap00);
    tolua_function(tolua_S,".eq",tolua_Ogre_Ogre_Vector4__eq00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Vector4__add00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Vector4__sub00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Vector4__mul00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Vector4__mul01);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_Vector4__div00);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_Vector4__div01);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Vector4__add01);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Vector4__sub01);
    tolua_function(tolua_S,"dotProduct",tolua_Ogre_Ogre_Vector4_dotProduct00);
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__Vector4_ZERO,NULL);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Quaternion","Ogre::Quaternion","",tolua_collect_Ogre__Quaternion);
   #else
   tolua_cclass(tolua_S,"Quaternion","Ogre::Quaternion","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Quaternion");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Quaternion_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Quaternion_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Quaternion_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Quaternion_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Quaternion_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Quaternion_new01_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Quaternion_new02);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Quaternion_new02_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Quaternion_new02_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Quaternion_new03);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Quaternion_new03_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Quaternion_new03_local);
    tolua_function(tolua_S,"swap",tolua_Ogre_Ogre_Quaternion_swap00);
    tolua_function(tolua_S,"FromRotationMatrix",tolua_Ogre_Ogre_Quaternion_FromRotationMatrix00);
    tolua_function(tolua_S,"FromAngleAxis",tolua_Ogre_Ogre_Quaternion_FromAngleAxis00);
    tolua_function(tolua_S,"ToAngleAxis",tolua_Ogre_Ogre_Quaternion_ToAngleAxis00);
    tolua_function(tolua_S,"ToAngleAxis",tolua_Ogre_Ogre_Quaternion_ToAngleAxis01);
    tolua_function(tolua_S,"FromAxes",tolua_Ogre_Ogre_Quaternion_FromAxes00);
    tolua_function(tolua_S,"FromAxes",tolua_Ogre_Ogre_Quaternion_FromAxes01);
    tolua_function(tolua_S,"ToAxes",tolua_Ogre_Ogre_Quaternion_ToAxes00);
    tolua_function(tolua_S,"ToAxes",tolua_Ogre_Ogre_Quaternion_ToAxes01);
    tolua_function(tolua_S,"xAxis",tolua_Ogre_Ogre_Quaternion_xAxis00);
    tolua_function(tolua_S,"yAxis",tolua_Ogre_Ogre_Quaternion_yAxis00);
    tolua_function(tolua_S,"zAxis",tolua_Ogre_Ogre_Quaternion_zAxis00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_Quaternion__add00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_Quaternion__sub00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Quaternion__mul00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Quaternion__mul01);
    tolua_function(tolua_S,".eq",tolua_Ogre_Ogre_Quaternion__eq00);
    tolua_function(tolua_S,"Dot",tolua_Ogre_Ogre_Quaternion_Dot00);
    tolua_function(tolua_S,"Norm",tolua_Ogre_Ogre_Quaternion_Norm00);
    tolua_function(tolua_S,"normalise",tolua_Ogre_Ogre_Quaternion_normalise00);
    tolua_function(tolua_S,"Inverse",tolua_Ogre_Ogre_Quaternion_Inverse00);
    tolua_function(tolua_S,"UnitInverse",tolua_Ogre_Ogre_Quaternion_UnitInverse00);
    tolua_function(tolua_S,"Exp",tolua_Ogre_Ogre_Quaternion_Exp00);
    tolua_function(tolua_S,"Log",tolua_Ogre_Ogre_Quaternion_Log00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_Quaternion__mul02);
    tolua_function(tolua_S,"getRoll",tolua_Ogre_Ogre_Quaternion_getRoll00);
    tolua_function(tolua_S,"getPitch",tolua_Ogre_Ogre_Quaternion_getPitch00);
    tolua_function(tolua_S,"getYaw",tolua_Ogre_Ogre_Quaternion_getYaw00);
    tolua_function(tolua_S,"equals",tolua_Ogre_Ogre_Quaternion_equals00);
    tolua_function(tolua_S,"Slerp",tolua_Ogre_Ogre_Quaternion_Slerp00);
    tolua_function(tolua_S,"SlerpExtraSpins",tolua_Ogre_Ogre_Quaternion_SlerpExtraSpins00);
    tolua_function(tolua_S,"Intermediate",tolua_Ogre_Ogre_Quaternion_Intermediate00);
    tolua_function(tolua_S,"Squad",tolua_Ogre_Ogre_Quaternion_Squad00);
    tolua_function(tolua_S,"nlerp",tolua_Ogre_Ogre_Quaternion_nlerp00);
    tolua_variable(tolua_S,"ms_fEpsilon",tolua_get_Ogre__Quaternion_ms_fEpsilon,NULL);
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__Quaternion_ZERO,NULL);
    tolua_variable(tolua_S,"IDENTITY",tolua_get_Ogre__Quaternion_IDENTITY,NULL);
    tolua_variable(tolua_S,"w",tolua_get_Ogre__Quaternion_w,tolua_set_Ogre__Quaternion_w);
    tolua_variable(tolua_S,"x",tolua_get_Ogre__Quaternion_x,tolua_set_Ogre__Quaternion_x);
    tolua_variable(tolua_S,"y",tolua_get_Ogre__Quaternion_y,tolua_set_Ogre__Quaternion_y);
    tolua_variable(tolua_S,"z",tolua_get_Ogre__Quaternion_z,tolua_set_Ogre__Quaternion_z);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"ColourValue","Ogre::ColourValue","",tolua_collect_Ogre__ColourValue);
   #else
   tolua_cclass(tolua_S,"ColourValue","Ogre::ColourValue","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"ColourValue");
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__ColourValue_ZERO,NULL);
    tolua_variable(tolua_S,"Black",tolua_get_Ogre__ColourValue_Black,NULL);
    tolua_variable(tolua_S,"White",tolua_get_Ogre__ColourValue_White,NULL);
    tolua_variable(tolua_S,"Red",tolua_get_Ogre__ColourValue_Red,NULL);
    tolua_variable(tolua_S,"Green",tolua_get_Ogre__ColourValue_Green,NULL);
    tolua_variable(tolua_S,"Blue",tolua_get_Ogre__ColourValue_Blue,NULL);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_ColourValue_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_ColourValue_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_ColourValue_new00_local);
    tolua_function(tolua_S,".eq",tolua_Ogre_Ogre_ColourValue__eq00);
    tolua_variable(tolua_S,"r",tolua_get_Ogre__ColourValue_r,tolua_set_Ogre__ColourValue_r);
    tolua_variable(tolua_S,"g",tolua_get_Ogre__ColourValue_g,tolua_set_Ogre__ColourValue_g);
    tolua_variable(tolua_S,"b",tolua_get_Ogre__ColourValue_b,tolua_set_Ogre__ColourValue_b);
    tolua_variable(tolua_S,"a",tolua_get_Ogre__ColourValue_a,tolua_set_Ogre__ColourValue_a);
    tolua_function(tolua_S,"getAsRGBA",tolua_Ogre_Ogre_ColourValue_getAsRGBA00);
    tolua_function(tolua_S,"getAsARGB",tolua_Ogre_Ogre_ColourValue_getAsARGB00);
    tolua_function(tolua_S,"getAsBGRA",tolua_Ogre_Ogre_ColourValue_getAsBGRA00);
    tolua_function(tolua_S,"getAsABGR",tolua_Ogre_Ogre_ColourValue_getAsABGR00);
    tolua_function(tolua_S,"setAsRGBA",tolua_Ogre_Ogre_ColourValue_setAsRGBA00);
    tolua_function(tolua_S,"setAsARGB",tolua_Ogre_Ogre_ColourValue_setAsARGB00);
    tolua_function(tolua_S,"setAsBGRA",tolua_Ogre_Ogre_ColourValue_setAsBGRA00);
    tolua_function(tolua_S,"setAsABGR",tolua_Ogre_Ogre_ColourValue_setAsABGR00);
    tolua_function(tolua_S,"saturate",tolua_Ogre_Ogre_ColourValue_saturate00);
    tolua_function(tolua_S,".add",tolua_Ogre_Ogre_ColourValue__add00);
    tolua_function(tolua_S,".sub",tolua_Ogre_Ogre_ColourValue__sub00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_ColourValue__mul00);
    tolua_function(tolua_S,".mul",tolua_Ogre_Ogre_ColourValue__mul01);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_ColourValue__div00);
    tolua_function(tolua_S,".div",tolua_Ogre_Ogre_ColourValue__div01);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   tolua_cclass(tolua_S,"MovableObject","Ogre::MovableObject","",NULL);
   tolua_beginmodule(tolua_S,"MovableObject");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   tolua_cclass(tolua_S,"SceneNode","Ogre::SceneNode","",NULL);
   tolua_beginmodule(tolua_S,"SceneNode");
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   tolua_cclass(tolua_S,"Camera","Ogre::Camera","",NULL);
   tolua_beginmodule(tolua_S,"Camera");
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Camera_setPosition00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Camera_setPosition01);
    tolua_function(tolua_S,"getPosition",tolua_Ogre_Ogre_Camera_getPosition00);
    tolua_function(tolua_S,"move",tolua_Ogre_Ogre_Camera_move00);
    tolua_function(tolua_S,"moveRelative",tolua_Ogre_Ogre_Camera_moveRelative00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_Camera_setDirection00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_Camera_setDirection01);
    tolua_function(tolua_S,"getDirection",tolua_Ogre_Ogre_Camera_getDirection00);
    tolua_function(tolua_S,"getUp",tolua_Ogre_Ogre_Camera_getUp00);
    tolua_function(tolua_S,"getRight",tolua_Ogre_Ogre_Camera_getRight00);
    tolua_function(tolua_S,"lookAt",tolua_Ogre_Ogre_Camera_lookAt00);
    tolua_function(tolua_S,"lookAt",tolua_Ogre_Ogre_Camera_lookAt01);
    tolua_function(tolua_S,"roll",tolua_Ogre_Ogre_Camera_roll00);
    tolua_function(tolua_S,"yaw",tolua_Ogre_Ogre_Camera_yaw00);
    tolua_function(tolua_S,"pitch",tolua_Ogre_Ogre_Camera_pitch00);
    tolua_function(tolua_S,"rotate",tolua_Ogre_Ogre_Camera_rotate00);
    tolua_function(tolua_S,"rotate",tolua_Ogre_Ogre_Camera_rotate01);
    tolua_function(tolua_S,"setFixedYawAxis",tolua_Ogre_Ogre_Camera_setFixedYawAxis00);
    tolua_function(tolua_S,"setFixedYawAxis",tolua_Ogre_Ogre_Camera_setFixedYawAxis01);
    tolua_function(tolua_S,"getOrientation",tolua_Ogre_Ogre_Camera_getOrientation00);
    tolua_function(tolua_S,"setOrientation",tolua_Ogre_Ogre_Camera_setOrientation00);
    tolua_function(tolua_S,"getDerivedOrientation",tolua_Ogre_Ogre_Camera_getDerivedOrientation00);
    tolua_function(tolua_S,"getDerivedPosition",tolua_Ogre_Ogre_Camera_getDerivedPosition00);
    tolua_function(tolua_S,"getDerivedDirection",tolua_Ogre_Ogre_Camera_getDerivedDirection00);
    tolua_function(tolua_S,"getDerivedUp",tolua_Ogre_Ogre_Camera_getDerivedUp00);
    tolua_function(tolua_S,"getDerivedRight",tolua_Ogre_Ogre_Camera_getDerivedRight00);
    tolua_function(tolua_S,"getRealOrientation",tolua_Ogre_Ogre_Camera_getRealOrientation00);
    tolua_function(tolua_S,"getRealPosition",tolua_Ogre_Ogre_Camera_getRealPosition00);
    tolua_function(tolua_S,"getRealDirection",tolua_Ogre_Ogre_Camera_getRealDirection00);
    tolua_function(tolua_S,"getRealUp",tolua_Ogre_Ogre_Camera_getRealUp00);
    tolua_function(tolua_S,"getRealRight",tolua_Ogre_Ogre_Camera_getRealRight00);
    tolua_function(tolua_S,"setAutoTracking",tolua_Ogre_Ogre_Camera_setAutoTracking00);
    tolua_function(tolua_S,"setAutoTracking",tolua_Ogre_Ogre_Camera_setAutoTracking01);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   tolua_cclass(tolua_S,"Light","Ogre::Light","",NULL);
   tolua_beginmodule(tolua_S,"Light");
    tolua_constant(tolua_S,"LT_POINT",Ogre::Light::LT_POINT);
    tolua_constant(tolua_S,"LT_DIRECTIONAL",Ogre::Light::LT_DIRECTIONAL);
    tolua_constant(tolua_S,"LT_SPOTLIGHT",Ogre::Light::LT_SPOTLIGHT);
    tolua_function(tolua_S,"setType",tolua_Ogre_Ogre_Light_setType00);
    tolua_function(tolua_S,"getType",tolua_Ogre_Ogre_Light_getType00);
    tolua_function(tolua_S,"setDiffuseColour",tolua_Ogre_Ogre_Light_setDiffuseColour00);
    tolua_function(tolua_S,"setDiffuseColour",tolua_Ogre_Ogre_Light_setDiffuseColour01);
    tolua_function(tolua_S,"getDiffuseColour",tolua_Ogre_Ogre_Light_getDiffuseColour00);
    tolua_function(tolua_S,"setSpecularColour",tolua_Ogre_Ogre_Light_setSpecularColour00);
    tolua_function(tolua_S,"setSpecularColour",tolua_Ogre_Ogre_Light_setSpecularColour01);
    tolua_function(tolua_S,"getSpecularColour",tolua_Ogre_Ogre_Light_getSpecularColour00);
    tolua_function(tolua_S,"setAttenuation",tolua_Ogre_Ogre_Light_setAttenuation00);
    tolua_function(tolua_S,"getAttenuationRange",tolua_Ogre_Ogre_Light_getAttenuationRange00);
    tolua_function(tolua_S,"getAttenuationConstant",tolua_Ogre_Ogre_Light_getAttenuationConstant00);
    tolua_function(tolua_S,"getAttenuationLinear",tolua_Ogre_Ogre_Light_getAttenuationLinear00);
    tolua_function(tolua_S,"getAttenuationQuadric",tolua_Ogre_Ogre_Light_getAttenuationQuadric00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Light_setPosition00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Light_setPosition01);
    tolua_function(tolua_S,"getPosition",tolua_Ogre_Ogre_Light_getPosition00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_Light_setDirection00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_Light_setDirection01);
    tolua_function(tolua_S,"getDirection",tolua_Ogre_Ogre_Light_getDirection00);
    tolua_function(tolua_S,"setSpotlightRange",tolua_Ogre_Ogre_Light_setSpotlightRange00);
    tolua_function(tolua_S,"getSpotlightInnerAngle",tolua_Ogre_Ogre_Light_getSpotlightInnerAngle00);
    tolua_function(tolua_S,"getSpotlightOuterAngle",tolua_Ogre_Ogre_Light_getSpotlightOuterAngle00);
    tolua_function(tolua_S,"getSpotlightFalloff",tolua_Ogre_Ogre_Light_getSpotlightFalloff00);
    tolua_function(tolua_S,"setSpotlightInnerAngle",tolua_Ogre_Ogre_Light_setSpotlightInnerAngle00);
    tolua_function(tolua_S,"setSpotlightOuterAngle",tolua_Ogre_Ogre_Light_setSpotlightOuterAngle00);
    tolua_function(tolua_S,"setSpotlightFalloff",tolua_Ogre_Ogre_Light_setSpotlightFalloff00);
    tolua_function(tolua_S,"setPowerScale",tolua_Ogre_Ogre_Light_setPowerScale00);
    tolua_function(tolua_S,"getPowerScale",tolua_Ogre_Ogre_Light_getPowerScale00);
    tolua_function(tolua_S,"getDerivedPosition",tolua_Ogre_Ogre_Light_getDerivedPosition00);
    tolua_function(tolua_S,"getDerivedDirection",tolua_Ogre_Ogre_Light_getDerivedDirection00);
    tolua_function(tolua_S,"setVisible",tolua_Ogre_Ogre_Light_setVisible00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   tolua_constant(tolua_S,"ST_GENERIC",Ogre::ST_GENERIC);
   tolua_constant(tolua_S,"ST_EXTERIOR_CLOSE",Ogre::ST_EXTERIOR_CLOSE);
   tolua_constant(tolua_S,"ST_EXTERIOR_FAR",Ogre::ST_EXTERIOR_FAR);
   tolua_constant(tolua_S,"ST_EXTERIOR_REAL_FAR",Ogre::ST_EXTERIOR_REAL_FAR);
   tolua_constant(tolua_S,"ST_INTERIOR",Ogre::ST_INTERIOR);
   tolua_cclass(tolua_S,"SceneManager","Ogre::SceneManager","",NULL);
   tolua_beginmodule(tolua_S,"SceneManager");
    tolua_function(tolua_S,"createCamera",tolua_Ogre_Ogre_SceneManager_createCamera00);
    tolua_function(tolua_S,"destroyCamera",tolua_Ogre_Ogre_SceneManager_destroyCamera00);
    tolua_function(tolua_S,"createLight",tolua_Ogre_Ogre_SceneManager_createLight00);
    tolua_function(tolua_S,"destroyLight",tolua_Ogre_Ogre_SceneManager_destroyLight00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"OgreManager","OgreManager","",NULL);
  tolua_beginmodule(tolua_S,"OgreManager");
   tolua_function(tolua_S,"createSecondSceneManager",tolua_Ogre_OgreManager_createSecondSceneManager00);
   tolua_function(tolua_S,"swapSceneManager",tolua_Ogre_OgreManager_swapSceneManager00);
   tolua_function(tolua_S,"createCamera",tolua_Ogre_OgreManager_createCamera00);
   tolua_function(tolua_S,"destroyCamera",tolua_Ogre_OgreManager_destroyCamera00);
   tolua_function(tolua_S,"destroyCamera",tolua_Ogre_OgreManager_destroyCamera01);
   tolua_function(tolua_S,"setAmbientColor",tolua_Ogre_OgreManager_setAmbientColor00);
   tolua_function(tolua_S,"setBackGroundColor",tolua_Ogre_OgreManager_setBackGroundColor00);
   tolua_function(tolua_S,"setCurrentCamera",tolua_Ogre_OgreManager_setCurrentCamera00);
   tolua_function(tolua_S,"createLight",tolua_Ogre_OgreManager_createLight00);
   tolua_function(tolua_S,"destroyLight",tolua_Ogre_OgreManager_destroyLight00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Ogre (lua_State* tolua_S) {
 return tolua_Ogre_open(tolua_S);
};
#endif

