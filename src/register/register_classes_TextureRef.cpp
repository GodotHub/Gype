#include "register/register_classes.h"
#include <godot_cpp/classes/texture.hpp>

using namespace godot;

void register_classes_TextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Texture>>("TextureRef").constructor<Texture *>();
}