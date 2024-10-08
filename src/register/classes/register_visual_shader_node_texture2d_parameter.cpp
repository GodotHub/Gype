
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node_texture2d_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_texture_parameter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_texture2d_parameter_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeTexture2DParameter *visual_shader_node_texture2d_parameter = static_cast<VisualShaderNodeTexture2DParameter *>(JS_GetOpaque(val, VisualShaderNodeTexture2DParameter::__class_id));
	if (visual_shader_node_texture2d_parameter)
		VisualShaderNodeTexture2DParameter::free(nullptr, visual_shader_node_texture2d_parameter);
}

static JSClassDef visual_shader_node_texture2d_parameter_class_def = {
	"VisualShaderNodeTexture2DParameter",
	.finalizer = visual_shader_node_texture2d_parameter_class_finalizer
};

static JSValue visual_shader_node_texture2d_parameter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeTexture2DParameter *visual_shader_node_texture2d_parameter_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeTexture2DParameter::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_texture2d_parameter_class = memnew(VisualShaderNodeTexture2DParameter);
	if (!visual_shader_node_texture2d_parameter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_texture2d_parameter_class);
	return obj;
}

static int js_visual_shader_node_texture2d_parameter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeTexture2DParameter::__class_id);
	classes["VisualShaderNodeTexture2DParameter"] = VisualShaderNodeTexture2DParameter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeTexture2DParameter::__class_id, &visual_shader_node_texture2d_parameter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeTextureParameter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeTexture2DParameter::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_texture2d_parameter_class_constructor, "VisualShaderNodeTexture2DParameter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeTexture2DParameter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_texture2d_parameter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_texture2d_parameter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeTexture2DParameter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_texture2d_parameter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_texture2d_parameter_module(ctx, "godot/classes/visual_shader_node_texture2d_parameter");
}

void register_visual_shader_node_texture2d_parameter() {
	js_init_visual_shader_node_texture2d_parameter_module(ctx);
}