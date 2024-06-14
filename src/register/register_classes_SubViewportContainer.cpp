
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/sub_viewport_container.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SubViewportContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<SubViewportContainer>("SubViewportContainer")
			.constructor<>()
			.base<Container>()
			.property<static_cast<bool (SubViewportContainer::*)() const>(&SubViewportContainer::is_stretch_enabled), static_cast<void (SubViewportContainer::*)(bool)>(&SubViewportContainer::set_stretch)>((new std::string("stretch"))->c_str())
			.property<static_cast<int32_t (SubViewportContainer::*)() const>(&SubViewportContainer::get_stretch_shrink), static_cast<void (SubViewportContainer::*)(int32_t)>(&SubViewportContainer::set_stretch_shrink)>((new std::string("stretch_shrink"))->c_str())
			.fun<static_cast<bool (SubViewportContainer::*)(const Ref<InputEvent> &) const>(&SubViewportContainer::_propagate_input_event)>((new std::string("_propagate_input_event"))->c_str());
}