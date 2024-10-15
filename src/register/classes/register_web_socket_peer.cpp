
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/web_socket_peer.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_socket_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	WebSocketPeer *web_socket_peer = static_cast<WebSocketPeer *>(JS_GetOpaque(val, WebSocketPeer::__class_id));
	if (web_socket_peer)
		memdelete(web_socket_peer);
}

static JSClassDef web_socket_peer_class_def = {
	"WebSocketPeer",
	.finalizer = web_socket_peer_class_finalizer
};

static JSValue web_socket_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, WebSocketPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	WebSocketPeer *web_socket_peer_class = memnew(WebSocketPeer);
	if (!web_socket_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, web_socket_peer_class);	
	return obj;
}
static JSValue web_socket_peer_class_connect_to_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebSocketPeer::connect_to_url, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_accept_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebSocketPeer::accept_stream, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_send(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebSocketPeer::send, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_send_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebSocketPeer::send_text, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_was_string_packet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::was_string_packet, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebSocketPeer::poll, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_peer_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebSocketPeer::close, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_peer_class_get_connected_host(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_connected_host, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_get_connected_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_connected_port, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_get_selected_protocol(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_selected_protocol, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_get_requested_url(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_requested_url, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_set_no_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebSocketPeer::set_no_delay, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_peer_class_get_current_outbound_buffered_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_current_outbound_buffered_amount, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_get_ready_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_ready_state, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_get_close_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_close_code, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_get_close_reason(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_close_reason, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_get_supported_protocols(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_supported_protocols, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_set_supported_protocols(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebSocketPeer::set_supported_protocols, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_peer_class_get_handshake_headers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_handshake_headers, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_set_handshake_headers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebSocketPeer::set_handshake_headers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_peer_class_get_inbound_buffer_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_inbound_buffer_size, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_set_inbound_buffer_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebSocketPeer::set_inbound_buffer_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_peer_class_get_outbound_buffer_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_outbound_buffer_size, ctx, this_val, argc, argv);
};
static JSValue web_socket_peer_class_set_outbound_buffer_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebSocketPeer::set_outbound_buffer_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_peer_class_set_max_queued_packets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebSocketPeer::set_max_queued_packets, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_socket_peer_class_get_max_queued_packets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebSocketPeer::get_max_queued_packets, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry web_socket_peer_class_proto_funcs[] = {
	JS_CFUNC_DEF("connect_to_url", 2, &web_socket_peer_class_connect_to_url),
	JS_CFUNC_DEF("accept_stream", 1, &web_socket_peer_class_accept_stream),
	JS_CFUNC_DEF("send", 2, &web_socket_peer_class_send),
	JS_CFUNC_DEF("send_text", 1, &web_socket_peer_class_send_text),
	JS_CFUNC_DEF("was_string_packet", 0, &web_socket_peer_class_was_string_packet),
	JS_CFUNC_DEF("poll", 0, &web_socket_peer_class_poll),
	JS_CFUNC_DEF("close", 2, &web_socket_peer_class_close),
	JS_CFUNC_DEF("get_connected_host", 0, &web_socket_peer_class_get_connected_host),
	JS_CFUNC_DEF("get_connected_port", 0, &web_socket_peer_class_get_connected_port),
	JS_CFUNC_DEF("get_selected_protocol", 0, &web_socket_peer_class_get_selected_protocol),
	JS_CFUNC_DEF("get_requested_url", 0, &web_socket_peer_class_get_requested_url),
	JS_CFUNC_DEF("set_no_delay", 1, &web_socket_peer_class_set_no_delay),
	JS_CFUNC_DEF("get_current_outbound_buffered_amount", 0, &web_socket_peer_class_get_current_outbound_buffered_amount),
	JS_CFUNC_DEF("get_ready_state", 0, &web_socket_peer_class_get_ready_state),
	JS_CFUNC_DEF("get_close_code", 0, &web_socket_peer_class_get_close_code),
	JS_CFUNC_DEF("get_close_reason", 0, &web_socket_peer_class_get_close_reason),
	JS_CFUNC_DEF("get_supported_protocols", 0, &web_socket_peer_class_get_supported_protocols),
	JS_CFUNC_DEF("set_supported_protocols", 1, &web_socket_peer_class_set_supported_protocols),
	JS_CFUNC_DEF("get_handshake_headers", 0, &web_socket_peer_class_get_handshake_headers),
	JS_CFUNC_DEF("set_handshake_headers", 1, &web_socket_peer_class_set_handshake_headers),
	JS_CFUNC_DEF("get_inbound_buffer_size", 0, &web_socket_peer_class_get_inbound_buffer_size),
	JS_CFUNC_DEF("set_inbound_buffer_size", 1, &web_socket_peer_class_set_inbound_buffer_size),
	JS_CFUNC_DEF("get_outbound_buffer_size", 0, &web_socket_peer_class_get_outbound_buffer_size),
	JS_CFUNC_DEF("set_outbound_buffer_size", 1, &web_socket_peer_class_set_outbound_buffer_size),
	JS_CFUNC_DEF("set_max_queued_packets", 1, &web_socket_peer_class_set_max_queued_packets),
	JS_CFUNC_DEF("get_max_queued_packets", 0, &web_socket_peer_class_get_max_queued_packets),
};

void define_web_socket_peer_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "supported_protocols"),
        JS_NewCFunction(ctx, web_socket_peer_class_get_supported_protocols, "get_supported_protocols", 0),
        JS_NewCFunction(ctx, web_socket_peer_class_set_supported_protocols, "set_supported_protocols", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "handshake_headers"),
        JS_NewCFunction(ctx, web_socket_peer_class_get_handshake_headers, "get_handshake_headers", 0),
        JS_NewCFunction(ctx, web_socket_peer_class_set_handshake_headers, "set_handshake_headers", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "inbound_buffer_size"),
        JS_NewCFunction(ctx, web_socket_peer_class_get_inbound_buffer_size, "get_inbound_buffer_size", 0),
        JS_NewCFunction(ctx, web_socket_peer_class_set_inbound_buffer_size, "set_inbound_buffer_size", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "outbound_buffer_size"),
        JS_NewCFunction(ctx, web_socket_peer_class_get_outbound_buffer_size, "get_outbound_buffer_size", 0),
        JS_NewCFunction(ctx, web_socket_peer_class_set_outbound_buffer_size, "set_outbound_buffer_size", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "max_queued_packets"),
        JS_NewCFunction(ctx, web_socket_peer_class_get_max_queued_packets, "get_max_queued_packets", 0),
        JS_NewCFunction(ctx, web_socket_peer_class_set_max_queued_packets, "set_max_queued_packets", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_web_socket_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&WebSocketPeer::__class_id);
	classes["WebSocketPeer"] = WebSocketPeer::__class_id;
	class_id_list.insert(WebSocketPeer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), WebSocketPeer::__class_id, &web_socket_peer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, WebSocketPeer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebSocketPeer::__class_id, proto);

	define_web_socket_peer_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, web_socket_peer_class_proto_funcs, _countof(web_socket_peer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, web_socket_peer_class_constructor, "WebSocketPeer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "WebSocketPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_web_socket_peer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/packet_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_web_socket_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WebSocketPeer");
	return m;
}

JSModuleDef *js_init_web_socket_peer_module(JSContext *ctx) {
	return _js_init_web_socket_peer_module(ctx, "godot/classes/web_socket_peer");
}

void register_web_socket_peer() {
	WebSocketPeer::__init_js_class_id();
	js_init_web_socket_peer_module(ctx);
}