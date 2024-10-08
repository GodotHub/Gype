
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_random_range.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_random_range_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeRandomRange *visual_shader_node_random_range = static_cast<VisualShaderNodeRandomRange *>(JS_GetOpaque(val, VisualShaderNodeRandomRange::__class_id));
	if (visual_shader_node_random_range)
		VisualShaderNodeRandomRange::free(nullptr, visual_shader_node_random_range);
}

static JSClassDef visual_shader_node_random_range_class_def = {
	"VisualShaderNodeRandomRange",
	.finalizer = visual_shader_node_random_range_class_finalizer
};

static JSValue visual_shader_node_random_range_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeRandomRange *visual_shader_node_random_range_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeRandomRange::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_random_range_class = memnew(VisualShaderNodeRandomRange);
	if (!visual_shader_node_random_range_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_random_range_class);
	return obj;
}

static int js_visual_shader_node_random_range_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeRandomRange::__class_id);
	classes["VisualShaderNodeRandomRange"] = VisualShaderNodeRandomRange::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeRandomRange::__class_id, &visual_shader_node_random_range_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeRandomRange::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_random_range_class_constructor, "VisualShaderNodeRandomRange", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeRandomRange", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_random_range_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_random_range_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeRandomRange");
	return m;
}

JSModuleDef *js_init_visual_shader_node_random_range_module(JSContext *ctx) {
	return _js_init_visual_shader_node_random_range_module(ctx, "godot/classes/visual_shader_node_random_range");
}

void register_visual_shader_node_random_range() {
	js_init_visual_shader_node_random_range_module(ctx);
}