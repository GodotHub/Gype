
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/slider.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Slider() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<Slider>("Slider")
			.constructor<>()
			.base<Range>()
			.property<static_cast<bool (Slider::*)() const>(&Slider::is_editable), static_cast<void (Slider::*)(bool)>(&Slider::set_editable)>((new std::string("editable"))->c_str())
			.property<static_cast<bool (Slider::*)() const>(&Slider::is_scrollable), static_cast<void (Slider::*)(bool)>(&Slider::set_scrollable)>((new std::string("scrollable"))->c_str())
			.property<static_cast<int32_t (Slider::*)() const>(&Slider::get_ticks), static_cast<void (Slider::*)(int32_t)>(&Slider::set_ticks)>((new std::string("tick_count"))->c_str())
			.property<static_cast<bool (Slider::*)() const>(&Slider::get_ticks_on_borders), static_cast<void (Slider::*)(bool)>(&Slider::set_ticks_on_borders)>((new std::string("ticks_on_borders"))->c_str());
}