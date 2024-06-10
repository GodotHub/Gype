#include "register/register_classes.h"
#include <godot_cpp/classes/portable_compressed_texture2d.hpp>

using namespace godot;

void register_classes_PortableCompressedTexture2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PortableCompressedTexture2D>>("PortableCompressedTexture2DRef").constructor<PortableCompressedTexture2D *>();
}