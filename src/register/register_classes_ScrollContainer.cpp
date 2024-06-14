
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/scroll_container.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ScrollContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ScrollContainer>("ScrollContainer")
			.constructor<>()
			.base<Container>()
			.property<static_cast<bool (ScrollContainer::*)() const>(&ScrollContainer::is_following_focus), static_cast<void (ScrollContainer::*)(bool)>(&ScrollContainer::set_follow_focus)>((new std::string("follow_focus"))->c_str())
			.property<static_cast<int32_t (ScrollContainer::*)() const>(&ScrollContainer::get_h_scroll), static_cast<void (ScrollContainer::*)(int32_t)>(&ScrollContainer::set_h_scroll)>((new std::string("scroll_horizontal"))->c_str())
			.property<static_cast<int32_t (ScrollContainer::*)() const>(&ScrollContainer::get_v_scroll), static_cast<void (ScrollContainer::*)(int32_t)>(&ScrollContainer::set_v_scroll)>((new std::string("scroll_vertical"))->c_str())
			.property<static_cast<double (ScrollContainer::*)() const>(&ScrollContainer::get_horizontal_custom_step), static_cast<void (ScrollContainer::*)(double)>(&ScrollContainer::set_horizontal_custom_step)>((new std::string("scroll_horizontal_custom_step"))->c_str())
			.property<static_cast<double (ScrollContainer::*)() const>(&ScrollContainer::get_vertical_custom_step), static_cast<void (ScrollContainer::*)(double)>(&ScrollContainer::set_vertical_custom_step)>((new std::string("scroll_vertical_custom_step"))->c_str())
			.property<static_cast<ScrollContainer::ScrollMode (ScrollContainer::*)() const>(&ScrollContainer::get_horizontal_scroll_mode), static_cast<void (ScrollContainer::*)(ScrollContainer::ScrollMode)>(&ScrollContainer::set_horizontal_scroll_mode)>((new std::string("horizontal_scroll_mode"))->c_str())
			.property<static_cast<ScrollContainer::ScrollMode (ScrollContainer::*)() const>(&ScrollContainer::get_vertical_scroll_mode), static_cast<void (ScrollContainer::*)(ScrollContainer::ScrollMode)>(&ScrollContainer::set_vertical_scroll_mode)>((new std::string("vertical_scroll_mode"))->c_str())
			.property<static_cast<int32_t (ScrollContainer::*)() const>(&ScrollContainer::get_deadzone), static_cast<void (ScrollContainer::*)(int32_t)>(&ScrollContainer::set_deadzone)>((new std::string("scroll_deadzone"))->c_str())
			.fun<static_cast<HScrollBar *(ScrollContainer::*)()>(&ScrollContainer::get_h_scroll_bar)>((new std::string("get_h_scroll_bar"))->c_str())
			.fun<static_cast<VScrollBar *(ScrollContainer::*)()>(&ScrollContainer::get_v_scroll_bar)>((new std::string("get_v_scroll_bar"))->c_str())
			.fun<static_cast<void (ScrollContainer::*)(Control *)>(&ScrollContainer::ensure_control_visible)>((new std::string("ensure_control_visible"))->c_str());
	qjs::Value _ScrollMode = context->newObject();
	_ScrollMode[(new std::string("SCROLL_MODE_DISABLED"))->c_str()] = ScrollContainer::ScrollMode::SCROLL_MODE_DISABLED;
	_ScrollMode[(new std::string("SCROLL_MODE_AUTO"))->c_str()] = ScrollContainer::ScrollMode::SCROLL_MODE_AUTO;
	_ScrollMode[(new std::string("SCROLL_MODE_SHOW_ALWAYS"))->c_str()] = ScrollContainer::ScrollMode::SCROLL_MODE_SHOW_ALWAYS;
	_ScrollMode[(new std::string("SCROLL_MODE_SHOW_NEVER"))->c_str()] = ScrollContainer::ScrollMode::SCROLL_MODE_SHOW_NEVER;
	_module.add("ScrollMode", std::move(_ScrollMode));
}