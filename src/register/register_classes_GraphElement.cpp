#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GraphElement() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<GraphElement>("GraphElement")
			.constructor<>()
			.base<Container>()
			.property<static_cast<Vector2 (GraphElement::*)() const>(&GraphElement::get_position_offset), static_cast<void (GraphElement::*)(const Vector2 &)>(&GraphElement::set_position_offset)>((new std::string("position_offset"))->c_str())
			.property<static_cast<bool (GraphElement::*)() const>(&GraphElement::is_resizable), static_cast<void (GraphElement::*)(bool)>(&GraphElement::set_resizable)>((new std::string("resizable"))->c_str())
			.property<static_cast<bool (GraphElement::*)()>(&GraphElement::is_draggable), static_cast<void (GraphElement::*)(bool)>(&GraphElement::set_draggable)>((new std::string("draggable"))->c_str())
			.property<static_cast<bool (GraphElement::*)()>(&GraphElement::is_selectable), static_cast<void (GraphElement::*)(bool)>(&GraphElement::set_selectable)>((new std::string("selectable"))->c_str())
			.property<static_cast<bool (GraphElement::*)()>(&GraphElement::is_selected), static_cast<void (GraphElement::*)(bool)>(&GraphElement::set_selected)>((new std::string("selected"))->c_str());
}