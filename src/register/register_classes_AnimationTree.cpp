#include <godot_cpp/classes/animation_tree.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationTree() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<AnimationTree>("AnimationTree")
            .constructor<>()
            .base<AnimationMixer>()
            .property<static_cast<Ref<AnimationRootNode>(AnimationTree::*)()const>(&AnimationTree::get_tree_root),static_cast<void(AnimationTree::*)(const Ref<AnimationRootNode> &)>(&AnimationTree::set_tree_root)>("tree_root")
            .property<static_cast<NodePath(AnimationTree::*)()const>(&AnimationTree::get_advance_expression_base_node),static_cast<void(AnimationTree::*)(const NodePath &)>(&AnimationTree::set_advance_expression_base_node)>("advance_expression_base_node")
            .property<static_cast<NodePath(AnimationTree::*)()const>(&AnimationTree::get_animation_player),static_cast<void(AnimationTree::*)(const NodePath &)>(&AnimationTree::set_animation_player)>("anim_player")
            .fun<static_cast<void(AnimationTree::*)(AnimationTree::AnimationProcessCallback)>(&AnimationTree::set_process_callback)>("set_process_callback")
            .fun<static_cast<AnimationTree::AnimationProcessCallback(AnimationTree::*)()const>(&AnimationTree::get_process_callback)>("get_process_callback")
;    qjs::Value _AnimationProcessCallback = context->newObject();
    _AnimationProcessCallback["ANIMATION_PROCESS_PHYSICS"] = AnimationTree::AnimationProcessCallback::ANIMATION_PROCESS_PHYSICS;
    _AnimationProcessCallback["ANIMATION_PROCESS_IDLE"] = AnimationTree::AnimationProcessCallback::ANIMATION_PROCESS_IDLE;
    _AnimationProcessCallback["ANIMATION_PROCESS_MANUAL"] = AnimationTree::AnimationProcessCallback::ANIMATION_PROCESS_MANUAL;
    _module.add("AnimationProcessCallback", std::move(_AnimationProcessCallback));
}