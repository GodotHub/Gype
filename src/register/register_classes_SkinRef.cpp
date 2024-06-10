#include "register/register_classes.h"
#include <godot_cpp/classes/skin.hpp>

using namespace godot;

void register_classes_SkinRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Skin>>("SkinRef").constructor<Skin *>();
}