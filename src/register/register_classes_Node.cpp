#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Node() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<Node>("Node")
            .constructor<>()
            .base<Object>()
            .static_fun<&Node::NOTIFICATION_ENTER_TREE>("NOTIFICATION_ENTER_TREE")
            .static_fun<&Node::NOTIFICATION_EXIT_TREE>("NOTIFICATION_EXIT_TREE")
            .static_fun<&Node::NOTIFICATION_MOVED_IN_PARENT>("NOTIFICATION_MOVED_IN_PARENT")
            .static_fun<&Node::NOTIFICATION_READY>("NOTIFICATION_READY")
            .static_fun<&Node::NOTIFICATION_PAUSED>("NOTIFICATION_PAUSED")
            .static_fun<&Node::NOTIFICATION_UNPAUSED>("NOTIFICATION_UNPAUSED")
            .static_fun<&Node::NOTIFICATION_PHYSICS_PROCESS>("NOTIFICATION_PHYSICS_PROCESS")
            .static_fun<&Node::NOTIFICATION_PROCESS>("NOTIFICATION_PROCESS")
            .static_fun<&Node::NOTIFICATION_PARENTED>("NOTIFICATION_PARENTED")
            .static_fun<&Node::NOTIFICATION_UNPARENTED>("NOTIFICATION_UNPARENTED")
            .static_fun<&Node::NOTIFICATION_SCENE_INSTANTIATED>("NOTIFICATION_SCENE_INSTANTIATED")
            .static_fun<&Node::NOTIFICATION_DRAG_BEGIN>("NOTIFICATION_DRAG_BEGIN")
            .static_fun<&Node::NOTIFICATION_DRAG_END>("NOTIFICATION_DRAG_END")
            .static_fun<&Node::NOTIFICATION_PATH_RENAMED>("NOTIFICATION_PATH_RENAMED")
            .static_fun<&Node::NOTIFICATION_CHILD_ORDER_CHANGED>("NOTIFICATION_CHILD_ORDER_CHANGED")
            .static_fun<&Node::NOTIFICATION_INTERNAL_PROCESS>("NOTIFICATION_INTERNAL_PROCESS")
            .static_fun<&Node::NOTIFICATION_INTERNAL_PHYSICS_PROCESS>("NOTIFICATION_INTERNAL_PHYSICS_PROCESS")
            .static_fun<&Node::NOTIFICATION_POST_ENTER_TREE>("NOTIFICATION_POST_ENTER_TREE")
            .static_fun<&Node::NOTIFICATION_DISABLED>("NOTIFICATION_DISABLED")
            .static_fun<&Node::NOTIFICATION_ENABLED>("NOTIFICATION_ENABLED")
            .static_fun<&Node::NOTIFICATION_RESET_PHYSICS_INTERPOLATION>("NOTIFICATION_RESET_PHYSICS_INTERPOLATION")
            .static_fun<&Node::NOTIFICATION_EDITOR_PRE_SAVE>("NOTIFICATION_EDITOR_PRE_SAVE")
            .static_fun<&Node::NOTIFICATION_EDITOR_POST_SAVE>("NOTIFICATION_EDITOR_POST_SAVE")
            .static_fun<&Node::NOTIFICATION_WM_MOUSE_ENTER>("NOTIFICATION_WM_MOUSE_ENTER")
            .static_fun<&Node::NOTIFICATION_WM_MOUSE_EXIT>("NOTIFICATION_WM_MOUSE_EXIT")
            .static_fun<&Node::NOTIFICATION_WM_WINDOW_FOCUS_IN>("NOTIFICATION_WM_WINDOW_FOCUS_IN")
            .static_fun<&Node::NOTIFICATION_WM_WINDOW_FOCUS_OUT>("NOTIFICATION_WM_WINDOW_FOCUS_OUT")
            .static_fun<&Node::NOTIFICATION_WM_CLOSE_REQUEST>("NOTIFICATION_WM_CLOSE_REQUEST")
            .static_fun<&Node::NOTIFICATION_WM_GO_BACK_REQUEST>("NOTIFICATION_WM_GO_BACK_REQUEST")
            .static_fun<&Node::NOTIFICATION_WM_SIZE_CHANGED>("NOTIFICATION_WM_SIZE_CHANGED")
            .static_fun<&Node::NOTIFICATION_WM_DPI_CHANGE>("NOTIFICATION_WM_DPI_CHANGE")
            .static_fun<&Node::NOTIFICATION_VP_MOUSE_ENTER>("NOTIFICATION_VP_MOUSE_ENTER")
            .static_fun<&Node::NOTIFICATION_VP_MOUSE_EXIT>("NOTIFICATION_VP_MOUSE_EXIT")
            .static_fun<&Node::NOTIFICATION_OS_MEMORY_WARNING>("NOTIFICATION_OS_MEMORY_WARNING")
            .static_fun<&Node::NOTIFICATION_TRANSLATION_CHANGED>("NOTIFICATION_TRANSLATION_CHANGED")
            .static_fun<&Node::NOTIFICATION_WM_ABOUT>("NOTIFICATION_WM_ABOUT")
            .static_fun<&Node::NOTIFICATION_CRASH>("NOTIFICATION_CRASH")
            .static_fun<&Node::NOTIFICATION_OS_IME_UPDATE>("NOTIFICATION_OS_IME_UPDATE")
            .static_fun<&Node::NOTIFICATION_APPLICATION_RESUMED>("NOTIFICATION_APPLICATION_RESUMED")
            .static_fun<&Node::NOTIFICATION_APPLICATION_PAUSED>("NOTIFICATION_APPLICATION_PAUSED")
            .static_fun<&Node::NOTIFICATION_APPLICATION_FOCUS_IN>("NOTIFICATION_APPLICATION_FOCUS_IN")
            .static_fun<&Node::NOTIFICATION_APPLICATION_FOCUS_OUT>("NOTIFICATION_APPLICATION_FOCUS_OUT")
            .static_fun<&Node::NOTIFICATION_TEXT_SERVER_CHANGED>("NOTIFICATION_TEXT_SERVER_CHANGED")
            .property<static_cast<StringName(Node::*)()const>(&Node::get_name),static_cast<void(Node::*)(const String &)>(&Node::set_name)>("name")
            .property<static_cast<bool(Node::*)()const>(&Node::is_unique_name_in_owner),static_cast<void(Node::*)(bool)>(&Node::set_unique_name_in_owner)>("unique_name_in_owner")
            .property<static_cast<String(Node::*)()const>(&Node::get_scene_file_path),static_cast<void(Node::*)(const String &)>(&Node::set_scene_file_path)>("scene_file_path")
            .property<static_cast<Node *(Node::*)()const>(&Node::get_owner),static_cast<void(Node::*)(Node *)>(&Node::set_owner)>("owner")
            .property<static_cast<Ref<MultiplayerAPI>(Node::*)()const>(&Node::get_multiplayer)>("multiplayer")
            .property<static_cast<Node::ProcessMode(Node::*)()const>(&Node::get_process_mode),static_cast<void(Node::*)(Node::ProcessMode)>(&Node::set_process_mode)>("process_mode")
            .property<static_cast<int32_t(Node::*)()const>(&Node::get_process_priority),static_cast<void(Node::*)(int32_t)>(&Node::set_process_priority)>("process_priority")
            .property<static_cast<int32_t(Node::*)()const>(&Node::get_physics_process_priority),static_cast<void(Node::*)(int32_t)>(&Node::set_physics_process_priority)>("process_physics_priority")
            .property<static_cast<Node::ProcessThreadGroup(Node::*)()const>(&Node::get_process_thread_group),static_cast<void(Node::*)(Node::ProcessThreadGroup)>(&Node::set_process_thread_group)>("process_thread_group")
            .property<static_cast<int32_t(Node::*)()const>(&Node::get_process_thread_group_order),static_cast<void(Node::*)(int32_t)>(&Node::set_process_thread_group_order)>("process_thread_group_order")
            .property<static_cast<BitField<Node::ProcessThreadMessages>(Node::*)()const>(&Node::get_process_thread_messages),static_cast<void(Node::*)(BitField<Node::ProcessThreadMessages>)>(&Node::set_process_thread_messages)>("process_thread_messages")
            .property<static_cast<Node::PhysicsInterpolationMode(Node::*)()const>(&Node::get_physics_interpolation_mode),static_cast<void(Node::*)(Node::PhysicsInterpolationMode)>(&Node::set_physics_interpolation_mode)>("physics_interpolation_mode")
            .property<static_cast<Node::AutoTranslateMode(Node::*)()const>(&Node::get_auto_translate_mode),static_cast<void(Node::*)(Node::AutoTranslateMode)>(&Node::set_auto_translate_mode)>("auto_translate_mode")
            .property<static_cast<String(Node::*)()const>(&Node::get_editor_description),static_cast<void(Node::*)(const String &)>(&Node::set_editor_description)>("editor_description")
            .fun<static_cast<void(Node::*)(double)>(&Node::_process)>("_process")
            .fun<static_cast<void(Node::*)(double)>(&Node::_physics_process)>("_physics_process")
            .fun<static_cast<void(Node::*)()>(&Node::_enter_tree)>("_enter_tree")
            .fun<static_cast<void(Node::*)()>(&Node::_exit_tree)>("_exit_tree")
            .fun<static_cast<void(Node::*)()>(&Node::_ready)>("_ready")
            .fun<static_cast<PackedStringArray(Node::*)()const>(&Node::_get_configuration_warnings)>("_get_configuration_warnings")
            .fun<static_cast<void(Node::*)(const Ref<InputEvent> &)>(&Node::_input)>("_input")
            .fun<static_cast<void(Node::*)(const Ref<InputEvent> &)>(&Node::_shortcut_input)>("_shortcut_input")
            .fun<static_cast<void(Node::*)(const Ref<InputEvent> &)>(&Node::_unhandled_input)>("_unhandled_input")
            .fun<static_cast<void(Node::*)(const Ref<InputEvent> &)>(&Node::_unhandled_key_input)>("_unhandled_key_input")
            .static_fun<static_cast<void(*)()>(&Node::print_orphan_nodes)>("print_orphan_nodes")
            .fun<static_cast<void(Node::*)(Node *,bool)>(&Node::add_sibling)>("add_sibling")
            .fun<static_cast<void(Node::*)(Node *,bool,Node::InternalMode)>(&Node::add_child)>("add_child")
            .fun<static_cast<void(Node::*)(Node *)>(&Node::remove_child)>("remove_child")
            .fun<static_cast<void(Node::*)(Node *,bool)>(&Node::reparent)>("reparent")
            .fun<static_cast<int32_t(Node::*)(bool)const>(&Node::get_child_count)>("get_child_count")
            .fun<static_cast<TypedArray<Node>(Node::*)(bool)const>(&Node::get_children)>("get_children")
            .fun<static_cast<Node *(Node::*)(int32_t,bool)const>(&Node::get_child)>("get_child")
            .fun<static_cast<bool(Node::*)(const NodePath &)const>(&Node::has_node)>("has_node")
            .fun<static_cast<Node *(Node::*)(const NodePath &)const>(&Node::get_node)>("get_node")
            .fun<static_cast<Node *(Node::*)(const NodePath &)const>(&Node::get_node_or_null)>("get_node_or_null")
            .fun<static_cast<Node *(Node::*)()const>(&Node::get_parent)>("get_parent")
            .fun<static_cast<Node *(Node::*)(const String &,bool,bool)const>(&Node::find_child)>("find_child")
            .fun<static_cast<TypedArray<Node>(Node::*)(const String &,const String &,bool,bool)const>(&Node::find_children)>("find_children")
            .fun<static_cast<Node *(Node::*)(const String &)const>(&Node::find_parent)>("find_parent")
            .fun<static_cast<bool(Node::*)(const NodePath &)const>(&Node::has_node_and_resource)>("has_node_and_resource")
            .fun<static_cast<Array(Node::*)(const NodePath &)>(&Node::get_node_and_resource)>("get_node_and_resource")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_inside_tree)>("is_inside_tree")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_part_of_edited_scene)>("is_part_of_edited_scene")
            .fun<static_cast<bool(Node::*)(Node *)const>(&Node::is_ancestor_of)>("is_ancestor_of")
            .fun<static_cast<bool(Node::*)(Node *)const>(&Node::is_greater_than)>("is_greater_than")
            .fun<static_cast<NodePath(Node::*)()const>(&Node::get_path)>("get_path")
            .fun<static_cast<NodePath(Node::*)(Node *,bool)const>(&Node::get_path_to)>("get_path_to")
            .fun<static_cast<void(Node::*)(const StringName &,bool)>(&Node::add_to_group)>("add_to_group")
            .fun<static_cast<void(Node::*)(const StringName &)>(&Node::remove_from_group)>("remove_from_group")
            .fun<static_cast<bool(Node::*)(const StringName &)const>(&Node::is_in_group)>("is_in_group")
            .fun<static_cast<void(Node::*)(Node *,int32_t)>(&Node::move_child)>("move_child")
            .fun<static_cast<TypedArray<StringName>(Node::*)()const>(&Node::get_groups)>("get_groups")
            .fun<static_cast<int32_t(Node::*)(bool)const>(&Node::get_index)>("get_index")
            .fun<static_cast<void(Node::*)()>(&Node::print_tree)>("print_tree")
            .fun<static_cast<void(Node::*)()>(&Node::print_tree_pretty)>("print_tree_pretty")
            .fun<static_cast<String(Node::*)()>(&Node::get_tree_string)>("get_tree_string")
            .fun<static_cast<String(Node::*)()>(&Node::get_tree_string_pretty)>("get_tree_string_pretty")
            .fun<static_cast<void(Node::*)(int32_t)>(&Node::propagate_notification)>("propagate_notification")
            .fun<static_cast<void(Node::*)(const StringName &,const Array &,bool)>(&Node::propagate_call)>("propagate_call")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_physics_process)>("set_physics_process")
            .fun<static_cast<double(Node::*)()const>(&Node::get_physics_process_delta_time)>("get_physics_process_delta_time")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_physics_processing)>("is_physics_processing")
            .fun<static_cast<double(Node::*)()const>(&Node::get_process_delta_time)>("get_process_delta_time")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_process)>("set_process")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_processing)>("is_processing")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_process_input)>("set_process_input")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_processing_input)>("is_processing_input")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_process_shortcut_input)>("set_process_shortcut_input")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_processing_shortcut_input)>("is_processing_shortcut_input")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_process_unhandled_input)>("set_process_unhandled_input")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_processing_unhandled_input)>("is_processing_unhandled_input")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_process_unhandled_key_input)>("set_process_unhandled_key_input")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_processing_unhandled_key_input)>("is_processing_unhandled_key_input")
            .fun<static_cast<bool(Node::*)()const>(&Node::can_process)>("can_process")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_display_folded)>("set_display_folded")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_displayed_folded)>("is_displayed_folded")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_process_internal)>("set_process_internal")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_processing_internal)>("is_processing_internal")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_physics_process_internal)>("set_physics_process_internal")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_physics_processing_internal)>("is_physics_processing_internal")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_physics_interpolated)>("is_physics_interpolated")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_physics_interpolated_and_enabled)>("is_physics_interpolated_and_enabled")
            .fun<static_cast<void(Node::*)()>(&Node::reset_physics_interpolation)>("reset_physics_interpolation")
            .fun<static_cast<Window *(Node::*)()const>(&Node::get_window)>("get_window")
            .fun<static_cast<Window *(Node::*)()const>(&Node::get_last_exclusive_window)>("get_last_exclusive_window")
            .fun<static_cast<SceneTree *(Node::*)()const>(&Node::get_tree)>("get_tree")
            .fun<static_cast<Ref<Tween>(Node::*)()>(&Node::create_tween)>("create_tween")
            .fun<static_cast<Node *(Node::*)(int32_t)const>(&Node::duplicate)>("duplicate")
            .fun<static_cast<void(Node::*)(Node *,bool)>(&Node::replace_by)>("replace_by")
            .fun<static_cast<void(Node::*)(bool)>(&Node::set_scene_instance_load_placeholder)>("set_scene_instance_load_placeholder")
            .fun<static_cast<bool(Node::*)()const>(&Node::get_scene_instance_load_placeholder)>("get_scene_instance_load_placeholder")
            .fun<static_cast<void(Node::*)(Node *,bool)>(&Node::set_editable_instance)>("set_editable_instance")
            .fun<static_cast<bool(Node::*)(Node *)const>(&Node::is_editable_instance)>("is_editable_instance")
            .fun<static_cast<Viewport *(Node::*)()const>(&Node::get_viewport)>("get_viewport")
            .fun<static_cast<void(Node::*)()>(&Node::queue_free)>("queue_free")
            .fun<static_cast<void(Node::*)()>(&Node::request_ready)>("request_ready")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_node_ready)>("is_node_ready")
            .fun<static_cast<void(Node::*)(int32_t,bool)>(&Node::set_multiplayer_authority)>("set_multiplayer_authority")
            .fun<static_cast<int32_t(Node::*)()const>(&Node::get_multiplayer_authority)>("get_multiplayer_authority")
            .fun<static_cast<bool(Node::*)()const>(&Node::is_multiplayer_authority)>("is_multiplayer_authority")
            .fun<static_cast<void(Node::*)(const StringName &,const Variant &)>(&Node::rpc_config)>("rpc_config")
            .fun<static_cast<String(Node::*)(const String &,const StringName &)const>(&Node::atr)>("atr")
            .fun<static_cast<String(Node::*)(const String &,const StringName &,int32_t,const StringName &)const>(&Node::atr_n)>("atr_n")
            .fun<static_cast<Error(Node::*)(const StringName &,rest<Variant> args)>(&Node::rpc)>("rpc")
            .fun<static_cast<Error(Node::*)(int64_t,const StringName &,rest<Variant> args)>(&Node::rpc_id)>("rpc_id")
            .fun<static_cast<void(Node::*)()>(&Node::update_configuration_warnings)>("update_configuration_warnings")
            .fun<static_cast<Variant(Node::*)(const StringName &,rest<Variant> args)>(&Node::call_deferred_thread_group)>("call_deferred_thread_group")
            .fun<static_cast<void(Node::*)(const StringName &,const Variant &)>(&Node::set_deferred_thread_group)>("set_deferred_thread_group")
            .fun<static_cast<void(Node::*)(int32_t)>(&Node::notify_deferred_thread_group)>("notify_deferred_thread_group")
            .fun<static_cast<Variant(Node::*)(const StringName &,rest<Variant> args)>(&Node::call_thread_safe)>("call_thread_safe")
            .fun<static_cast<void(Node::*)(const StringName &,const Variant &)>(&Node::set_thread_safe)>("set_thread_safe")
            .fun<static_cast<void(Node::*)(int32_t)>(&Node::notify_thread_safe)>("notify_thread_safe")
