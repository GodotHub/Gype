
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision_sdf3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gpu_particles_collision_sdf3d_class_finalizer(JSRuntime *rt, JSValue val) {
	GPUParticlesCollisionSDF3D *gpu_particles_collision_sdf3d = static_cast<GPUParticlesCollisionSDF3D *>(JS_GetOpaque(val, GPUParticlesCollisionSDF3D::__class_id));
	if (gpu_particles_collision_sdf3d)
		GPUParticlesCollisionSDF3D::free(nullptr, gpu_particles_collision_sdf3d);
}

static JSClassDef gpu_particles_collision_sdf3d_class_def = {
	"GPUParticlesCollisionSDF3D",
	.finalizer = gpu_particles_collision_sdf3d_class_finalizer
};

static JSValue gpu_particles_collision_sdf3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GPUParticlesCollisionSDF3D *gpu_particles_collision_sdf3d_class;
	JSValue obj = JS_NewObjectClass(ctx, GPUParticlesCollisionSDF3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	gpu_particles_collision_sdf3d_class = memnew(GPUParticlesCollisionSDF3D);
	if (!gpu_particles_collision_sdf3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gpu_particles_collision_sdf3d_class);
	return obj;
}
static JSValue gpu_particles_collision_sdf3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_size, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_size, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_resolution, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_resolution, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_texture, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_texture, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_thickness, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_thickness, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_bake_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_bake_mask, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_bake_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_bake_mask, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_bake_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_bake_mask_value, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_bake_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_bake_mask_value, GPUParticlesCollisionSDF3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gpu_particles_collision_sdf3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &gpu_particles_collision_sdf3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &gpu_particles_collision_sdf3d_class_get_size),
	JS_CFUNC_DEF("set_resolution", 1, &gpu_particles_collision_sdf3d_class_set_resolution),
	JS_CFUNC_DEF("get_resolution", 0, &gpu_particles_collision_sdf3d_class_get_resolution),
	JS_CFUNC_DEF("set_texture", 1, &gpu_particles_collision_sdf3d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &gpu_particles_collision_sdf3d_class_get_texture),
	JS_CFUNC_DEF("set_thickness", 1, &gpu_particles_collision_sdf3d_class_set_thickness),
	JS_CFUNC_DEF("get_thickness", 0, &gpu_particles_collision_sdf3d_class_get_thickness),
	JS_CFUNC_DEF("set_bake_mask", 1, &gpu_particles_collision_sdf3d_class_set_bake_mask),
	JS_CFUNC_DEF("get_bake_mask", 0, &gpu_particles_collision_sdf3d_class_get_bake_mask),
	JS_CFUNC_DEF("set_bake_mask_value", 2, &gpu_particles_collision_sdf3d_class_set_bake_mask_value),
	JS_CFUNC_DEF("get_bake_mask_value", 1, &gpu_particles_collision_sdf3d_class_get_bake_mask_value),
};

static int js_gpu_particles_collision_sdf3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GPUParticlesCollisionSDF3D::__class_id);
	classes["GPUParticlesCollisionSDF3D"] = GPUParticlesCollisionSDF3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GPUParticlesCollisionSDF3D::__class_id, &gpu_particles_collision_sdf3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GPUParticlesCollision3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticlesCollisionSDF3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles_collision_sdf3d_class_proto_funcs, _countof(gpu_particles_collision_sdf3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles_collision_sdf3d_class_constructor, "GPUParticlesCollisionSDF3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GPUParticlesCollisionSDF3D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles_collision_sdf3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles_collision_sdf3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticlesCollisionSDF3D");
	return m;
}

JSModuleDef *js_init_gpu_particles_collision_sdf3d_module(JSContext *ctx) {
	return _js_init_gpu_particles_collision_sdf3d_module(ctx, "godot/classes/gpu_particles_collision_sdf3d");
}

void register_gpu_particles_collision_sdf3d() {
	js_init_gpu_particles_collision_sdf3d_module(ctx);
}