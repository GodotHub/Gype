
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_emitter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_particle_emitter_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeParticleEmitter *visual_shader_node_particle_emitter = static_cast<VisualShaderNodeParticleEmitter *>(JS_GetOpaque(val, VisualShaderNodeParticleEmitter::__class_id));
	if (visual_shader_node_particle_emitter)
		VisualShaderNodeParticleEmitter::free(nullptr, visual_shader_node_particle_emitter);
}

static JSClassDef visual_shader_node_particle_emitter_class_def = {
	"VisualShaderNodeParticleEmitter",
	.finalizer = visual_shader_node_particle_emitter_class_finalizer
};

static JSValue visual_shader_node_particle_emitter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeParticleEmitter *visual_shader_node_particle_emitter_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeParticleEmitter::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_particle_emitter_class = memnew(VisualShaderNodeParticleEmitter);
	if (!visual_shader_node_particle_emitter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_particle_emitter_class);
	return obj;
}
static JSValue visual_shader_node_particle_emitter_class_set_mode_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeParticleEmitter::set_mode_2d, VisualShaderNodeParticleEmitter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_particle_emitter_class_is_mode_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeParticleEmitter::is_mode_2d, VisualShaderNodeParticleEmitter::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_particle_emitter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mode_2d", 1, &visual_shader_node_particle_emitter_class_set_mode_2d),
	JS_CFUNC_DEF("is_mode_2d", 0, &visual_shader_node_particle_emitter_class_is_mode_2d),
};

static int js_visual_shader_node_particle_emitter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeParticleEmitter::__class_id);
	classes["VisualShaderNodeParticleEmitter"] = VisualShaderNodeParticleEmitter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParticleEmitter::__class_id, &visual_shader_node_particle_emitter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParticleEmitter::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_particle_emitter_class_proto_funcs, _countof(visual_shader_node_particle_emitter_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_particle_emitter_class_constructor, "VisualShaderNodeParticleEmitter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeParticleEmitter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_particle_emitter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_particle_emitter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParticleEmitter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_particle_emitter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_particle_emitter_module(ctx, "godot/classes/visual_shader_node_particle_emitter");
}

void register_visual_shader_node_particle_emitter() {
	js_init_visual_shader_node_particle_emitter_module(ctx);
}