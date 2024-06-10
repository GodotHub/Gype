#include "register/register_classes.h"
#include <godot_cpp/classes/compressed_texture_layered.hpp>

using namespace godot;

void register_classes_CompressedTextureLayeredRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CompressedTextureLayered>>("CompressedTextureLayeredRef").constructor<CompressedTextureLayered *>();
}