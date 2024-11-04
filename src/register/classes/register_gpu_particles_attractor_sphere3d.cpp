
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gpu_particles_attractor_sphere3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gpu_particles_attractor_sphere3d_class_finalizer(JSRuntime *rt, JSValue val) {
	GPUParticlesAttractorSphere3D *gpu_particles_attractor_sphere3d = static_cast<GPUParticlesAttractorSphere3D *>(JS_GetOpaque(val, GPUParticlesAttractorSphere3D::__class_id));
	if (gpu_particles_attractor_sphere3d)
		memdelete(gpu_particles_attractor_sphere3d);
}

static JSClassDef gpu_particles_attractor_sphere3d_class_def = {
	"GPUParticlesAttractorSphere3D",
	.finalizer = gpu_particles_attractor_sphere3d_class_finalizer
};

static JSValue gpu_particles_attractor_sphere3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GPUParticlesAttractorSphere3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	GPUParticlesAttractorSphere3D *gpu_particles_attractor_sphere3d_class;
	if (argc == 1) 
		gpu_particles_attractor_sphere3d_class = static_cast<GPUParticlesAttractorSphere3D *>(Variant(*argv).operator Object *());
	else 
		gpu_particles_attractor_sphere3d_class = memnew(GPUParticlesAttractorSphere3D);
	if (!gpu_particles_attractor_sphere3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gpu_particles_attractor_sphere3d_class);
	return obj;
}
static JSValue gpu_particles_attractor_sphere3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticlesAttractorSphere3D::set_radius, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_attractor_sphere3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesAttractorSphere3D::get_radius, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gpu_particles_attractor_sphere3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &gpu_particles_attractor_sphere3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &gpu_particles_attractor_sphere3d_class_get_radius),
};

static void define_gpu_particles_attractor_sphere3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, gpu_particles_attractor_sphere3d_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, gpu_particles_attractor_sphere3d_class_set_radius, "set_radius", 1),
        JS_PROP_GETSET
    );
	
}

static void define_gpu_particles_attractor_sphere3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_gpu_particles_attractor_sphere3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GPUParticlesAttractorSphere3D"] = GPUParticlesAttractorSphere3D::__class_id;
	class_id_list.insert(GPUParticlesAttractorSphere3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GPUParticlesAttractorSphere3D::__class_id, &gpu_particles_attractor_sphere3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GPUParticlesAttractorSphere3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GPUParticlesAttractor3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticlesAttractorSphere3D::__class_id, proto);

	define_gpu_particles_attractor_sphere3d_property(ctx, proto);
	define_gpu_particles_attractor_sphere3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles_attractor_sphere3d_class_proto_funcs, _countof(gpu_particles_attractor_sphere3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles_attractor_sphere3d_class_constructor, "GPUParticlesAttractorSphere3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "GPUParticlesAttractorSphere3D", ctor);
	constructors[GPUParticlesAttractorSphere3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_gpu_particles_attractor_sphere3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/gpu_particles_attractor3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles_attractor_sphere3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticlesAttractorSphere3D");
	return m;
}

JSModuleDef *js_init_gpu_particles_attractor_sphere3d_module(JSContext *ctx) {
	return _js_init_gpu_particles_attractor_sphere3d_module(ctx, "@godot/classes/gpu_particles_attractor_sphere3d");
}

void register_gpu_particles_attractor_sphere3d() {
	GPUParticlesAttractorSphere3D::__init_js_class_id();
	js_init_gpu_particles_attractor_sphere3d_module(ctx);
}