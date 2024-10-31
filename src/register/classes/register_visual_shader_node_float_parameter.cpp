
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_float_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_parameter.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_float_parameter_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_float_parameter_class_def = {
	"VisualShaderNodeFloatParameter",
	.finalizer = visual_shader_node_float_parameter_class_finalizer
};

static JSValue visual_shader_node_float_parameter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeFloatParameter::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShaderNodeFloatParameter *visual_shader_node_float_parameter_class;
	if (argc == 1) 
		visual_shader_node_float_parameter_class = static_cast<VisualShaderNodeFloatParameter *>(static_cast<Object *>(Variant(*argv)));
	else 
		visual_shader_node_float_parameter_class = memnew(VisualShaderNodeFloatParameter);
	if (!visual_shader_node_float_parameter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_float_parameter_class);	
	return obj;
}
static JSValue visual_shader_node_float_parameter_class_set_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_hint, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_get_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_hint, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_min, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_get_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_min, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_max, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_get_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_max, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_step, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_get_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_step, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_default_value_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_default_value_enabled, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_is_default_value_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::is_default_value_enabled, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_default_value, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_float_parameter_class_get_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_default_value, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_float_parameter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_hint", 1, &visual_shader_node_float_parameter_class_set_hint),
	JS_CFUNC_DEF("get_hint", 0, &visual_shader_node_float_parameter_class_get_hint),
	JS_CFUNC_DEF("set_min", 1, &visual_shader_node_float_parameter_class_set_min),
	JS_CFUNC_DEF("get_min", 0, &visual_shader_node_float_parameter_class_get_min),
	JS_CFUNC_DEF("set_max", 1, &visual_shader_node_float_parameter_class_set_max),
	JS_CFUNC_DEF("get_max", 0, &visual_shader_node_float_parameter_class_get_max),
	JS_CFUNC_DEF("set_step", 1, &visual_shader_node_float_parameter_class_set_step),
	JS_CFUNC_DEF("get_step", 0, &visual_shader_node_float_parameter_class_get_step),
	JS_CFUNC_DEF("set_default_value_enabled", 1, &visual_shader_node_float_parameter_class_set_default_value_enabled),
	JS_CFUNC_DEF("is_default_value_enabled", 0, &visual_shader_node_float_parameter_class_is_default_value_enabled),
	JS_CFUNC_DEF("set_default_value", 1, &visual_shader_node_float_parameter_class_set_default_value),
	JS_CFUNC_DEF("get_default_value", 0, &visual_shader_node_float_parameter_class_get_default_value),
};

static void define_visual_shader_node_float_parameter_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "hint"),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_get_hint, "get_hint", 0),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_set_hint, "set_hint", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "min"),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_get_min, "get_min", 0),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_set_min, "set_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max"),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_get_max, "get_max", 0),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_set_max, "set_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "step"),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_get_step, "get_step", 0),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_set_step, "set_step", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "default_value_enabled"),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_is_default_value_enabled, "is_default_value_enabled", 0),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_set_default_value_enabled, "set_default_value_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "default_value"),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_get_default_value, "get_default_value", 0),
        JS_NewCFunction(ctx, visual_shader_node_float_parameter_class_set_default_value, "set_default_value", 1),
        JS_PROP_GETSET
    );
	
}

static void define_visual_shader_node_float_parameter_enum(JSContext *ctx, JSValue proto) {
	JSValue Hint_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Hint_obj, "HINT_NONE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Hint_obj, "HINT_RANGE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Hint_obj, "HINT_RANGE_STEP", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Hint_obj, "HINT_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "Hint", Hint_obj);
}

static int js_visual_shader_node_float_parameter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeFloatParameter::__class_id);
	classes["VisualShaderNodeFloatParameter"] = VisualShaderNodeFloatParameter::__class_id;
	class_id_list.insert(VisualShaderNodeFloatParameter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeFloatParameter::__class_id, &visual_shader_node_float_parameter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeFloatParameter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeParameter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeFloatParameter::__class_id, proto);

	define_visual_shader_node_float_parameter_property(ctx, proto);
	define_visual_shader_node_float_parameter_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_float_parameter_class_proto_funcs, _countof(visual_shader_node_float_parameter_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_float_parameter_class_constructor, "VisualShaderNodeFloatParameter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeFloatParameter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_float_parameter_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_shader_node_parameter';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_float_parameter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeFloatParameter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_float_parameter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_float_parameter_module(ctx, "@godot/classes/visual_shader_node_float_parameter");
}

void register_visual_shader_node_float_parameter() {
	VisualShaderNodeFloatParameter::__init_js_class_id();
	js_init_visual_shader_node_float_parameter_module(ctx);
}