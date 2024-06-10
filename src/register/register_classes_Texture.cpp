#include <godot_cpp/classes/texture.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Texture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Texture>("Texture")
			.constructor<>();
}