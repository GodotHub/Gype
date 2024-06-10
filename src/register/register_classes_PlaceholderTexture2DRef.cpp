#include "register/register_classes.h"
#include <godot_cpp/classes/placeholder_texture2d.hpp>

using namespace godot;

void register_classes_PlaceholderTexture2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PlaceholderTexture2D>>("PlaceholderTexture2DRef").constructor<PlaceholderTexture2D *>();
}