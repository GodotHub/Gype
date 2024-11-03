
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_emitter.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_particle_emitter_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_particle_emitter_class_def = {
	"VisualShaderNodeParticleEmitter",
	.finalizer = visual_shader_node_particle_emitter_class_finalizer
};

static JSValue visual_shader_node_particle_emitter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeParticleEmitter::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShaderNodeParticleEmitter *visual_shader_node_particle_emitter_class;
	if (argc == 1) 
		visual_shader_node_particle_emitter_class = static_cast<VisualShaderNodeParticleEmitter *>(Variant(*argv).operator Object *());
	else 
		visual_shader_node_particle_emitter_class = memnew(VisualShaderNodeParticleEmitter);
	if (!visual_shader_node_particle_emitter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_particle_emitter_class);
	return obj;
}
static JSValue visual_shader_node_particle_emitter_class_set_mode_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeParticleEmitter::set_mode_2d, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_particle_emitter_class_is_mode_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeParticleEmitter::is_mode_2d, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_particle_emitter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mode_2d", 1, &visual_shader_node_particle_emitter_class_set_mode_2d),
	JS_CFUNC_DEF("is_mode_2d", 0, &visual_shader_node_particle_emitter_class_is_mode_2d),
};

static void define_visual_shader_node_particle_emitter_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mode_2d"),
        JS_NewCFunction(ctx, visual_shader_node_particle_emitter_class_is_mode_2d, "is_mode_2d", 0),
        JS_NewCFunction(ctx, visual_shader_node_particle_emitter_class_set_mode_2d, "set_mode_2d", 1),
        JS_PROP_GETSET
    );
	
}

static void define_visual_shader_node_particle_emitter_enum(JSContext *ctx, JSValue proto) {
}

static int js_visual_shader_node_particle_emitter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VisualShaderNodeParticleEmitter"] = VisualShaderNodeParticleEmitter::__class_id;
	class_id_list.insert(VisualShaderNodeParticleEmitter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParticleEmitter::__class_id, &visual_shader_node_particle_emitter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeParticleEmitter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParticleEmitter::__class_id, proto);

	define_visual_shader_node_particle_emitter_property(ctx, proto);
	define_visual_shader_node_particle_emitter_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_particle_emitter_class_proto_funcs, _countof(visual_shader_node_particle_emitter_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_particle_emitter_class_constructor, "VisualShaderNodeParticleEmitter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "VisualShaderNodeParticleEmitter", ctor);
	constructors[VisualShaderNodeParticleEmitter::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_particle_emitter_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_particle_emitter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParticleEmitter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_particle_emitter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_particle_emitter_module(ctx, "@godot/classes/visual_shader_node_particle_emitter");
}

void register_visual_shader_node_particle_emitter() {
	VisualShaderNodeParticleEmitter::__init_js_class_id();
	js_init_visual_shader_node_particle_emitter_module(ctx);
}