#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_blend_tree.hpp>

using namespace godot;

void register_classes_AnimationNodeBlendTree() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeBlendTree>("AnimationNodeBlendTree")
           .constructor<>()
           .property<AnimationNodeBlendTree::get_graph_offset, AnimationNodeBlendTree::set_graph_offset>("graph_offset")
		    .fun<static_cast<void(AnimationNodeBlendTree::*)(const StringName &,const Ref<AnimationNode> &,const Vector2 &)>(&AnimationNodeBlendTree::add_node)>("add_node")
		    .fun<static_cast<Ref<AnimationNode>(AnimationNodeBlendTree::*)(const StringName &)const>(&AnimationNodeBlendTree::get_node)>("get_node")
		    .fun<static_cast<void(AnimationNodeBlendTree::*)(const StringName &)>(&AnimationNodeBlendTree::remove_node)>("remove_node")
		    .fun<static_cast<void(AnimationNodeBlendTree::*)(const StringName &,const StringName &)>(&AnimationNodeBlendTree::rename_node)>("rename_node")
		    .fun<static_cast<bool(AnimationNodeBlendTree::*)(const StringName &)const>(&AnimationNodeBlendTree::has_node)>("has_node")
		    .fun<static_cast<void(AnimationNodeBlendTree::*)(const StringName &,int32_t,const StringName &)>(&AnimationNodeBlendTree::connect_node)>("connect_node")
		    .fun<static_cast<void(AnimationNodeBlendTree::*)(const StringName &,int32_t)>(&AnimationNodeBlendTree::disconnect_node)>("disconnect_node")
		    .fun<static_cast<void(AnimationNodeBlendTree::*)(const StringName &,const Vector2 &)>(&AnimationNodeBlendTree::set_node_position)>("set_node_position")
		    .fun<static_cast<Vector2(AnimationNodeBlendTree::*)(const StringName &)const>(&AnimationNodeBlendTree::get_node_position)>("get_node_position")
;}