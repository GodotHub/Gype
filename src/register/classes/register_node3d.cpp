
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node3d_gizmo.hpp>
#include <godot_cpp/classes/node3d_gizmo.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/world3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void node3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Node3D *node3d = static_cast<Node3D *>(JS_GetOpaque(val, Node3D::__class_id));
	if (node3d)
		Node3D::free(nullptr, node3d);
}

static JSClassDef node3d_class_def = {
	"Node3D",
	.finalizer = node3d_class_finalizer
};

static JSValue node3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Node3D *node3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Node3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	node3d_class = memnew(Node3D);
	if (!node3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, node3d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue node3d_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_transform, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_position, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_rotation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_rotation, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_rotation_degrees, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_rotation_degrees, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_rotation_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_rotation_order, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_rotation_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_rotation_order, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_rotation_edit_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_rotation_edit_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_rotation_edit_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_rotation_edit_mode, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_scale, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_quaternion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_quaternion, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_quaternion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_quaternion, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_basis, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_basis, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_global_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_global_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_global_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_global_transform, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_global_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_global_position, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_global_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_global_basis, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_global_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_global_basis, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_global_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_global_rotation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_global_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_global_rotation, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_global_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_global_rotation_degrees, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_global_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_global_rotation_degrees, ctx, this_val, argc, argv);
};
static JSValue node3d_class_get_parent_node_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_parent_node_3d, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_ignore_transform_notification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_ignore_transform_notification, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_set_as_top_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_as_top_level, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_is_set_as_top_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::is_set_as_top_level, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_disable_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_disable_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_is_scale_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::is_scale_disabled, ctx, this_val, argc, argv);
};
static JSValue node3d_class_get_world_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_world_3d, ctx, this_val, argc, argv);
};
static JSValue node3d_class_force_update_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::force_update_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_set_visibility_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_visibility_parent, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_visibility_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_visibility_parent, ctx, this_val, argc, argv);
};
static JSValue node3d_class_update_gizmos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::update_gizmos, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_add_gizmo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::add_gizmo, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_get_gizmos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::get_gizmos, ctx, this_val, argc, argv);
};
static JSValue node3d_class_clear_gizmos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::clear_gizmos, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_set_subgizmo_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_subgizmo_selection, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_clear_subgizmo_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::clear_subgizmo_selection, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_set_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::is_visible, ctx, this_val, argc, argv);
};
static JSValue node3d_class_is_visible_in_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::is_visible_in_tree, ctx, this_val, argc, argv);
};
static JSValue node3d_class_show(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::show, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_hide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::hide, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_set_notify_local_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_notify_local_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_is_local_transform_notification_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::is_local_transform_notification_enabled, ctx, this_val, argc, argv);
};
static JSValue node3d_class_set_notify_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_notify_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_is_transform_notification_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::is_transform_notification_enabled, ctx, this_val, argc, argv);
};
static JSValue node3d_class_rotate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::rotate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_global_rotate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::global_rotate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_global_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::global_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_global_translate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::global_translate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_rotate_object_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::rotate_object_local, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_scale_object_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::scale_object_local, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_translate_object_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::translate_object_local, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_rotate_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::rotate_x, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_rotate_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::rotate_y, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_rotate_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::rotate_z, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_translate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::translate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_orthonormalize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::orthonormalize, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_set_identity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::set_identity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_look_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::look_at, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_look_at_from_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Node3D::look_at_from_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue node3d_class_to_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::to_local, ctx, this_val, argc, argv);
};
static JSValue node3d_class_to_global(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node3D::to_global, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry node3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_transform", 1, &node3d_class_set_transform),
	JS_CFUNC_DEF("get_transform", 0, &node3d_class_get_transform),
	JS_CFUNC_DEF("set_position", 1, &node3d_class_set_position),
	JS_CFUNC_DEF("get_position", 0, &node3d_class_get_position),
	JS_CFUNC_DEF("set_rotation", 1, &node3d_class_set_rotation),
	JS_CFUNC_DEF("get_rotation", 0, &node3d_class_get_rotation),
	JS_CFUNC_DEF("set_rotation_degrees", 1, &node3d_class_set_rotation_degrees),
	JS_CFUNC_DEF("get_rotation_degrees", 0, &node3d_class_get_rotation_degrees),
	JS_CFUNC_DEF("set_rotation_order", 1, &node3d_class_set_rotation_order),
	JS_CFUNC_DEF("get_rotation_order", 0, &node3d_class_get_rotation_order),
	JS_CFUNC_DEF("set_rotation_edit_mode", 1, &node3d_class_set_rotation_edit_mode),
	JS_CFUNC_DEF("get_rotation_edit_mode", 0, &node3d_class_get_rotation_edit_mode),
	JS_CFUNC_DEF("set_scale", 1, &node3d_class_set_scale),
	JS_CFUNC_DEF("get_scale", 0, &node3d_class_get_scale),
	JS_CFUNC_DEF("set_quaternion", 1, &node3d_class_set_quaternion),
	JS_CFUNC_DEF("get_quaternion", 0, &node3d_class_get_quaternion),
	JS_CFUNC_DEF("set_basis", 1, &node3d_class_set_basis),
	JS_CFUNC_DEF("get_basis", 0, &node3d_class_get_basis),
	JS_CFUNC_DEF("set_global_transform", 1, &node3d_class_set_global_transform),
	JS_CFUNC_DEF("get_global_transform", 0, &node3d_class_get_global_transform),
	JS_CFUNC_DEF("set_global_position", 1, &node3d_class_set_global_position),
	JS_CFUNC_DEF("get_global_position", 0, &node3d_class_get_global_position),
	JS_CFUNC_DEF("set_global_basis", 1, &node3d_class_set_global_basis),
	JS_CFUNC_DEF("get_global_basis", 0, &node3d_class_get_global_basis),
	JS_CFUNC_DEF("set_global_rotation", 1, &node3d_class_set_global_rotation),
	JS_CFUNC_DEF("get_global_rotation", 0, &node3d_class_get_global_rotation),
	JS_CFUNC_DEF("set_global_rotation_degrees", 1, &node3d_class_set_global_rotation_degrees),
	JS_CFUNC_DEF("get_global_rotation_degrees", 0, &node3d_class_get_global_rotation_degrees),
	JS_CFUNC_DEF("get_parent_node_3d", 0, &node3d_class_get_parent_node_3d),
	JS_CFUNC_DEF("set_ignore_transform_notification", 1, &node3d_class_set_ignore_transform_notification),
	JS_CFUNC_DEF("set_as_top_level", 1, &node3d_class_set_as_top_level),
	JS_CFUNC_DEF("is_set_as_top_level", 0, &node3d_class_is_set_as_top_level),
	JS_CFUNC_DEF("set_disable_scale", 1, &node3d_class_set_disable_scale),
	JS_CFUNC_DEF("is_scale_disabled", 0, &node3d_class_is_scale_disabled),
	JS_CFUNC_DEF("get_world_3d", 0, &node3d_class_get_world_3d),
	JS_CFUNC_DEF("force_update_transform", 0, &node3d_class_force_update_transform),
	JS_CFUNC_DEF("set_visibility_parent", 1, &node3d_class_set_visibility_parent),
	JS_CFUNC_DEF("get_visibility_parent", 0, &node3d_class_get_visibility_parent),
	JS_CFUNC_DEF("update_gizmos", 0, &node3d_class_update_gizmos),
	JS_CFUNC_DEF("add_gizmo", 1, &node3d_class_add_gizmo),
	JS_CFUNC_DEF("get_gizmos", 0, &node3d_class_get_gizmos),
	JS_CFUNC_DEF("clear_gizmos", 0, &node3d_class_clear_gizmos),
	JS_CFUNC_DEF("set_subgizmo_selection", 3, &node3d_class_set_subgizmo_selection),
	JS_CFUNC_DEF("clear_subgizmo_selection", 0, &node3d_class_clear_subgizmo_selection),
	JS_CFUNC_DEF("set_visible", 1, &node3d_class_set_visible),
	JS_CFUNC_DEF("is_visible", 0, &node3d_class_is_visible),
	JS_CFUNC_DEF("is_visible_in_tree", 0, &node3d_class_is_visible_in_tree),
	JS_CFUNC_DEF("show", 0, &node3d_class_show),
	JS_CFUNC_DEF("hide", 0, &node3d_class_hide),
	JS_CFUNC_DEF("set_notify_local_transform", 1, &node3d_class_set_notify_local_transform),
	JS_CFUNC_DEF("is_local_transform_notification_enabled", 0, &node3d_class_is_local_transform_notification_enabled),
	JS_CFUNC_DEF("set_notify_transform", 1, &node3d_class_set_notify_transform),
	JS_CFUNC_DEF("is_transform_notification_enabled", 0, &node3d_class_is_transform_notification_enabled),
	JS_CFUNC_DEF("rotate", 2, &node3d_class_rotate),
	JS_CFUNC_DEF("global_rotate", 2, &node3d_class_global_rotate),
	JS_CFUNC_DEF("global_scale", 1, &node3d_class_global_scale),
	JS_CFUNC_DEF("global_translate", 1, &node3d_class_global_translate),
	JS_CFUNC_DEF("rotate_object_local", 2, &node3d_class_rotate_object_local),
	JS_CFUNC_DEF("scale_object_local", 1, &node3d_class_scale_object_local),
	JS_CFUNC_DEF("translate_object_local", 1, &node3d_class_translate_object_local),
	JS_CFUNC_DEF("rotate_x", 1, &node3d_class_rotate_x),
	JS_CFUNC_DEF("rotate_y", 1, &node3d_class_rotate_y),
	JS_CFUNC_DEF("rotate_z", 1, &node3d_class_rotate_z),
	JS_CFUNC_DEF("translate", 1, &node3d_class_translate),
	JS_CFUNC_DEF("orthonormalize", 0, &node3d_class_orthonormalize),
	JS_CFUNC_DEF("set_identity", 0, &node3d_class_set_identity),
	JS_CFUNC_DEF("look_at", 3, &node3d_class_look_at),
	JS_CFUNC_DEF("look_at_from_position", 4, &node3d_class_look_at_from_position),
	JS_CFUNC_DEF("to_local", 1, &node3d_class_to_local),
	JS_CFUNC_DEF("to_global", 1, &node3d_class_to_global),
};

