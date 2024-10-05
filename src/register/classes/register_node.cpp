#include "register/classes/register_node.h"
#include "quickjs/quickjs.h"
#include "utils/env.h"
#include "utils/str_helper.h"
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

namespace godot {
class JavaScriptDB;
}

static JSClassID node_class_id;

static void node_class_finalizer(JSRuntime *rt, JSValue val) {
	Node *node = static_cast<Node *>(JS_GetOpaque(val, node_class_id));
	if (node)
		Node::free(nullptr, node);
}

static JSClassDef node_class_def = {
	"Node",
	.finalizer = node_class_finalizer
};

static JSValue node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Node *node_class;
	JSValue obj = JS_NewObjectClass(ctx, node_class_id);
	if (JS_IsException(obj))
		return obj;

	node_class = memnew(Node);
	JavaScriptDB::get_singleton()->add_instance(node_class, obj);
	if (!node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, node_class);
	return obj;
}
static JSValue node_class_add_sibling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::add_sibling, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_name, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_name, node_class_id, this_val, argv);
};
static JSValue node_class_add_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::add_child, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_remove_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::remove_child, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_reparent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::reparent, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_child_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_child_count, node_class_id, this_val, argv);
};
static JSValue node_class_get_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_children, node_class_id, this_val, argv);
};
static JSValue node_class_get_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_child, node_class_id, this_val, argv);
};
static JSValue node_class_has_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::has_node, node_class_id, this_val, argv);
};
static JSValue node_class_get_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_node, node_class_id, this_val, argv);
};
static JSValue node_class_get_node_or_null(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_node_or_null, node_class_id, this_val, argv);
};
static JSValue node_class_get_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_parent, node_class_id, this_val, argv);
};
static JSValue node_class_find_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::find_child, node_class_id, this_val, argv);
};
static JSValue node_class_find_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::find_children, node_class_id, this_val, argv);
};
static JSValue node_class_find_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::find_parent, node_class_id, this_val, argv);
};
static JSValue node_class_has_node_and_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::has_node_and_resource, node_class_id, this_val, argv);
};
static JSValue node_class_get_node_and_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_node_and_resource, node_class_id, this_val, argv);
};
static JSValue node_class_is_inside_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_inside_tree, node_class_id, this_val, argv);
};
static JSValue node_class_is_part_of_edited_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_part_of_edited_scene, node_class_id, this_val, argv);
};
static JSValue node_class_is_ancestor_of(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_ancestor_of, node_class_id, this_val, argv);
};
static JSValue node_class_is_greater_than(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_greater_than, node_class_id, this_val, argv);
};
static JSValue node_class_get_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_path, node_class_id, this_val, argv);
};
static JSValue node_class_get_path_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_path_to, node_class_id, this_val, argv);
};
static JSValue node_class_add_to_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::add_to_group, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_remove_from_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::remove_from_group, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_in_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_in_group, node_class_id, this_val, argv);
};
static JSValue node_class_move_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::move_child, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_groups(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_groups, node_class_id, this_val, argv);
};
static JSValue node_class_set_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_owner, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_owner, node_class_id, this_val, argv);
};
static JSValue node_class_get_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_index, node_class_id, this_val, argv);
};
static JSValue node_class_print_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::print_tree, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_print_tree_pretty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::print_tree_pretty, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_tree_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_tree_string, node_class_id, this_val, argv);
};
static JSValue node_class_get_tree_string_pretty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_tree_string_pretty, node_class_id, this_val, argv);
};
static JSValue node_class_set_scene_file_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_scene_file_path, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_scene_file_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_scene_file_path, node_class_id, this_val, argv);
};
static JSValue node_class_propagate_notification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::propagate_notification, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_propagate_call(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::propagate_call, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_physics_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_physics_process, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_physics_process_delta_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_physics_process_delta_time, node_class_id, this_val, argv);
};
static JSValue node_class_is_physics_processing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_physics_processing, node_class_id, this_val, argv);
};
static JSValue node_class_get_process_delta_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_process_delta_time, node_class_id, this_val, argv);
};
static JSValue node_class_set_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_process_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_priority, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_process_priority, node_class_id, this_val, argv);
};
static JSValue node_class_set_physics_process_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_physics_process_priority, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_physics_process_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_physics_process_priority, node_class_id, this_val, argv);
};
static JSValue node_class_is_processing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_processing, node_class_id, this_val, argv);
};
static JSValue node_class_set_process_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_input, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_processing_input, node_class_id, this_val, argv);
};
static JSValue node_class_set_process_shortcut_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_shortcut_input, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_shortcut_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_processing_shortcut_input, node_class_id, this_val, argv);
};
static JSValue node_class_set_process_unhandled_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_unhandled_input, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_unhandled_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_processing_unhandled_input, node_class_id, this_val, argv);
};
static JSValue node_class_set_process_unhandled_key_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_unhandled_key_input, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_unhandled_key_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_processing_unhandled_key_input, node_class_id, this_val, argv);
};
static JSValue node_class_set_process_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_mode, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_process_mode, node_class_id, this_val, argv);
};
static JSValue node_class_can_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::can_process, node_class_id, this_val, argv);
};
static JSValue node_class_set_process_thread_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_thread_group, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_thread_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_process_thread_group, node_class_id, this_val, argv);
};
static JSValue node_class_set_process_thread_messages(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_thread_messages, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_thread_messages(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_process_thread_messages, node_class_id, this_val, argv);
};
static JSValue node_class_set_process_thread_group_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_thread_group_order, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_process_thread_group_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_process_thread_group_order, node_class_id, this_val, argv);
};
static JSValue node_class_set_display_folded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_display_folded, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_displayed_folded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_displayed_folded, node_class_id, this_val, argv);
};
static JSValue node_class_set_process_internal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_process_internal, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_processing_internal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_processing_internal, node_class_id, this_val, argv);
};
static JSValue node_class_set_physics_process_internal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_physics_process_internal, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_physics_processing_internal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_physics_processing_internal, node_class_id, this_val, argv);
};
static JSValue node_class_set_physics_interpolation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_physics_interpolation_mode, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_physics_interpolation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_physics_interpolation_mode, node_class_id, this_val, argv);
};
static JSValue node_class_is_physics_interpolated(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_physics_interpolated, node_class_id, this_val, argv);
};
static JSValue node_class_is_physics_interpolated_and_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_physics_interpolated_and_enabled, node_class_id, this_val, argv);
};
static JSValue node_class_reset_physics_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::reset_physics_interpolation, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_auto_translate_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_auto_translate_mode, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_auto_translate_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_auto_translate_mode, node_class_id, this_val, argv);
};
static JSValue node_class_get_window(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_window, node_class_id, this_val, argv);
};
static JSValue node_class_get_last_exclusive_window(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_last_exclusive_window, node_class_id, this_val, argv);
};
static JSValue node_class_get_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_tree, node_class_id, this_val, argv);
};
static JSValue node_class_create_tween(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::create_tween, node_class_id, this_val, argv);
};
static JSValue node_class_duplicate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::duplicate, node_class_id, this_val, argv);
};
static JSValue node_class_replace_by(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::replace_by, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_scene_instance_load_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_scene_instance_load_placeholder, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_scene_instance_load_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_scene_instance_load_placeholder, node_class_id, this_val, argv);
};
static JSValue node_class_set_editable_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_editable_instance, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_editable_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_editable_instance, node_class_id, this_val, argv);
};
static JSValue node_class_get_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_viewport, node_class_id, this_val, argv);
};
static JSValue node_class_queue_free(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::queue_free, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_request_ready(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::request_ready, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_node_ready(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_node_ready, node_class_id, this_val, argv);
};
static JSValue node_class_set_multiplayer_authority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_multiplayer_authority, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_multiplayer_authority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_multiplayer_authority, node_class_id, this_val, argv);
};
static JSValue node_class_is_multiplayer_authority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_multiplayer_authority, node_class_id, this_val, argv);
};
static JSValue node_class_get_multiplayer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_multiplayer, node_class_id, this_val, argv);
};
static JSValue node_class_rpc_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::rpc_config, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_editor_description(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_editor_description, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_get_editor_description(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::get_editor_description, node_class_id, this_val, argv);
};
static JSValue node_class_set_unique_name_in_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_unique_name_in_owner, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_is_unique_name_in_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::is_unique_name_in_owner, node_class_id, this_val, argv);
};
static JSValue node_class_atr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::atr, node_class_id, this_val, argv);
};
static JSValue node_class_atr_n(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Node::atr_n, node_class_id, this_val, argv);
};
static JSValue node_class_update_configuration_warnings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::update_configuration_warnings, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_deferred_thread_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_deferred_thread_group, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_notify_deferred_thread_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::notify_deferred_thread_group, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_set_thread_safe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::set_thread_safe, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node_class_notify_thread_safe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node::notify_thread_safe, node_class_id, this_val, argv);
	return JS_UNDEFINED;
};

static const JSCFunctionListEntry node_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_name", 0, &node_class_get_name),
};

static int js_node_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&node_class_id);
	classes["Node"] = node_class_id;
	JS_NewClass(JS_GetRuntime(ctx), node_class_id, &node_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetPropertyFunctionList(ctx, proto, node_class_proto_funcs, _countof(node_class_proto_funcs));
	JS_SetClassProto(ctx, node_class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, node_class_constructor, "Node", 0, JS_CFUNC_constructor, 0);
	// JS_SetPropertyFunctionList(ctx, ctor, my_class_static_funcs, _countof(my_class_static_funcs));

	JS_SetModuleExport(ctx, m, "Node", ctor);

	return 0;
}

JSModuleDef *js_init_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Node");
	return m;
}

JSModuleDef *js_init_node_module(JSContext *ctx) {
	return js_init_module(ctx, "godot/classes/node");
}

void register_node() {
	js_init_node_module(ctx);
}