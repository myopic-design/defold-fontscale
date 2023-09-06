#define EXTENSION_NAME FontScale
#define LIB_NAME "FontScale"
#define MODULE_NAME "fontscale"

#include <dmsdk/sdk.h>
#include "fontscale_private.h"

static int GetFontScale(lua_State* L) {
  DM_LUA_STACK_CHECK(L, 1);

  lua_Number fontScale = ext_fontscale::getFontScale();

  lua_pushnumber(L, fontScale);
  return 1;
}

static const luaL_reg Module_methods[] = {{"get", GetFontScale}, {0, 0}};

static void LuaInit(lua_State* L) {
  int top = lua_gettop(L);

  luaL_register(L, MODULE_NAME, Module_methods);

  lua_pop(L, 1);
  assert(top == lua_gettop(L));
}

static dmExtension::Result AppInitializeFontScale(dmExtension::AppParams* params) {
  return dmExtension::RESULT_OK;
}

static dmExtension::Result InitializeFontScale(dmExtension::Params* params) {
  LuaInit(params->m_L);
  return dmExtension::RESULT_OK;
}

static dmExtension::Result AppFinalizeFontScale(dmExtension::AppParams* params) {
  return dmExtension::RESULT_OK;
}

static dmExtension::Result FinalizeFontScale(dmExtension::Params* params) {
  return dmExtension::RESULT_OK;
}

static dmExtension::Result OnUpdateFontScale(dmExtension::Params* params) {
  return dmExtension::RESULT_OK;
}

DM_DECLARE_EXTENSION(EXTENSION_NAME,
                     LIB_NAME,
                     AppInitializeFontScale,
                     AppFinalizeFontScale,
                     InitializeFontScale,
                     OnUpdateFontScale,
                     0,
                     FinalizeFontScale)
