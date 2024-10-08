
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node_float_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_parameter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_float_parameter_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeFloatParameter *visual_shader_node_float_parameter = static_cast<VisualShaderNodeFloatParameter *>(JS_GetOpaque(val, VisualShaderNodeFloatParameter::__class_id));
	if (visual_shader_node_float_parameter)
		VisualShaderNodeFloatParameter::free(nullptr, visual_shader_node_float_parameter);
}

static JSClassDef visual_shader_node_float_parameter_class_def = {
	"VisualShaderNodeFloatParameter",
	.finalizer = visual_shader_node_float_parameter_class_finalizer
};

static JSValue visual_shader_node_float_parameter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeFloatParameter *visual_shader_node_float_parameter_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeFloatParameter::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_float_parameter_class = memnew(VisualShaderNodeFloatParameter);
	if (!visual_shader_node_float_parameter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_float_parameter_class);
	return obj;
}
static JSValue visual_shader_node_float_parameter_class_set_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_hint, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_float_parameter_class_get_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_hint, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_min, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_float_parameter_class_get_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_min, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_max, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_float_parameter_class_get_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_max, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_step, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_float_parameter_class_get_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_step, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_default_value_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_default_value_enabled, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_float_parameter_class_is_default_value_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::is_default_value_enabled, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_float_parameter_class_set_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeFloatParameter::set_default_value, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_float_parameter_class_get_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFloatParameter::get_default_value, VisualShaderNodeFloatParameter::__class_id, ctx, this_val, argv);
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

static int js_visual_shader_node_float_parameter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeFloatParameter::__class_id);
	classes["VisualShaderNodeFloatParameter"] = VisualShaderNodeFloatParameter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeFloatParameter::__class_id, &visual_shader_node_float_parameter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeParameter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeFloatParameter::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_float_parameter_class_proto_funcs, _countof(visual_shader_node_float_parameter_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_float_parameter_class_constructor, "VisualShaderNodeFloatParameter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeFloatParameter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_float_parameter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_float_parameter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeFloatParameter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_float_parameter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_float_parameter_module(ctx, "godot/classes/visual_shader_node_float_parameter");
}

void register_visual_shader_node_float_parameter() {
	js_init_visual_shader_node_float_parameter_module(ctx);
}