#include "register/register_classes.h"
#include <godot_cpp/classes/image_texture.hpp>

using namespace godot;

void register_classes_ImageTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ImageTexture>>("ImageTextureRef").constructor<ImageTexture *>();
}