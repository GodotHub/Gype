
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_color_func.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_color_func_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeColorFunc *visual_shader_node_color_func = static_cast<VisualShaderNodeColorFunc *>(JS_GetOpaque(val, VisualShaderNodeColorFunc::__class_id));
	if (visual_shader_node_color_func)
		VisualShaderNodeColorFunc::free(nullptr, visual_shader_node_color_func);
}

static JSClassDef visual_shader_node_color_func_class_def = {
	"VisualShaderNodeColorFunc",
	.finalizer = visual_shader_node_color_func_class_finalizer
};

static JSValue visual_shader_node_color_func_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeColorFunc *visual_shader_node_color_func_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeColorFunc::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_color_func_class = memnew(VisualShaderNodeColorFunc);
	if (!visual_shader_node_color_func_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_color_func_class);
	return obj;
}
static JSValue visual_shader_node_color_func_class_set_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeColorFunc::set_function, VisualShaderNodeColorFunc::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_color_func_class_get_function(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeColorFunc::get_function, VisualShaderNodeColorFunc::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_color_func_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_function", 1, &visual_shader_node_color_func_class_set_function),
	JS_CFUNC_DEF("get_function", 0, &visual_shader_node_color_func_class_get_function),
};

static int js_visual_shader_node_color_func_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeColorFunc::__class_id);
	classes["VisualShaderNodeColorFunc"] = VisualShaderNodeColorFunc::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeColorFunc::__class_id, &visual_shader_node_color_func_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeColorFunc::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_color_func_class_proto_funcs, _countof(visual_shader_node_color_func_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_color_func_class_constructor, "VisualShaderNodeColorFunc", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeColorFunc", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_color_func_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_color_func_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeColorFunc");
	return m;
}

JSModuleDef *js_init_visual_shader_node_color_func_module(JSContext *ctx) {
	return _js_init_visual_shader_node_color_func_module(ctx, "godot/classes/visual_shader_node_color_func");
}

void register_visual_shader_node_color_func() {
	js_init_visual_shader_node_color_func_module(ctx);
}