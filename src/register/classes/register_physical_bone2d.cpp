
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/physical_bone2d.hpp>
#include <godot_cpp/classes/rigid_body2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physical_bone2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicalBone2D *physical_bone2d = static_cast<PhysicalBone2D *>(JS_GetOpaque(val, PhysicalBone2D::__class_id));
	if (physical_bone2d)
		PhysicalBone2D::free(nullptr, physical_bone2d);
}

static JSClassDef physical_bone2d_class_def = {
	"PhysicalBone2D",
	.finalizer = physical_bone2d_class_finalizer
};

static JSValue physical_bone2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicalBone2D *physical_bone2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicalBone2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physical_bone2d_class = memnew(PhysicalBone2D);
	if (!physical_bone2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physical_bone2d_class);
	return obj;
}
static JSValue physical_bone2d_class_get_joint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone2D::get_joint, PhysicalBone2D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone2d_class_get_auto_configure_joint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone2D::get_auto_configure_joint, PhysicalBone2D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone2d_class_set_auto_configure_joint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicalBone2D::set_auto_configure_joint, PhysicalBone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone2d_class_set_simulate_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicalBone2D::set_simulate_physics, PhysicalBone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone2d_class_get_simulate_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone2D::get_simulate_physics, PhysicalBone2D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone2d_class_is_simulating_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone2D::is_simulating_physics, PhysicalBone2D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone2d_class_set_bone2d_nodepath(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicalBone2D::set_bone2d_nodepath, PhysicalBone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone2d_class_get_bone2d_nodepath(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone2D::get_bone2d_nodepath, PhysicalBone2D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone2d_class_set_bone2d_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicalBone2D::set_bone2d_index, PhysicalBone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone2d_class_get_bone2d_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone2D::get_bone2d_index, PhysicalBone2D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone2d_class_set_follow_bone_when_simulating(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicalBone2D::set_follow_bone_when_simulating, PhysicalBone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone2d_class_get_follow_bone_when_simulating(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone2D::get_follow_bone_when_simulating, PhysicalBone2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physical_bone2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_joint", 0, &physical_bone2d_class_get_joint),
	JS_CFUNC_DEF("get_auto_configure_joint", 0, &physical_bone2d_class_get_auto_configure_joint),
	JS_CFUNC_DEF("set_auto_configure_joint", 1, &physical_bone2d_class_set_auto_configure_joint),
	JS_CFUNC_DEF("set_simulate_physics", 1, &physical_bone2d_class_set_simulate_physics),
	JS_CFUNC_DEF("get_simulate_physics", 0, &physical_bone2d_class_get_simulate_physics),
	JS_CFUNC_DEF("is_simulating_physics", 0, &physical_bone2d_class_is_simulating_physics),
	JS_CFUNC_DEF("set_bone2d_nodepath", 1, &physical_bone2d_class_set_bone2d_nodepath),
	JS_CFUNC_DEF("get_bone2d_nodepath", 0, &physical_bone2d_class_get_bone2d_nodepath),
	JS_CFUNC_DEF("set_bone2d_index", 1, &physical_bone2d_class_set_bone2d_index),
	JS_CFUNC_DEF("get_bone2d_index", 0, &physical_bone2d_class_get_bone2d_index),
	JS_CFUNC_DEF("set_follow_bone_when_simulating", 1, &physical_bone2d_class_set_follow_bone_when_simulating),
	JS_CFUNC_DEF("get_follow_bone_when_simulating", 0, &physical_bone2d_class_get_follow_bone_when_simulating),
};

static int js_physical_bone2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicalBone2D::__class_id);
	classes["PhysicalBone2D"] = PhysicalBone2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicalBone2D::__class_id, &physical_bone2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RigidBody2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicalBone2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physical_bone2d_class_proto_funcs, _countof(physical_bone2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physical_bone2d_class_constructor, "PhysicalBone2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicalBone2D", ctor);

	return 0;
}

JSModuleDef *_js_init_physical_bone2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physical_bone2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicalBone2D");
	return m;
}

JSModuleDef *js_init_physical_bone2d_module(JSContext *ctx) {
	return _js_init_physical_bone2d_module(ctx, "godot/classes/physical_bone2d");
}

void register_physical_bone2d() {
	js_init_physical_bone2d_module(ctx);
}