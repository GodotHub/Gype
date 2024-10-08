
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/udp_server.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void udp_server_class_finalizer(JSRuntime *rt, JSValue val) {
	UDPServer *udp_server = static_cast<UDPServer *>(JS_GetOpaque(val, UDPServer::__class_id));
	if (udp_server)
		UDPServer::free(nullptr, udp_server);
}

static JSClassDef udp_server_class_def = {
	"UDPServer",
	.finalizer = udp_server_class_finalizer
};

static JSValue udp_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	UDPServer *udp_server_class;
	JSValue obj = JS_NewObjectClass(ctx, UDPServer::__class_id);
	if (JS_IsException(obj))
		return obj;
	udp_server_class = memnew(UDPServer);
	if (!udp_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, udp_server_class);
	return obj;
}
static JSValue udp_server_class_listen(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&UDPServer::listen, UDPServer::__class_id, ctx, this_val, argv);
};
static JSValue udp_server_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&UDPServer::poll, UDPServer::__class_id, ctx, this_val, argv);
};
static JSValue udp_server_class_is_connection_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UDPServer::is_connection_available, UDPServer::__class_id, ctx, this_val, argv);
};
static JSValue udp_server_class_get_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UDPServer::get_local_port, UDPServer::__class_id, ctx, this_val, argv);
};
static JSValue udp_server_class_is_listening(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UDPServer::is_listening, UDPServer::__class_id, ctx, this_val, argv);
};
static JSValue udp_server_class_take_connection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&UDPServer::take_connection, UDPServer::__class_id, ctx, this_val, argv);
};
static JSValue udp_server_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&UDPServer::stop, UDPServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue udp_server_class_set_max_pending_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&UDPServer::set_max_pending_connections, UDPServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue udp_server_class_get_max_pending_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&UDPServer::get_max_pending_connections, UDPServer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry udp_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("listen", 2, &udp_server_class_listen),
	JS_CFUNC_DEF("poll", 0, &udp_server_class_poll),
	JS_CFUNC_DEF("is_connection_available", 0, &udp_server_class_is_connection_available),
	JS_CFUNC_DEF("get_local_port", 0, &udp_server_class_get_local_port),
	JS_CFUNC_DEF("is_listening", 0, &udp_server_class_is_listening),
	JS_CFUNC_DEF("take_connection", 0, &udp_server_class_take_connection),
	JS_CFUNC_DEF("stop", 0, &udp_server_class_stop),
	JS_CFUNC_DEF("set_max_pending_connections", 1, &udp_server_class_set_max_pending_connections),
	JS_CFUNC_DEF("get_max_pending_connections", 0, &udp_server_class_get_max_pending_connections),
};

static int js_udp_server_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&UDPServer::__class_id);
	classes["UDPServer"] = UDPServer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), UDPServer::__class_id, &udp_server_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UDPServer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, udp_server_class_proto_funcs, _countof(udp_server_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, udp_server_class_constructor, "UDPServer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "UDPServer", ctor);

	return 0;
}

JSModuleDef *_js_init_udp_server_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_udp_server_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "UDPServer");
	return m;
}

JSModuleDef *js_init_udp_server_module(JSContext *ctx) {
	return _js_init_udp_server_module(ctx, "godot/classes/udp_server");
}

void register_udp_server() {
	js_init_udp_server_module(ctx);
}