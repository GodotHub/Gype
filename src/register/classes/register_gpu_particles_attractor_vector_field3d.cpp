
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor_vector_field3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gpu_particles_attractor_vector_field3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gpu_particles_attractor_vector_field3d_class_def = {
	"GPUParticlesAttractorVectorField3D",
	.finalizer = gpu_particles_attractor_vector_field3d_class_finalizer
};

static JSValue gpu_particles_attractor_vector_field3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GPUParticlesAttractorVectorField3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	GPUParticlesAttractorVectorField3D *gpu_particles_attractor_vector_field3d_class = memnew(GPUParticlesAttractorVectorField3D);
	if (!gpu_particles_attractor_vector_field3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gpu_particles_attractor_vector_field3d_class);	
	return obj;
}
static JSValue gpu_particles_attractor_vector_field3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesAttractorVectorField3D::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_attractor_vector_field3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesAttractorVectorField3D::get_size, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_attractor_vector_field3d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesAttractorVectorField3D::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_attractor_vector_field3d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesAttractorVectorField3D::get_texture, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gpu_particles_attractor_vector_field3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &gpu_particles_attractor_vector_field3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &gpu_particles_attractor_vector_field3d_class_get_size),
	JS_CFUNC_DEF("set_texture", 1, &gpu_particles_attractor_vector_field3d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &gpu_particles_attractor_vector_field3d_class_get_texture),
};

void define_gpu_particles_attractor_vector_field3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, gpu_particles_attractor_vector_field3d_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, gpu_particles_attractor_vector_field3d_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, gpu_particles_attractor_vector_field3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, gpu_particles_attractor_vector_field3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_gpu_particles_attractor_vector_field3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GPUParticlesAttractorVectorField3D::__class_id);
	classes["GPUParticlesAttractorVectorField3D"] = GPUParticlesAttractorVectorField3D::__class_id;
	class_id_list.insert(GPUParticlesAttractorVectorField3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GPUParticlesAttractorVectorField3D::__class_id, &gpu_particles_attractor_vector_field3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GPUParticlesAttractorVectorField3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GPUParticlesAttractor3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticlesAttractorVectorField3D::__class_id, proto);

	define_gpu_particles_attractor_vector_field3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles_attractor_vector_field3d_class_proto_funcs, _countof(gpu_particles_attractor_vector_field3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles_attractor_vector_field3d_class_constructor, "GPUParticlesAttractorVectorField3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GPUParticlesAttractorVectorField3D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles_attractor_vector_field3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/gpu_particles_attractor3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles_attractor_vector_field3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticlesAttractorVectorField3D");
	return m;
}

JSModuleDef *js_init_gpu_particles_attractor_vector_field3d_module(JSContext *ctx) {
	return _js_init_gpu_particles_attractor_vector_field3d_module(ctx, "godot/classes/gpu_particles_attractor_vector_field3d");
}

void register_gpu_particles_attractor_vector_field3d() {
	GPUParticlesAttractorVectorField3D::__init_js_class_id();
	js_init_gpu_particles_attractor_vector_field3d_module(ctx);
}