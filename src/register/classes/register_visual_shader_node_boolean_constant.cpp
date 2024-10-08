
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node_boolean_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_constant.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_boolean_constant_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeBooleanConstant *visual_shader_node_boolean_constant = static_cast<VisualShaderNodeBooleanConstant *>(JS_GetOpaque(val, VisualShaderNodeBooleanConstant::__class_id));
	if (visual_shader_node_boolean_constant)
		VisualShaderNodeBooleanConstant::free(nullptr, visual_shader_node_boolean_constant);
}

static JSClassDef visual_shader_node_boolean_constant_class_def = {
	"VisualShaderNodeBooleanConstant",
	.finalizer = visual_shader_node_boolean_constant_class_finalizer
};

static JSValue visual_shader_node_boolean_constant_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeBooleanConstant *visual_shader_node_boolean_constant_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeBooleanConstant::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_boolean_constant_class = memnew(VisualShaderNodeBooleanConstant);
	if (!visual_shader_node_boolean_constant_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_boolean_constant_class);
	return obj;
}
static JSValue visual_shader_node_boolean_constant_class_set_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeBooleanConstant::set_constant, VisualShaderNodeBooleanConstant::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_boolean_constant_class_get_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeBooleanConstant::get_constant, VisualShaderNodeBooleanConstant::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_boolean_constant_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_constant", 1, &visual_shader_node_boolean_constant_class_set_constant),
	JS_CFUNC_DEF("get_constant", 0, &visual_shader_node_boolean_constant_class_get_constant),
};

static int js_visual_shader_node_boolean_constant_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeBooleanConstant::__class_id);
	classes["VisualShaderNodeBooleanConstant"] = VisualShaderNodeBooleanConstant::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeBooleanConstant::__class_id, &visual_shader_node_boolean_constant_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeConstant::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeBooleanConstant::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_boolean_constant_class_proto_funcs, _countof(visual_shader_node_boolean_constant_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_boolean_constant_class_constructor, "VisualShaderNodeBooleanConstant", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeBooleanConstant", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_boolean_constant_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_boolean_constant_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeBooleanConstant");
	return m;
}

JSModuleDef *js_init_visual_shader_node_boolean_constant_module(JSContext *ctx) {
	return _js_init_visual_shader_node_boolean_constant_module(ctx, "godot/classes/visual_shader_node_boolean_constant");
}

void register_visual_shader_node_boolean_constant() {
	js_init_visual_shader_node_boolean_constant_module(ctx);
}