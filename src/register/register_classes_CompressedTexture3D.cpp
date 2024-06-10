#include <godot_cpp/classes/compressed_texture3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CompressedTexture3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CompressedTexture3D>("CompressedTexture3D")
			.constructor<>()
			.property<&CompressedTexture3D::get_load_path, &CompressedTexture3D::load>("load_path");
}