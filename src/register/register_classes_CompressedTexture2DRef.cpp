#include "register/register_classes.h"
#include <godot_cpp/classes/compressed_texture2d.hpp>

using namespace godot;

void register_classes_CompressedTexture2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CompressedTexture2D>>("CompressedTexture2DRef").constructor<CompressedTexture2D *>();
}