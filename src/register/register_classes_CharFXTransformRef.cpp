#include "register/register_classes.h"
#include <godot_cpp/classes/char_fx_transform.hpp>

using namespace godot;

void register_classes_CharFXTransformRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CharFXTransform>>("CharFXTransformRef").constructor<CharFXTransform *>();
}