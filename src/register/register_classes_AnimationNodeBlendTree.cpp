
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_blend_tree.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeBlendTree() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeBlendTree>("AnimationNodeBlendTree")
			.constructor<>()
			.base<AnimationRootNode>()
			.static_fun<&AnimationNodeBlendTree::CONNECTION_OK>((new std::string("CONNECTION_OK"))->c_str())
			.static_fun<&AnimationNodeBlendTree::CONNECTION_ERROR_NO_INPUT>((new std::string("CONNECTION_ERROR_NO_INPUT"))->c_str())
			.static_fun<&AnimationNodeBlendTree::CONNECTION_ERROR_NO_INPUT_INDEX>((new std::string("CONNECTION_ERROR_NO_INPUT_INDEX"))->c_str())
			.static_fun<&AnimationNodeBlendTree::CONNECTION_ERROR_NO_OUTPUT>((new std::string("CONNECTION_ERROR_NO_OUTPUT"))->c_str())
			.static_fun<&AnimationNodeBlendTree::CONNECTION_ERROR_SAME_NODE>((new std::string("CONNECTION_ERROR_SAME_NODE"))->c_str())
			.static_fun<&AnimationNodeBlendTree::CONNECTION_ERROR_CONNECTION_EXISTS>((new std::string("CONNECTION_ERROR_CONNECTION_EXISTS"))->c_str())
			.property<static_cast<Vector2 (AnimationNodeBlendTree::*)() const>(&AnimationNodeBlendTree::get_graph_offset), static_cast<void (AnimationNodeBlendTree::*)(const Vector2 &)>(&AnimationNodeBlendTree::set_graph_offset)>((new std::string("graph_offset"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendTree::*)(const StringName &, const Ref<AnimationNode> &, const Vector2 &)>(&AnimationNodeBlendTree::add_node)>((new std::string("add_node"))->c_str())
			.fun<static_cast<Ref<AnimationNode> (AnimationNodeBlendTree::*)(const StringName &) const>(&AnimationNodeBlendTree::get_node)>((new std::string("get_node"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendTree::*)(const StringName &)>(&AnimationNodeBlendTree::remove_node)>((new std::string("remove_node"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendTree::*)(const StringName &, const StringName &)>(&AnimationNodeBlendTree::rename_node)>((new std::string("rename_node"))->c_str())
			.fun<static_cast<bool (AnimationNodeBlendTree::*)(const StringName &) const>(&AnimationNodeBlendTree::has_node)>((new std::string("has_node"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendTree::*)(const StringName &, int32_t, const StringName &)>(&AnimationNodeBlendTree::connect_node)>((new std::string("connect_node"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendTree::*)(const StringName &, int32_t)>(&AnimationNodeBlendTree::disconnect_node)>((new std::string("disconnect_node"))->c_str())
			.fun<static_cast<void (AnimationNodeBlendTree::*)(const StringName &, const Vector2 &)>(&AnimationNodeBlendTree::set_node_position)>((new std::string("set_node_position"))->c_str())
			.fun<static_cast<Vector2 (AnimationNodeBlendTree::*)(const StringName &) const>(&AnimationNodeBlendTree::get_node_position)>((new std::string("get_node_position"))->c_str());
}