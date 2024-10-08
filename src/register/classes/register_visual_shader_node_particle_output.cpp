
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node_output.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_output.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_particle_output_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeParticleOutput *visual_shader_node_particle_output = static_cast<VisualShaderNodeParticleOutput *>(JS_GetOpaque(val, VisualShaderNodeParticleOutput::__class_id));
	if (visual_shader_node_particle_output)
		VisualShaderNodeParticleOutput::free(nullptr, visual_shader_node_particle_output);
}

static JSClassDef visual_shader_node_particle_output_class_def = {
	"VisualShaderNodeParticleOutput",
	.finalizer = visual_shader_node_particle_output_class_finalizer
};

static JSValue visual_shader_node_particle_output_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeParticleOutput *visual_shader_node_particle_output_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeParticleOutput::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_particle_output_class = memnew(VisualShaderNodeParticleOutput);
	if (!visual_shader_node_particle_output_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_particle_output_class);
	return obj;
}

static int js_visual_shader_node_particle_output_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeParticleOutput::__class_id);
	classes["VisualShaderNodeParticleOutput"] = VisualShaderNodeParticleOutput::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParticleOutput::__class_id, &visual_shader_node_particle_output_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeOutput::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParticleOutput::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_particle_output_class_constructor, "VisualShaderNodeParticleOutput", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeParticleOutput", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_particle_output_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_particle_output_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParticleOutput");
	return m;
}

JSModuleDef *js_init_visual_shader_node_particle_output_module(JSContext *ctx) {
	return _js_init_visual_shader_node_particle_output_module(ctx, "godot/classes/visual_shader_node_particle_output");
}

void register_visual_shader_node_particle_output() {
	js_init_visual_shader_node_particle_output_module(ctx);
}