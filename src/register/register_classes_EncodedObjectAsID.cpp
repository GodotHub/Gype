
#include <godot_cpp/classes/encoded_object_as_id.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EncodedObjectAsID() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EncodedObjectAsID>("EncodedObjectAsID")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<uint64_t (EncodedObjectAsID::*)() const>(&EncodedObjectAsID::get_object_id), static_cast<void (EncodedObjectAsID::*)(uint64_t)>(&EncodedObjectAsID::set_object_id)>((new std::string("object_id"))->c_str());
}