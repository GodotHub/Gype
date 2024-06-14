#include <godot_cpp/classes/instance_placeholder.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InstancePlaceholder() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<InstancePlaceholder>("InstancePlaceholder")
			.constructor<>()
			.base<Node>()
			.fun<static_cast<Dictionary (InstancePlaceholder::*)(bool)>(&InstancePlaceholder::get_stored_values)>((new std::string("get_stored_values"))->c_str())
			.fun<static_cast<Node *(InstancePlaceholder::*)(bool, const Ref<PackedScene> &)>(&InstancePlaceholder::create_instance)>((new std::string("create_instance"))->c_str())
			.fun<static_cast<String (InstancePlaceholder::*)() const>(&InstancePlaceholder::get_instance_path)>((new std::string("get_instance_path"))->c_str());
}