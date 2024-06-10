#include "register/register_classes.h"
#include <godot_cpp/classes/tween.hpp>

using namespace godot;

void register_classes_TweenRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Tween>>("TweenRef").constructor<Tween *>();
}