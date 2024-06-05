#include <godot_cpp/classes/center_container.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_CenterContainer() {
	qjs::Context::Module &_module = _Control;
	_module.class_<CenterContainer>("CenterContainer")
			.constructor<>()
			.property<&CenterContainer::is_using_top_left, &CenterContainer::set_use_top_left>("use_top_left");
}