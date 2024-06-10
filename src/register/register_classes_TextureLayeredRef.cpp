#include "register/register_classes.h"
#include <godot_cpp/classes/texture_layered.hpp>

using namespace godot;

void register_classes_TextureLayeredRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextureLayered>>("TextureLayeredRef").constructor<TextureLayered *>();
}