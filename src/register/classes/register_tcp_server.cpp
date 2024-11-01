
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/tcp_server.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/stream_peer_tcp.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tcp_server_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef tcp_server_class_def = {
	"TCPServer",
	.finalizer = tcp_server_class_finalizer
};

static JSValue tcp_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TCPServer::__class_id);
	if (JS_IsException(obj))
		return obj;

	TCPServer *tcp_server_class;
	if (argc == 1) 
		tcp_server_class = static_cast<TCPServer *>(Variant(*argv).operator Object *());
	else 
		tcp_server_class = memnew(TCPServer);
	if (!tcp_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, tcp_server_class);
	return obj;
}
static JSValue tcp_server_class_listen(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TCPServer::listen, ctx, this_val, argc, argv);
};
static JSValue tcp_server_class_is_connection_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TCPServer::is_connection_available, ctx, this_val, argc, argv);
};
static JSValue tcp_server_class_is_listening(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TCPServer::is_listening, ctx, this_val, argc, argv);
};
static JSValue tcp_server_class_get_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TCPServer::get_local_port, ctx, this_val, argc, argv);
};
static JSValue tcp_server_class_take_connection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TCPServer::take_connection, ctx, this_val, argc, argv);
};
static JSValue tcp_server_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TCPServer::stop, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry tcp_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("listen", 2, &tcp_server_class_listen),
	JS_CFUNC_DEF("is_connection_available", 0, &tcp_server_class_is_connection_available),
	JS_CFUNC_DEF("is_listening", 0, &tcp_server_class_is_listening),
	JS_CFUNC_DEF("get_local_port", 0, &tcp_server_class_get_local_port),
	JS_CFUNC_DEF("take_connection", 0, &tcp_server_class_take_connection),
	JS_CFUNC_DEF("stop", 0, &tcp_server_class_stop),
};

static void define_tcp_server_property(JSContext *ctx, JSValue proto) {
	
}

static void define_tcp_server_enum(JSContext *ctx, JSValue proto) {
}

static int js_tcp_server_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["TCPServer"] = TCPServer::__class_id;
	class_id_list.insert(TCPServer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TCPServer::__class_id, &tcp_server_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TCPServer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TCPServer::__class_id, proto);

	define_tcp_server_property(ctx, proto);
	define_tcp_server_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, tcp_server_class_proto_funcs, _countof(tcp_server_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, tcp_server_class_constructor, "TCPServer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TCPServer", ctor);

	return 0;
}

JSModuleDef *_js_init_tcp_server_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tcp_server_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TCPServer");
	return m;
}

JSModuleDef *js_init_tcp_server_module(JSContext *ctx) {
	return _js_init_tcp_server_module(ctx, "@godot/classes/tcp_server");
}

void register_tcp_server() {
	TCPServer::__init_js_class_id();
	js_init_tcp_server_module(ctx);
}