
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/json.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void json_class_finalizer(JSRuntime *rt, JSValue val) {
	JSON *json = static_cast<JSON *>(JS_GetOpaque(val, JSON::__class_id));
	if (json)
		memdelete(json);
}

static JSClassDef json_class_def = {
	"JSON",
	.finalizer = json_class_finalizer
};

static JSValue json_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, JSON::__class_id);
	if (JS_IsException(obj))
		return obj;

	JSON *json_class;
	if (argc == 1) 
		json_class = static_cast<JSON *>(Variant(*argv).operator Object *());
	else 
		json_class = memnew(JSON);
	if (!json_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, json_class);
	return obj;
}
static JSValue json_class_parse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&JSON::parse, ctx, this_val, argc, argv);
};
static JSValue json_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&JSON::get_data, ctx, this_val, argc, argv);
};
static JSValue json_class_set_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&JSON::set_data, ctx, this_val, argc, argv);
};
static JSValue json_class_get_parsed_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&JSON::get_parsed_text, ctx, this_val, argc, argv);
};
static JSValue json_class_get_error_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&JSON::get_error_line, ctx, this_val, argc, argv);
};
static JSValue json_class_get_error_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&JSON::get_error_message, ctx, this_val, argc, argv);
};
static JSValue json_class_stringify(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&JSON::stringify, ctx, this_val, argc, argv);
};
static JSValue json_class_parse_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&JSON::parse_string, ctx, this_val, argc, argv);
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

static void define_json_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "data"),
        JS_NewCFunction(ctx, json_class_get_data, "get_data", 0),
        JS_NewCFunction(ctx, json_class_set_data, "set_data", 1),
        JS_PROP_GETSET
    );
	
}

static void define_json_enum(JSContext *ctx, JSValue proto) {
}

static int js_json_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["JSON"] = JSON::__class_id;
	class_id_list.insert(JSON::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), JSON::__class_id, &json_class_def);

	JSValue proto = JS_NewObjectClass(ctx, JSON::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, JSON::__class_id, proto);

	define_json_property(ctx, proto);
	define_json_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, json_class_proto_funcs, _countof(json_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, json_class_constructor, "JSON", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, json_class_static_funcs, _countof(json_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "JSON", ctor);
	constructors[JSON::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_json_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_json_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "JSON");
	return m;
}

JSModuleDef *js_init_json_module(JSContext *ctx) {
	return _js_init_json_module(ctx, "@godot/classes/json");
}

void register_json() {
	JSON::__init_js_class_id();
	js_init_json_module(ctx);
}