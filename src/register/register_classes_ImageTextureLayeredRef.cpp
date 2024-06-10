#include "register/register_classes.h"
#include <godot_cpp/classes/image_texture_layered.hpp>

using namespace godot;

void register_classes_ImageTextureLayeredRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ImageTextureLayered>>("ImageTextureLayeredRef").constructor<ImageTextureLayered *>();
}