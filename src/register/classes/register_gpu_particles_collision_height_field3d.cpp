
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gpu_particles_collision_height_field3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gpu_particles_collision_height_field3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gpu_particles_collision_height_field3d_class_def = {
	"GPUParticlesCollisionHeightField3D",
	.finalizer = gpu_particles_collision_height_field3d_class_finalizer
};

static JSValue gpu_particles_collision_height_field3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GPUParticlesCollisionHeightField3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	GPUParticlesCollisionHeightField3D *gpu_particles_collision_height_field3d_class = memnew(GPUParticlesCollisionHeightField3D);
	if (!gpu_particles_collision_height_field3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gpu_particles_collision_height_field3d_class);	
	return obj;
}
static JSValue gpu_particles_collision_height_field3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesCollisionHeightField3D::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_height_field3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionHeightField3D::get_size, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_collision_height_field3d_class_set_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesCollisionHeightField3D::set_resolution, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_height_field3d_class_get_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionHeightField3D::get_resolution, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_collision_height_field3d_class_set_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesCollisionHeightField3D::set_update_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_height_field3d_class_get_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionHeightField3D::get_update_mode, ctx, this_val, argc, argv);
};
static JSValue gpu_particles_collision_height_field3d_class_set_follow_camera_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GPUParticlesCollisionHeightField3D::set_follow_camera_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles_collision_height_field3d_class_is_follow_camera_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticlesCollisionHeightField3D::is_follow_camera_enabled, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gpu_particles_collision_height_field3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &gpu_particles_collision_height_field3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &gpu_particles_collision_height_field3d_class_get_size),
	JS_CFUNC_DEF("set_resolution", 1, &gpu_particles_collision_height_field3d_class_set_resolution),
	JS_CFUNC_DEF("get_resolution", 0, &gpu_particles_collision_height_field3d_class_get_resolution),
	JS_CFUNC_DEF("set_update_mode", 1, &gpu_particles_collision_height_field3d_class_set_update_mode),
	JS_CFUNC_DEF("get_update_mode", 0, &gpu_particles_collision_height_field3d_class_get_update_mode),
	JS_CFUNC_DEF("set_follow_camera_enabled", 1, &gpu_particles_collision_height_field3d_class_set_follow_camera_enabled),
	JS_CFUNC_DEF("is_follow_camera_enabled", 0, &gpu_particles_collision_height_field3d_class_is_follow_camera_enabled),
};

void define_gpu_particles_collision_height_field3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, gpu_particles_collision_height_field3d_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, gpu_particles_collision_height_field3d_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "resolution"),
        JS_NewCFunction(ctx, gpu_particles_collision_height_field3d_class_get_resolution, "get_resolution", 0),
        JS_NewCFunction(ctx, gpu_particles_collision_height_field3d_class_set_resolution, "set_resolution", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "update_mode"),
        JS_NewCFunction(ctx, gpu_particles_collision_height_field3d_class_get_update_mode, "get_update_mode", 0),
        JS_NewCFunction(ctx, gpu_particles_collision_height_field3d_class_set_update_mode, "set_update_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "follow_camera_enabled"),
        JS_NewCFunction(ctx, gpu_particles_collision_height_field3d_class_is_follow_camera_enabled, "is_follow_camera_enabled", 0),
        JS_NewCFunction(ctx, gpu_particles_collision_height_field3d_class_set_follow_camera_enabled, "set_follow_camera_enabled", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Resolution_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_256", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_512", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_1024", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_2048", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_4096", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_8192", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Resolution_obj, "RESOLUTION_MAX", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, proto, "Resolution", Resolution_obj);
	JSValue UpdateMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, UpdateMode_obj, "UPDATE_MODE_WHEN_MOVED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, UpdateMode_obj, "UPDATE_MODE_ALWAYS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "UpdateMode", UpdateMode_obj);
}

static int js_gpu_particles_collision_height_field3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GPUParticlesCollisionHeightField3D::__class_id);
	classes["GPUParticlesCollisionHeightField3D"] = GPUParticlesCollisionHeightField3D::__class_id;
	class_id_list.insert(GPUParticlesCollisionHeightField3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GPUParticlesCollisionHeightField3D::__class_id, &gpu_particles_collision_height_field3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GPUParticlesCollisionHeightField3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GPUParticlesCollision3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticlesCollisionHeightField3D::__class_id, proto);

	define_gpu_particles_collision_height_field3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles_collision_height_field3d_class_proto_funcs, _countof(gpu_particles_collision_height_field3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles_collision_height_field3d_class_constructor, "GPUParticlesCollisionHeightField3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GPUParticlesCollisionHeightField3D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles_collision_height_field3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/gpu_particles_collision3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles_collision_height_field3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticlesCollisionHeightField3D");
	return m;
}

JSModuleDef *js_init_gpu_particles_collision_height_field3d_module(JSContext *ctx) {
	return _js_init_gpu_particles_collision_height_field3d_module(ctx, "@godot/classes/gpu_particles_collision_height_field3d");
}

void register_gpu_particles_collision_height_field3d() {
	GPUParticlesCollisionHeightField3D::__init_js_class_id();
	js_init_gpu_particles_collision_height_field3d_module(ctx);
}