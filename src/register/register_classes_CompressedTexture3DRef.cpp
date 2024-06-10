#include "register/register_classes.h"
#include <godot_cpp/classes/compressed_texture3d.hpp>

using namespace godot;

void register_classes_CompressedTexture3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CompressedTexture3D>>("CompressedTexture3DRef").constructor<CompressedTexture3D *>();
}