
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gpu_particles_collision_sphere3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gpu_particles_collision_sphere3d_class_finalizer(JSRuntime *rt, JSValue val) {
	GPUParticlesCollisionSphere3D *gpu_particles_collision_sphere3d = static_cast<GPUParticlesCollisionSphere3D *>(JS_GetOpaque(val, GPUParticlesCollisionSphere3D::__class_id));
	if (gpu_particles_collision_sphere3d)
		memdelete(gpu_particles_collision_sphere3d);
}

static JSClassDef gpu_particles_collision_sphere3d_class_def = {
	"GPUParticlesCollisionSphere3D",
	.finalizer = gpu_particles_collision_sphere3d_class_finalizer
};

static JSValue gpu_particles_collision_sphere3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GPUParticlesCollisionSphere3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	GPUParticlesCollisionSphere3D *gpu_particles_collision_sphere3d_class = memnew(GPUParticlesCollisionSphere3D);
	if (!gpu_particles_collision_sphere3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gpu_particles_collision_sphere3d_class);	
	return obj;
}
static JSValue gpu_particles_collision_sphere3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticlesCollisionSphere3D::set_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sphere3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticlesCollisionSphere3D::get_radius, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gpu_particles_collision_sphere3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &gpu_particles_collision_sphere3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &gpu_particles_collision_sphere3d_class_get_radius),
};

void define_gpu_particles_collision_sphere3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, gpu_particles_collision_sphere3d_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, gpu_particles_collision_sphere3d_class_set_radius, "set_radius", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_gpu_particles_collision_sphere3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GPUParticlesCollisionSphere3D::__class_id);
	classes["GPUParticlesCollisionSphere3D"] = GPUParticlesCollisionSphere3D::__class_id;
	class_id_list.insert(GPUParticlesCollisionSphere3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GPUParticlesCollisionSphere3D::__class_id, &gpu_particles_collision_sphere3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GPUParticlesCollisionSphere3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GPUParticlesCollision3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticlesCollisionSphere3D::__class_id, proto);

	define_gpu_particles_collision_sphere3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles_collision_sphere3d_class_proto_funcs, _countof(gpu_particles_collision_sphere3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles_collision_sphere3d_class_constructor, "GPUParticlesCollisionSphere3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GPUParticlesCollisionSphere3D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles_collision_sphere3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/gpu_particles_collision3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles_collision_sphere3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticlesCollisionSphere3D");
	return m;
}

JSModuleDef *js_init_gpu_particles_collision_sphere3d_module(JSContext *ctx) {
	return _js_init_gpu_particles_collision_sphere3d_module(ctx, "godot/classes/gpu_particles_collision_sphere3d");
}

void register_gpu_particles_collision_sphere3d() {
	GPUParticlesCollisionSphere3D::__init_js_class_id();
	js_init_gpu_particles_collision_sphere3d_module(ctx);
}