
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/jsonrpc.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void jsonrpc_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef jsonrpc_class_def = {
	"JSONRPC",
	.finalizer = jsonrpc_class_finalizer
};

static JSValue jsonrpc_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, JSONRPC::__class_id);
	if (JS_IsException(obj))
		return obj;
	JSONRPC *jsonrpc_class = memnew(JSONRPC);
	if (!jsonrpc_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, jsonrpc_class);	
	return obj;
}
static JSValue jsonrpc_class_set_scope(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&JSONRPC::set_scope, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue jsonrpc_class_process_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&JSONRPC::process_action, ctx, this_val, argc, argv);
};
static JSValue jsonrpc_class_process_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&JSONRPC::process_string, ctx, this_val, argc, argv);
};
static JSValue jsonrpc_class_make_request(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&JSONRPC::make_request, ctx, this_val, argc, argv);
};
static JSValue jsonrpc_class_make_response(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&JSONRPC::make_response, ctx, this_val, argc, argv);
};
static JSValue jsonrpc_class_make_notification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&JSONRPC::make_notification, ctx, this_val, argc, argv);
};
static JSValue jsonrpc_class_make_response_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&JSONRPC::make_response_error, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry jsonrpc_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_scope", 2, &jsonrpc_class_set_scope),
	JS_CFUNC_DEF("process_action", 2, &jsonrpc_class_process_action),
	JS_CFUNC_DEF("process_string", 1, &jsonrpc_class_process_string),
	JS_CFUNC_DEF("make_request", 3, &jsonrpc_class_make_request),
	JS_CFUNC_DEF("make_response", 2, &jsonrpc_class_make_response),
	JS_CFUNC_DEF("make_notification", 2, &jsonrpc_class_make_notification),
	JS_CFUNC_DEF("make_response_error", 3, &jsonrpc_class_make_response_error),
};

void define_jsonrpc_property(JSContext *ctx, JSValue obj) {
}

static int js_jsonrpc_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&JSONRPC::__class_id);
	classes["JSONRPC"] = JSONRPC::__class_id;
	class_id_list.insert(JSONRPC::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), JSONRPC::__class_id, &jsonrpc_class_def);

	JSValue proto = JS_NewObjectClass(ctx, JSONRPC::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JSONRPC::__class_id, proto);

	define_jsonrpc_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, jsonrpc_class_proto_funcs, _countof(jsonrpc_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, jsonrpc_class_constructor, "JSONRPC", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "JSONRPC", ctor);

	return 0;
}

JSModuleDef *_js_init_jsonrpc_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_jsonrpc_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "JSONRPC");
	return m;
}

JSModuleDef *js_init_jsonrpc_module(JSContext *ctx) {
	return _js_init_jsonrpc_module(ctx, "godot/classes/jsonrpc");
}

void register_jsonrpc() {
	JSONRPC::__init_js_class_id();
	js_init_jsonrpc_module(ctx);
}