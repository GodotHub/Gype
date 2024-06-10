#include "register/register_classes.h"
#include <godot_cpp/classes/compressed_texture2d_array.hpp>

using namespace godot;

void register_classes_CompressedTexture2DArrayRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CompressedTexture2DArray>>("CompressedTexture2DArrayRef").constructor<CompressedTexture2DArray *>();
}