
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/flow_container.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FlowContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<FlowContainer>("FlowContainer")
			.constructor<>()
			.base<Container>()
			.property<static_cast<FlowContainer::AlignmentMode (FlowContainer::*)() const>(&FlowContainer::get_alignment), static_cast<void (FlowContainer::*)(FlowContainer::AlignmentMode)>(&FlowContainer::set_alignment)>((new std::string("alignment"))->c_str())
			.property<static_cast<FlowContainer::LastWrapAlignmentMode (FlowContainer::*)() const>(&FlowContainer::get_last_wrap_alignment), static_cast<void (FlowContainer::*)(FlowContainer::LastWrapAlignmentMode)>(&FlowContainer::set_last_wrap_alignment)>((new std::string("last_wrap_alignment"))->c_str())
			.property<static_cast<bool (FlowContainer::*)() const>(&FlowContainer::is_vertical), static_cast<void (FlowContainer::*)(bool)>(&FlowContainer::set_vertical)>((new std::string("vertical"))->c_str())
			.property<static_cast<bool (FlowContainer::*)() const>(&FlowContainer::is_reverse_fill), static_cast<void (FlowContainer::*)(bool)>(&FlowContainer::set_reverse_fill)>((new std::string("reverse_fill"))->c_str())
			.fun<static_cast<int32_t (FlowContainer::*)() const>(&FlowContainer::get_line_count)>((new std::string("get_line_count"))->c_str());
	qjs::Value _AlignmentMode = context->newObject();
	_AlignmentMode[(new std::string("ALIGNMENT_BEGIN"))->c_str()] = FlowContainer::AlignmentMode::ALIGNMENT_BEGIN;
	_AlignmentMode[(new std::string("ALIGNMENT_CENTER"))->c_str()] = FlowContainer::AlignmentMode::ALIGNMENT_CENTER;
	_AlignmentMode[(new std::string("ALIGNMENT_END"))->c_str()] = FlowContainer::AlignmentMode::ALIGNMENT_END;
	_module.add("AlignmentMode", std::move(_AlignmentMode));
	qjs::Value _LastWrapAlignmentMode = context->newObject();
	_LastWrapAlignmentMode[(new std::string("LAST_WRAP_ALIGNMENT_INHERIT"))->c_str()] = FlowContainer::LastWrapAlignmentMode::LAST_WRAP_ALIGNMENT_INHERIT;
	_LastWrapAlignmentMode[(new std::string("LAST_WRAP_ALIGNMENT_BEGIN"))->c_str()] = FlowContainer::LastWrapAlignmentMode::LAST_WRAP_ALIGNMENT_BEGIN;
	_LastWrapAlignmentMode[(new std::string("LAST_WRAP_ALIGNMENT_CENTER"))->c_str()] = FlowContainer::LastWrapAlignmentMode::LAST_WRAP_ALIGNMENT_CENTER;
	_LastWrapAlignmentMode[(new std::string("LAST_WRAP_ALIGNMENT_END"))->c_str()] = FlowContainer::LastWrapAlignmentMode::LAST_WRAP_ALIGNMENT_END;
	_module.add("LastWrapAlignmentMode", std::move(_LastWrapAlignmentMode));
}