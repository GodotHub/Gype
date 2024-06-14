
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/grid_container.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GridContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<GridContainer>("GridContainer")
			.constructor<>()
			.base<Container>()
			.property<static_cast<int32_t (GridContainer::*)() const>(&GridContainer::get_columns), static_cast<void (GridContainer::*)(int32_t)>(&GridContainer::set_columns)>((new std::string("columns"))->c_str());
}