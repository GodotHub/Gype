#include "register/register_classes.h"
#include <godot_cpp/classes/texture2d.hpp>

using namespace godot;

void register_classes_Texture2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Texture2D>>("Texture2DRef").constructor<Texture2D *>();
}