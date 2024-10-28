
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision_sdf3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gpu_particles_collision_sdf3d_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef gpu_particles_collision_sdf3d_class_def = {
	"GPUParticlesCollisionSDF3D",
	.finalizer = gpu_particles_collision_sdf3d_class_finalizer
};

static JSValue gpu_particles_collision_sdf3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GPUParticlesCollisionSDF3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	GPUParticlesCollisionSDF3D *gpu_particles_collision_sdf3d_class = memnew(GPUParticlesCollisionSDF3D);
	if (!gpu_particles_collision_sdf3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gpu_particles_collision_sdf3d_class);
	return obj;
}
static JSValue gpu_particles_collision_sdf3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_size, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_resolution, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_resolution, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_texture, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_thickness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_thickness, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_bake_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_bake_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_bake_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_bake_mask, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_collision_sdf3d_class_set_bake_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GPUParticlesCollisionSDF3D::set_bake_mask_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_sdf3d_class_get_bake_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionSDF3D::get_bake_mask_value, ctx, this_val, argc, argv);
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

void define_gpu_particles_collision_sdf3d_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "size"),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_get_size, "get_size", 0),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_set_size, "set_size", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "resolution"),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_get_resolution, "get_resolution", 0),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_set_resolution, "set_resolution", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "thickness"),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_get_thickness, "get_thickness", 0),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_set_thickness, "set_thickness", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "bake_mask"),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_get_bake_mask, "get_bake_mask", 0),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_set_bake_mask, "set_bake_mask", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "texture"),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_get_texture, "get_texture", 0),
			JS_NewCFunction(ctx, gpu_particles_collision_sdf3d_class_set_texture, "set_texture", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Resolution_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_16", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_32", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_64", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_128", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_256", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_512", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_MAX", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, proto, "Resolution", Resolution_obj);
}

static int js_gpu_particles_collision_sdf3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GPUParticlesCollisionSDF3D::__class_id);
	classes["GPUParticlesCollisionSDF3D"] = GPUParticlesCollisionSDF3D::__class_id;
	class_id_list.insert(GPUParticlesCollisionSDF3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GPUParticlesCollisionSDF3D::__class_id, &gpu_particles_collision_sdf3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GPUParticlesCollisionSDF3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GPUParticlesCollision3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticlesCollisionSDF3D::__class_id, proto);

	define_gpu_particles_collision_sdf3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles_collision_sdf3d_class_proto_funcs, _countof(gpu_particles_collision_sdf3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles_collision_sdf3d_class_constructor, "GPUParticlesCollisionSDF3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GPUParticlesCollisionSDF3D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles_collision_sdf3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/gpu_particles_collision3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	GPUParticlesCollisionSDF3D::__init_js_class_id();
	js_init_gpu_particles_collision_sdf3d_module(ctx);
}