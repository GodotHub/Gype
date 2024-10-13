
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_global_expression.hpp>
#include <godot_cpp/classes/visual_shader_node_expression.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_global_expression_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeGlobalExpression *visual_shader_node_global_expression = static_cast<VisualShaderNodeGlobalExpression *>(JS_GetOpaque(val, VisualShaderNodeGlobalExpression::__class_id));
	if (visual_shader_node_global_expression)
		VisualShaderNodeGlobalExpression::free(nullptr, visual_shader_node_global_expression);
}

static JSClassDef visual_shader_node_global_expression_class_def = {
	"VisualShaderNodeGlobalExpression",
	.finalizer = visual_shader_node_global_expression_class_finalizer
};

static JSValue visual_shader_node_global_expression_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeGlobalExpression *visual_shader_node_global_expression_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeGlobalExpression::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_global_expression_class = memnew(VisualShaderNodeGlobalExpression);
	if (!visual_shader_node_global_expression_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_global_expression_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_visual_shader_node_global_expression_property(JSContext *ctx, JSValue obj) {
}

static int js_visual_shader_node_global_expression_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeGlobalExpression::__class_id);
	classes["VisualShaderNodeGlobalExpression"] = VisualShaderNodeGlobalExpression::__class_id;
	class_id_list.insert(VisualShaderNodeGlobalExpression::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeGlobalExpression::__class_id, &visual_shader_node_global_expression_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeExpression::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeGlobalExpression::__class_id, proto);
	define_visual_shader_node_global_expression_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_global_expression_class_constructor, "VisualShaderNodeGlobalExpression", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeGlobalExpression", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_global_expression_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node_expression';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_global_expression_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeGlobalExpression");
	return m;
}

JSModuleDef *js_init_visual_shader_node_global_expression_module(JSContext *ctx) {
	return _js_init_visual_shader_node_global_expression_module(ctx, "godot/classes/visual_shader_node_global_expression");
}

void register_visual_shader_node_global_expression() {
	VisualShaderNodeGlobalExpression::__init_js_class_id();
	js_init_visual_shader_node_global_expression_module(ctx);
}