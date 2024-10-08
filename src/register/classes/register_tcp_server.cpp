
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/stream_peer_tcp.hpp>
#include <godot_cpp/classes/tcp_server.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void tcp_server_class_finalizer(JSRuntime *rt, JSValue val) {
	TCPServer *tcp_server = static_cast<TCPServer *>(JS_GetOpaque(val, TCPServer::__class_id));
	if (tcp_server)
		TCPServer::free(nullptr, tcp_server);
}

static JSClassDef tcp_server_class_def = {
	"TCPServer",
	.finalizer = tcp_server_class_finalizer
};

static JSValue tcp_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TCPServer *tcp_server_class;
	JSValue obj = JS_NewObjectClass(ctx, TCPServer::__class_id);
	if (JS_IsException(obj))
		return obj;
	tcp_server_class = memnew(TCPServer);
	if (!tcp_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tcp_server_class);
	return obj;
}
static JSValue tcp_server_class_listen(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TCPServer::listen, TCPServer::__class_id, ctx, this_val, argv);
};
static JSValue tcp_server_class_is_connection_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TCPServer::is_connection_available, TCPServer::__class_id, ctx, this_val, argv);
};
static JSValue tcp_server_class_is_listening(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TCPServer::is_listening, TCPServer::__class_id, ctx, this_val, argv);
};
static JSValue tcp_server_class_get_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TCPServer::get_local_port, TCPServer::__class_id, ctx, this_val, argv);
};
static JSValue tcp_server_class_take_connection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TCPServer::take_connection, TCPServer::__class_id, ctx, this_val, argv);
};
static JSValue tcp_server_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TCPServer::stop, TCPServer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry tcp_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("listen", 2, &tcp_server_class_listen),
	JS_CFUNC_DEF("is_connection_available", 0, &tcp_server_class_is_connection_available),
	JS_CFUNC_DEF("is_listening", 0, &tcp_server_class_is_listening),
	JS_CFUNC_DEF("get_local_port", 0, &tcp_server_class_get_local_port),
	JS_CFUNC_DEF("take_connection", 0, &tcp_server_class_take_connection),
	JS_CFUNC_DEF("stop", 0, &tcp_server_class_stop),
};

static int js_tcp_server_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TCPServer::__class_id);
	classes["TCPServer"] = TCPServer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TCPServer::__class_id, &tcp_server_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TCPServer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tcp_server_class_proto_funcs, _countof(tcp_server_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tcp_server_class_constructor, "TCPServer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TCPServer", ctor);

	return 0;
}

JSModuleDef *_js_init_tcp_server_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tcp_server_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TCPServer");
	return m;
}

JSModuleDef *js_init_tcp_server_module(JSContext *ctx) {
	return _js_init_tcp_server_module(ctx, "godot/classes/tcp_server");
}

void register_tcp_server() {
	js_init_tcp_server_module(ctx);
}