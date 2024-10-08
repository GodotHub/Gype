
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_float_constant.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_float_constant_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeFloatConstant *visual_shader_node_float_constant = static_cast<VisualShaderNodeFloatConstant *>(JS_GetOpaque(val, VisualShaderNodeFloatConstant::__class_id));
	if (visual_shader_node_float_constant)
		VisualShaderNodeFloatConstant::free(nullptr, visual_shader_node_float_constant);
}

static JSClassDef visual_shader_node_float_constant_class_def = {
	"VisualShaderNodeFloatConstant",
	.finalizer = visual_shader_node_float_constant_class_finalizer
};

static JSValue visual_shader_node_float_constant_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeFloatConstant *visual_shader_node_float_constant_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeFloatConstant::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_float_constant_class = memnew(VisualShaderNodeFloatConstant);
	if (!visual_shader_node_float_constant_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_float_constant_class);
	return obj;
}
static JSValue visual_shader_node_float_constant_class_set_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeFloatConstant::set_constant, VisualShaderNodeFloatConstant::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_float_constant_class_get_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeFloatConstant::get_constant, VisualShaderNodeFloatConstant::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_float_constant_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_constant", 1, &visual_shader_node_float_constant_class_set_constant),
	JS_CFUNC_DEF("get_constant", 0, &visual_shader_node_float_constant_class_get_constant),
};

static int js_visual_shader_node_float_constant_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeFloatConstant::__class_id);
	classes["VisualShaderNodeFloatConstant"] = VisualShaderNodeFloatConstant::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeFloatConstant::__class_id, &visual_shader_node_float_constant_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeConstant::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeFloatConstant::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_float_constant_class_proto_funcs, _countof(visual_shader_node_float_constant_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_float_constant_class_constructor, "VisualShaderNodeFloatConstant", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeFloatConstant", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_float_constant_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_float_constant_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeFloatConstant");
	return m;
}

JSModuleDef *js_init_visual_shader_node_float_constant_module(JSContext *ctx) {
	return _js_init_visual_shader_node_float_constant_module(ctx, "godot/classes/visual_shader_node_float_constant");
}

void register_visual_shader_node_float_constant() {
	js_init_visual_shader_node_float_constant_module(ctx);
}