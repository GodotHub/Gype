
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/physical_bone_simulator3d.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physical_bone_simulator3d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicalBoneSimulator3D *physical_bone_simulator3d = static_cast<PhysicalBoneSimulator3D *>(JS_GetOpaque(val, PhysicalBoneSimulator3D::__class_id));
	if (physical_bone_simulator3d)
		PhysicalBoneSimulator3D::free(nullptr, physical_bone_simulator3d);
}

static JSClassDef physical_bone_simulator3d_class_def = {
	"PhysicalBoneSimulator3D",
	.finalizer = physical_bone_simulator3d_class_finalizer
};

static JSValue physical_bone_simulator3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicalBoneSimulator3D *physical_bone_simulator3d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicalBoneSimulator3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physical_bone_simulator3d_class = memnew(PhysicalBoneSimulator3D);
	if (!physical_bone_simulator3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physical_bone_simulator3d_class);
	return obj;
}
static JSValue physical_bone_simulator3d_class_is_simulating_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBoneSimulator3D::is_simulating_physics, PhysicalBoneSimulator3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone_simulator3d_class_physical_bones_stop_simulation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicalBoneSimulator3D::physical_bones_stop_simulation, PhysicalBoneSimulator3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone_simulator3d_class_physical_bones_start_simulation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicalBoneSimulator3D::physical_bones_start_simulation, PhysicalBoneSimulator3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone_simulator3d_class_physical_bones_add_collision_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicalBoneSimulator3D::physical_bones_add_collision_exception, PhysicalBoneSimulator3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone_simulator3d_class_physical_bones_remove_collision_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicalBoneSimulator3D::physical_bones_remove_collision_exception, PhysicalBoneSimulator3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry physical_bone_simulator3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_simulating_physics", 0, &physical_bone_simulator3d_class_is_simulating_physics),
	JS_CFUNC_DEF("physical_bones_stop_simulation", 0, &physical_bone_simulator3d_class_physical_bones_stop_simulation),
	JS_CFUNC_DEF("physical_bones_start_simulation", 1, &physical_bone_simulator3d_class_physical_bones_start_simulation),
	JS_CFUNC_DEF("physical_bones_add_collision_exception", 1, &physical_bone_simulator3d_class_physical_bones_add_collision_exception),
	JS_CFUNC_DEF("physical_bones_remove_collision_exception", 1, &physical_bone_simulator3d_class_physical_bones_remove_collision_exception),
};

static int js_physical_bone_simulator3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicalBoneSimulator3D::__class_id);
	classes["PhysicalBoneSimulator3D"] = PhysicalBoneSimulator3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicalBoneSimulator3D::__class_id, &physical_bone_simulator3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModifier3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicalBoneSimulator3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physical_bone_simulator3d_class_proto_funcs, _countof(physical_bone_simulator3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physical_bone_simulator3d_class_constructor, "PhysicalBoneSimulator3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicalBoneSimulator3D", ctor);

	return 0;
}

JSModuleDef *_js_init_physical_bone_simulator3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physical_bone_simulator3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicalBoneSimulator3D");
	return m;
}

JSModuleDef *js_init_physical_bone_simulator3d_module(JSContext *ctx) {
	return _js_init_physical_bone_simulator3d_module(ctx, "godot/classes/physical_bone_simulator3d");
}

void register_physical_bone_simulator3d() {
	js_init_physical_bone_simulator3d_module(ctx);
}