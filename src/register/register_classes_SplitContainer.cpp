#include <godot_cpp/classes/split_container.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SplitContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<SplitContainer>("SplitContainer")
			.constructor<>()
			.property<&SplitContainer::get_split_offset, &SplitContainer::set_split_offset>("split_offset")
			.property<&SplitContainer::is_collapsed, &SplitContainer::set_collapsed>("collapsed")
			.property<&SplitContainer::get_dragger_visibility, &SplitContainer::set_dragger_visibility>("dragger_visibility")
			.property<&SplitContainer::is_vertical, &SplitContainer::set_vertical>("vertical")
			.fun<static_cast<void (SplitContainer::*)()>(&SplitContainer::clamp_split_offset)>("clamp_split_offset");
}