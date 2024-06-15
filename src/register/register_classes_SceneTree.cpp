#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/scene_tree_timer.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SceneTree() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SceneTree>("SceneTree")
            .constructor<>()
            .base<MainLoop>()
            .property<static_cast<bool(SceneTree::*)()const>(&SceneTree::is_auto_accept_quit),static_cast<void(SceneTree::*)(bool)>(&SceneTree::set_auto_accept_quit)>("auto_accept_quit")
            .property<static_cast<bool(SceneTree::*)()const>(&SceneTree::is_quit_on_go_back),static_cast<void(SceneTree::*)(bool)>(&SceneTree::set_quit_on_go_back)>("quit_on_go_back")
            .property<static_cast<bool(SceneTree::*)()const>(&SceneTree::is_debugging_collisions_hint),static_cast<void(SceneTree::*)(bool)>(&SceneTree::set_debug_collisions_hint)>("debug_collisions_hint")
            .property<static_cast<bool(SceneTree::*)()const>(&SceneTree::is_debugging_paths_hint),static_cast<void(SceneTree::*)(bool)>(&SceneTree::set_debug_paths_hint)>("debug_paths_hint")
            .property<static_cast<bool(SceneTree::*)()const>(&SceneTree::is_debugging_navigation_hint),static_cast<void(SceneTree::*)(bool)>(&SceneTree::set_debug_navigation_hint)>("debug_navigation_hint")
            .property<static_cast<bool(SceneTree::*)()const>(&SceneTree::is_paused),static_cast<void(SceneTree::*)(bool)>(&SceneTree::set_pause)>("paused")
            .property<static_cast<Node *(SceneTree::*)()const>(&SceneTree::get_edited_scene_root),static_cast<void(SceneTree::*)(Node *)>(&SceneTree::set_edited_scene_root)>("edited_scene_root")
            .property<static_cast<Node *(SceneTree::*)()const>(&SceneTree::get_current_scene),static_cast<void(SceneTree::*)(Node *)>(&SceneTree::set_current_scene)>("current_scene")
            .property<static_cast<Window *(SceneTree::*)()const>(&SceneTree::get_root)>("root")
            .property<static_cast<bool(SceneTree::*)()const>(&SceneTree::is_multiplayer_poll_enabled),static_cast<void(SceneTree::*)(bool)>(&SceneTree::set_multiplayer_poll_enabled)>("multiplayer_poll")
            .property<static_cast<bool(SceneTree::*)()const>(&SceneTree::is_physics_interpolation_enabled),static_cast<void(SceneTree::*)(bool)>(&SceneTree::set_physics_interpolation_enabled)>("physics_interpolation")
            .fun<static_cast<bool(SceneTree::*)(const StringName &)const>(&SceneTree::has_group)>("has_group")
            .fun<static_cast<Ref<SceneTreeTimer>(SceneTree::*)(double,bool,bool,bool)>(&SceneTree::create_timer)>("create_timer")
            .fun<static_cast<Ref<Tween>(SceneTree::*)()>(&SceneTree::create_tween)>("create_tween")
            .fun<static_cast<TypedArray<Tween>(SceneTree::*)()>(&SceneTree::get_processed_tweens)>("get_processed_tweens")
            .fun<static_cast<int32_t(SceneTree::*)()const>(&SceneTree::get_node_count)>("get_node_count")
            .fun<static_cast<int64_t(SceneTree::*)()const>(&SceneTree::get_frame)>("get_frame")
            .fun<static_cast<void(SceneTree::*)(int32_t)>(&SceneTree::quit)>("quit")
            .fun<static_cast<void(SceneTree::*)(Object *)>(&SceneTree::queue_delete)>("queue_delete")
            .fun<static_cast<void(SceneTree::*)(int64_t,const StringName &,const StringName &,rest<Variant> args)>(&SceneTree::call_group_flags)>("call_group_flags")
            .fun<static_cast<void(SceneTree::*)(uint32_t,const StringName &,int32_t)>(&SceneTree::notify_group_flags)>("notify_group_flags")
            .fun<static_cast<void(SceneTree::*)(uint32_t,const StringName &,const String &,const Variant &)>(&SceneTree::set_group_flags)>("set_group_flags")
            .fun<static_cast<void(SceneTree::*)(const StringName &,const StringName &,rest<Variant> args)>(&SceneTree::call_group)>("call_group")
            .fun<static_cast<void(SceneTree::*)(const StringName &,int32_t)>(&SceneTree::notify_group)>("notify_group")
            .fun<static_cast<void(SceneTree::*)(const StringName &,const String &,const Variant &)>(&SceneTree::set_group)>("set_group")
            .fun<static_cast<TypedArray<Node>(SceneTree::*)(const StringName &)>(&SceneTree::get_nodes_in_group)>("get_nodes_in_group")
            .fun<static_cast<Node *(SceneTree::*)(const StringName &)>(&SceneTree::get_first_node_in_group)>("get_first_node_in_group")
            .fun<static_cast<int32_t(SceneTree::*)(const StringName &)const>(&SceneTree::get_node_count_in_group)>("get_node_count_in_group")
            .fun<static_cast<Error(SceneTree::*)(const String &)>(&SceneTree::change_scene_to_file)>("change_scene_to_file")
            .fun<static_cast<Error(SceneTree::*)(const Ref<PackedScene> &)>(&SceneTree::change_scene_to_packed)>("change_scene_to_packed")
            .fun<static_cast<Error(SceneTree::*)()>(&SceneTree::reload_current_scene)>("reload_current_scene")
            .fun<static_cast<void(SceneTree::*)()>(&SceneTree::unload_current_scene)>("unload_current_scene")
            .fun<static_cast<void(SceneTree::*)(const Ref<MultiplayerAPI> &,const NodePath &)>(&SceneTree::set_multiplayer)>("set_multiplayer")
            .fun<static_cast<Ref<MultiplayerAPI>(SceneTree::*)(const NodePath &)const>(&SceneTree::get_multiplayer)>("get_multiplayer")
;    qjs::Value _GroupCallFlags = context->newObject();
    _GroupCallFlags["GROUP_CALL_DEFAULT"] = SceneTree::GroupCallFlags::GROUP_CALL_DEFAULT;
    _GroupCallFlags["GROUP_CALL_REVERSE"] = SceneTree::GroupCallFlags::GROUP_CALL_REVERSE;
    _GroupCallFlags["GROUP_CALL_DEFERRED"] = SceneTree::GroupCallFlags::GROUP_CALL_DEFERRED;
    _GroupCallFlags["GROUP_CALL_UNIQUE"] = SceneTree::GroupCallFlags::GROUP_CALL_UNIQUE;
    _module.add("GroupCallFlags", std::move(_GroupCallFlags));
}