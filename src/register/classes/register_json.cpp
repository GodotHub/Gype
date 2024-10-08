
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/json.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void json_class_finalizer(JSRuntime *rt, JSValue val) {
	JSON *json = static_cast<JSON *>(JS_GetOpaque(val, JSON::__class_id));
	if (json)
		JSON::free(nullptr, json);
}

static JSClassDef json_class_def = {
	"JSON",
	.finalizer = json_class_finalizer
};

static JSValue json_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSON *json_class;
	JSValue obj = JS_NewObjectClass(ctx, JSON::__class_id);
	if (JS_IsException(obj))
		return obj;
	json_class = memnew(JSON);
	if (!json_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, json_class);
	return obj;
}
static JSValue json_class_parse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&JSON::parse, JSON::__class_id, ctx, this_val, argv);
};
static JSValue json_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&JSON::get_data, JSON::__class_id, ctx, this_val, argv);
};
static JSValue json_class_set_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&JSON::set_data, JSON::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue json_class_get_parsed_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&JSON::get_parsed_text, JSON::__class_id, ctx, this_val, argv);
};
static JSValue json_class_get_error_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&JSON::get_error_line, JSON::__class_id, ctx, this_val, argv);
};
static JSValue json_class_get_error_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&JSON::get_error_message, JSON::__class_id, ctx, this_val, argv);
};
static JSValue json_class_stringify(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&JSON::stringify, JSON::__class_id, ctx, this_val, argv);
};
static JSValue json_class_parse_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&JSON::parse_string, JSON::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry json_class_proto_funcs[] = {
	JS_CFUNC_DEF("parse", 2, &json_class_parse),
	JS_CFUNC_DEF("get_data", 0, &json_class_get_data),
	JS_CFUNC_DEF("set_data", 1, &json_class_set_data),
	JS_CFUNC_DEF("get_parsed_text", 0, &json_class_get_parsed_text),
	JS_CFUNC_DEF("get_error_line", 0, &json_class_get_error_line),
	JS_CFUNC_DEF("get_error_message", 0, &json_class_get_error_message),
};
static const JSCFunctionListEntry json_class_static_funcs[] = {
	JS_CFUNC_DEF("stringify", 4, &json_class_stringify),
	JS_CFUNC_DEF("parse_string", 1, &json_class_parse_string),
};

static int js_json_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&JSON::__class_id);
	classes["JSON"] = JSON::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), JSON::__class_id, &json_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JSON::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, json_class_proto_funcs, _countof(json_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, json_class_constructor, "JSON", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, json_class_static_funcs, _countof(json_class_static_funcs));

	JS_SetModuleExport(ctx, m, "JSON", ctor);

	return 0;
}

JSModuleDef *_js_init_json_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_json_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "JSON");
	return m;
}

JSModuleDef *js_init_json_module(JSContext *ctx) {
	return _js_init_json_module(ctx, "godot/classes/json");
}

void register_json() {
	js_init_json_module(ctx);
}