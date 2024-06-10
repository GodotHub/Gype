#include <godot_cpp/classes/gd_extension.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GDExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GDExtension>("GDExtension")
			.constructor<>()
			.fun<static_cast<bool (GDExtension::*)() const>(&GDExtension::is_library_open)>("is_library_open")
			.fun<static_cast<GDExtension::InitializationLevel (GDExtension::*)() const>(&GDExtension::get_minimum_library_initialization_level)>("get_minimum_library_initialization_level");
}