#include <godot_cpp/classes/placeholder_texture2d_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PlaceholderTexture2DArray() {
	qjs::Context::Module &_module = _General;
	_module.class_<PlaceholderTexture2DArray>("PlaceholderTexture2DArray")
			.constructor<>();
}