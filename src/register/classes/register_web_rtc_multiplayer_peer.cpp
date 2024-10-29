
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/classes/web_rtc_multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_rtc_multiplayer_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef web_rtc_multiplayer_peer_class_def = {
	"WebRTCMultiplayerPeer",
	.finalizer = web_rtc_multiplayer_peer_class_finalizer
};

static JSValue web_rtc_multiplayer_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, WebRTCMultiplayerPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	WebRTCMultiplayerPeer *web_rtc_multiplayer_peer_class = memnew(WebRTCMultiplayerPeer);
	if (!web_rtc_multiplayer_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, web_rtc_multiplayer_peer_class);	
	return obj;
}
static JSValue web_rtc_multiplayer_peer_class_create_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&WebRTCMultiplayerPeer::create_server, ctx, this_val, argc, argv);
};
static JSValue web_rtc_multiplayer_peer_class_create_client(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&WebRTCMultiplayerPeer::create_client, ctx, this_val, argc, argv);
};
static JSValue web_rtc_multiplayer_peer_class_create_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&WebRTCMultiplayerPeer::create_mesh, ctx, this_val, argc, argv);
};
static JSValue web_rtc_multiplayer_peer_class_add_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&WebRTCMultiplayerPeer::add_peer, ctx, this_val, argc, argv);
};
static JSValue web_rtc_multiplayer_peer_class_remove_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&WebRTCMultiplayerPeer::remove_peer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_rtc_multiplayer_peer_class_has_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&WebRTCMultiplayerPeer::has_peer, ctx, this_val, argc, argv);
};
static JSValue web_rtc_multiplayer_peer_class_get_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&WebRTCMultiplayerPeer::get_peer, ctx, this_val, argc, argv);
};
static JSValue web_rtc_multiplayer_peer_class_get_peers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&WebRTCMultiplayerPeer::get_peers, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry web_rtc_multiplayer_peer_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_server", 1, &web_rtc_multiplayer_peer_class_create_server),
	JS_CFUNC_DEF("create_client", 2, &web_rtc_multiplayer_peer_class_create_client),
	JS_CFUNC_DEF("create_mesh", 2, &web_rtc_multiplayer_peer_class_create_mesh),
	JS_CFUNC_DEF("add_peer", 3, &web_rtc_multiplayer_peer_class_add_peer),
	JS_CFUNC_DEF("remove_peer", 1, &web_rtc_multiplayer_peer_class_remove_peer),
	JS_CFUNC_DEF("has_peer", 1, &web_rtc_multiplayer_peer_class_has_peer),
	JS_CFUNC_DEF("get_peer", 1, &web_rtc_multiplayer_peer_class_get_peer),
	JS_CFUNC_DEF("get_peers", 0, &web_rtc_multiplayer_peer_class_get_peers),
};

void define_web_rtc_multiplayer_peer_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_web_rtc_multiplayer_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&WebRTCMultiplayerPeer::__class_id);
	classes["WebRTCMultiplayerPeer"] = WebRTCMultiplayerPeer::__class_id;
	class_id_list.insert(WebRTCMultiplayerPeer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), WebRTCMultiplayerPeer::__class_id, &web_rtc_multiplayer_peer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, WebRTCMultiplayerPeer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, MultiplayerPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebRTCMultiplayerPeer::__class_id, proto);

	define_web_rtc_multiplayer_peer_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, web_rtc_multiplayer_peer_class_proto_funcs, _countof(web_rtc_multiplayer_peer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, web_rtc_multiplayer_peer_class_constructor, "WebRTCMultiplayerPeer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "WebRTCMultiplayerPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_web_rtc_multiplayer_peer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/multiplayer_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_web_rtc_multiplayer_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WebRTCMultiplayerPeer");
	return m;
}

JSModuleDef *js_init_web_rtc_multiplayer_peer_module(JSContext *ctx) {
	return _js_init_web_rtc_multiplayer_peer_module(ctx, "@godot/classes/web_rtc_multiplayer_peer");
}

void register_web_rtc_multiplayer_peer() {
	WebRTCMultiplayerPeer::__init_js_class_id();
	js_init_web_rtc_multiplayer_peer_module(ctx);
}