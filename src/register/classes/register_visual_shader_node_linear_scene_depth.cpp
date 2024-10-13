
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_linear_scene_depth.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_linear_scene_depth_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeLinearSceneDepth *visual_shader_node_linear_scene_depth = static_cast<VisualShaderNodeLinearSceneDepth *>(JS_GetOpaque(val, VisualShaderNodeLinearSceneDepth::__class_id));
	if (visual_shader_node_linear_scene_depth)
		VisualShaderNodeLinearSceneDepth::free(nullptr, visual_shader_node_linear_scene_depth);
}

static JSClassDef visual_shader_node_linear_scene_depth_class_def = {
	"VisualShaderNodeLinearSceneDepth",
	.finalizer = visual_shader_node_linear_scene_depth_class_finalizer
};

static JSValue visual_shader_node_linear_scene_depth_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeLinearSceneDepth *visual_shader_node_linear_scene_depth_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeLinearSceneDepth::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_linear_scene_depth_class = memnew(VisualShaderNodeLinearSceneDepth);
	if (!visual_shader_node_linear_scene_depth_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_linear_scene_depth_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_visual_shader_node_linear_scene_depth_property(JSContext *ctx, JSValue obj) {
}

static int js_visual_shader_node_linear_scene_depth_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeLinearSceneDepth::__class_id);
	classes["VisualShaderNodeLinearSceneDepth"] = VisualShaderNodeLinearSceneDepth::__class_id;
	class_id_list.insert(VisualShaderNodeLinearSceneDepth::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeLinearSceneDepth::__class_id, &visual_shader_node_linear_scene_depth_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeLinearSceneDepth::__class_id, proto);
	define_visual_shader_node_linear_scene_depth_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_linear_scene_depth_class_constructor, "VisualShaderNodeLinearSceneDepth", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeLinearSceneDepth", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_linear_scene_depth_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_linear_scene_depth_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeLinearSceneDepth");
	return m;
}

JSModuleDef *js_init_visual_shader_node_linear_scene_depth_module(JSContext *ctx) {
	return _js_init_visual_shader_node_linear_scene_depth_module(ctx, "godot/classes/visual_shader_node_linear_scene_depth");
}

void register_visual_shader_node_linear_scene_depth() {
	VisualShaderNodeLinearSceneDepth::__init_js_class_id();
	js_init_visual_shader_node_linear_scene_depth_module(ctx);
}