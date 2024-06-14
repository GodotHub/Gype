
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RefCounted() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RefCounted>("RefCounted")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<bool (RefCounted::*)()>(&RefCounted::init_ref)>((new std::string("init_ref"))->c_str())
			.fun<static_cast<bool (RefCounted::*)()>(&RefCounted::reference)>((new std::string("reference"))->c_str())
			.fun<static_cast<bool (RefCounted::*)()>(&RefCounted::unreference)>((new std::string("unreference"))->c_str())
			.fun<static_cast<int32_t (RefCounted::*)() const>(&RefCounted::get_reference_count)>((new std::string("get_reference_count"))->c_str());
}