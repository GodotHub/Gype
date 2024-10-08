
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node_particle_emitter.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_sphere_emitter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_particle_sphere_emitter_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeParticleSphereEmitter *visual_shader_node_particle_sphere_emitter = static_cast<VisualShaderNodeParticleSphereEmitter *>(JS_GetOpaque(val, VisualShaderNodeParticleSphereEmitter::__class_id));
	if (visual_shader_node_particle_sphere_emitter)
		VisualShaderNodeParticleSphereEmitter::free(nullptr, visual_shader_node_particle_sphere_emitter);
}

static JSClassDef visual_shader_node_particle_sphere_emitter_class_def = {
	"VisualShaderNodeParticleSphereEmitter",
	.finalizer = visual_shader_node_particle_sphere_emitter_class_finalizer
};

static JSValue visual_shader_node_particle_sphere_emitter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeParticleSphereEmitter *visual_shader_node_particle_sphere_emitter_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeParticleSphereEmitter::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_particle_sphere_emitter_class = memnew(VisualShaderNodeParticleSphereEmitter);
	if (!visual_shader_node_particle_sphere_emitter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_particle_sphere_emitter_class);
	return obj;
}

static int js_visual_shader_node_particle_sphere_emitter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeParticleSphereEmitter::__class_id);
	classes["VisualShaderNodeParticleSphereEmitter"] = VisualShaderNodeParticleSphereEmitter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParticleSphereEmitter::__class_id, &visual_shader_node_particle_sphere_emitter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeParticleEmitter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParticleSphereEmitter::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_particle_sphere_emitter_class_constructor, "VisualShaderNodeParticleSphereEmitter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeParticleSphereEmitter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_particle_sphere_emitter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_particle_sphere_emitter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParticleSphereEmitter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_particle_sphere_emitter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_particle_sphere_emitter_module(ctx, "godot/classes/visual_shader_node_particle_sphere_emitter");
}

void register_visual_shader_node_particle_sphere_emitter() {
	js_init_visual_shader_node_particle_sphere_emitter_module(ctx);
}