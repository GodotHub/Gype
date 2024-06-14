#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Resource() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Resource>("Resource")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (Resource::*)() const>(&Resource::is_local_to_scene), static_cast<void (Resource::*)(bool)>(&Resource::set_local_to_scene)>((new std::string("resource_local_to_scene"))->c_str())
			.property<static_cast<String (Resource::*)() const>(&Resource::get_path), static_cast<void (Resource::*)(const String &)>(&Resource::set_path)>((new std::string("resource_path"))->c_str())
			.property<static_cast<String (Resource::*)() const>(&Resource::get_name), static_cast<void (Resource::*)(const String &)>(&Resource::set_name)>((new std::string("resource_name"))->c_str())
			.property<static_cast<String (Resource::*)() const>(&Resource::get_scene_unique_id), static_cast<void (Resource::*)(const String &)>(&Resource::set_scene_unique_id)>((new std::string("resource_scene_unique_id"))->c_str())
			.fun<static_cast<void (Resource::*)()>(&Resource::_setup_local_to_scene)>((new std::string("_setup_local_to_scene"))->c_str())
			.fun<static_cast<void (Resource::*)(const String &)>(&Resource::take_over_path)>((new std::string("take_over_path"))->c_str())
			.fun<static_cast<RID (Resource::*)() const>(&Resource::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<Node *(Resource::*)() const>(&Resource::get_local_scene)>((new std::string("get_local_scene"))->c_str())
			.fun<static_cast<void (Resource::*)()>(&Resource::setup_local_to_scene)>((new std::string("setup_local_to_scene"))->c_str())
			.static_fun<static_cast<String (*)()>(&Resource::generate_scene_unique_id)>((new std::string("generate_scene_unique_id"))->c_str())
			.fun<static_cast<void (Resource::*)()>(&Resource::emit_changed)>((new std::string("emit_changed"))->c_str())
			.fun<static_cast<Ref<Resource> (Resource::*)(bool) const>(&Resource::duplicate)>((new std::string("duplicate"))->c_str());
}