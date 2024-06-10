#include "register/register_classes.h"
#include <godot_cpp/classes/placeholder_texture2d_array.hpp>

using namespace godot;

void register_classes_PlaceholderTexture2DArrayRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PlaceholderTexture2DArray>>("PlaceholderTexture2DArrayRef").constructor<PlaceholderTexture2DArray *>();
}