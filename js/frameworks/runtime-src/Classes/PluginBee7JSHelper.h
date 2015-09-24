
#ifndef __PLUGIN_BEE7_JS_HELPER_H__
#define __PLUGIN_BEE7_JS_HELPER_H__

#include "jsapi.h"
#include "jsfriendapi.h"


#if MOZJS_MAJOR_VERSION >= 31
void register_all_PluginBee7JS_helper(JSContext* cx, JS::HandleObject global);
#else
void register_all_PluginBee7JS_helper(JSContext* cx, JSObject* global);
#endif


#endif /* defined(__PLUGIN_VUNGLEJS_HELPER_H__) */