void define_node3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "transform"),
        JS_NewCFunction(ctx, node3d_class_get_transform, "get_transform", 0),
        JS_NewCFunction(ctx, node3d_class_set_transform, "set_transform", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "global_transform"),
        JS_NewCFunction(ctx, node3d_class_get_global_transform, "get_global_transform", 0),
        JS_NewCFunction(ctx, node3d_class_set_global_transform, "set_global_transform", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "position"),
        JS_NewCFunction(ctx, node3d_class_get_position, "get_position", 0),
        JS_NewCFunction(ctx, node3d_class_set_position, "set_position", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rotation"),
        JS_NewCFunction(ctx, node3d_class_get_rotation, "get_rotation", 0),
        JS_NewCFunction(ctx, node3d_class_set_rotation, "set_rotation", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rotation_degrees"),
        JS_NewCFunction(ctx, node3d_class_get_rotation_degrees, "get_rotation_degrees", 0),
        JS_NewCFunction(ctx, node3d_class_set_rotation_degrees, "set_rotation_degrees", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "quaternion"),
        JS_NewCFunction(ctx, node3d_class_get_quaternion, "get_quaternion", 0),
        JS_NewCFunction(ctx, node3d_class_set_quaternion, "set_quaternion", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "basis"),
        JS_NewCFunction(ctx, node3d_class_get_basis, "get_basis", 0),
        JS_NewCFunction(ctx, node3d_class_set_basis, "set_basis", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale"),
        JS_NewCFunction(ctx, node3d_class_get_scale, "get_scale", 0),
        JS_NewCFunction(ctx, node3d_class_set_scale, "set_scale", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rotation_edit_mode"),
        JS_NewCFunction(ctx, node3d_class_get_rotation_edit_mode, "get_rotation_edit_mode", 0),
        JS_NewCFunction(ctx, node3d_class_set_rotation_edit_mode, "set_rotation_edit_mode", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rotation_order"),
        JS_NewCFunction(ctx, node3d_class_get_rotation_order, "get_rotation_order", 0),
        JS_NewCFunction(ctx, node3d_class_set_rotation_order, "set_rotation_order", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "top_level"),
        JS_NewCFunction(ctx, node3d_class_is_set_as_top_level, "is_set_as_top_level", 0),
        JS_NewCFunction(ctx, node3d_class_set_as_top_level, "set_as_top_level", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "global_position"),
        JS_NewCFunction(ctx, node3d_class_get_global_position, "get_global_position", 0),
        JS_NewCFunction(ctx, node3d_class_set_global_position, "set_global_position", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "global_basis"),
        JS_NewCFunction(ctx, node3d_class_get_global_basis, "get_global_basis", 0),
        JS_NewCFunction(ctx, node3d_class_set_global_basis, "set_global_basis", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "global_rotation"),
        JS_NewCFunction(ctx, node3d_class_get_global_rotation, "get_global_rotation", 0),
        JS_NewCFunction(ctx, node3d_class_set_global_rotation, "set_global_rotation", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "global_rotation_degrees"),
        JS_NewCFunction(ctx, node3d_class_get_global_rotation_degrees, "get_global_rotation_degrees", 0),
        JS_NewCFunction(ctx, node3d_class_set_global_rotation_degrees, "set_global_rotation_degrees", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visible"),
        JS_NewCFunction(ctx, node3d_class_is_visible, "is_visible", 0),
        JS_NewCFunction(ctx, node3d_class_set_visible, "set_visible", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visibility_parent"),
        JS_NewCFunction(ctx, node3d_class_get_visibility_parent, "get_visibility_parent", 0),
        JS_NewCFunction(ctx, node3d_class_set_visibility_parent, "set_visibility_parent", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_node3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Node3D::__class_id);
	classes["Node3D"] = Node3D::__class_id;
	class_id_list.insert(Node3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Node3D::__class_id, &node3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Node3D::__class_id, proto);
	define_node3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, node3d_class_proto_funcs, _countof(node3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, node3d_class_constructor, "Node3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Node3D", ctor);

	return 0;
}

JSModuleDef *_js_init_node3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_node3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Node3D");
	return m;
}

JSModuleDef *js_init_node3d_module(JSContext *ctx) {
	return _js_init_node3d_module(ctx, "godot/classes/node3d");
}

void register_node3d() {
	Node3D::__init_js_class_id();
	js_init_node3d_module(ctx);
}