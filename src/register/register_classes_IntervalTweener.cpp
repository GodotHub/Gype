#include <godot_cpp/classes/interval_tweener.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_IntervalTweener() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<IntervalTweener>("IntervalTweener")
			.constructor<>();
}