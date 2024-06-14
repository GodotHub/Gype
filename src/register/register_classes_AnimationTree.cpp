#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/animation_tree.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationTree() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<AnimationTree>("AnimationTree")
			.constructor<>()
			.base<AnimationMixer>()
			.property<static_cast<Ref<AnimationRootNode> (AnimationTree::*)() const>(&AnimationTree::get_tree_root), static_cast<void (AnimationTree::*)(const Ref<AnimationRootNode> &)>(&AnimationTree::set_tree_root)>((new std::string("tree_root"))->c_str())
			.property<static_cast<NodePath (AnimationTree::*)() const>(&AnimationTree::get_advance_expression_base_node), static_cast<void (AnimationTree::*)(const NodePath &)>(&AnimationTree::set_advance_expression_base_node)>((new std::string("advance_expression_base_node"))->c_str())
			.property<static_cast<NodePath (AnimationTree::*)() const>(&AnimationTree::get_animation_player), static_cast<void (AnimationTree::*)(const NodePath &)>(&AnimationTree::set_animation_player)>((new std::string("anim_player"))->c_str())
			.fun<static_cast<void (AnimationTree::*)(AnimationTree::AnimationProcessCallback)>(&AnimationTree::set_process_callback)>((new std::string("set_process_callback"))->c_str())
			.fun<static_cast<AnimationTree::AnimationProcessCallback (AnimationTree::*)() const>(&AnimationTree::get_process_callback)>((new std::string("get_process_callback"))->c_str());
	qjs::Value _AnimationProcessCallback = context->newObject();
	_AnimationProcessCallback[(new std::string("ANIMATION_PROCESS_PHYSICS"))->c_str()] = AnimationTree::AnimationProcessCallback::ANIMATION_PROCESS_PHYSICS;
	_AnimationProcessCallback[(new std::string("ANIMATION_PROCESS_IDLE"))->c_str()] = AnimationTree::AnimationProcessCallback::ANIMATION_PROCESS_IDLE;
	_AnimationProcessCallback[(new std::string("ANIMATION_PROCESS_MANUAL"))->c_str()] = AnimationTree::AnimationProcessCallback::ANIMATION_PROCESS_MANUAL;
	_module.add("AnimationProcessCallback", std::move(_AnimationProcessCallback));
}