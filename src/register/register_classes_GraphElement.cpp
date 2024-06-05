#include <godot_cpp/classes/graph_element.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_GraphElement() {
	qjs::Context::Module &_module = _Control;
	_module.class_<GraphElement>("GraphElement")
			.constructor<>()
			.property<&GraphElement::get_position_offset, &GraphElement::set_position_offset>("position_offset")
			.property<&GraphElement::is_resizable, &GraphElement::set_resizable>("resizable")
			.property<&GraphElement::is_draggable, &GraphElement::set_draggable>("draggable")
			.property<&GraphElement::is_selectable, &GraphElement::set_selectable>("selectable")
			.property<&GraphElement::is_selected, &GraphElement::set_selected>("selected");
}