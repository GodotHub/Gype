#include "register/register_classes.h"
#include <godot_cpp/classes/style_box_texture.hpp>

using namespace godot;

void register_classes_StyleBoxTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StyleBoxTexture>>("StyleBoxTextureRef").constructor<StyleBoxTexture *>();
}