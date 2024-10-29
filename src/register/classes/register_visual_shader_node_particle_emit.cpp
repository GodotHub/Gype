
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_emit.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_particle_emit_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_particle_emit_class_def = {
	"VisualShaderNodeParticleEmit",
	.finalizer = visual_shader_node_particle_emit_class_finalizer
};

static JSValue visual_shader_node_particle_emit_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeParticleEmit::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeParticleEmit *visual_shader_node_particle_emit_class = memnew(VisualShaderNodeParticleEmit);
	if (!visual_shader_node_particle_emit_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_particle_emit_class);	
	return obj;
}
static JSValue visual_shader_node_particle_emit_class_set_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&VisualShaderNodeParticleEmit::set_flags, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_particle_emit_class_get_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeParticleEmit::get_flags, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_particle_emit_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_flags", 1, &visual_shader_node_particle_emit_class_set_flags),
	JS_CFUNC_DEF("get_flags", 0, &visual_shader_node_particle_emit_class_get_flags),
};

void define_visual_shader_node_particle_emit_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flags"),
        JS_NewCFunction(ctx, visual_shader_node_particle_emit_class_get_flags, "get_flags", 0),
        JS_NewCFunction(ctx, visual_shader_node_particle_emit_class_set_flags, "set_flags", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue EmitFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_POSITION", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_ROT_SCALE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_VELOCITY", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_COLOR", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_CUSTOM", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, proto, "EmitFlags", EmitFlags_obj);
}

static int js_visual_shader_node_particle_emit_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeParticleEmit::__class_id);
	classes["VisualShaderNodeParticleEmit"] = VisualShaderNodeParticleEmit::__class_id;
	class_id_list.insert(VisualShaderNodeParticleEmit::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParticleEmit::__class_id, &visual_shader_node_particle_emit_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeParticleEmit::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParticleEmit::__class_id, proto);

	define_visual_shader_node_particle_emit_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_particle_emit_class_proto_funcs, _countof(visual_shader_node_particle_emit_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_particle_emit_class_constructor, "VisualShaderNodeParticleEmit", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeParticleEmit", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_particle_emit_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_particle_emit_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParticleEmit");
	return m;
}

JSModuleDef *js_init_visual_shader_node_particle_emit_module(JSContext *ctx) {
	return _js_init_visual_shader_node_particle_emit_module(ctx, "@godot/classes/visual_shader_node_particle_emit");
}

void register_visual_shader_node_particle_emit() {
	VisualShaderNodeParticleEmit::__init_js_class_id();
	js_init_visual_shader_node_particle_emit_module(ctx);
}