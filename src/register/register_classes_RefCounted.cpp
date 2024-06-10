#include <godot_cpp/classes/ref_counted.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RefCounted() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RefCounted>("RefCounted")
			.base<Object>()
			.constructor<>()
			.fun<static_cast<bool (RefCounted::*)()>(&RefCounted::init_ref)>("init_ref")
			.fun<static_cast<bool (RefCounted::*)()>(&RefCounted::reference)>("reference")
			.fun<static_cast<bool (RefCounted::*)()>(&RefCounted::unreference)>("unreference")
			.fun<static_cast<int32_t (RefCounted::*)() const>(&RefCounted::get_reference_count)>("get_reference_count");
}