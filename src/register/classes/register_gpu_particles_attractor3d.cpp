
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gpu_particles_attractor3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gpu_particles_attractor3d_class_def = {
	"GPUParticlesAttractor3D",
	.finalizer = gpu_particles_attractor3d_class_finalizer
};

static JSValue gpu_particles_attractor3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GPUParticlesAttractor3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	GPUParticlesAttractor3D *gpu_particles_attractor3d_class = memnew(GPUParticlesAttractor3D);
	if (!gpu_particles_attractor3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gpu_particles_attractor3d_class);	
	return obj;
}
static JSValue gpu_particles_attractor3d_class_set_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesAttractor3D::set_cull_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_attractor3d_class_get_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesAttractor3D::get_cull_mask, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_attractor3d_class_set_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesAttractor3D::set_strength, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_attractor3d_class_get_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesAttractor3D::get_strength, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_attractor3d_class_set_attenuation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesAttractor3D::set_attenuation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_attractor3d_class_get_attenuation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesAttractor3D::get_attenuation, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_attractor3d_class_set_directionality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesAttractor3D::set_directionality, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_attractor3d_class_get_directionality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesAttractor3D::get_directionality, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gpu_particles_attractor3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_cull_mask", 1, &gpu_particles_attractor3d_class_set_cull_mask),
	JS_CFUNC_DEF("get_cull_mask", 0, &gpu_particles_attractor3d_class_get_cull_mask),
	JS_CFUNC_DEF("set_strength", 1, &gpu_particles_attractor3d_class_set_strength),
	JS_CFUNC_DEF("get_strength", 0, &gpu_particles_attractor3d_class_get_strength),
	JS_CFUNC_DEF("set_attenuation", 1, &gpu_particles_attractor3d_class_set_attenuation),
	JS_CFUNC_DEF("get_attenuation", 0, &gpu_particles_attractor3d_class_get_attenuation),
	JS_CFUNC_DEF("set_directionality", 1, &gpu_particles_attractor3d_class_set_directionality),
	JS_CFUNC_DEF("get_directionality", 0, &gpu_particles_attractor3d_class_get_directionality),
};

void define_gpu_particles_attractor3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "strength"),
        JS_NewCFunction(ctx, gpu_particles_attractor3d_class_get_strength, "get_strength", 0),
        JS_NewCFunction(ctx, gpu_particles_attractor3d_class_set_strength, "set_strength", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "attenuation"),
        JS_NewCFunction(ctx, gpu_particles_attractor3d_class_get_attenuation, "get_attenuation", 0),
        JS_NewCFunction(ctx, gpu_particles_attractor3d_class_set_attenuation, "set_attenuation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "directionality"),
        JS_NewCFunction(ctx, gpu_particles_attractor3d_class_get_directionality, "get_directionality", 0),
        JS_NewCFunction(ctx, gpu_particles_attractor3d_class_set_directionality, "set_directionality", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cull_mask"),
        JS_NewCFunction(ctx, gpu_particles_attractor3d_class_get_cull_mask, "get_cull_mask", 0),
        JS_NewCFunction(ctx, gpu_particles_attractor3d_class_set_cull_mask, "set_cull_mask", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_gpu_particles_attractor3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GPUParticlesAttractor3D::__class_id);
	classes["GPUParticlesAttractor3D"] = GPUParticlesAttractor3D::__class_id;
	class_id_list.insert(GPUParticlesAttractor3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GPUParticlesAttractor3D::__class_id, &gpu_particles_attractor3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GPUParticlesAttractor3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticlesAttractor3D::__class_id, proto);

	define_gpu_particles_attractor3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles_attractor3d_class_proto_funcs, _countof(gpu_particles_attractor3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles_attractor3d_class_constructor, "GPUParticlesAttractor3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GPUParticlesAttractor3D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles_attractor3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles_attractor3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticlesAttractor3D");
	return m;
}

JSModuleDef *js_init_gpu_particles_attractor3d_module(JSContext *ctx) {
	return _js_init_gpu_particles_attractor3d_module(ctx, "godot/classes/gpu_particles_attractor3d");
}

void register_gpu_particles_attractor3d() {
	GPUParticlesAttractor3D::__init_js_class_id();
	js_init_gpu_particles_attractor3d_module(ctx);
}