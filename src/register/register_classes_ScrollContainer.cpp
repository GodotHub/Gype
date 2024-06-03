#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/scroll_container.hpp>

using namespace godot;

void register_classes_ScrollContainer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<ScrollContainer>("ScrollContainer")
           .constructor<>()
           .property<ScrollContainer::is_following_focus, ScrollContainer::set_follow_focus>("follow_focus")
           .property<ScrollContainer::get_h_scroll, ScrollContainer::set_h_scroll>("scroll_horizontal")
           .property<ScrollContainer::get_v_scroll, ScrollContainer::set_v_scroll>("scroll_vertical")
           .property<ScrollContainer::get_horizontal_custom_step, ScrollContainer::set_horizontal_custom_step>("scroll_horizontal_custom_step")
           .property<ScrollContainer::get_vertical_custom_step, ScrollContainer::set_vertical_custom_step>("scroll_vertical_custom_step")
           .property<ScrollContainer::get_horizontal_scroll_mode, ScrollContainer::set_horizontal_scroll_mode>("horizontal_scroll_mode")
           .property<ScrollContainer::get_vertical_scroll_mode, ScrollContainer::set_vertical_scroll_mode>("vertical_scroll_mode")
           .property<ScrollContainer::get_deadzone, ScrollContainer::set_deadzone>("scroll_deadzone")
		    .fun<static_cast<HScrollBar *(ScrollContainer::*)()>(&ScrollContainer::get_h_scroll_bar)>("get_h_scroll_bar")
		    .fun<static_cast<VScrollBar *(ScrollContainer::*)()>(&ScrollContainer::get_v_scroll_bar)>("get_v_scroll_bar")
		    .fun<static_cast<void(ScrollContainer::*)(Control *)>(&ScrollContainer::ensure_control_visible)>("ensure_control_visible")
;}