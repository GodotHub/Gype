
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Node() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<Node>("Node")
			.constructor<>()
			.base<Object>()
			.static_fun<&Node::NOTIFICATION_ENTER_TREE>((new std::string("NOTIFICATION_ENTER_TREE"))->c_str())
			.static_fun<&Node::NOTIFICATION_EXIT_TREE>((new std::string("NOTIFICATION_EXIT_TREE"))->c_str())
			.static_fun<&Node::NOTIFICATION_MOVED_IN_PARENT>((new std::string("NOTIFICATION_MOVED_IN_PARENT"))->c_str())
			.static_fun<&Node::NOTIFICATION_READY>((new std::string("NOTIFICATION_READY"))->c_str())
			.static_fun<&Node::NOTIFICATION_PAUSED>((new std::string("NOTIFICATION_PAUSED"))->c_str())
			.static_fun<&Node::NOTIFICATION_UNPAUSED>((new std::string("NOTIFICATION_UNPAUSED"))->c_str())
			.static_fun<&Node::NOTIFICATION_PHYSICS_PROCESS>((new std::string("NOTIFICATION_PHYSICS_PROCESS"))->c_str())
			.static_fun<&Node::NOTIFICATION_PROCESS>((new std::string("NOTIFICATION_PROCESS"))->c_str())
			.static_fun<&Node::NOTIFICATION_PARENTED>((new std::string("NOTIFICATION_PARENTED"))->c_str())
			.static_fun<&Node::NOTIFICATION_UNPARENTED>((new std::string("NOTIFICATION_UNPARENTED"))->c_str())
			.static_fun<&Node::NOTIFICATION_SCENE_INSTANTIATED>((new std::string("NOTIFICATION_SCENE_INSTANTIATED"))->c_str())
			.static_fun<&Node::NOTIFICATION_DRAG_BEGIN>((new std::string("NOTIFICATION_DRAG_BEGIN"))->c_str())
			.static_fun<&Node::NOTIFICATION_DRAG_END>((new std::string("NOTIFICATION_DRAG_END"))->c_str())
			.static_fun<&Node::NOTIFICATION_PATH_RENAMED>((new std::string("NOTIFICATION_PATH_RENAMED"))->c_str())
			.static_fun<&Node::NOTIFICATION_CHILD_ORDER_CHANGED>((new std::string("NOTIFICATION_CHILD_ORDER_CHANGED"))->c_str())
			.static_fun<&Node::NOTIFICATION_INTERNAL_PROCESS>((new std::string("NOTIFICATION_INTERNAL_PROCESS"))->c_str())
			.static_fun<&Node::NOTIFICATION_INTERNAL_PHYSICS_PROCESS>((new std::string("NOTIFICATION_INTERNAL_PHYSICS_PROCESS"))->c_str())
			.static_fun<&Node::NOTIFICATION_POST_ENTER_TREE>((new std::string("NOTIFICATION_POST_ENTER_TREE"))->c_str())
			.static_fun<&Node::NOTIFICATION_DISABLED>((new std::string("NOTIFICATION_DISABLED"))->c_str())
			.static_fun<&Node::NOTIFICATION_ENABLED>((new std::string("NOTIFICATION_ENABLED"))->c_str())
			.static_fun<&Node::NOTIFICATION_RESET_PHYSICS_INTERPOLATION>((new std::string("NOTIFICATION_RESET_PHYSICS_INTERPOLATION"))->c_str())
			.static_fun<&Node::NOTIFICATION_EDITOR_PRE_SAVE>((new std::string("NOTIFICATION_EDITOR_PRE_SAVE"))->c_str())
			.static_fun<&Node::NOTIFICATION_EDITOR_POST_SAVE>((new std::string("NOTIFICATION_EDITOR_POST_SAVE"))->c_str())
			.static_fun<&Node::NOTIFICATION_WM_MOUSE_ENTER>((new std::string("NOTIFICATION_WM_MOUSE_ENTER"))->c_str())
			.static_fun<&Node::NOTIFICATION_WM_MOUSE_EXIT>((new std::string("NOTIFICATION_WM_MOUSE_EXIT"))->c_str())
			.static_fun<&Node::NOTIFICATION_WM_WINDOW_FOCUS_IN>((new std::string("NOTIFICATION_WM_WINDOW_FOCUS_IN"))->c_str())
			.static_fun<&Node::NOTIFICATION_WM_WINDOW_FOCUS_OUT>((new std::string("NOTIFICATION_WM_WINDOW_FOCUS_OUT"))->c_str())
			.static_fun<&Node::NOTIFICATION_WM_CLOSE_REQUEST>((new std::string("NOTIFICATION_WM_CLOSE_REQUEST"))->c_str())
			.static_fun<&Node::NOTIFICATION_WM_GO_BACK_REQUEST>((new std::string("NOTIFICATION_WM_GO_BACK_REQUEST"))->c_str())
			.static_fun<&Node::NOTIFICATION_WM_SIZE_CHANGED>((new std::string("NOTIFICATION_WM_SIZE_CHANGED"))->c_str())
			.static_fun<&Node::NOTIFICATION_WM_DPI_CHANGE>((new std::string("NOTIFICATION_WM_DPI_CHANGE"))->c_str())
			.static_fun<&Node::NOTIFICATION_VP_MOUSE_ENTER>((new std::string("NOTIFICATION_VP_MOUSE_ENTER"))->c_str())
			.static_fun<&Node::NOTIFICATION_VP_MOUSE_EXIT>((new std::string("NOTIFICATION_VP_MOUSE_EXIT"))->c_str())
			.static_fun<&Node::NOTIFICATION_OS_MEMORY_WARNING>((new std::string("NOTIFICATION_OS_MEMORY_WARNING"))->c_str())
			.static_fun<&Node::NOTIFICATION_TRANSLATION_CHANGED>((new std::string("NOTIFICATION_TRANSLATION_CHANGED"))->c_str())
			.static_fun<&Node::NOTIFICATION_WM_ABOUT>((new std::string("NOTIFICATION_WM_ABOUT"))->c_str())
			.static_fun<&Node::NOTIFICATION_CRASH>((new std::string("NOTIFICATION_CRASH"))->c_str())
			.static_fun<&Node::NOTIFICATION_OS_IME_UPDATE>((new std::string("NOTIFICATION_OS_IME_UPDATE"))->c_str())
			.static_fun<&Node::NOTIFICATION_APPLICATION_RESUMED>((new std::string("NOTIFICATION_APPLICATION_RESUMED"))->c_str())
			.static_fun<&Node::NOTIFICATION_APPLICATION_PAUSED>((new std::string("NOTIFICATION_APPLICATION_PAUSED"))->c_str())
			.static_fun<&Node::NOTIFICATION_APPLICATION_FOCUS_IN>((new std::string("NOTIFICATION_APPLICATION_FOCUS_IN"))->c_str())
			.static_fun<&Node::NOTIFICATION_APPLICATION_FOCUS_OUT>((new std::string("NOTIFICATION_APPLICATION_FOCUS_OUT"))->c_str())
			.static_fun<&Node::NOTIFICATION_TEXT_SERVER_CHANGED>((new std::string("NOTIFICATION_TEXT_SERVER_CHANGED"))->c_str())
			.property<static_cast<StringName (Node::*)() const>(&Node::get_name), static_cast<void (Node::*)(const String &)>(&Node::set_name)>((new std::string("name"))->c_str())
			.property<static_cast<bool (Node::*)() const>(&Node::is_unique_name_in_owner), static_cast<void (Node::*)(bool)>(&Node::set_unique_name_in_owner)>((new std::string("unique_name_in_owner"))->c_str())
			.property<static_cast<String (Node::*)() const>(&Node::get_scene_file_path), static_cast<void (Node::*)(const String &)>(&Node::set_scene_file_path)>((new std::string("scene_file_path"))->c_str())
			.property<static_cast<Node *(Node::*)() const>(&Node::get_owner), static_cast<void (Node::*)(Node *)>(&Node::set_owner)>((new std::string("owner"))->c_str())
			.property<static_cast<Ref<MultiplayerAPI> (Node::*)() const>(&Node::get_multiplayer)>((new std::string("multiplayer"))->c_str())
			.property<static_cast<Node::ProcessMode (Node::*)() const>(&Node::get_process_mode), static_cast<void (Node::*)(Node::ProcessMode)>(&Node::set_process_mode)>((new std::string("process_mode"))->c_str())
			.property<static_cast<int32_t (Node::*)() const>(&Node::get_process_priority), static_cast<void (Node::*)(int32_t)>(&Node::set_process_priority)>((new std::string("process_priority"))->c_str())
			.property<static_cast<int32_t (Node::*)() const>(&Node::get_physics_process_priority), static_cast<void (Node::*)(int32_t)>(&Node::set_physics_process_priority)>((new std::string("process_physics_priority"))->c_str())
			.property<static_cast<Node::ProcessThreadGroup (Node::*)() const>(&Node::get_process_thread_group), static_cast<void (Node::*)(Node::ProcessThreadGroup)>(&Node::set_process_thread_group)>((new std::string("process_thread_group"))->c_str())
			.property<static_cast<int32_t (Node::*)() const>(&Node::get_process_thread_group_order), static_cast<void (Node::*)(int32_t)>(&Node::set_process_thread_group_order)>((new std::string("process_thread_group_order"))->c_str())
			.property<static_cast<BitField<Node::ProcessThreadMessages> (Node::*)() const>(&Node::get_process_thread_messages), static_cast<void (Node::*)(BitField<Node::ProcessThreadMessages>)>(&Node::set_process_thread_messages)>((new std::string("process_thread_messages"))->c_str())
			.property<static_cast<Node::PhysicsInterpolationMode (Node::*)() const>(&Node::get_physics_interpolation_mode), static_cast<void (Node::*)(Node::PhysicsInterpolationMode)>(&Node::set_physics_interpolation_mode)>((new std::string("physics_interpolation_mode"))->c_str())
			.property<static_cast<Node::AutoTranslateMode (Node::*)() const>(&Node::get_auto_translate_mode), static_cast<void (Node::*)(Node::AutoTranslateMode)>(&Node::set_auto_translate_mode)>((new std::string("auto_translate_mode"))->c_str())
			.property<static_cast<String (Node::*)() const>(&Node::get_editor_description), static_cast<void (Node::*)(const String &)>(&Node::set_editor_description)>((new std::string("editor_description"))->c_str())
			.fun<static_cast<void (Node::*)(double)>(&Node::_process)>((new std::string("_process"))->c_str())
			.fun<static_cast<void (Node::*)(double)>(&Node::_physics_process)>((new std::string("_physics_process"))->c_str())
			.fun<static_cast<void (Node::*)()>(&Node::_enter_tree)>((new std::string("_enter_tree"))->c_str())
			.fun<static_cast<void (Node::*)()>(&Node::_exit_tree)>((new std::string("_exit_tree"))->c_str())
			.fun<static_cast<void (Node::*)()>(&Node::_ready)>((new std::string("_ready"))->c_str())
			.fun<static_cast<PackedStringArray (Node::*)() const>(&Node::_get_configuration_warnings)>((new std::string("_get_configuration_warnings"))->c_str())
			.fun<static_cast<void (Node::*)(const Ref<InputEvent> &)>(&Node::_input)>((new std::string("_input"))->c_str())
			.fun<static_cast<void (Node::*)(const Ref<InputEvent> &)>(&Node::_shortcut_input)>((new std::string("_shortcut_input"))->c_str())
			.fun<static_cast<void (Node::*)(const Ref<InputEvent> &)>(&Node::_unhandled_input)>((new std::string("_unhandled_input"))->c_str())
			.fun<static_cast<void (Node::*)(const Ref<InputEvent> &)>(&Node::_unhandled_key_input)>((new std::string("_unhandled_key_input"))->c_str())
			.static_fun<static_cast<void (*)()>(&Node::print_orphan_nodes)>((new std::string("print_orphan_nodes"))->c_str())
			.fun<static_cast<void (Node::*)(Node *, bool)>(&Node::add_sibling)>((new std::string("add_sibling"))->c_str())
			.fun<static_cast<void (Node::*)(Node *, bool, Node::InternalMode)>(&Node::add_child)>((new std::string("add_child"))->c_str())
			.fun<static_cast<void (Node::*)(Node *)>(&Node::remove_child)>((new std::string("remove_child"))->c_str())
			.fun<static_cast<void (Node::*)(Node *, bool)>(&Node::reparent)>((new std::string("reparent"))->c_str())
			.fun<static_cast<int32_t (Node::*)(bool) const>(&Node::get_child_count)>((new std::string("get_child_count"))->c_str())
			.fun<static_cast<TypedArray<Node> (Node::*)(bool) const>(&Node::get_children)>((new std::string("get_children"))->c_str())
			.fun<static_cast<Node *(Node::*)(int32_t, bool) const>(&Node::get_child)>((new std::string("get_child"))->c_str())
			.fun<static_cast<bool (Node::*)(const NodePath &) const>(&Node::has_node)>((new std::string("has_node"))->c_str())
			.fun<static_cast<Node *(Node::*)(const NodePath &) const>(&Node::get_node)>((new std::string("get_node"))->c_str())
			.fun<static_cast<Node *(Node::*)(const NodePath &) const>(&Node::get_node_or_null)>((new std::string("get_node_or_null"))->c_str())
			.fun<static_cast<Node *(Node::*)() const>(&Node::get_parent)>((new std::string("get_parent"))->c_str())
			.fun<static_cast<Node *(Node::*)(const String &, bool, bool) const>(&Node::find_child)>((new std::string("find_child"))->c_str())
			.fun<static_cast<TypedArray<Node> (Node::*)(const String &, const String &, bool, bool) const>(&Node::find_children)>((new std::string("find_children"))->c_str())
			.fun<static_cast<Node *(Node::*)(const String &) const>(&Node::find_parent)>((new std::string("find_parent"))->c_str())
			.fun<static_cast<bool (Node::*)(const NodePath &) const>(&Node::has_node_and_resource)>((new std::string("has_node_and_resource"))->c_str())
			.fun<static_cast<Array (Node::*)(const NodePath &)>(&Node::get_node_and_resource)>((new std::string("get_node_and_resource"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_inside_tree)>((new std::string("is_inside_tree"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_part_of_edited_scene)>((new std::string("is_part_of_edited_scene"))->c_str())
			.fun<static_cast<bool (Node::*)(Node *) const>(&Node::is_ancestor_of)>((new std::string("is_ancestor_of"))->c_str())
			.fun<static_cast<bool (Node::*)(Node *) const>(&Node::is_greater_than)>((new std::string("is_greater_than"))->c_str())
			.fun<static_cast<NodePath (Node::*)() const>(&Node::get_path)>((new std::string("get_path"))->c_str())
			.fun<static_cast<NodePath (Node::*)(Node *, bool) const>(&Node::get_path_to)>((new std::string("get_path_to"))->c_str())
			.fun<static_cast<void (Node::*)(const StringName &, bool)>(&Node::add_to_group)>((new std::string("add_to_group"))->c_str())
			.fun<static_cast<void (Node::*)(const StringName &)>(&Node::remove_from_group)>((new std::string("remove_from_group"))->c_str())
			.fun<static_cast<bool (Node::*)(const StringName &) const>(&Node::is_in_group)>((new std::string("is_in_group"))->c_str())
			.fun<static_cast<void (Node::*)(Node *, int32_t)>(&Node::move_child)>((new std::string("move_child"))->c_str())
			.fun<static_cast<TypedArray<StringName> (Node::*)() const>(&Node::get_groups)>((new std::string("get_groups"))->c_str())
			.fun<static_cast<int32_t (Node::*)(bool) const>(&Node::get_index)>((new std::string("get_index"))->c_str())
			.fun<static_cast<void (Node::*)()>(&Node::print_tree)>((new std::string("print_tree"))->c_str())
			.fun<static_cast<void (Node::*)()>(&Node::print_tree_pretty)>((new std::string("print_tree_pretty"))->c_str())
			.fun<static_cast<String (Node::*)()>(&Node::get_tree_string)>((new std::string("get_tree_string"))->c_str())
			.fun<static_cast<String (Node::*)()>(&Node::get_tree_string_pretty)>((new std::string("get_tree_string_pretty"))->c_str())
			.fun<static_cast<void (Node::*)(int32_t)>(&Node::propagate_notification)>((new std::string("propagate_notification"))->c_str())
			.fun<static_cast<void (Node::*)(const StringName &, const Array &, bool)>(&Node::propagate_call)>((new std::string("propagate_call"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_physics_process)>((new std::string("set_physics_process"))->c_str())
			.fun<static_cast<double (Node::*)() const>(&Node::get_physics_process_delta_time)>((new std::string("get_physics_process_delta_time"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_physics_processing)>((new std::string("is_physics_processing"))->c_str())
			.fun<static_cast<double (Node::*)() const>(&Node::get_process_delta_time)>((new std::string("get_process_delta_time"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_process)>((new std::string("set_process"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_processing)>((new std::string("is_processing"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_process_input)>((new std::string("set_process_input"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_processing_input)>((new std::string("is_processing_input"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_process_shortcut_input)>((new std::string("set_process_shortcut_input"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_processing_shortcut_input)>((new std::string("is_processing_shortcut_input"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_process_unhandled_input)>((new std::string("set_process_unhandled_input"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_processing_unhandled_input)>((new std::string("is_processing_unhandled_input"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_process_unhandled_key_input)>((new std::string("set_process_unhandled_key_input"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_processing_unhandled_key_input)>((new std::string("is_processing_unhandled_key_input"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::can_process)>((new std::string("can_process"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_display_folded)>((new std::string("set_display_folded"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_displayed_folded)>((new std::string("is_displayed_folded"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_process_internal)>((new std::string("set_process_internal"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_processing_internal)>((new std::string("is_processing_internal"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_physics_process_internal)>((new std::string("set_physics_process_internal"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_physics_processing_internal)>((new std::string("is_physics_processing_internal"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_physics_interpolated)>((new std::string("is_physics_interpolated"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_physics_interpolated_and_enabled)>((new std::string("is_physics_interpolated_and_enabled"))->c_str())
			.fun<static_cast<void (Node::*)()>(&Node::reset_physics_interpolation)>((new std::string("reset_physics_interpolation"))->c_str())
			.fun<static_cast<Window *(Node::*)() const>(&Node::get_window)>((new std::string("get_window"))->c_str())
			.fun<static_cast<Window *(Node::*)() const>(&Node::get_last_exclusive_window)>((new std::string("get_last_exclusive_window"))->c_str())
			.fun<static_cast<SceneTree *(Node::*)() const>(&Node::get_tree)>((new std::string("get_tree"))->c_str())
			.fun<static_cast<Ref<Tween> (Node::*)()>(&Node::create_tween)>((new std::string("create_tween"))->c_str())
			.fun<static_cast<Node *(Node::*)(int32_t) const>(&Node::duplicate)>((new std::string("duplicate"))->c_str())
			.fun<static_cast<void (Node::*)(Node *, bool)>(&Node::replace_by)>((new std::string("replace_by"))->c_str())
			.fun<static_cast<void (Node::*)(bool)>(&Node::set_scene_instance_load_placeholder)>((new std::string("set_scene_instance_load_placeholder"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::get_scene_instance_load_placeholder)>((new std::string("get_scene_instance_load_placeholder"))->c_str())
			.fun<static_cast<void (Node::*)(Node *, bool)>(&Node::set_editable_instance)>((new std::string("set_editable_instance"))->c_str())
			.fun<static_cast<bool (Node::*)(Node *) const>(&Node::is_editable_instance)>((new std::string("is_editable_instance"))->c_str())
			.fun<static_cast<Viewport *(Node::*)() const>(&Node::get_viewport)>((new std::string("get_viewport"))->c_str())
			.fun<static_cast<void (Node::*)()>(&Node::queue_free)>((new std::string("queue_free"))->c_str())
			.fun<static_cast<void (Node::*)()>(&Node::request_ready)>((new std::string("request_ready"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_node_ready)>((new std::string("is_node_ready"))->c_str())
			.fun<static_cast<void (Node::*)(int32_t, bool)>(&Node::set_multiplayer_authority)>((new std::string("set_multiplayer_authority"))->c_str())
			.fun<static_cast<int32_t (Node::*)() const>(&Node::get_multiplayer_authority)>((new std::string("get_multiplayer_authority"))->c_str())
			.fun<static_cast<bool (Node::*)() const>(&Node::is_multiplayer_authority)>((new std::string("is_multiplayer_authority"))->c_str())
			.fun<static_cast<void (Node::*)(const StringName &, const Variant &)>(&Node::rpc_config)>((new std::string("rpc_config"))->c_str())
			.fun<static_cast<String (Node::*)(const String &, const StringName &) const>(&Node::atr)>((new std::string("atr"))->c_str())
			.fun<static_cast<String (Node::*)(const String &, const StringName &, int32_t, const StringName &) const>(&Node::atr_n)>((new std::string("atr_n"))->c_str())
			.fun<static_cast<Error (Node::*)(const StringName &, rest<Variant> args)>(&Node::rpc)>((new std::string("rpc"))->c_str())
			.fun<static_cast<Error (Node::*)(int64_t, const StringName &, rest<Variant> args)>(&Node::rpc_id)>((new std::string("rpc_id"))->c_str())
			.fun<static_cast<void (Node::*)()>(&Node::update_configuration_warnings)>((new std::string("update_configuration_warnings"))->c_str())
			.fun<static_cast<Variant (Node::*)(const StringName &, rest<Variant> args)>(&Node::call_deferred_thread_group)>((new std::string("call_deferred_thread_group"))->c_str())
			.fun<static_cast<void (Node::*)(const StringName &, const Variant &)>(&Node::set_deferred_thread_group)>((new std::string("set_deferred_thread_group"))->c_str())
			.fun<static_cast<void (Node::*)(int32_t)>(&Node::notify_deferred_thread_group)>((new std::string("notify_deferred_thread_group"))->c_str())
			.fun<static_cast<Variant (Node::*)(const StringName &, rest<Variant> args)>(&Node::call_thread_safe)>((new std::string("call_thread_safe"))->c_str())
			.fun<static_cast<void (Node::*)(const StringName &, const Variant &)>(&Node::set_thread_safe)>((new std::string("set_thread_safe"))->c_str())
			.fun<static_cast<void (Node::*)(int32_t)>(&Node::notify_thread_safe)>((new std::string("notify_thread_safe"))->c_str());
	qjs::Value _ProcessMode = context->newObject();
	_ProcessMode[(new std::string("PROCESS_MODE_INHERIT"))->c_str()] = Node::ProcessMode::PROCESS_MODE_INHERIT;
	_ProcessMode[(new std::string("PROCESS_MODE_PAUSABLE"))->c_str()] = Node::ProcessMode::PROCESS_MODE_PAUSABLE;
	_ProcessMode[(new std::string("PROCESS_MODE_WHEN_PAUSED"))->c_str()] = Node::ProcessMode::PROCESS_MODE_WHEN_PAUSED;
	_ProcessMode[(new std::string("PROCESS_MODE_ALWAYS"))->c_str()] = Node::ProcessMode::PROCESS_MODE_ALWAYS;
	_ProcessMode[(new std::string("PROCESS_MODE_DISABLED"))->c_str()] = Node::ProcessMode::PROCESS_MODE_DISABLED;
	_module.add("ProcessMode", std::move(_ProcessMode));
	qjs::Value _ProcessThreadGroup = context->newObject();
	_ProcessThreadGroup[(new std::string("PROCESS_THREAD_GROUP_INHERIT"))->c_str()] = Node::ProcessThreadGroup::PROCESS_THREAD_GROUP_INHERIT;
	_ProcessThreadGroup[(new std::string("PROCESS_THREAD_GROUP_MAIN_THREAD"))->c_str()] = Node::ProcessThreadGroup::PROCESS_THREAD_GROUP_MAIN_THREAD;
	_ProcessThreadGroup[(new std::string("PROCESS_THREAD_GROUP_SUB_THREAD"))->c_str()] = Node::ProcessThreadGroup::PROCESS_THREAD_GROUP_SUB_THREAD;
	_module.add("ProcessThreadGroup", std::move(_ProcessThreadGroup));
	qjs::Value _ProcessThreadMessages = context->newObject();
	_ProcessThreadMessages[(new std::string("FLAG_PROCESS_THREAD_MESSAGES"))->c_str()] = Node::ProcessThreadMessages::FLAG_PROCESS_THREAD_MESSAGES;
	_ProcessThreadMessages[(new std::string("FLAG_PROCESS_THREAD_MESSAGES_PHYSICS"))->c_str()] = Node::ProcessThreadMessages::FLAG_PROCESS_THREAD_MESSAGES_PHYSICS;
	_ProcessThreadMessages[(new std::string("FLAG_PROCESS_THREAD_MESSAGES_ALL"))->c_str()] = Node::ProcessThreadMessages::FLAG_PROCESS_THREAD_MESSAGES_ALL;
	_module.add("ProcessThreadMessages", std::move(_ProcessThreadMessages));
	qjs::Value _PhysicsInterpolationMode = context->newObject();
	_PhysicsInterpolationMode[(new std::string("PHYSICS_INTERPOLATION_MODE_INHERIT"))->c_str()] = Node::PhysicsInterpolationMode::PHYSICS_INTERPOLATION_MODE_INHERIT;
	_PhysicsInterpolationMode[(new std::string("PHYSICS_INTERPOLATION_MODE_ON"))->c_str()] = Node::PhysicsInterpolationMode::PHYSICS_INTERPOLATION_MODE_ON;
	_PhysicsInterpolationMode[(new std::string("PHYSICS_INTERPOLATION_MODE_OFF"))->c_str()] = Node::PhysicsInterpolationMode::PHYSICS_INTERPOLATION_MODE_OFF;
	_module.add("PhysicsInterpolationMode", std::move(_PhysicsInterpolationMode));
	qjs::Value _DuplicateFlags = context->newObject();
	_DuplicateFlags[(new std::string("DUPLICATE_SIGNALS"))->c_str()] = Node::DuplicateFlags::DUPLICATE_SIGNALS;
	_DuplicateFlags[(new std::string("DUPLICATE_GROUPS"))->c_str()] = Node::DuplicateFlags::DUPLICATE_GROUPS;
	_DuplicateFlags[(new std::string("DUPLICATE_SCRIPTS"))->c_str()] = Node::DuplicateFlags::DUPLICATE_SCRIPTS;
	_DuplicateFlags[(new std::string("DUPLICATE_USE_INSTANTIATION"))->c_str()] = Node::DuplicateFlags::DUPLICATE_USE_INSTANTIATION;
	_module.add("DuplicateFlags", std::move(_DuplicateFlags));
	qjs::Value _InternalMode = context->newObject();
	_InternalMode[(new std::string("INTERNAL_MODE_DISABLED"))->c_str()] = Node::InternalMode::INTERNAL_MODE_DISABLED;
	_InternalMode[(new std::string("INTERNAL_MODE_FRONT"))->c_str()] = Node::InternalMode::INTERNAL_MODE_FRONT;
	_InternalMode[(new std::string("INTERNAL_MODE_BACK"))->c_str()] = Node::InternalMode::INTERNAL_MODE_BACK;
	_module.add("InternalMode", std::move(_InternalMode));
	qjs::Value _AutoTranslateMode = context->newObject();
	_AutoTranslateMode[(new std::string("AUTO_TRANSLATE_MODE_INHERIT"))->c_str()] = Node::AutoTranslateMode::AUTO_TRANSLATE_MODE_INHERIT;
	_AutoTranslateMode[(new std::string("AUTO_TRANSLATE_MODE_ALWAYS"))->c_str()] = Node::AutoTranslateMode::AUTO_TRANSLATE_MODE_ALWAYS;
	_AutoTranslateMode[(new std::string("AUTO_TRANSLATE_MODE_DISABLED"))->c_str()] = Node::AutoTranslateMode::AUTO_TRANSLATE_MODE_DISABLED;
	_module.add("AutoTranslateMode", std::move(_AutoTranslateMode));
}