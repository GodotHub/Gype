
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/offline_multiplayer_peer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void offline_multiplayer_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	OfflineMultiplayerPeer *offline_multiplayer_peer = static_cast<OfflineMultiplayerPeer *>(JS_GetOpaque(val, OfflineMultiplayerPeer::__class_id));
	if (offline_multiplayer_peer)
		OfflineMultiplayerPeer::free(nullptr, offline_multiplayer_peer);
}

static JSClassDef offline_multiplayer_peer_class_def = {
	"OfflineMultiplayerPeer",
	.finalizer = offline_multiplayer_peer_class_finalizer
};

static JSValue offline_multiplayer_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OfflineMultiplayerPeer *offline_multiplayer_peer_class;
	JSValue obj = JS_NewObjectClass(ctx, OfflineMultiplayerPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	offline_multiplayer_peer_class = memnew(OfflineMultiplayerPeer);
	if (!offline_multiplayer_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, offline_multiplayer_peer_class);
	return obj;
}

static int js_offline_multiplayer_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OfflineMultiplayerPeer::__class_id);
	classes["OfflineMultiplayerPeer"] = OfflineMultiplayerPeer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OfflineMultiplayerPeer::__class_id, &offline_multiplayer_peer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, MultiplayerPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OfflineMultiplayerPeer::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, offline_multiplayer_peer_class_constructor, "OfflineMultiplayerPeer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OfflineMultiplayerPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_offline_multiplayer_peer_module(JSContext *ctx, const char *module_name) {
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
	js_init_offline_multiplayer_peer_module(ctx);
}