
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/jsonrpc.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void jsonrpc_class_finalizer(JSRuntime *rt, JSValue val) {
	JSONRPC *jsonrpc = static_cast<JSONRPC *>(JS_GetOpaque(val, JSONRPC::__class_id));
	if (jsonrpc)
		JSONRPC::free(nullptr, jsonrpc);
}

static JSClassDef jsonrpc_class_def = {
	"JSONRPC",
	.finalizer = jsonrpc_class_finalizer
};

static JSValue jsonrpc_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSONRPC *jsonrpc_class;
	JSValue obj = JS_NewObjectClass(ctx, JSONRPC::__class_id);
	if (JS_IsException(obj))
		return obj;
	jsonrpc_class = memnew(JSONRPC);
	if (!jsonrpc_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, jsonrpc_class);
	return obj;
}
static JSValue jsonrpc_class_set_scope(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&JSONRPC::set_scope, JSONRPC::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue jsonrpc_class_process_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&JSONRPC::process_action, JSONRPC::__class_id, ctx, this_val, argv);
};
static JSValue jsonrpc_class_process_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&JSONRPC::process_string, JSONRPC::__class_id, ctx, this_val, argv);
};
static JSValue jsonrpc_class_make_request(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&JSONRPC::make_request, JSONRPC::__class_id, ctx, this_val, argv);
};
static JSValue jsonrpc_class_make_response(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&JSONRPC::make_response, JSONRPC::__class_id, ctx, this_val, argv);
};
static JSValue jsonrpc_class_make_notification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&JSONRPC::make_notification, JSONRPC::__class_id, ctx, this_val, argv);
};
static JSValue jsonrpc_class_make_response_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&JSONRPC::make_response_error, JSONRPC::__class_id, ctx, this_val, argv);
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

static int js_jsonrpc_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&JSONRPC::__class_id);
	classes["JSONRPC"] = JSONRPC::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), JSONRPC::__class_id, &jsonrpc_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JSONRPC::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, jsonrpc_class_proto_funcs, _countof(jsonrpc_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, jsonrpc_class_constructor, "JSONRPC", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "JSONRPC", ctor);

	return 0;
}

JSModuleDef *_js_init_jsonrpc_module(JSContext *ctx, const char *module_name) {
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
	js_init_jsonrpc_module(ctx);
}