#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_AnimationTree() {
    qjs::Context::Module &_module = _Node;
    _module.class_<AnimationTree>("AnimationTree")
           .constructor<>()
           .property<AnimationTree::get_tree_root, AnimationTree::set_tree_root>("tree_root")
           .property<AnimationTree::get_advance_expression_base_node, AnimationTree::set_advance_expression_base_node>("advance_expression_base_node")
           .property<AnimationTree::get_animation_player, AnimationTree::set_animation_player>("anim_player")
		   .fun<static_cast<void(AnimationTree::*)(AnimationTree::AnimationProcessCallback)>(&AnimationTree::set_process_callback)>("set_process_callback")
		   .fun<static_cast<AnimationTree::AnimationProcessCallback(AnimationTree::*)()const>(&AnimationTree::get_process_callback)>("get_process_callback")
;}