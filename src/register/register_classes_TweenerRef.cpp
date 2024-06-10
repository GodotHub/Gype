#include "register/register_classes.h"
#include <godot_cpp/classes/tweener.hpp>

using namespace godot;

void register_classes_TweenerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Tweener>>("TweenerRef").constructor<Tweener *>();
}