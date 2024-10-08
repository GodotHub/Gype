
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/web_socket_multiplayer_peer.hpp>
#include <godot_cpp/classes/web_socket_peer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_socket_multiplayer_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	WebSocketMultiplayerPeer *web_socket_multiplayer_peer = static_cast<WebSocketMultiplayerPeer *>(JS_GetOpaque(val, WebSocketMultiplayerPeer::__class_id));
	if (web_socket_multiplayer_peer)
		WebSocketMultiplayerPeer::free(nullptr, web_socket_multiplayer_peer);
}

static JSClassDef web_socket_multiplayer_peer_class_def = {
	"WebSocketMultiplayerPeer",
	.finalizer = web_socket_multiplayer_peer_class_finalizer
};

static JSValue web_socket_multiplayer_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	WebSocketMultiplayerPeer *web_socket_multiplayer_peer_class;
	JSValue obj = JS_NewObjectClass(ctx, WebSocketMultiplayerPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	web_socket_multiplayer_peer_class = memnew(WebSocketMultiplayerPeer);
	if (!web_socket_multiplayer_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, web_socket_multiplayer_peer_class);
	return obj;
}
static JSValue web_socket_multiplayer_peer_class_create_client(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebSocketMultiplayerPeer::create_client, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_create_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebSocketMultiplayerPeer::create_server, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_get_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketMultiplayerPeer::get_peer, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_get_peer_address(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketMultiplayerPeer::get_peer_address, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_get_peer_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketMultiplayerPeer::get_peer_port, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_get_supported_protocols(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketMultiplayerPeer::get_supported_protocols, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_set_supported_protocols(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&WebSocketMultiplayerPeer::set_supported_protocols, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_multiplayer_peer_class_get_handshake_headers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketMultiplayerPeer::get_handshake_headers, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_set_handshake_headers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&WebSocketMultiplayerPeer::set_handshake_headers, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_multiplayer_peer_class_get_inbound_buffer_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketMultiplayerPeer::get_inbound_buffer_size, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_set_inbound_buffer_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&WebSocketMultiplayerPeer::set_inbound_buffer_size, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_multiplayer_peer_class_get_outbound_buffer_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketMultiplayerPeer::get_outbound_buffer_size, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_set_outbound_buffer_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&WebSocketMultiplayerPeer::set_outbound_buffer_size, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_multiplayer_peer_class_get_handshake_timeout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketMultiplayerPeer::get_handshake_timeout, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static JSValue web_socket_multiplayer_peer_class_set_handshake_timeout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&WebSocketMultiplayerPeer::set_handshake_timeout, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_multiplayer_peer_class_set_max_queued_packets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&WebSocketMultiplayerPeer::set_max_queued_packets, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_multiplayer_peer_class_get_max_queued_packets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketMultiplayerPeer::get_max_queued_packets, WebSocketMultiplayerPeer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry web_socket_multiplayer_peer_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_client", 2, &web_socket_multiplayer_peer_class_create_client),
	JS_CFUNC_DEF("create_server", 3, &web_socket_multiplayer_peer_class_create_server),
	JS_CFUNC_DEF("get_peer", 1, &web_socket_multiplayer_peer_class_get_peer),
	JS_CFUNC_DEF("get_peer_address", 1, &web_socket_multiplayer_peer_class_get_peer_address),
	JS_CFUNC_DEF("get_peer_port", 1, &web_socket_multiplayer_peer_class_get_peer_port),
	JS_CFUNC_DEF("get_supported_protocols", 0, &web_socket_multiplayer_peer_class_get_supported_protocols),
	JS_CFUNC_DEF("set_supported_protocols", 1, &web_socket_multiplayer_peer_class_set_supported_protocols),
	JS_CFUNC_DEF("get_handshake_headers", 0, &web_socket_multiplayer_peer_class_get_handshake_headers),
	JS_CFUNC_DEF("set_handshake_headers", 1, &web_socket_multiplayer_peer_class_set_handshake_headers),
	JS_CFUNC_DEF("get_inbound_buffer_size", 0, &web_socket_multiplayer_peer_class_get_inbound_buffer_size),
	JS_CFUNC_DEF("set_inbound_buffer_size", 1, &web_socket_multiplayer_peer_class_set_inbound_buffer_size),
	JS_CFUNC_DEF("get_outbound_buffer_size", 0, &web_socket_multiplayer_peer_class_get_outbound_buffer_size),
	JS_CFUNC_DEF("set_outbound_buffer_size", 1, &web_socket_multiplayer_peer_class_set_outbound_buffer_size),
	JS_CFUNC_DEF("get_handshake_timeout", 0, &web_socket_multiplayer_peer_class_get_handshake_timeout),
	JS_CFUNC_DEF("set_handshake_timeout", 1, &web_socket_multiplayer_peer_class_set_handshake_timeout),
	JS_CFUNC_DEF("set_max_queued_packets", 1, &web_socket_multiplayer_peer_class_set_max_queued_packets),
	JS_CFUNC_DEF("get_max_queued_packets", 0, &web_socket_multiplayer_peer_class_get_max_queued_packets),
};

static int js_web_socket_multiplayer_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&WebSocketMultiplayerPeer::__class_id);
	classes["WebSocketMultiplayerPeer"] = WebSocketMultiplayerPeer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), WebSocketMultiplayerPeer::__class_id, &web_socket_multiplayer_peer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, MultiplayerPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebSocketMultiplayerPeer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, web_socket_multiplayer_peer_class_proto_funcs, _countof(web_socket_multiplayer_peer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, web_socket_multiplayer_peer_class_constructor, "WebSocketMultiplayerPeer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "WebSocketMultiplayerPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_web_socket_multiplayer_peer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_web_socket_multiplayer_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WebSocketMultiplayerPeer");
	return m;
}

JSModuleDef *js_init_web_socket_multiplayer_peer_module(JSContext *ctx) {
	return _js_init_web_socket_multiplayer_peer_module(ctx, "godot/classes/web_socket_multiplayer_peer");
}

void register_web_socket_multiplayer_peer() {
	js_init_web_socket_multiplayer_peer_module(ctx);
}