#include <godot_cpp/classes/missing_node.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MissingNode() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<MissingNode>("MissingNode")
			.constructor<>()
			.base<Node>()
			.property<static_cast<String (MissingNode::*)() const>(&MissingNode::get_original_class), static_cast<void (MissingNode::*)(const String &)>(&MissingNode::set_original_class)>((new std::string("original_class"))->c_str())
			.property<static_cast<String (MissingNode::*)() const>(&MissingNode::get_original_scene), static_cast<void (MissingNode::*)(const String &)>(&MissingNode::set_original_scene)>((new std::string("original_scene"))->c_str())
			.property<static_cast<bool (MissingNode::*)() const>(&MissingNode::is_recording_properties), static_cast<void (MissingNode::*)(bool)>(&MissingNode::set_recording_properties)>((new std::string("recording_properties"))->c_str());
}