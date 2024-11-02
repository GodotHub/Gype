
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void script_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef script_class_def = {
	"Script",
	.finalizer = script_class_finalizer
};

static JSValue script_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Script::__class_id);
	if (JS_IsException(obj))
		return obj;

	Script *script_class;
	if (argc == 1) 
		script_class = static_cast<Script *>(Variant(*argv).operator Object *());
	else 
		script_class = memnew(Script);
	if (!script_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, script_class);
	return obj;
}
static JSValue script_class_can_instantiate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::can_instantiate, ctx, this_val, argc, argv);
};
static JSValue script_class_instance_has(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::instance_has, ctx, this_val, argc, argv);
};
static JSValue script_class_has_source_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::has_source_code, ctx, this_val, argc, argv);
};
static JSValue script_class_get_source_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::get_source_code, ctx, this_val, argc, argv);
};
static JSValue script_class_set_source_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Script::set_source_code, ctx, this_val, argc, argv);
};
static JSValue script_class_reload(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Script::reload, ctx, this_val, argc, argv);
};
static JSValue script_class_get_base_script(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::get_base_script, ctx, this_val, argc, argv);
};
static JSValue script_class_get_instance_base_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::get_instance_base_type, ctx, this_val, argc, argv);
};
static JSValue script_class_get_global_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::get_global_name, ctx, this_val, argc, argv);
};
static JSValue script_class_has_script_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::has_script_signal, ctx, this_val, argc, argv);
};
static JSValue script_class_get_script_property_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Script::get_script_property_list, ctx, this_val, argc, argv);
};
static JSValue script_class_get_script_method_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Script::get_script_method_list, ctx, this_val, argc, argv);
};
static JSValue script_class_get_script_signal_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Script::get_script_signal_list, ctx, this_val, argc, argv);
};
static JSValue script_class_get_script_constant_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Script::get_script_constant_map, ctx, this_val, argc, argv);
};
static JSValue script_class_get_property_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Script::get_property_default_value, ctx, this_val, argc, argv);
};
static JSValue script_class_is_tool(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::is_tool, ctx, this_val, argc, argv);
};
static JSValue script_class_is_abstract(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Script::is_abstract, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry script_class_proto_funcs[] = {
	JS_CFUNC_DEF("can_instantiate", 0, &script_class_can_instantiate),
	JS_CFUNC_DEF("instance_has", 1, &script_class_instance_has),
	JS_CFUNC_DEF("has_source_code", 0, &script_class_has_source_code),
	JS_CFUNC_DEF("get_source_code", 0, &script_class_get_source_code),
	JS_CFUNC_DEF("set_source_code", 1, &script_class_set_source_code),
	JS_CFUNC_DEF("reload", 1, &script_class_reload),
	JS_CFUNC_DEF("get_base_script", 0, &script_class_get_base_script),
	JS_CFUNC_DEF("get_instance_base_type", 0, &script_class_get_instance_base_type),
	JS_CFUNC_DEF("get_global_name", 0, &script_class_get_global_name),
	JS_CFUNC_DEF("has_script_signal", 1, &script_class_has_script_signal),
	JS_CFUNC_DEF("get_script_property_list", 0, &script_class_get_script_property_list),
	JS_CFUNC_DEF("get_script_method_list", 0, &script_class_get_script_method_list),
	JS_CFUNC_DEF("get_script_signal_list", 0, &script_class_get_script_signal_list),
	JS_CFUNC_DEF("get_script_constant_map", 0, &script_class_get_script_constant_map),
	JS_CFUNC_DEF("get_property_default_value", 1, &script_class_get_property_default_value),
	JS_CFUNC_DEF("is_tool", 0, &script_class_is_tool),
	JS_CFUNC_DEF("is_abstract", 0, &script_class_is_abstract),
};

static void define_script_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "source_code"),
        JS_NewCFunction(ctx, script_class_get_source_code, "get_source_code", 0),
        JS_NewCFunction(ctx, script_class_set_source_code, "set_source_code", 1),
        JS_PROP_GETSET
    );
	
}

static void define_script_enum(JSContext *ctx, JSValue proto) {
}

static int js_script_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Script"] = Script::__class_id;
	class_id_list.insert(Script::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Script::__class_id, &script_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Script::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Script::__class_id, proto);

	define_script_property(ctx, proto);
	define_script_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, script_class_proto_funcs, _countof(script_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, script_class_constructor, "Script", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Script", ctor);

	return 0;
}

JSModuleDef *_js_init_script_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_script_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Script");
	return m;
}

JSModuleDef *js_init_script_module(JSContext *ctx) {
	return _js_init_script_module(ctx, "@godot/classes/script");
}

void register_script() {
	Script::__init_js_class_id();
	js_init_script_module(ctx);
}