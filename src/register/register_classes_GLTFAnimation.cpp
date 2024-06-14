#include <godot_cpp/classes/gltf_animation.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFAnimation() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFAnimation>("GLTFAnimation")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (GLTFAnimation::*)()>(&GLTFAnimation::get_original_name), static_cast<void (GLTFAnimation::*)(const String &)>(&GLTFAnimation::set_original_name)>((new std::string("original_name"))->c_str())
			.property<static_cast<bool (GLTFAnimation::*)() const>(&GLTFAnimation::get_loop), static_cast<void (GLTFAnimation::*)(bool)>(&GLTFAnimation::set_loop)>((new std::string("loop"))->c_str())
			.fun<static_cast<Variant (GLTFAnimation::*)(const StringName &)>(&GLTFAnimation::get_additional_data)>((new std::string("get_additional_data"))->c_str())
			.fun<static_cast<void (GLTFAnimation::*)(const StringName &, const Variant &)>(&GLTFAnimation::set_additional_data)>((new std::string("set_additional_data"))->c_str());
}