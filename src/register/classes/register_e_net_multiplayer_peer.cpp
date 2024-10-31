
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/e_net_multiplayer_peer.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/e_net_connection.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void e_net_multiplayer_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef e_net_multiplayer_peer_class_def = {
	"ENetMultiplayerPeer",
	.finalizer = e_net_multiplayer_peer_class_finalizer
};

static JSValue e_net_multiplayer_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ENetMultiplayerPeer::__class_id);
	if (JS_IsException(obj))
		return obj;

	ENetMultiplayerPeer *e_net_multiplayer_peer_class;
	if (argc == 1) 
		e_net_multiplayer_peer_class = static_cast<ENetMultiplayerPeer *>(static_cast<Object *>(Variant(*argv)));
	else 
		e_net_multiplayer_peer_class = memnew(ENetMultiplayerPeer);
	if (!e_net_multiplayer_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, e_net_multiplayer_peer_class);	
	return obj;
}
static JSValue e_net_multiplayer_peer_class_create_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ENetMultiplayerPeer::create_server, ctx, this_val, argc, argv);
};
static JSValue e_net_multiplayer_peer_class_create_client(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ENetMultiplayerPeer::create_client, ctx, this_val, argc, argv);
};
static JSValue e_net_multiplayer_peer_class_create_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ENetMultiplayerPeer::create_mesh, ctx, this_val, argc, argv);
};
static JSValue e_net_multiplayer_peer_class_add_mesh_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ENetMultiplayerPeer::add_mesh_peer, ctx, this_val, argc, argv);
};
static JSValue e_net_multiplayer_peer_class_set_bind_ip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ENetMultiplayerPeer::set_bind_ip, ctx, this_val, argc, argv);
};
static JSValue e_net_multiplayer_peer_class_get_host(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ENetMultiplayerPeer::get_host, ctx, this_val, argc, argv);
};
static JSValue e_net_multiplayer_peer_class_get_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ENetMultiplayerPeer::get_peer, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry e_net_multiplayer_peer_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_server", 5, &e_net_multiplayer_peer_class_create_server),
	JS_CFUNC_DEF("create_client", 6, &e_net_multiplayer_peer_class_create_client),
	JS_CFUNC_DEF("create_mesh", 1, &e_net_multiplayer_peer_class_create_mesh),
	JS_CFUNC_DEF("add_mesh_peer", 2, &e_net_multiplayer_peer_class_add_mesh_peer),
	JS_CFUNC_DEF("set_bind_ip", 1, &e_net_multiplayer_peer_class_set_bind_ip),
	JS_CFUNC_DEF("get_host", 0, &e_net_multiplayer_peer_class_get_host),
	JS_CFUNC_DEF("get_peer", 1, &e_net_multiplayer_peer_class_get_peer),
};

static void define_e_net_multiplayer_peer_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "host"),
        JS_NewCFunction(ctx, e_net_multiplayer_peer_class_get_host, "get_host", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
	
}

static void define_e_net_multiplayer_peer_enum(JSContext *ctx, JSValue proto) {
}

static int js_e_net_multiplayer_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ENetMultiplayerPeer::__class_id);
	classes["ENetMultiplayerPeer"] = ENetMultiplayerPeer::__class_id;
	class_id_list.insert(ENetMultiplayerPeer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ENetMultiplayerPeer::__class_id, &e_net_multiplayer_peer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ENetMultiplayerPeer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, MultiplayerPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ENetMultiplayerPeer::__class_id, proto);

	define_e_net_multiplayer_peer_property(ctx, proto);
	define_e_net_multiplayer_peer_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, e_net_multiplayer_peer_class_proto_funcs, _countof(e_net_multiplayer_peer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, e_net_multiplayer_peer_class_constructor, "ENetMultiplayerPeer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ENetMultiplayerPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_e_net_multiplayer_peer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/multiplayer_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_e_net_multiplayer_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ENetMultiplayerPeer");
	return m;
}

JSModuleDef *js_init_e_net_multiplayer_peer_module(JSContext *ctx) {
	return _js_init_e_net_multiplayer_peer_module(ctx, "@godot/classes/e_net_multiplayer_peer");
}

void register_e_net_multiplayer_peer() {
	ENetMultiplayerPeer::__init_js_class_id();
	js_init_e_net_multiplayer_peer_module(ctx);
}