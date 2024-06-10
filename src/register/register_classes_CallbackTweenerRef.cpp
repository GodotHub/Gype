#include "register/register_classes.h"
#include <godot_cpp/classes/callback_tweener.hpp>

using namespace godot;

void register_classes_CallbackTweenerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CallbackTweener>>("CallbackTweenerRef").constructor<CallbackTweener *>();
}