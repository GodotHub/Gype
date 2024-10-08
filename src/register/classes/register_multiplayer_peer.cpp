
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void multiplayer_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	MultiplayerPeer *multiplayer_peer = static_cast<MultiplayerPeer *>(JS_GetOpaque(val, MultiplayerPeer::__class_id));
	if (multiplayer_peer)
		MultiplayerPeer::free(nullptr, multiplayer_peer);
}

static JSClassDef multiplayer_peer_class_def = {
	"MultiplayerPeer",
	.finalizer = multiplayer_peer_class_finalizer
};

static JSValue multiplayer_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MultiplayerPeer *multiplayer_peer_class;
	JSValue obj = JS_NewObjectClass(ctx, MultiplayerPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	multiplayer_peer_class = memnew(MultiplayerPeer);
	if (!multiplayer_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, multiplayer_peer_class);
	return obj;
}
static JSValue multiplayer_peer_class_set_transfer_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerPeer::set_transfer_channel, MultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_get_transfer_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::get_transfer_channel, MultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_peer_class_set_transfer_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerPeer::set_transfer_mode, MultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_get_transfer_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::get_transfer_mode, MultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_peer_class_set_target_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerPeer::set_target_peer, MultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_get_packet_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::get_packet_peer, MultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_peer_class_get_packet_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::get_packet_channel, MultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_peer_class_get_packet_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::get_packet_mode, MultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_peer_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerPeer::poll, MultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerPeer::close, MultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_disconnect_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerPeer::disconnect_peer, MultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_get_connection_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::get_connection_status, MultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_peer_class_get_unique_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::get_unique_id, MultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_peer_class_generate_unique_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::generate_unique_id, MultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_peer_class_set_refuse_new_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MultiplayerPeer::set_refuse_new_connections, MultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue multiplayer_peer_class_is_refusing_new_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::is_refusing_new_connections, MultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue multiplayer_peer_class_is_server_relay_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MultiplayerPeer::is_server_relay_supported, MultiplayerPeer::__class_id, ctx, this_val, argv);
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

static int js_multiplayer_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MultiplayerPeer::__class_id);
	classes["MultiplayerPeer"] = MultiplayerPeer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MultiplayerPeer::__class_id, &multiplayer_peer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiplayerPeer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, multiplayer_peer_class_proto_funcs, _countof(multiplayer_peer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, multiplayer_peer_class_constructor, "MultiplayerPeer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MultiplayerPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_multiplayer_peer_module(JSContext *ctx, const char *module_name) {
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
	js_init_multiplayer_peer_module(ctx);
}