#include "register/register_classes.h"
#include <godot_cpp/classes/button_group.hpp>

using namespace godot;

void register_classes_ButtonGroupRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ButtonGroup>>("ButtonGroupRef").constructor<ButtonGroup *>();
}