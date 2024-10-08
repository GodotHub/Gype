
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_cone_velocity.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_particle_cone_velocity_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeParticleConeVelocity *visual_shader_node_particle_cone_velocity = static_cast<VisualShaderNodeParticleConeVelocity *>(JS_GetOpaque(val, VisualShaderNodeParticleConeVelocity::__class_id));
	if (visual_shader_node_particle_cone_velocity)
		VisualShaderNodeParticleConeVelocity::free(nullptr, visual_shader_node_particle_cone_velocity);
}

static JSClassDef visual_shader_node_particle_cone_velocity_class_def = {
	"VisualShaderNodeParticleConeVelocity",
	.finalizer = visual_shader_node_particle_cone_velocity_class_finalizer
};

static JSValue visual_shader_node_particle_cone_velocity_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeParticleConeVelocity *visual_shader_node_particle_cone_velocity_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeParticleConeVelocity::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_particle_cone_velocity_class = memnew(VisualShaderNodeParticleConeVelocity);
	if (!visual_shader_node_particle_cone_velocity_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_particle_cone_velocity_class);
	return obj;
}

static int js_visual_shader_node_particle_cone_velocity_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeParticleConeVelocity::__class_id);
	classes["VisualShaderNodeParticleConeVelocity"] = VisualShaderNodeParticleConeVelocity::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParticleConeVelocity::__class_id, &visual_shader_node_particle_cone_velocity_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParticleConeVelocity::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_particle_cone_velocity_class_constructor, "VisualShaderNodeParticleConeVelocity", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeParticleConeVelocity", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_particle_cone_velocity_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_particle_cone_velocity_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParticleConeVelocity");
	return m;
}

JSModuleDef *js_init_visual_shader_node_particle_cone_velocity_module(JSContext *ctx) {
	return _js_init_visual_shader_node_particle_cone_velocity_module(ctx, "godot/classes/visual_shader_node_particle_cone_velocity");
}

void register_visual_shader_node_particle_cone_velocity() {
	js_init_visual_shader_node_particle_cone_velocity_module(ctx);
}