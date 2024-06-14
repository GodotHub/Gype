
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/scene_tree_timer.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/node_path.hpp>
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

void register_classes_SceneTree() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SceneTree>("SceneTree")
			.constructor<>()
			.base<MainLoop>()
			.property<static_cast<bool (SceneTree::*)() const>(&SceneTree::is_auto_accept_quit), static_cast<void (SceneTree::*)(bool)>(&SceneTree::set_auto_accept_quit)>((new std::string("auto_accept_quit"))->c_str())
			.property<static_cast<bool (SceneTree::*)() const>(&SceneTree::is_quit_on_go_back), static_cast<void (SceneTree::*)(bool)>(&SceneTree::set_quit_on_go_back)>((new std::string("quit_on_go_back"))->c_str())
			.property<static_cast<bool (SceneTree::*)() const>(&SceneTree::is_debugging_collisions_hint), static_cast<void (SceneTree::*)(bool)>(&SceneTree::set_debug_collisions_hint)>((new std::string("debug_collisions_hint"))->c_str())
			.property<static_cast<bool (SceneTree::*)() const>(&SceneTree::is_debugging_paths_hint), static_cast<void (SceneTree::*)(bool)>(&SceneTree::set_debug_paths_hint)>((new std::string("debug_paths_hint"))->c_str())
			.property<static_cast<bool (SceneTree::*)() const>(&SceneTree::is_debugging_navigation_hint), static_cast<void (SceneTree::*)(bool)>(&SceneTree::set_debug_navigation_hint)>((new std::string("debug_navigation_hint"))->c_str())
			.property<static_cast<bool (SceneTree::*)() const>(&SceneTree::is_paused), static_cast<void (SceneTree::*)(bool)>(&SceneTree::set_pause)>((new std::string("paused"))->c_str())
			.property<static_cast<Node *(SceneTree::*)() const>(&SceneTree::get_edited_scene_root), static_cast<void (SceneTree::*)(Node *)>(&SceneTree::set_edited_scene_root)>((new std::string("edited_scene_root"))->c_str())
			.property<static_cast<Node *(SceneTree::*)() const>(&SceneTree::get_current_scene), static_cast<void (SceneTree::*)(Node *)>(&SceneTree::set_current_scene)>((new std::string("current_scene"))->c_str())
			.property<static_cast<Window *(SceneTree::*)() const>(&SceneTree::get_root)>((new std::string("root"))->c_str())
			.property<static_cast<bool (SceneTree::*)() const>(&SceneTree::is_multiplayer_poll_enabled), static_cast<void (SceneTree::*)(bool)>(&SceneTree::set_multiplayer_poll_enabled)>((new std::string("multiplayer_poll"))->c_str())
			.property<static_cast<bool (SceneTree::*)() const>(&SceneTree::is_physics_interpolation_enabled), static_cast<void (SceneTree::*)(bool)>(&SceneTree::set_physics_interpolation_enabled)>((new std::string("physics_interpolation"))->c_str())
			.fun<static_cast<bool (SceneTree::*)(const StringName &) const>(&SceneTree::has_group)>((new std::string("has_group"))->c_str())
			.fun<static_cast<Ref<SceneTreeTimer> (SceneTree::*)(double, bool, bool, bool)>(&SceneTree::create_timer)>((new std::string("create_timer"))->c_str())
			.fun<static_cast<Ref<Tween> (SceneTree::*)()>(&SceneTree::create_tween)>((new std::string("create_tween"))->c_str())
			.fun<static_cast<TypedArray<Tween> (SceneTree::*)()>(&SceneTree::get_processed_tweens)>((new std::string("get_processed_tweens"))->c_str())
			.fun<static_cast<int32_t (SceneTree::*)() const>(&SceneTree::get_node_count)>((new std::string("get_node_count"))->c_str())
			.fun<static_cast<int64_t (SceneTree::*)() const>(&SceneTree::get_frame)>((new std::string("get_frame"))->c_str())
			.fun<static_cast<void (SceneTree::*)(int32_t)>(&SceneTree::quit)>((new std::string("quit"))->c_str())
			.fun<static_cast<void (SceneTree::*)(Object *)>(&SceneTree::queue_delete)>((new std::string("queue_delete"))->c_str())
			.fun<static_cast<void (SceneTree::*)(int64_t, const StringName &, const StringName &, rest<Variant> args)>(&SceneTree::call_group_flags)>((new std::string("call_group_flags"))->c_str())
			.fun<static_cast<void (SceneTree::*)(uint32_t, const StringName &, int32_t)>(&SceneTree::notify_group_flags)>((new std::string("notify_group_flags"))->c_str())
			.fun<static_cast<void (SceneTree::*)(uint32_t, const StringName &, const String &, const Variant &)>(&SceneTree::set_group_flags)>((new std::string("set_group_flags"))->c_str())
			.fun<static_cast<void (SceneTree::*)(const StringName &, const StringName &, rest<Variant> args)>(&SceneTree::call_group)>((new std::string("call_group"))->c_str())
			.fun<static_cast<void (SceneTree::*)(const StringName &, int32_t)>(&SceneTree::notify_group)>((new std::string("notify_group"))->c_str())
			.fun<static_cast<void (SceneTree::*)(const StringName &, const String &, const Variant &)>(&SceneTree::set_group)>((new std::string("set_group"))->c_str())
			.fun<static_cast<TypedArray<Node> (SceneTree::*)(const StringName &)>(&SceneTree::get_nodes_in_group)>((new std::string("get_nodes_in_group"))->c_str())
			.fun<static_cast<Node *(SceneTree::*)(const StringName &)>(&SceneTree::get_first_node_in_group)>((new std::string("get_first_node_in_group"))->c_str())
			.fun<static_cast<int32_t (SceneTree::*)(const StringName &) const>(&SceneTree::get_node_count_in_group)>((new std::string("get_node_count_in_group"))->c_str())
			.fun<static_cast<Error (SceneTree::*)(const String &)>(&SceneTree::change_scene_to_file)>((new std::string("change_scene_to_file"))->c_str())
			.fun<static_cast<Error (SceneTree::*)(const Ref<PackedScene> &)>(&SceneTree::change_scene_to_packed)>((new std::string("change_scene_to_packed"))->c_str())
			.fun<static_cast<Error (SceneTree::*)()>(&SceneTree::reload_current_scene)>((new std::string("reload_current_scene"))->c_str())
			.fun<static_cast<void (SceneTree::*)()>(&SceneTree::unload_current_scene)>((new std::string("unload_current_scene"))->c_str())
			.fun<static_cast<void (SceneTree::*)(const Ref<MultiplayerAPI> &, const NodePath &)>(&SceneTree::set_multiplayer)>((new std::string("set_multiplayer"))->c_str())
			.fun<static_cast<Ref<MultiplayerAPI> (SceneTree::*)(const NodePath &) const>(&SceneTree::get_multiplayer)>((new std::string("get_multiplayer"))->c_str());
	qjs::Value _GroupCallFlags = context->newObject();
	_GroupCallFlags[(new std::string("GROUP_CALL_DEFAULT"))->c_str()] = SceneTree::GroupCallFlags::GROUP_CALL_DEFAULT;
	_GroupCallFlags[(new std::string("GROUP_CALL_REVERSE"))->c_str()] = SceneTree::GroupCallFlags::GROUP_CALL_REVERSE;
	_GroupCallFlags[(new std::string("GROUP_CALL_DEFERRED"))->c_str()] = SceneTree::GroupCallFlags::GROUP_CALL_DEFERRED;
	_GroupCallFlags[(new std::string("GROUP_CALL_UNIQUE"))->c_str()] = SceneTree::GroupCallFlags::GROUP_CALL_UNIQUE;
	_module.add("GroupCallFlags", std::move(_GroupCallFlags));
}