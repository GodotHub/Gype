
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_particle_accelerator.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_particle_accelerator_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_particle_accelerator_class_def = {
	"VisualShaderNodeParticleAccelerator",
	.finalizer = visual_shader_node_particle_accelerator_class_finalizer
};

static JSValue visual_shader_node_particle_accelerator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeParticleAccelerator::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShaderNodeParticleAccelerator *visual_shader_node_particle_accelerator_class;
	if (argc == 1) 
		visual_shader_node_particle_accelerator_class = static_cast<VisualShaderNodeParticleAccelerator *>(Variant(*argv).operator Object *());
	else 
		visual_shader_node_particle_accelerator_class = memnew(VisualShaderNodeParticleAccelerator);
	if (!visual_shader_node_particle_accelerator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_particle_accelerator_class);
	return obj;
}
static JSValue visual_shader_node_particle_accelerator_class_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeParticleAccelerator::set_mode, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_particle_accelerator_class_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeParticleAccelerator::get_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_particle_accelerator_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mode", 1, &visual_shader_node_particle_accelerator_class_set_mode),
	JS_CFUNC_DEF("get_mode", 0, &visual_shader_node_particle_accelerator_class_get_mode),
};

static void define_visual_shader_node_particle_accelerator_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mode"),
        JS_NewCFunction(ctx, visual_shader_node_particle_accelerator_class_get_mode, "get_mode", 0),
        JS_NewCFunction(ctx, visual_shader_node_particle_accelerator_class_set_mode, "set_mode", 1),
        JS_PROP_GETSET
    );
	
}

static void define_visual_shader_node_particle_accelerator_enum(JSContext *ctx, JSValue proto) {
	JSValue Mode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_LINEAR", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_RADIAL", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_TANGENTIAL", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "Mode", Mode_obj);
}

static int js_visual_shader_node_particle_accelerator_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VisualShaderNodeParticleAccelerator"] = VisualShaderNodeParticleAccelerator::__class_id;
	class_id_list.insert(VisualShaderNodeParticleAccelerator::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParticleAccelerator::__class_id, &visual_shader_node_particle_accelerator_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeParticleAccelerator::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParticleAccelerator::__class_id, proto);

	define_visual_shader_node_particle_accelerator_property(ctx, proto);
	define_visual_shader_node_particle_accelerator_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_particle_accelerator_class_proto_funcs, _countof(visual_shader_node_particle_accelerator_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_particle_accelerator_class_constructor, "VisualShaderNodeParticleAccelerator", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "VisualShaderNodeParticleAccelerator", ctor);
	constructors[VisualShaderNodeParticleAccelerator::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_particle_accelerator_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_particle_accelerator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParticleAccelerator");
	return m;
}

JSModuleDef *js_init_visual_shader_node_particle_accelerator_module(JSContext *ctx) {
	return _js_init_visual_shader_node_particle_accelerator_module(ctx, "@godot/classes/visual_shader_node_particle_accelerator");
}

void register_visual_shader_node_particle_accelerator() {
	VisualShaderNodeParticleAccelerator::__init_js_class_id();
	js_init_visual_shader_node_particle_accelerator_module(ctx);
}