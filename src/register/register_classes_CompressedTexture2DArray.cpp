#include <godot_cpp/classes/compressed_texture2d_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_CompressedTexture2DArray() {
	qjs::Context::Module &_module = _General;
	_module.class_<CompressedTexture2DArray>("CompressedTexture2DArray")
			.constructor<>();
}