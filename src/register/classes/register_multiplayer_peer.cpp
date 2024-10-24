
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void multiplayer_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef multiplayer_peer_class_def = {
	"MultiplayerPeer",
	.finalizer = multiplayer_peer_class_finalizer
};

static JSValue multiplayer_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MultiplayerPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	MultiplayerPeer *multiplayer_peer_class = memnew(MultiplayerPeer);
	if (!multiplayer_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, multiplayer_peer_class);	
	return obj;
}
static JSValue multiplayer_peer_class_set_transfer_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MultiplayerPeer::set_transfer_channel, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_get_transfer_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::get_transfer_channel, ctx, this_val, argc, argv);
};
static JSValue multiplayer_peer_class_set_transfer_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MultiplayerPeer::set_transfer_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_get_transfer_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::get_transfer_mode, ctx, this_val, argc, argv);
};
static JSValue multiplayer_peer_class_set_target_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MultiplayerPeer::set_target_peer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_get_packet_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::get_packet_peer, ctx, this_val, argc, argv);
};
static JSValue multiplayer_peer_class_get_packet_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::get_packet_channel, ctx, this_val, argc, argv);
};
static JSValue multiplayer_peer_class_get_packet_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::get_packet_mode, ctx, this_val, argc, argv);
};
static JSValue multiplayer_peer_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MultiplayerPeer::poll, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MultiplayerPeer::close, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_disconnect_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MultiplayerPeer::disconnect_peer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_get_connection_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::get_connection_status, ctx, this_val, argc, argv);
};
static JSValue multiplayer_peer_class_get_unique_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::get_unique_id, ctx, this_val, argc, argv);
};
static JSValue multiplayer_peer_class_generate_unique_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::generate_unique_id, ctx, this_val, argc, argv);
};
static JSValue multiplayer_peer_class_set_refuse_new_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MultiplayerPeer::set_refuse_new_connections, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_is_refusing_new_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::is_refusing_new_connections, ctx, this_val, argc, argv);
};
static JSValue multiplayer_peer_class_is_server_relay_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MultiplayerPeer::is_server_relay_supported, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry multiplayer_peer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_transfer_channel", 1, &multiplayer_peer_class_set_transfer_channel),
	JS_CFUNC_DEF("get_transfer_channel", 0, &multiplayer_peer_class_get_transfer_channel),
	JS_CFUNC_DEF("set_transfer_mode", 1, &multiplayer_peer_class_set_transfer_mode),
	JS_CFUNC_DEF("get_transfer_mode", 0, &multiplayer_peer_class_get_transfer_mode),
	JS_CFUNC_DEF("set_target_peer", 1, &multiplayer_peer_class_set_target_peer),
	JS_CFUNC_DEF("get_packet_peer", 0, &multiplayer_peer_class_get_packet_peer),
	JS_CFUNC_DEF("get_packet_channel", 0, &multiplayer_peer_class_get_packet_channel),
	JS_CFUNC_DEF("get_packet_mode", 0, &multiplayer_peer_class_get_packet_mode),
	JS_CFUNC_DEF("poll", 0, &multiplayer_peer_class_poll),
	JS_CFUNC_DEF("close", 0, &multiplayer_peer_class_close),
	JS_CFUNC_DEF("disconnect_peer", 2, &multiplayer_peer_class_disconnect_peer),
	JS_CFUNC_DEF("get_connection_status", 0, &multiplayer_peer_class_get_connection_status),
	JS_CFUNC_DEF("get_unique_id", 0, &multiplayer_peer_class_get_unique_id),
	JS_CFUNC_DEF("generate_unique_id", 0, &multiplayer_peer_class_generate_unique_id),
	JS_CFUNC_DEF("set_refuse_new_connections", 1, &multiplayer_peer_class_set_refuse_new_connections),
	JS_CFUNC_DEF("is_refusing_new_connections", 0, &multiplayer_peer_class_is_refusing_new_connections),
	JS_CFUNC_DEF("is_server_relay_supported", 0, &multiplayer_peer_class_is_server_relay_supported),
};

void define_multiplayer_peer_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "refuse_new_connections"),
        JS_NewCFunction(ctx, multiplayer_peer_class_is_refusing_new_connections, "is_refusing_new_connections", 0),
        JS_NewCFunction(ctx, multiplayer_peer_class_set_refuse_new_connections, "set_refuse_new_connections", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "transfer_mode"),
        JS_NewCFunction(ctx, multiplayer_peer_class_get_transfer_mode, "get_transfer_mode", 0),
        JS_NewCFunction(ctx, multiplayer_peer_class_set_transfer_mode, "set_transfer_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "transfer_channel"),
        JS_NewCFunction(ctx, multiplayer_peer_class_get_transfer_channel, "get_transfer_channel", 0),
        JS_NewCFunction(ctx, multiplayer_peer_class_set_transfer_channel, "set_transfer_channel", 1),
        JS_PROP_GETSET
    );
}

static int js_multiplayer_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MultiplayerPeer::__class_id);
	classes["MultiplayerPeer"] = MultiplayerPeer::__class_id;
	class_id_list.insert(MultiplayerPeer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MultiplayerPeer::__class_id, &multiplayer_peer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MultiplayerPeer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiplayerPeer::__class_id, proto);

	define_multiplayer_peer_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, multiplayer_peer_class_proto_funcs, _countof(multiplayer_peer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, multiplayer_peer_class_constructor, "MultiplayerPeer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MultiplayerPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_multiplayer_peer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/packet_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multiplayer_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiplayerPeer");
	return m;
}

JSModuleDef *js_init_multiplayer_peer_module(JSContext *ctx) {
	return _js_init_multiplayer_peer_module(ctx, "godot/classes/multiplayer_peer");
}

void register_multiplayer_peer() {
	MultiplayerPeer::__init_js_class_id();
	js_init_multiplayer_peer_module(ctx);
}