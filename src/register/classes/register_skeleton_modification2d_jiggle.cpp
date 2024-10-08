
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d_jiggle.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification2d_jiggle_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModification2DJiggle *skeleton_modification2d_jiggle = static_cast<SkeletonModification2DJiggle *>(JS_GetOpaque(val, SkeletonModification2DJiggle::__class_id));
	if (skeleton_modification2d_jiggle)
		SkeletonModification2DJiggle::free(nullptr, skeleton_modification2d_jiggle);
}

static JSClassDef skeleton_modification2d_jiggle_class_def = {
	"SkeletonModification2DJiggle",
	.finalizer = skeleton_modification2d_jiggle_class_finalizer
};

static JSValue skeleton_modification2d_jiggle_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonModification2DJiggle *skeleton_modification2d_jiggle_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonModification2DJiggle::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_modification2d_jiggle_class = memnew(SkeletonModification2DJiggle);
	if (!skeleton_modification2d_jiggle_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_modification2d_jiggle_class);
	return obj;
}
static JSValue skeleton_modification2d_jiggle_class_set_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_target_node, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_target_node, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_jiggle_data_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_jiggle_data_chain_length, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_jiggle_data_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonModification2DJiggle::get_jiggle_data_chain_length, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_stiffness, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_stiffness, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_mass, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_mass, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_damping, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_damping, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_use_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_use_gravity, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_use_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_use_gravity, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_gravity, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_gravity, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_use_colliders(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_use_colliders, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_use_colliders(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_use_colliders, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_collision_mask, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_collision_mask, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_jiggle_joint_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_jiggle_joint_bone2d_node, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_jiggle_joint_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_jiggle_joint_bone2d_node, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_jiggle_joint_bone_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_jiggle_joint_bone_index, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_jiggle_joint_bone_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_jiggle_joint_bone_index, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_jiggle_joint_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_jiggle_joint_override, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_jiggle_joint_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_jiggle_joint_override, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_jiggle_joint_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_jiggle_joint_stiffness, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_jiggle_joint_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_jiggle_joint_stiffness, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_jiggle_joint_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_jiggle_joint_mass, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_jiggle_joint_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_jiggle_joint_mass, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_jiggle_joint_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_jiggle_joint_damping, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_jiggle_joint_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_jiggle_joint_damping, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_jiggle_joint_use_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_jiggle_joint_use_gravity, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_jiggle_joint_use_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_jiggle_joint_use_gravity, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_jiggle_class_set_jiggle_joint_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DJiggle::set_jiggle_joint_gravity, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_jiggle_class_get_jiggle_joint_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DJiggle::get_jiggle_joint_gravity, SkeletonModification2DJiggle::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry skeleton_modification2d_jiggle_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_target_node", 1, &skeleton_modification2d_jiggle_class_set_target_node),
	JS_CFUNC_DEF("get_target_node", 0, &skeleton_modification2d_jiggle_class_get_target_node),
	JS_CFUNC_DEF("set_jiggle_data_chain_length", 1, &skeleton_modification2d_jiggle_class_set_jiggle_data_chain_length),
	JS_CFUNC_DEF("get_jiggle_data_chain_length", 0, &skeleton_modification2d_jiggle_class_get_jiggle_data_chain_length),
	JS_CFUNC_DEF("set_stiffness", 1, &skeleton_modification2d_jiggle_class_set_stiffness),
	JS_CFUNC_DEF("get_stiffness", 0, &skeleton_modification2d_jiggle_class_get_stiffness),
	JS_CFUNC_DEF("set_mass", 1, &skeleton_modification2d_jiggle_class_set_mass),
	JS_CFUNC_DEF("get_mass", 0, &skeleton_modification2d_jiggle_class_get_mass),
	JS_CFUNC_DEF("set_damping", 1, &skeleton_modification2d_jiggle_class_set_damping),
	JS_CFUNC_DEF("get_damping", 0, &skeleton_modification2d_jiggle_class_get_damping),
	JS_CFUNC_DEF("set_use_gravity", 1, &skeleton_modification2d_jiggle_class_set_use_gravity),
	JS_CFUNC_DEF("get_use_gravity", 0, &skeleton_modification2d_jiggle_class_get_use_gravity),
	JS_CFUNC_DEF("set_gravity", 1, &skeleton_modification2d_jiggle_class_set_gravity),
	JS_CFUNC_DEF("get_gravity", 0, &skeleton_modification2d_jiggle_class_get_gravity),
	JS_CFUNC_DEF("set_use_colliders", 1, &skeleton_modification2d_jiggle_class_set_use_colliders),
	JS_CFUNC_DEF("get_use_colliders", 0, &skeleton_modification2d_jiggle_class_get_use_colliders),
	JS_CFUNC_DEF("set_collision_mask", 1, &skeleton_modification2d_jiggle_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &skeleton_modification2d_jiggle_class_get_collision_mask),
	JS_CFUNC_DEF("set_jiggle_joint_bone2d_node", 2, &skeleton_modification2d_jiggle_class_set_jiggle_joint_bone2d_node),
	JS_CFUNC_DEF("get_jiggle_joint_bone2d_node", 1, &skeleton_modification2d_jiggle_class_get_jiggle_joint_bone2d_node),
	JS_CFUNC_DEF("set_jiggle_joint_bone_index", 2, &skeleton_modification2d_jiggle_class_set_jiggle_joint_bone_index),
	JS_CFUNC_DEF("get_jiggle_joint_bone_index", 1, &skeleton_modification2d_jiggle_class_get_jiggle_joint_bone_index),
	JS_CFUNC_DEF("set_jiggle_joint_override", 2, &skeleton_modification2d_jiggle_class_set_jiggle_joint_override),
	JS_CFUNC_DEF("get_jiggle_joint_override", 1, &skeleton_modification2d_jiggle_class_get_jiggle_joint_override),
	JS_CFUNC_DEF("set_jiggle_joint_stiffness", 2, &skeleton_modification2d_jiggle_class_set_jiggle_joint_stiffness),
	JS_CFUNC_DEF("get_jiggle_joint_stiffness", 1, &skeleton_modification2d_jiggle_class_get_jiggle_joint_stiffness),
	JS_CFUNC_DEF("set_jiggle_joint_mass", 2, &skeleton_modification2d_jiggle_class_set_jiggle_joint_mass),
	JS_CFUNC_DEF("get_jiggle_joint_mass", 1, &skeleton_modification2d_jiggle_class_get_jiggle_joint_mass),
	JS_CFUNC_DEF("set_jiggle_joint_damping", 2, &skeleton_modification2d_jiggle_class_set_jiggle_joint_damping),
	JS_CFUNC_DEF("get_jiggle_joint_damping", 1, &skeleton_modification2d_jiggle_class_get_jiggle_joint_damping),
	JS_CFUNC_DEF("set_jiggle_joint_use_gravity", 2, &skeleton_modification2d_jiggle_class_set_jiggle_joint_use_gravity),
	JS_CFUNC_DEF("get_jiggle_joint_use_gravity", 1, &skeleton_modification2d_jiggle_class_get_jiggle_joint_use_gravity),
	JS_CFUNC_DEF("set_jiggle_joint_gravity", 2, &skeleton_modification2d_jiggle_class_set_jiggle_joint_gravity),
	JS_CFUNC_DEF("get_jiggle_joint_gravity", 1, &skeleton_modification2d_jiggle_class_get_jiggle_joint_gravity),
};

static int js_skeleton_modification2d_jiggle_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonModification2DJiggle::__class_id);
	classes["SkeletonModification2DJiggle"] = SkeletonModification2DJiggle::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2DJiggle::__class_id, &skeleton_modification2d_jiggle_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModification2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2DJiggle::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2d_jiggle_class_proto_funcs, _countof(skeleton_modification2d_jiggle_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2d_jiggle_class_constructor, "SkeletonModification2DJiggle", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonModification2DJiggle", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2d_jiggle_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2d_jiggle_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2DJiggle");
	return m;
}

JSModuleDef *js_init_skeleton_modification2d_jiggle_module(JSContext *ctx) {
	return _js_init_skeleton_modification2d_jiggle_module(ctx, "godot/classes/skeleton_modification2d_jiggle");
}

void register_skeleton_modification2d_jiggle() {
	js_init_skeleton_modification2d_jiggle_module(ctx);
}