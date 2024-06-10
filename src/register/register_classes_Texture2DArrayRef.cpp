#include "register/register_classes.h"
#include <godot_cpp/classes/texture2d_array.hpp>

using namespace godot;

void register_classes_Texture2DArrayRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Texture2DArray>>("Texture2DArrayRef").constructor<Texture2DArray *>();
}