#include "register/register_classes.h"
#include <godot_cpp/classes/placeholder_texture_layered.hpp>

using namespace godot;

void register_classes_PlaceholderTextureLayeredRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PlaceholderTextureLayered>>("PlaceholderTextureLayeredRef").constructor<PlaceholderTextureLayered *>();
}