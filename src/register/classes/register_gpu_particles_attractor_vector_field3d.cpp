
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor_vector_field3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gpu_particles_attractor_vector_field3d_class_finalizer(JSRuntime *rt, JSValue val) {
	GPUParticlesAttractorVectorField3D *gpu_particles_attractor_vector_field3d = static_cast<GPUParticlesAttractorVectorField3D *>(JS_GetOpaque(val, GPUParticlesAttractorVectorField3D::__class_id));
	if (gpu_particles_attractor_vector_field3d)
		GPUParticlesAttractorVectorField3D::free(nullptr, gpu_particles_attractor_vector_field3d);
}

static JSClassDef gpu_particles_attractor_vector_field3d_class_def = {
	"GPUParticlesAttractorVectorField3D",
	.finalizer = gpu_particles_attractor_vector_field3d_class_finalizer
};

static JSValue gpu_particles_attractor_vector_field3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GPUParticlesAttractorVectorField3D *gpu_particles_attractor_vector_field3d_class;
	JSValue obj = JS_NewObjectClass(ctx, GPUParticlesAttractorVectorField3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	gpu_particles_attractor_vector_field3d_class = memnew(GPUParticlesAttractorVectorField3D);
	if (!gpu_particles_attractor_vector_field3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gpu_particles_attractor_vector_field3d_class);
	return obj;
}
static JSValue gpu_particles_attractor_vector_field3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticlesAttractorVectorField3D::set_size, GPUParticlesAttractorVectorField3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_attractor_vector_field3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesAttractorVectorField3D::get_size, GPUParticlesAttractorVectorField3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles_attractor_vector_field3d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticlesAttractorVectorField3D::set_texture, GPUParticlesAttractorVectorField3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_attractor_vector_field3d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesAttractorVectorField3D::get_texture, GPUParticlesAttractorVectorField3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gpu_particles_attractor_vector_field3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &gpu_particles_attractor_vector_field3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &gpu_particles_attractor_vector_field3d_class_get_size),
	JS_CFUNC_DEF("set_texture", 1, &gpu_particles_attractor_vector_field3d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &gpu_particles_attractor_vector_field3d_class_get_texture),
};

static int js_gpu_particles_attractor_vector_field3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GPUParticlesAttractorVectorField3D::__class_id);
	classes["GPUParticlesAttractorVectorField3D"] = GPUParticlesAttractorVectorField3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GPUParticlesAttractorVectorField3D::__class_id, &gpu_particles_attractor_vector_field3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GPUParticlesAttractor3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticlesAttractorVectorField3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles_attractor_vector_field3d_class_proto_funcs, _countof(gpu_particles_attractor_vector_field3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles_attractor_vector_field3d_class_constructor, "GPUParticlesAttractorVectorField3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GPUParticlesAttractorVectorField3D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles_attractor_vector_field3d_module(JSContext *ctx, const char *module_name) {
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
	js_init_gpu_particles_attractor_vector_field3d_module(ctx);
}