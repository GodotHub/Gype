#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNode() {
	qjs::Context::Module &_module = _General;
	_module.class_<AnimationNode>("AnimationNode")
			.constructor<>()
			.property<&AnimationNode::is_filter_enabled, &AnimationNode::set_filter_enabled>("filter_enabled")
			.fun<static_cast<Dictionary (AnimationNode::*)() const>(&AnimationNode::_get_child_nodes)>("_get_child_nodes")
			.fun<static_cast<Array (AnimationNode::*)() const>(&AnimationNode::_get_parameter_list)>("_get_parameter_list")
			.fun<static_cast<Ref<AnimationNode> (AnimationNode::*)(const StringName &) const>(&AnimationNode::_get_child_by_name)>("_get_child_by_name")
			.fun<static_cast<Variant (AnimationNode::*)(const StringName &) const>(&AnimationNode::_get_parameter_default_value)>("_get_parameter_default_value")
			.fun<static_cast<bool (AnimationNode::*)(const StringName &) const>(&AnimationNode::_is_parameter_read_only)>("_is_parameter_read_only")
			.fun<static_cast<double (AnimationNode::*)(double, bool, bool, bool) const>(&AnimationNode::_process)>("_process")
			.fun<static_cast<String (AnimationNode::*)() const>(&AnimationNode::_get_caption)>("_get_caption")
			.fun<static_cast<bool (AnimationNode::*)() const>(&AnimationNode::_has_filter)>("_has_filter")
			.fun<static_cast<bool (AnimationNode::*)(const String &)>(&AnimationNode::add_input)>("add_input")
			.fun<static_cast<void (AnimationNode::*)(int32_t)>(&AnimationNode::remove_input)>("remove_input")
			.fun<static_cast<bool (AnimationNode::*)(int32_t, const String &)>(&AnimationNode::set_input_name)>("set_input_name")
			.fun<static_cast<String (AnimationNode::*)(int32_t) const>(&AnimationNode::get_input_name)>("get_input_name")
			.fun<static_cast<int32_t (AnimationNode::*)() const>(&AnimationNode::get_input_count)>("get_input_count")
			.fun<static_cast<int32_t (AnimationNode::*)(const String &) const>(&AnimationNode::find_input)>("find_input")
			.fun<static_cast<void (AnimationNode::*)(const NodePath &, bool)>(&AnimationNode::set_filter_path)>("set_filter_path")
			.fun<static_cast<bool (AnimationNode::*)(const NodePath &) const>(&AnimationNode::is_path_filtered)>("is_path_filtered")
			.fun<static_cast<void (AnimationNode::*)(const StringName &, double, double, bool, bool, double, Animation::LoopedFlag)>(&AnimationNode::blend_animation)>("blend_animation")
			.fun<static_cast<double (AnimationNode::*)(const StringName &, const Ref<AnimationNode> &, double, bool, bool, double, AnimationNode::FilterAction, bool, bool)>(&AnimationNode::blend_node)>("blend_node")
			.fun<static_cast<double (AnimationNode::*)(int32_t, double, bool, bool, double, AnimationNode::FilterAction, bool, bool)>(&AnimationNode::blend_input)>("blend_input")
			.fun<static_cast<void (AnimationNode::*)(const StringName &, const Variant &)>(&AnimationNode::set_parameter)>("set_parameter")
			.fun<static_cast<Variant (AnimationNode::*)(const StringName &) const>(&AnimationNode::get_parameter)>("get_parameter");
}