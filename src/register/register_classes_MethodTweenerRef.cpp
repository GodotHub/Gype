#include "register/register_classes.h"
#include <godot_cpp/classes/method_tweener.hpp>

using namespace godot;

void register_classes_MethodTweenerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MethodTweener>>("MethodTweenerRef").constructor<MethodTweener *>();
}