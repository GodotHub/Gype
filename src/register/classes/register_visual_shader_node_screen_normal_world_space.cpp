
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_screen_normal_world_space.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_screen_normal_world_space_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeScreenNormalWorldSpace *visual_shader_node_screen_normal_world_space = static_cast<VisualShaderNodeScreenNormalWorldSpace *>(JS_GetOpaque(val, VisualShaderNodeScreenNormalWorldSpace::__class_id));
	if (visual_shader_node_screen_normal_world_space)
		VisualShaderNodeScreenNormalWorldSpace::free(nullptr, visual_shader_node_screen_normal_world_space);
}

static JSClassDef visual_shader_node_screen_normal_world_space_class_def = {
	"VisualShaderNodeScreenNormalWorldSpace",
	.finalizer = visual_shader_node_screen_normal_world_space_class_finalizer
};

static JSValue visual_shader_node_screen_normal_world_space_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeScreenNormalWorldSpace *visual_shader_node_screen_normal_world_space_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeScreenNormalWorldSpace::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_screen_normal_world_space_class = memnew(VisualShaderNodeScreenNormalWorldSpace);
	if (!visual_shader_node_screen_normal_world_space_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_screen_normal_world_space_class);
	return obj;
}

static int js_visual_shader_node_screen_normal_world_space_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeScreenNormalWorldSpace::__class_id);
	classes["VisualShaderNodeScreenNormalWorldSpace"] = VisualShaderNodeScreenNormalWorldSpace::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeScreenNormalWorldSpace::__class_id, &visual_shader_node_screen_normal_world_space_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeScreenNormalWorldSpace::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_screen_normal_world_space_class_constructor, "VisualShaderNodeScreenNormalWorldSpace", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeScreenNormalWorldSpace", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_screen_normal_world_space_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_screen_normal_world_space_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeScreenNormalWorldSpace");
	return m;
}

JSModuleDef *js_init_visual_shader_node_screen_normal_world_space_module(JSContext *ctx) {
	return _js_init_visual_shader_node_screen_normal_world_space_module(ctx, "godot/classes/visual_shader_node_screen_normal_world_space");
}

void register_visual_shader_node_screen_normal_world_space() {
	js_init_visual_shader_node_screen_normal_world_space_module(ctx);
}