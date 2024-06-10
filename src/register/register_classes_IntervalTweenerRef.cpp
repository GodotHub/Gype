#include "register/register_classes.h"
#include <godot_cpp/classes/interval_tweener.hpp>

using namespace godot;

void register_classes_IntervalTweenerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<IntervalTweener>>("IntervalTweenerRef").constructor<IntervalTweener *>();
}