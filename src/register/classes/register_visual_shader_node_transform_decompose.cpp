
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_shader_node_transform_decompose.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_transform_decompose_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeTransformDecompose *visual_shader_node_transform_decompose = static_cast<VisualShaderNodeTransformDecompose *>(JS_GetOpaque(val, VisualShaderNodeTransformDecompose::__class_id));
	if (visual_shader_node_transform_decompose)
		VisualShaderNodeTransformDecompose::free(nullptr, visual_shader_node_transform_decompose);
}

static JSClassDef visual_shader_node_transform_decompose_class_def = {
	"VisualShaderNodeTransformDecompose",
	.finalizer = visual_shader_node_transform_decompose_class_finalizer
};

static JSValue visual_shader_node_transform_decompose_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeTransformDecompose *visual_shader_node_transform_decompose_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeTransformDecompose::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_transform_decompose_class = memnew(VisualShaderNodeTransformDecompose);
	if (!visual_shader_node_transform_decompose_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_transform_decompose_class);
	return obj;
}

static int js_visual_shader_node_transform_decompose_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeTransformDecompose::__class_id);
	classes["VisualShaderNodeTransformDecompose"] = VisualShaderNodeTransformDecompose::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeTransformDecompose::__class_id, &visual_shader_node_transform_decompose_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeTransformDecompose::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_transform_decompose_class_constructor, "VisualShaderNodeTransformDecompose", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeTransformDecompose", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_transform_decompose_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_transform_decompose_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeTransformDecompose");
	return m;
}

JSModuleDef *js_init_visual_shader_node_transform_decompose_module(JSContext *ctx) {
	return _js_init_visual_shader_node_transform_decompose_module(ctx, "godot/classes/visual_shader_node_transform_decompose");
}

void register_visual_shader_node_transform_decompose() {
	js_init_visual_shader_node_transform_decompose_module(ctx);
}