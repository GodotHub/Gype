#include <godot_cpp/classes/placeholder_material.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PlaceholderMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PlaceholderMaterial>("PlaceholderMaterial")
			.constructor<>();
}