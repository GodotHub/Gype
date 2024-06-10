#include <godot_cpp/classes/texture2d_array_rd.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Texture2DArrayRD() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Texture2DArrayRD>("Texture2DArrayRD")
			.constructor<>();
}