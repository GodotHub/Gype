#include "register/register_classes.h"
#include <godot_cpp/classes/property_tweener.hpp>

using namespace godot;

void register_classes_PropertyTweenerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PropertyTweener>>("PropertyTweenerRef").constructor<PropertyTweener *>();
}