#include <godot_cpp/classes/compressed_texture2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CompressedTexture2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CompressedTexture2D>("CompressedTexture2D")
			.constructor<>()
			.property<&CompressedTexture2D::get_load_path, &CompressedTexture2D::load>("load_path");
}