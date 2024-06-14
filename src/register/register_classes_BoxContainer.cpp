#include <godot_cpp/classes/box_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_BoxContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<BoxContainer>("BoxContainer")
			.constructor<>()
			.base<Container>()
			.property<static_cast<BoxContainer::AlignmentMode (BoxContainer::*)() const>(&BoxContainer::get_alignment), static_cast<void (BoxContainer::*)(BoxContainer::AlignmentMode)>(&BoxContainer::set_alignment)>((new std::string("alignment"))->c_str())
			.property<static_cast<bool (BoxContainer::*)() const>(&BoxContainer::is_vertical), static_cast<void (BoxContainer::*)(bool)>(&BoxContainer::set_vertical)>((new std::string("vertical"))->c_str())
			.fun<static_cast<Control *(BoxContainer::*)(bool)>(&BoxContainer::add_spacer)>((new std::string("add_spacer"))->c_str());
	qjs::Value _AlignmentMode = context->newObject();
	_AlignmentMode[(new std::string("ALIGNMENT_BEGIN"))->c_str()] = BoxContainer::AlignmentMode::ALIGNMENT_BEGIN;
	_AlignmentMode[(new std::string("ALIGNMENT_CENTER"))->c_str()] = BoxContainer::AlignmentMode::ALIGNMENT_CENTER;
	_AlignmentMode[(new std::string("ALIGNMENT_END"))->c_str()] = BoxContainer::AlignmentMode::ALIGNMENT_END;
	_module.add("AlignmentMode", std::move(_AlignmentMode));
}