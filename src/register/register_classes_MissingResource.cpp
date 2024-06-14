#include <godot_cpp/classes/missing_resource.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MissingResource() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MissingResource>("MissingResource")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (MissingResource::*)() const>(&MissingResource::get_original_class), static_cast<void (MissingResource::*)(const String &)>(&MissingResource::set_original_class)>((new std::string("original_class"))->c_str())
			.property<static_cast<bool (MissingResource::*)() const>(&MissingResource::is_recording_properties), static_cast<void (MissingResource::*)(bool)>(&MissingResource::set_recording_properties)>((new std::string("recording_properties"))->c_str());
}