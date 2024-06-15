#include <godot_cpp/classes/scroll_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ScrollContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<ScrollContainer>("ScrollContainer")
            .constructor<>()
            .base<Container>()
            .property<static_cast<bool(ScrollContainer::*)()const>(&ScrollContainer::is_following_focus),static_cast<void(ScrollContainer::*)(bool)>(&ScrollContainer::set_follow_focus)>("follow_focus")
            .property<static_cast<int32_t(ScrollContainer::*)()const>(&ScrollContainer::get_h_scroll),static_cast<void(ScrollContainer::*)(int32_t)>(&ScrollContainer::set_h_scroll)>("scroll_horizontal")
            .property<static_cast<int32_t(ScrollContainer::*)()const>(&ScrollContainer::get_v_scroll),static_cast<void(ScrollContainer::*)(int32_t)>(&ScrollContainer::set_v_scroll)>("scroll_vertical")
            .property<static_cast<double(ScrollContainer::*)()const>(&ScrollContainer::get_horizontal_custom_step),static_cast<void(ScrollContainer::*)(double)>(&ScrollContainer::set_horizontal_custom_step)>("scroll_horizontal_custom_step")
            .property<static_cast<double(ScrollContainer::*)()const>(&ScrollContainer::get_vertical_custom_step),static_cast<void(ScrollContainer::*)(double)>(&ScrollContainer::set_vertical_custom_step)>("scroll_vertical_custom_step")
            .property<static_cast<ScrollContainer::ScrollMode(ScrollContainer::*)()const>(&ScrollContainer::get_horizontal_scroll_mode),static_cast<void(ScrollContainer::*)(ScrollContainer::ScrollMode)>(&ScrollContainer::set_horizontal_scroll_mode)>("horizontal_scroll_mode")
            .property<static_cast<ScrollContainer::ScrollMode(ScrollContainer::*)()const>(&ScrollContainer::get_vertical_scroll_mode),static_cast<void(ScrollContainer::*)(ScrollContainer::ScrollMode)>(&ScrollContainer::set_vertical_scroll_mode)>("vertical_scroll_mode")
            .property<static_cast<int32_t(ScrollContainer::*)()const>(&ScrollContainer::get_deadzone),static_cast<void(ScrollContainer::*)(int32_t)>(&ScrollContainer::set_deadzone)>("scroll_deadzone")
            .fun<static_cast<HScrollBar *(ScrollContainer::*)()>(&ScrollContainer::get_h_scroll_bar)>("get_h_scroll_bar")
            .fun<static_cast<VScrollBar *(ScrollContainer::*)()>(&ScrollContainer::get_v_scroll_bar)>("get_v_scroll_bar")
            .fun<static_cast<void(ScrollContainer::*)(Control *)>(&ScrollContainer::ensure_control_visible)>("ensure_control_visible")
;    qjs::Value _ScrollMode = context->newObject();
    _ScrollMode["SCROLL_MODE_DISABLED"] = ScrollContainer::ScrollMode::SCROLL_MODE_DISABLED;
    _ScrollMode["SCROLL_MODE_AUTO"] = ScrollContainer::ScrollMode::SCROLL_MODE_AUTO;
    _ScrollMode["SCROLL_MODE_SHOW_ALWAYS"] = ScrollContainer::ScrollMode::SCROLL_MODE_SHOW_ALWAYS;
    _ScrollMode["SCROLL_MODE_SHOW_NEVER"] = ScrollContainer::ScrollMode::SCROLL_MODE_SHOW_NEVER;
    _module.add("ScrollMode", std::move(_ScrollMode));
}