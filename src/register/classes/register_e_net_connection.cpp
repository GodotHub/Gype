
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/e_net_connection.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void e_net_connection_class_finalizer(JSRuntime *rt, JSValue val) {
	ENetConnection *e_net_connection = static_cast<ENetConnection *>(JS_GetOpaque(val, ENetConnection::__class_id));
	if (e_net_connection)
		ENetConnection::free(nullptr, e_net_connection);
}

static JSClassDef e_net_connection_class_def = {
	"ENetConnection",
	.finalizer = e_net_connection_class_finalizer
};

static JSValue e_net_connection_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ENetConnection *e_net_connection_class;
	JSValue obj = JS_NewObjectClass(ctx, ENetConnection::__class_id);
	if (JS_IsException(obj))
		return obj;
	e_net_connection_class = memnew(ENetConnection);
	if (!e_net_connection_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, e_net_connection_class);
	return obj;
}
static JSValue e_net_connection_class_create_host_bound(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetConnection::create_host_bound, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_create_host(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetConnection::create_host, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_destroy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetConnection::destroy, ENetConnection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_connection_class_connect_to_host(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetConnection::connect_to_host, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_service(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetConnection::service, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_flush(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetConnection::flush, ENetConnection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_connection_class_bandwidth_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetConnection::bandwidth_limit, ENetConnection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_connection_class_channel_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetConnection::channel_limit, ENetConnection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_connection_class_broadcast(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetConnection::broadcast, ENetConnection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_connection_class_compress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetConnection::compress, ENetConnection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_connection_class_dtls_server_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetConnection::dtls_server_setup, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_dtls_client_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetConnection::dtls_client_setup, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_refuse_new_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetConnection::refuse_new_connections, ENetConnection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_connection_class_pop_statistic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetConnection::pop_statistic, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_get_max_channels(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ENetConnection::get_max_channels, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_get_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ENetConnection::get_local_port, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_get_peers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetConnection::get_peers, ENetConnection::__class_id, ctx, this_val, argv);
};
static JSValue e_net_connection_class_socket_send(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetConnection::socket_send, ENetConnection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry e_net_connection_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_host_bound", 6, &e_net_connection_class_create_host_bound),
	JS_CFUNC_DEF("create_host", 4, &e_net_connection_class_create_host),
	JS_CFUNC_DEF("destroy", 0, &e_net_connection_class_destroy),
	JS_CFUNC_DEF("connect_to_host", 4, &e_net_connection_class_connect_to_host),
	JS_CFUNC_DEF("service", 1, &e_net_connection_class_service),
	JS_CFUNC_DEF("flush", 0, &e_net_connection_class_flush),
	JS_CFUNC_DEF("bandwidth_limit", 2, &e_net_connection_class_bandwidth_limit),
	JS_CFUNC_DEF("channel_limit", 1, &e_net_connection_class_channel_limit),
	JS_CFUNC_DEF("broadcast", 3, &e_net_connection_class_broadcast),
	JS_CFUNC_DEF("compress", 1, &e_net_connection_class_compress),
	JS_CFUNC_DEF("dtls_server_setup", 1, &e_net_connection_class_dtls_server_setup),
	JS_CFUNC_DEF("dtls_client_setup", 2, &e_net_connection_class_dtls_client_setup),
	JS_CFUNC_DEF("refuse_new_connections", 1, &e_net_connection_class_refuse_new_connections),
	JS_CFUNC_DEF("pop_statistic", 1, &e_net_connection_class_pop_statistic),
	JS_CFUNC_DEF("get_max_channels", 0, &e_net_connection_class_get_max_channels),
	JS_CFUNC_DEF("get_local_port", 0, &e_net_connection_class_get_local_port),
	JS_CFUNC_DEF("get_peers", 0, &e_net_connection_class_get_peers),
	JS_CFUNC_DEF("socket_send", 3, &e_net_connection_class_socket_send),
};

static int js_e_net_connection_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ENetConnection::__class_id);
	classes["ENetConnection"] = ENetConnection::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ENetConnection::__class_id, &e_net_connection_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ENetConnection::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, e_net_connection_class_proto_funcs, _countof(e_net_connection_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, e_net_connection_class_constructor, "ENetConnection", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ENetConnection", ctor);

	return 0;
}

JSModuleDef *_js_init_e_net_connection_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_e_net_connection_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ENetConnection");
	return m;
}

JSModuleDef *js_init_e_net_connection_module(JSContext *ctx) {
	return _js_init_e_net_connection_module(ctx, "godot/classes/e_net_connection");
}

void register_e_net_connection() {
	js_init_e_net_connection_module(ctx);
}