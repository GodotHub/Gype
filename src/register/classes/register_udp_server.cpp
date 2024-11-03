
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/udp_server.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void udp_server_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef udp_server_class_def = {
	"UDPServer",
	.finalizer = udp_server_class_finalizer
};

static JSValue udp_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, UDPServer::__class_id);
	if (JS_IsException(obj))
		return obj;

	UDPServer *udp_server_class;
	if (argc == 1) 
		udp_server_class = static_cast<UDPServer *>(Variant(*argv).operator Object *());
	else 
		udp_server_class = memnew(UDPServer);
	if (!udp_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, udp_server_class);
	return obj;
}
static JSValue udp_server_class_listen(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&UDPServer::listen, ctx, this_val, argc, argv);
};
static JSValue udp_server_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&UDPServer::poll, ctx, this_val, argc, argv);
};
static JSValue udp_server_class_is_connection_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UDPServer::is_connection_available, ctx, this_val, argc, argv);
};
static JSValue udp_server_class_get_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UDPServer::get_local_port, ctx, this_val, argc, argv);
};
static JSValue udp_server_class_is_listening(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UDPServer::is_listening, ctx, this_val, argc, argv);
};
static JSValue udp_server_class_take_connection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&UDPServer::take_connection, ctx, this_val, argc, argv);
};
static JSValue udp_server_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UDPServer::stop, ctx, this_val, argc, argv);
};
static JSValue udp_server_class_set_max_pending_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&UDPServer::set_max_pending_connections, ctx, this_val, argc, argv);
};
static JSValue udp_server_class_get_max_pending_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&UDPServer::get_max_pending_connections, ctx, this_val, argc, argv);
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

static void define_udp_server_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_pending_connections"),
        JS_NewCFunction(ctx, udp_server_class_get_max_pending_connections, "get_max_pending_connections", 0),
        JS_NewCFunction(ctx, udp_server_class_set_max_pending_connections, "set_max_pending_connections", 1),
        JS_PROP_GETSET
    );
	
}

static void define_udp_server_enum(JSContext *ctx, JSValue proto) {
}

static int js_udp_server_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["UDPServer"] = UDPServer::__class_id;
	class_id_list.insert(UDPServer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), UDPServer::__class_id, &udp_server_class_def);

	JSValue proto = JS_NewObjectClass(ctx, UDPServer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UDPServer::__class_id, proto);

	define_udp_server_property(ctx, proto);
	define_udp_server_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, udp_server_class_proto_funcs, _countof(udp_server_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, udp_server_class_constructor, "UDPServer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "UDPServer", ctor);
	constructors[UDPServer::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_udp_server_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_udp_server_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "UDPServer");
	return m;
}

JSModuleDef *js_init_udp_server_module(JSContext *ctx) {
	return _js_init_udp_server_module(ctx, "@godot/classes/udp_server");
}

void register_udp_server() {
	UDPServer::__init_js_class_id();
	js_init_udp_server_module(ctx);
}