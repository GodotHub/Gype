
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_texture_sdf.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_texture_sdf_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeTextureSDF *visual_shader_node_texture_sdf = static_cast<VisualShaderNodeTextureSDF *>(JS_GetOpaque(val, VisualShaderNodeTextureSDF::__class_id));
	if (visual_shader_node_texture_sdf)
		VisualShaderNodeTextureSDF::free(nullptr, visual_shader_node_texture_sdf);
}

static JSClassDef visual_shader_node_texture_sdf_class_def = {
	"VisualShaderNodeTextureSDF",
	.finalizer = visual_shader_node_texture_sdf_class_finalizer
};

static JSValue visual_shader_node_texture_sdf_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeTextureSDF *visual_shader_node_texture_sdf_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeTextureSDF::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_texture_sdf_class = memnew(VisualShaderNodeTextureSDF);
	if (!visual_shader_node_texture_sdf_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_texture_sdf_class);
	return obj;
}

static int js_visual_shader_node_texture_sdf_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeTextureSDF::__class_id);
	classes["VisualShaderNodeTextureSDF"] = VisualShaderNodeTextureSDF::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeTextureSDF::__class_id, &visual_shader_node_texture_sdf_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeTextureSDF::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_texture_sdf_class_constructor, "VisualShaderNodeTextureSDF", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeTextureSDF", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_texture_sdf_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_texture_sdf_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeTextureSDF");
	return m;
}

JSModuleDef *js_init_visual_shader_node_texture_sdf_module(JSContext *ctx) {
	return _js_init_visual_shader_node_texture_sdf_module(ctx, "godot/classes/visual_shader_node_texture_sdf");
}

void register_visual_shader_node_texture_sdf() {
	js_init_visual_shader_node_texture_sdf_module(ctx);
}