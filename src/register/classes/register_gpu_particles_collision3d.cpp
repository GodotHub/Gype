
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gpu_particles_collision3d_class_finalizer(JSRuntime *rt, JSValue val) {
	GPUParticlesCollision3D *gpu_particles_collision3d = static_cast<GPUParticlesCollision3D *>(JS_GetOpaque(val, GPUParticlesCollision3D::__class_id));
	if (gpu_particles_collision3d)
		GPUParticlesCollision3D::free(nullptr, gpu_particles_collision3d);
}

static JSClassDef gpu_particles_collision3d_class_def = {
	"GPUParticlesCollision3D",
	.finalizer = gpu_particles_collision3d_class_finalizer
};

static JSValue gpu_particles_collision3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GPUParticlesCollision3D *gpu_particles_collision3d_class;
	JSValue obj = JS_NewObjectClass(ctx, GPUParticlesCollision3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	gpu_particles_collision3d_class = memnew(GPUParticlesCollision3D);
	if (!gpu_particles_collision3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gpu_particles_collision3d_class);
	return obj;
}
static JSValue gpu_particles_collision3d_class_set_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticlesCollision3D::set_cull_mask, GPUParticlesCollision3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision3d_class_get_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesCollision3D::get_cull_mask, GPUParticlesCollision3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gpu_particles_collision3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_cull_mask", 1, &gpu_particles_collision3d_class_set_cull_mask),
	JS_CFUNC_DEF("get_cull_mask", 0, &gpu_particles_collision3d_class_get_cull_mask),
};

static int js_gpu_particles_collision3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GPUParticlesCollision3D::__class_id);
	classes["GPUParticlesCollision3D"] = GPUParticlesCollision3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GPUParticlesCollision3D::__class_id, &gpu_particles_collision3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticlesCollision3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles_collision3d_class_proto_funcs, _countof(gpu_particles_collision3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles_collision3d_class_constructor, "GPUParticlesCollision3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GPUParticlesCollision3D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles_collision3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles_collision3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticlesCollision3D");
	return m;
}

JSModuleDef *js_init_gpu_particles_collision3d_module(JSContext *ctx) {
	return _js_init_gpu_particles_collision3d_module(ctx, "godot/classes/gpu_particles_collision3d");
}

void register_gpu_particles_collision3d() {
	js_init_gpu_particles_collision3d_module(ctx);
}