#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_SceneTree() {
    qjs::Context::Module &_module = _System;
    _module.class_<SceneTree>("SceneTree")
           .constructor<>()
           .property<SceneTree::is_auto_accept_quit, SceneTree::set_auto_accept_quit>("auto_accept_quit")
           .property<SceneTree::is_quit_on_go_back, SceneTree::set_quit_on_go_back>("quit_on_go_back")
           .property<SceneTree::is_debugging_collisions_hint, SceneTree::set_debug_collisions_hint>("debug_collisions_hint")
           .property<SceneTree::is_debugging_paths_hint, SceneTree::set_debug_paths_hint>("debug_paths_hint")
           .property<SceneTree::is_debugging_navigation_hint, SceneTree::set_debug_navigation_hint>("debug_navigation_hint")
           .property<SceneTree::is_paused, SceneTree::set_pause>("paused")
           .property<SceneTree::get_edited_scene_root, SceneTree::set_edited_scene_root>("edited_scene_root")
           .property<SceneTree::get_current_scene, SceneTree::set_current_scene>("current_scene")
           .property<SceneTree::get_root>("root")
           .property<SceneTree::is_multiplayer_poll_enabled, SceneTree::set_multiplayer_poll_enabled>("multiplayer_poll")
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
		   .fun<static_cast<Error(SceneTree::*)(const String &)>(&SceneTree::change_scene_to_file)>("change_scene_to_file")
		   .fun<static_cast<Error(SceneTree::*)(const Ref<PackedScene> &)>(&SceneTree::change_scene_to_packed)>("change_scene_to_packed")
		   .fun<static_cast<Error(SceneTree::*)()>(&SceneTree::reload_current_scene)>("reload_current_scene")
		   .fun<static_cast<void(SceneTree::*)()>(&SceneTree::unload_current_scene)>("unload_current_scene")
		   .fun<static_cast<void(SceneTree::*)(const Ref<MultiplayerAPI> &,const NodePath &)>(&SceneTree::set_multiplayer)>("set_multiplayer")
		   .fun<static_cast<Ref<MultiplayerAPI>(SceneTree::*)(const NodePath &)const>(&SceneTree::get_multiplayer)>("get_multiplayer")
;}