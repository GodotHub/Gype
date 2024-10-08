
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skeleton3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Skeleton3D *skeleton3d = static_cast<Skeleton3D *>(JS_GetOpaque(val, Skeleton3D::__class_id));
	if (skeleton3d)
		Skeleton3D::free(nullptr, skeleton3d);
}

static JSClassDef skeleton3d_class_def = {
	"Skeleton3D",
	.finalizer = skeleton3d_class_finalizer
};

static JSValue skeleton3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Skeleton3D *skeleton3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Skeleton3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton3d_class = memnew(Skeleton3D);
	if (!skeleton3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton3d_class);
	return obj;
}
static JSValue skeleton3d_class_add_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Skeleton3D::add_bone, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_find_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::find_bone, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_get_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_name, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_set_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_name, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_concatenated_bone_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_concatenated_bone_names, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_get_bone_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_parent, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_set_bone_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_parent, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_bone_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_count, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_get_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_version, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_unparent_bone_and_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::unparent_bone_and_rest, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_bone_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_children, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_get_parentless_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_parentless_bones, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_get_bone_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_rest, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_set_bone_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_rest, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_bone_global_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_global_rest, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_create_skin_from_rest_transforms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Skeleton3D::create_skin_from_rest_transforms, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_register_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Skeleton3D::register_skin, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_localize_rests(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::localize_rests, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_clear_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::clear_bones, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_bone_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_pose, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_set_bone_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_pose, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_set_bone_pose_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_pose_position, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_set_bone_pose_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_pose_rotation, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_set_bone_pose_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_pose_scale, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_bone_pose_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_pose_position, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_get_bone_pose_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_pose_rotation, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_get_bone_pose_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_pose_scale, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_reset_bone_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::reset_bone_pose, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_reset_bone_poses(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::reset_bone_poses, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_is_bone_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::is_bone_enabled, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_set_bone_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_enabled, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_bone_global_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_global_pose, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_set_bone_global_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_global_pose, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_force_update_all_bone_transforms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::force_update_all_bone_transforms, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_force_update_bone_child_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::force_update_bone_child_transform, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_set_motion_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_motion_scale, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_motion_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_motion_scale, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_set_show_rest_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_show_rest_only, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_is_show_rest_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::is_show_rest_only, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_set_modifier_callback_mode_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_modifier_callback_mode_process, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_modifier_callback_mode_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_modifier_callback_mode_process, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_clear_bones_global_pose_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::clear_bones_global_pose_override, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_set_bone_global_pose_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_bone_global_pose_override, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_bone_global_pose_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_global_pose_override, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_get_bone_global_pose_no_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_bone_global_pose_no_override, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_set_animate_physical_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::set_animate_physical_bones, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_get_animate_physical_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton3D::get_animate_physical_bones, Skeleton3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton3d_class_physical_bones_stop_simulation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::physical_bones_stop_simulation, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_physical_bones_start_simulation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::physical_bones_start_simulation, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_physical_bones_add_collision_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::physical_bones_add_collision_exception, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton3d_class_physical_bones_remove_collision_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton3D::physical_bones_remove_collision_exception, Skeleton3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry skeleton3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_bone", 1, &skeleton3d_class_add_bone),
	JS_CFUNC_DEF("find_bone", 1, &skeleton3d_class_find_bone),
	JS_CFUNC_DEF("get_bone_name", 1, &skeleton3d_class_get_bone_name),
	JS_CFUNC_DEF("set_bone_name", 2, &skeleton3d_class_set_bone_name),
	JS_CFUNC_DEF("get_concatenated_bone_names", 0, &skeleton3d_class_get_concatenated_bone_names),
	JS_CFUNC_DEF("get_bone_parent", 1, &skeleton3d_class_get_bone_parent),
	JS_CFUNC_DEF("set_bone_parent", 2, &skeleton3d_class_set_bone_parent),
	JS_CFUNC_DEF("get_bone_count", 0, &skeleton3d_class_get_bone_count),
	JS_CFUNC_DEF("get_version", 0, &skeleton3d_class_get_version),
	JS_CFUNC_DEF("unparent_bone_and_rest", 1, &skeleton3d_class_unparent_bone_and_rest),
	JS_CFUNC_DEF("get_bone_children", 1, &skeleton3d_class_get_bone_children),
	JS_CFUNC_DEF("get_parentless_bones", 0, &skeleton3d_class_get_parentless_bones),
	JS_CFUNC_DEF("get_bone_rest", 1, &skeleton3d_class_get_bone_rest),
	JS_CFUNC_DEF("set_bone_rest", 2, &skeleton3d_class_set_bone_rest),
	JS_CFUNC_DEF("get_bone_global_rest", 1, &skeleton3d_class_get_bone_global_rest),
	JS_CFUNC_DEF("create_skin_from_rest_transforms", 0, &skeleton3d_class_create_skin_from_rest_transforms),
	JS_CFUNC_DEF("register_skin", 1, &skeleton3d_class_register_skin),
	JS_CFUNC_DEF("localize_rests", 0, &skeleton3d_class_localize_rests),
	JS_CFUNC_DEF("clear_bones", 0, &skeleton3d_class_clear_bones),
	JS_CFUNC_DEF("get_bone_pose", 1, &skeleton3d_class_get_bone_pose),
	JS_CFUNC_DEF("set_bone_pose", 2, &skeleton3d_class_set_bone_pose),
	JS_CFUNC_DEF("set_bone_pose_position", 2, &skeleton3d_class_set_bone_pose_position),
	JS_CFUNC_DEF("set_bone_pose_rotation", 2, &skeleton3d_class_set_bone_pose_rotation),
	JS_CFUNC_DEF("set_bone_pose_scale", 2, &skeleton3d_class_set_bone_pose_scale),
	JS_CFUNC_DEF("get_bone_pose_position", 1, &skeleton3d_class_get_bone_pose_position),
	JS_CFUNC_DEF("get_bone_pose_rotation", 1, &skeleton3d_class_get_bone_pose_rotation),
	JS_CFUNC_DEF("get_bone_pose_scale", 1, &skeleton3d_class_get_bone_pose_scale),
	JS_CFUNC_DEF("reset_bone_pose", 1, &skeleton3d_class_reset_bone_pose),
	JS_CFUNC_DEF("reset_bone_poses", 0, &skeleton3d_class_reset_bone_poses),
	JS_CFUNC_DEF("is_bone_enabled", 1, &skeleton3d_class_is_bone_enabled),
	JS_CFUNC_DEF("set_bone_enabled", 2, &skeleton3d_class_set_bone_enabled),
	JS_CFUNC_DEF("get_bone_global_pose", 1, &skeleton3d_class_get_bone_global_pose),
	JS_CFUNC_DEF("set_bone_global_pose", 2, &skeleton3d_class_set_bone_global_pose),
	JS_CFUNC_DEF("force_update_all_bone_transforms", 0, &skeleton3d_class_force_update_all_bone_transforms),
	JS_CFUNC_DEF("force_update_bone_child_transform", 1, &skeleton3d_class_force_update_bone_child_transform),
	JS_CFUNC_DEF("set_motion_scale", 1, &skeleton3d_class_set_motion_scale),
	JS_CFUNC_DEF("get_motion_scale", 0, &skeleton3d_class_get_motion_scale),
	JS_CFUNC_DEF("set_show_rest_only", 1, &skeleton3d_class_set_show_rest_only),
	JS_CFUNC_DEF("is_show_rest_only", 0, &skeleton3d_class_is_show_rest_only),
	JS_CFUNC_DEF("set_modifier_callback_mode_process", 1, &skeleton3d_class_set_modifier_callback_mode_process),
	JS_CFUNC_DEF("get_modifier_callback_mode_process", 0, &skeleton3d_class_get_modifier_callback_mode_process),
	JS_CFUNC_DEF("clear_bones_global_pose_override", 0, &skeleton3d_class_clear_bones_global_pose_override),
	JS_CFUNC_DEF("set_bone_global_pose_override", 4, &skeleton3d_class_set_bone_global_pose_override),
	JS_CFUNC_DEF("get_bone_global_pose_override", 1, &skeleton3d_class_get_bone_global_pose_override),
	JS_CFUNC_DEF("get_bone_global_pose_no_override", 1, &skeleton3d_class_get_bone_global_pose_no_override),
	JS_CFUNC_DEF("set_animate_physical_bones", 1, &skeleton3d_class_set_animate_physical_bones),
	JS_CFUNC_DEF("get_animate_physical_bones", 0, &skeleton3d_class_get_animate_physical_bones),
	JS_CFUNC_DEF("physical_bones_stop_simulation", 0, &skeleton3d_class_physical_bones_stop_simulation),
	JS_CFUNC_DEF("physical_bones_start_simulation", 1, &skeleton3d_class_physical_bones_start_simulation),
	JS_CFUNC_DEF("physical_bones_add_collision_exception", 1, &skeleton3d_class_physical_bones_add_collision_exception),
	JS_CFUNC_DEF("physical_bones_remove_collision_exception", 1, &skeleton3d_class_physical_bones_remove_collision_exception),
};

static int js_skeleton3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Skeleton3D::__class_id);
	classes["Skeleton3D"] = Skeleton3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Skeleton3D::__class_id, &skeleton3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Skeleton3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton3d_class_proto_funcs, _countof(skeleton3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton3d_class_constructor, "Skeleton3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Skeleton3D", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Skeleton3D");
	return m;
}

JSModuleDef *js_init_skeleton3d_module(JSContext *ctx) {
	return _js_init_skeleton3d_module(ctx, "godot/classes/skeleton3d");
}

void register_skeleton3d() {
	js_init_skeleton3d_module(ctx);
}