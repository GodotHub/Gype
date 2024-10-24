
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/offline_multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void offline_multiplayer_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef offline_multiplayer_peer_class_def = {
	"OfflineMultiplayerPeer",
	.finalizer = offline_multiplayer_peer_class_finalizer
};

static JSValue offline_multiplayer_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OfflineMultiplayerPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	OfflineMultiplayerPeer *offline_multiplayer_peer_class = memnew(OfflineMultiplayerPeer);
	if (!offline_multiplayer_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, offline_multiplayer_peer_class);	
	return obj;
}

void define_offline_multiplayer_peer_property(JSContext *ctx, JSValue obj) {
}

static int js_offline_multiplayer_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&OfflineMultiplayerPeer::__class_id);
	classes["OfflineMultiplayerPeer"] = OfflineMultiplayerPeer::__class_id;
	class_id_list.insert(OfflineMultiplayerPeer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OfflineMultiplayerPeer::__class_id, &offline_multiplayer_peer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OfflineMultiplayerPeer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, MultiplayerPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OfflineMultiplayerPeer::__class_id, proto);

	define_offline_multiplayer_peer_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, offline_multiplayer_peer_class_constructor, "OfflineMultiplayerPeer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OfflineMultiplayerPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_offline_multiplayer_peer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/multiplayer_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_offline_multiplayer_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OfflineMultiplayerPeer");
	return m;
}

JSModuleDef *js_init_offline_multiplayer_peer_module(JSContext *ctx) {
	return _js_init_offline_multiplayer_peer_module(ctx, "godot/classes/offline_multiplayer_peer");
}

void register_offline_multiplayer_peer() {
	OfflineMultiplayerPeer::__init_js_class_id();
	js_init_offline_multiplayer_peer_module(ctx);
}