;    qjs::Value _ProcessMode = context->newObject();
    _ProcessMode["PROCESS_MODE_INHERIT"] = Node::ProcessMode::PROCESS_MODE_INHERIT;
    _ProcessMode["PROCESS_MODE_PAUSABLE"] = Node::ProcessMode::PROCESS_MODE_PAUSABLE;
    _ProcessMode["PROCESS_MODE_WHEN_PAUSED"] = Node::ProcessMode::PROCESS_MODE_WHEN_PAUSED;
    _ProcessMode["PROCESS_MODE_ALWAYS"] = Node::ProcessMode::PROCESS_MODE_ALWAYS;
    _ProcessMode["PROCESS_MODE_DISABLED"] = Node::ProcessMode::PROCESS_MODE_DISABLED;
    _module.add("ProcessMode", std::move(_ProcessMode));
    qjs::Value _ProcessThreadGroup = context->newObject();
    _ProcessThreadGroup["PROCESS_THREAD_GROUP_INHERIT"] = Node::ProcessThreadGroup::PROCESS_THREAD_GROUP_INHERIT;
    _ProcessThreadGroup["PROCESS_THREAD_GROUP_MAIN_THREAD"] = Node::ProcessThreadGroup::PROCESS_THREAD_GROUP_MAIN_THREAD;
    _ProcessThreadGroup["PROCESS_THREAD_GROUP_SUB_THREAD"] = Node::ProcessThreadGroup::PROCESS_THREAD_GROUP_SUB_THREAD;
    _module.add("ProcessThreadGroup", std::move(_ProcessThreadGroup));
    qjs::Value _ProcessThreadMessages = context->newObject();
    _ProcessThreadMessages["FLAG_PROCESS_THREAD_MESSAGES"] = Node::ProcessThreadMessages::FLAG_PROCESS_THREAD_MESSAGES;
    _ProcessThreadMessages["FLAG_PROCESS_THREAD_MESSAGES_PHYSICS"] = Node::ProcessThreadMessages::FLAG_PROCESS_THREAD_MESSAGES_PHYSICS;
    _ProcessThreadMessages["FLAG_PROCESS_THREAD_MESSAGES_ALL"] = Node::ProcessThreadMessages::FLAG_PROCESS_THREAD_MESSAGES_ALL;
    _module.add("ProcessThreadMessages", std::move(_ProcessThreadMessages));
    qjs::Value _PhysicsInterpolationMode = context->newObject();
    _PhysicsInterpolationMode["PHYSICS_INTERPOLATION_MODE_INHERIT"] = Node::PhysicsInterpolationMode::PHYSICS_INTERPOLATION_MODE_INHERIT;
    _PhysicsInterpolationMode["PHYSICS_INTERPOLATION_MODE_ON"] = Node::PhysicsInterpolationMode::PHYSICS_INTERPOLATION_MODE_ON;
    _PhysicsInterpolationMode["PHYSICS_INTERPOLATION_MODE_OFF"] = Node::PhysicsInterpolationMode::PHYSICS_INTERPOLATION_MODE_OFF;
    _module.add("PhysicsInterpolationMode", std::move(_PhysicsInterpolationMode));
    qjs::Value _DuplicateFlags = context->newObject();
    _DuplicateFlags["DUPLICATE_SIGNALS"] = Node::DuplicateFlags::DUPLICATE_SIGNALS;
    _DuplicateFlags["DUPLICATE_GROUPS"] = Node::DuplicateFlags::DUPLICATE_GROUPS;
    _DuplicateFlags["DUPLICATE_SCRIPTS"] = Node::DuplicateFlags::DUPLICATE_SCRIPTS;
    _DuplicateFlags["DUPLICATE_USE_INSTANTIATION"] = Node::DuplicateFlags::DUPLICATE_USE_INSTANTIATION;
    _module.add("DuplicateFlags", std::move(_DuplicateFlags));
    qjs::Value _InternalMode = context->newObject();
    _InternalMode["INTERNAL_MODE_DISABLED"] = Node::InternalMode::INTERNAL_MODE_DISABLED;
    _InternalMode["INTERNAL_MODE_FRONT"] = Node::InternalMode::INTERNAL_MODE_FRONT;
    _InternalMode["INTERNAL_MODE_BACK"] = Node::InternalMode::INTERNAL_MODE_BACK;
    _module.add("InternalMode", std::move(_InternalMode));
    qjs::Value _AutoTranslateMode = context->newObject();
    _AutoTranslateMode["AUTO_TRANSLATE_MODE_INHERIT"] = Node::AutoTranslateMode::AUTO_TRANSLATE_MODE_INHERIT;
    _AutoTranslateMode["AUTO_TRANSLATE_MODE_ALWAYS"] = Node::AutoTranslateMode::AUTO_TRANSLATE_MODE_ALWAYS;
    _AutoTranslateMode["AUTO_TRANSLATE_MODE_DISABLED"] = Node::AutoTranslateMode::AUTO_TRANSLATE_MODE_DISABLED;
    _module.add("AutoTranslateMode", std::move(_AutoTranslateMode));
}