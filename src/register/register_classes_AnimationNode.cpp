
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNode() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNode>("AnimationNode")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<bool (AnimationNode::*)() const>(&AnimationNode::is_filter_enabled), static_cast<void (AnimationNode::*)(bool)>(&AnimationNode::set_filter_enabled)>((new std::string("filter_enabled"))->c_str())
			.fun<static_cast<Dictionary (AnimationNode::*)() const>(&AnimationNode::_get_child_nodes)>((new std::string("_get_child_nodes"))->c_str())
			.fun<static_cast<Array (AnimationNode::*)() const>(&AnimationNode::_get_parameter_list)>((new std::string("_get_parameter_list"))->c_str())
			.fun<static_cast<Ref<AnimationNode> (AnimationNode::*)(const StringName &) const>(&AnimationNode::_get_child_by_name)>((new std::string("_get_child_by_name"))->c_str())
			.fun<static_cast<Variant (AnimationNode::*)(const StringName &) const>(&AnimationNode::_get_parameter_default_value)>((new std::string("_get_parameter_default_value"))->c_str())
			.fun<static_cast<bool (AnimationNode::*)(const StringName &) const>(&AnimationNode::_is_parameter_read_only)>((new std::string("_is_parameter_read_only"))->c_str())
			.fun<static_cast<double (AnimationNode::*)(double, bool, bool, bool) const>(&AnimationNode::_process)>((new std::string("_process"))->c_str())
			.fun<static_cast<String (AnimationNode::*)() const>(&AnimationNode::_get_caption)>((new std::string("_get_caption"))->c_str())
			.fun<static_cast<bool (AnimationNode::*)() const>(&AnimationNode::_has_filter)>((new std::string("_has_filter"))->c_str())
			.fun<static_cast<bool (AnimationNode::*)(const String &)>(&AnimationNode::add_input)>((new std::string("add_input"))->c_str())
			.fun<static_cast<void (AnimationNode::*)(int32_t)>(&AnimationNode::remove_input)>((new std::string("remove_input"))->c_str())
			.fun<static_cast<bool (AnimationNode::*)(int32_t, const String &)>(&AnimationNode::set_input_name)>((new std::string("set_input_name"))->c_str())
			.fun<static_cast<String (AnimationNode::*)(int32_t) const>(&AnimationNode::get_input_name)>((new std::string("get_input_name"))->c_str())
			.fun<static_cast<int32_t (AnimationNode::*)() const>(&AnimationNode::get_input_count)>((new std::string("get_input_count"))->c_str())
			.fun<static_cast<int32_t (AnimationNode::*)(const String &) const>(&AnimationNode::find_input)>((new std::string("find_input"))->c_str())
			.fun<static_cast<void (AnimationNode::*)(const NodePath &, bool)>(&AnimationNode::set_filter_path)>((new std::string("set_filter_path"))->c_str())
			.fun<static_cast<bool (AnimationNode::*)(const NodePath &) const>(&AnimationNode::is_path_filtered)>((new std::string("is_path_filtered"))->c_str())
			.fun<static_cast<void (AnimationNode::*)(const StringName &, double, double, bool, bool, double, Animation::LoopedFlag)>(&AnimationNode::blend_animation)>((new std::string("blend_animation"))->c_str())
			.fun<static_cast<double (AnimationNode::*)(const StringName &, const Ref<AnimationNode> &, double, bool, bool, double, AnimationNode::FilterAction, bool, bool)>(&AnimationNode::blend_node)>((new std::string("blend_node"))->c_str())
			.fun<static_cast<double (AnimationNode::*)(int32_t, double, bool, bool, double, AnimationNode::FilterAction, bool, bool)>(&AnimationNode::blend_input)>((new std::string("blend_input"))->c_str())
			.fun<static_cast<void (AnimationNode::*)(const StringName &, const Variant &)>(&AnimationNode::set_parameter)>((new std::string("set_parameter"))->c_str())
			.fun<static_cast<Variant (AnimationNode::*)(const StringName &) const>(&AnimationNode::get_parameter)>((new std::string("get_parameter"))->c_str());
	qjs::Value _FilterAction = context->newObject();
	_FilterAction[(new std::string("FILTER_IGNORE"))->c_str()] = AnimationNode::FilterAction::FILTER_IGNORE;
	_FilterAction[(new std::string("FILTER_PASS"))->c_str()] = AnimationNode::FilterAction::FILTER_PASS;
	_FilterAction[(new std::string("FILTER_STOP"))->c_str()] = AnimationNode::FilterAction::FILTER_STOP;
	_FilterAction[(new std::string("FILTER_BLEND"))->c_str()] = AnimationNode::FilterAction::FILTER_BLEND;
	_module.add("FilterAction", std::move(_FilterAction));
}