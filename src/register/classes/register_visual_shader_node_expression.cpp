
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node_expression.hpp>
#include <godot_cpp/classes/visual_shader_node_group_base.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_expression_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeExpression *visual_shader_node_expression = static_cast<VisualShaderNodeExpression *>(JS_GetOpaque(val, VisualShaderNodeExpression::__class_id));
	if (visual_shader_node_expression)
		VisualShaderNodeExpression::free(nullptr, visual_shader_node_expression);
}

static JSClassDef visual_shader_node_expression_class_def = {
	"VisualShaderNodeExpression",
	.finalizer = visual_shader_node_expression_class_finalizer
};

static JSValue visual_shader_node_expression_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeExpression *visual_shader_node_expression_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeExpression::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_expression_class = memnew(VisualShaderNodeExpression);
	if (!visual_shader_node_expression_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_expression_class);
	return obj;
}
static JSValue visual_shader_node_expression_class_set_expression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeExpression::set_expression, VisualShaderNodeExpression::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_expression_class_get_expression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeExpression::get_expression, VisualShaderNodeExpression::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_expression_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_expression", 1, &visual_shader_node_expression_class_set_expression),
	JS_CFUNC_DEF("get_expression", 0, &visual_shader_node_expression_class_get_expression),
};

static int js_visual_shader_node_expression_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeExpression::__class_id);
	classes["VisualShaderNodeExpression"] = VisualShaderNodeExpression::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeExpression::__class_id, &visual_shader_node_expression_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeGroupBase::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeExpression::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_expression_class_proto_funcs, _countof(visual_shader_node_expression_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_expression_class_constructor, "VisualShaderNodeExpression", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeExpression", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_expression_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_expression_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeExpression");
	return m;
}

JSModuleDef *js_init_visual_shader_node_expression_module(JSContext *ctx) {
	return _js_init_visual_shader_node_expression_module(ctx, "godot/classes/visual_shader_node_expression");
}

void register_visual_shader_node_expression() {
	js_init_visual_shader_node_expression_module(ctx);
}