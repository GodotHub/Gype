
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/split_container.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SplitContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<SplitContainer>("SplitContainer")
			.constructor<>()
			.base<Container>()
			.property<static_cast<int32_t (SplitContainer::*)() const>(&SplitContainer::get_split_offset), static_cast<void (SplitContainer::*)(int32_t)>(&SplitContainer::set_split_offset)>((new std::string("split_offset"))->c_str())
			.property<static_cast<bool (SplitContainer::*)() const>(&SplitContainer::is_collapsed), static_cast<void (SplitContainer::*)(bool)>(&SplitContainer::set_collapsed)>((new std::string("collapsed"))->c_str())
			.property<static_cast<SplitContainer::DraggerVisibility (SplitContainer::*)() const>(&SplitContainer::get_dragger_visibility), static_cast<void (SplitContainer::*)(SplitContainer::DraggerVisibility)>(&SplitContainer::set_dragger_visibility)>((new std::string("dragger_visibility"))->c_str())
			.property<static_cast<bool (SplitContainer::*)() const>(&SplitContainer::is_vertical), static_cast<void (SplitContainer::*)(bool)>(&SplitContainer::set_vertical)>((new std::string("vertical"))->c_str())
			.fun<static_cast<void (SplitContainer::*)()>(&SplitContainer::clamp_split_offset)>((new std::string("clamp_split_offset"))->c_str());
	qjs::Value _DraggerVisibility = context->newObject();
	_DraggerVisibility[(new std::string("DRAGGER_VISIBLE"))->c_str()] = SplitContainer::DraggerVisibility::DRAGGER_VISIBLE;
	_DraggerVisibility[(new std::string("DRAGGER_HIDDEN"))->c_str()] = SplitContainer::DraggerVisibility::DRAGGER_HIDDEN;
	_DraggerVisibility[(new std::string("DRAGGER_HIDDEN_COLLAPSED"))->c_str()] = SplitContainer::DraggerVisibility::DRAGGER_HIDDEN_COLLAPSED;
	_module.add("DraggerVisibility", std::move(_DraggerVisibility));
}