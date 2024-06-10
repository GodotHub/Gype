#include <godot_cpp/classes/compressed_cubemap_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CompressedCubemapArray() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CompressedCubemapArray>("CompressedCubemapArray")
			.constructor<>();
}