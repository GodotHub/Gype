
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_particle_box_emitter.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_emitter.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_particle_box_emitter_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeParticleBoxEmitter *visual_shader_node_particle_box_emitter = static_cast<VisualShaderNodeParticleBoxEmitter *>(JS_GetOpaque(val, VisualShaderNodeParticleBoxEmitter::__class_id));
	if (visual_shader_node_particle_box_emitter)
		memdelete(visual_shader_node_particle_box_emitter);
}

static JSClassDef visual_shader_node_particle_box_emitter_class_def = {
	"VisualShaderNodeParticleBoxEmitter",
	.finalizer = visual_shader_node_particle_box_emitter_class_finalizer
};

static JSValue visual_shader_node_particle_box_emitter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeParticleBoxEmitter::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeParticleBoxEmitter *visual_shader_node_particle_box_emitter_class = memnew(VisualShaderNodeParticleBoxEmitter);
	if (!visual_shader_node_particle_box_emitter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_particle_box_emitter_class);	
	return obj;
}

void define_visual_shader_node_particle_box_emitter_property(JSContext *ctx, JSValue obj) {
}

static int js_visual_shader_node_particle_box_emitter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeParticleBoxEmitter::__class_id);
	classes["VisualShaderNodeParticleBoxEmitter"] = VisualShaderNodeParticleBoxEmitter::__class_id;
	class_id_list.insert(VisualShaderNodeParticleBoxEmitter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParticleBoxEmitter::__class_id, &visual_shader_node_particle_box_emitter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeParticleBoxEmitter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeParticleEmitter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParticleBoxEmitter::__class_id, proto);

	define_visual_shader_node_particle_box_emitter_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_particle_box_emitter_class_constructor, "VisualShaderNodeParticleBoxEmitter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeParticleBoxEmitter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_particle_box_emitter_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node_particle_emitter';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_particle_box_emitter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParticleBoxEmitter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_particle_box_emitter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_particle_box_emitter_module(ctx, "godot/classes/visual_shader_node_particle_box_emitter");
}

void register_visual_shader_node_particle_box_emitter() {
	VisualShaderNodeParticleBoxEmitter::__init_js_class_id();
	js_init_visual_shader_node_particle_box_emitter_module(ctx);
}