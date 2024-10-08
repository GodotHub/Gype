
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/scene_multiplayer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void scene_multiplayer_class_finalizer(JSRuntime *rt, JSValue val) {
	SceneMultiplayer *scene_multiplayer = static_cast<SceneMultiplayer *>(JS_GetOpaque(val, SceneMultiplayer::__class_id));
	if (scene_multiplayer)
		SceneMultiplayer::free(nullptr, scene_multiplayer);
}

static JSClassDef scene_multiplayer_class_def = {
	"SceneMultiplayer",
	.finalizer = scene_multiplayer_class_finalizer
};

static JSValue scene_multiplayer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SceneMultiplayer *scene_multiplayer_class;
	JSValue obj = JS_NewObjectClass(ctx, SceneMultiplayer::__class_id);
	if (JS_IsException(obj))
		return obj;
	scene_multiplayer_class = memnew(SceneMultiplayer);
	if (!scene_multiplayer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, scene_multiplayer_class);
	return obj;
}
static JSValue scene_multiplayer_class_set_root_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::set_root_path, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_multiplayer_class_get_root_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneMultiplayer::get_root_path, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::clear, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_multiplayer_class_disconnect_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::disconnect_peer, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_multiplayer_class_get_authenticating_peers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneMultiplayer::get_authenticating_peers, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_send_auth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneMultiplayer::send_auth, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_complete_auth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneMultiplayer::complete_auth, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_set_auth_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::set_auth_callback, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_multiplayer_class_get_auth_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneMultiplayer::get_auth_callback, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_set_auth_timeout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::set_auth_timeout, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_multiplayer_class_get_auth_timeout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneMultiplayer::get_auth_timeout, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_set_refuse_new_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::set_refuse_new_connections, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_multiplayer_class_is_refusing_new_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneMultiplayer::is_refusing_new_connections, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_set_allow_object_decoding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::set_allow_object_decoding, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_multiplayer_class_is_object_decoding_allowed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneMultiplayer::is_object_decoding_allowed, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_set_server_relay_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::set_server_relay_enabled, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_multiplayer_class_is_server_relay_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneMultiplayer::is_server_relay_enabled, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_send_bytes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SceneMultiplayer::send_bytes, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_get_max_sync_packet_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneMultiplayer::get_max_sync_packet_size, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_set_max_sync_packet_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::set_max_sync_packet_size, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scene_multiplayer_class_get_max_delta_packet_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SceneMultiplayer::get_max_delta_packet_size, SceneMultiplayer::__class_id, ctx, this_val, argv);
};
static JSValue scene_multiplayer_class_set_max_delta_packet_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SceneMultiplayer::set_max_delta_packet_size, SceneMultiplayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry scene_multiplayer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_root_path", 1, &scene_multiplayer_class_set_root_path),
	JS_CFUNC_DEF("get_root_path", 0, &scene_multiplayer_class_get_root_path),
	JS_CFUNC_DEF("clear", 0, &scene_multiplayer_class_clear),
	JS_CFUNC_DEF("disconnect_peer", 1, &scene_multiplayer_class_disconnect_peer),
	JS_CFUNC_DEF("get_authenticating_peers", 0, &scene_multiplayer_class_get_authenticating_peers),
	JS_CFUNC_DEF("send_auth", 2, &scene_multiplayer_class_send_auth),
	JS_CFUNC_DEF("complete_auth", 1, &scene_multiplayer_class_complete_auth),
	JS_CFUNC_DEF("set_auth_callback", 1, &scene_multiplayer_class_set_auth_callback),
	JS_CFUNC_DEF("get_auth_callback", 0, &scene_multiplayer_class_get_auth_callback),
	JS_CFUNC_DEF("set_auth_timeout", 1, &scene_multiplayer_class_set_auth_timeout),
	JS_CFUNC_DEF("get_auth_timeout", 0, &scene_multiplayer_class_get_auth_timeout),
	JS_CFUNC_DEF("set_refuse_new_connections", 1, &scene_multiplayer_class_set_refuse_new_connections),
	JS_CFUNC_DEF("is_refusing_new_connections", 0, &scene_multiplayer_class_is_refusing_new_connections),
	JS_CFUNC_DEF("set_allow_object_decoding", 1, &scene_multiplayer_class_set_allow_object_decoding),
	JS_CFUNC_DEF("is_object_decoding_allowed", 0, &scene_multiplayer_class_is_object_decoding_allowed),
	JS_CFUNC_DEF("set_server_relay_enabled", 1, &scene_multiplayer_class_set_server_relay_enabled),
	JS_CFUNC_DEF("is_server_relay_enabled", 0, &scene_multiplayer_class_is_server_relay_enabled),
	JS_CFUNC_DEF("send_bytes", 4, &scene_multiplayer_class_send_bytes),
	JS_CFUNC_DEF("get_max_sync_packet_size", 0, &scene_multiplayer_class_get_max_sync_packet_size),
	JS_CFUNC_DEF("set_max_sync_packet_size", 1, &scene_multiplayer_class_set_max_sync_packet_size),
	JS_CFUNC_DEF("get_max_delta_packet_size", 0, &scene_multiplayer_class_get_max_delta_packet_size),
	JS_CFUNC_DEF("set_max_delta_packet_size", 1, &scene_multiplayer_class_set_max_delta_packet_size),
};

static int js_scene_multiplayer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SceneMultiplayer::__class_id);
	classes["SceneMultiplayer"] = SceneMultiplayer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SceneMultiplayer::__class_id, &scene_multiplayer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, MultiplayerAPI::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SceneMultiplayer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, scene_multiplayer_class_proto_funcs, _countof(scene_multiplayer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, scene_multiplayer_class_constructor, "SceneMultiplayer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SceneMultiplayer", ctor);

	return 0;
}

JSModuleDef *_js_init_scene_multiplayer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scene_multiplayer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SceneMultiplayer");
	return m;
}

JSModuleDef *js_init_scene_multiplayer_module(JSContext *ctx) {
	return _js_init_scene_multiplayer_module(ctx, "godot/classes/scene_multiplayer");
}

void register_scene_multiplayer() {
	js_init_scene_multiplayer_module(ctx);
}