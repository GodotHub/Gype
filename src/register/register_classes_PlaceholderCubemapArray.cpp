#include <godot_cpp/classes/placeholder_cubemap_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PlaceholderCubemapArray() {
	qjs::Context::Module &_module = _General;
	_module.class_<PlaceholderCubemapArray>("PlaceholderCubemapArray")
			.constructor<>();
}