#include <godot_cpp/classes/grid_container.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GridContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<GridContainer>("GridContainer")
			.constructor<>()
			.property<&GridContainer::get_columns, &GridContainer::set_columns>("columns");
}