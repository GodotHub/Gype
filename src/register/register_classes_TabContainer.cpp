#include <godot_cpp/classes/tab_container.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/tab_bar.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TabContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<TabContainer>("TabContainer")
            .constructor<>()
            .base<Container>()
            .property<static_cast<TabBar::AlignmentMode(TabContainer::*)()const>(&TabContainer::get_tab_alignment),static_cast<void(TabContainer::*)(TabBar::AlignmentMode)>(&TabContainer::set_tab_alignment)>("tab_alignment")
            .property<static_cast<int32_t(TabContainer::*)()const>(&TabContainer::get_current_tab),static_cast<void(TabContainer::*)(int32_t)>(&TabContainer::set_current_tab)>("current_tab")
            .property<static_cast<TabContainer::TabPosition(TabContainer::*)()const>(&TabContainer::get_tabs_position),static_cast<void(TabContainer::*)(TabContainer::TabPosition)>(&TabContainer::set_tabs_position)>("tabs_position")
            .property<static_cast<bool(TabContainer::*)()const>(&TabContainer::get_clip_tabs),static_cast<void(TabContainer::*)(bool)>(&TabContainer::set_clip_tabs)>("clip_tabs")
            .property<static_cast<bool(TabContainer::*)()const>(&TabContainer::are_tabs_visible),static_cast<void(TabContainer::*)(bool)>(&TabContainer::set_tabs_visible)>("tabs_visible")
            .property<static_cast<bool(TabContainer::*)()const>(&TabContainer::is_all_tabs_in_front),static_cast<void(TabContainer::*)(bool)>(&TabContainer::set_all_tabs_in_front)>("all_tabs_in_front")
            .property<static_cast<bool(TabContainer::*)()const>(&TabContainer::get_drag_to_rearrange_enabled),static_cast<void(TabContainer::*)(bool)>(&TabContainer::set_drag_to_rearrange_enabled)>("drag_to_rearrange_enabled")
            .property<static_cast<int32_t(TabContainer::*)()const>(&TabContainer::get_tabs_rearrange_group),static_cast<void(TabContainer::*)(int32_t)>(&TabContainer::set_tabs_rearrange_group)>("tabs_rearrange_group")
            .property<static_cast<bool(TabContainer::*)()const>(&TabContainer::get_use_hidden_tabs_for_min_size),static_cast<void(TabContainer::*)(bool)>(&TabContainer::set_use_hidden_tabs_for_min_size)>("use_hidden_tabs_for_min_size")
            .property<static_cast<Control::FocusMode(TabContainer::*)()const>(&TabContainer::get_tab_focus_mode),static_cast<void(TabContainer::*)(Control::FocusMode)>(&TabContainer::set_tab_focus_mode)>("tab_focus_mode")
            .property<static_cast<bool(TabContainer::*)()const>(&TabContainer::get_deselect_enabled),static_cast<void(TabContainer::*)(bool)>(&TabContainer::set_deselect_enabled)>("deselect_enabled")
            .fun<static_cast<int32_t(TabContainer::*)()const>(&TabContainer::get_tab_count)>("get_tab_count")
            .fun<static_cast<int32_t(TabContainer::*)()const>(&TabContainer::get_previous_tab)>("get_previous_tab")
            .fun<static_cast<bool(TabContainer::*)()>(&TabContainer::select_previous_available)>("select_previous_available")
            .fun<static_cast<bool(TabContainer::*)()>(&TabContainer::select_next_available)>("select_next_available")
            .fun<static_cast<Control *(TabContainer::*)()const>(&TabContainer::get_current_tab_control)>("get_current_tab_control")
            .fun<static_cast<TabBar *(TabContainer::*)()const>(&TabContainer::get_tab_bar)>("get_tab_bar")
            .fun<static_cast<Control *(TabContainer::*)(int32_t)const>(&TabContainer::get_tab_control)>("get_tab_control")
            .fun<static_cast<void(TabContainer::*)(int32_t,const String &)>(&TabContainer::set_tab_title)>("set_tab_title")
            .fun<static_cast<String(TabContainer::*)(int32_t)const>(&TabContainer::get_tab_title)>("get_tab_title")
            .fun<static_cast<void(TabContainer::*)(int32_t,const String &)>(&TabContainer::set_tab_tooltip)>("set_tab_tooltip")
            .fun<static_cast<String(TabContainer::*)(int32_t)const>(&TabContainer::get_tab_tooltip)>("get_tab_tooltip")
            .fun<static_cast<void(TabContainer::*)(int32_t,const Ref<Texture2D> &)>(&TabContainer::set_tab_icon)>("set_tab_icon")
            .fun<static_cast<Ref<Texture2D>(TabContainer::*)(int32_t)const>(&TabContainer::get_tab_icon)>("get_tab_icon")
            .fun<static_cast<void(TabContainer::*)(int32_t,int32_t)>(&TabContainer::set_tab_icon_max_width)>("set_tab_icon_max_width")
            .fun<static_cast<int32_t(TabContainer::*)(int32_t)const>(&TabContainer::get_tab_icon_max_width)>("get_tab_icon_max_width")
            .fun<static_cast<void(TabContainer::*)(int32_t,bool)>(&TabContainer::set_tab_disabled)>("set_tab_disabled")
            .fun<static_cast<bool(TabContainer::*)(int32_t)const>(&TabContainer::is_tab_disabled)>("is_tab_disabled")
            .fun<static_cast<void(TabContainer::*)(int32_t,bool)>(&TabContainer::set_tab_hidden)>("set_tab_hidden")
            .fun<static_cast<bool(TabContainer::*)(int32_t)const>(&TabContainer::is_tab_hidden)>("is_tab_hidden")
            .fun<static_cast<void(TabContainer::*)(int32_t,const Variant &)>(&TabContainer::set_tab_metadata)>("set_tab_metadata")
            .fun<static_cast<Variant(TabContainer::*)(int32_t)const>(&TabContainer::get_tab_metadata)>("get_tab_metadata")
            .fun<static_cast<void(TabContainer::*)(int32_t,const Ref<Texture2D> &)>(&TabContainer::set_tab_button_icon)>("set_tab_button_icon")
            .fun<static_cast<Ref<Texture2D>(TabContainer::*)(int32_t)const>(&TabContainer::get_tab_button_icon)>("get_tab_button_icon")
            .fun<static_cast<int32_t(TabContainer::*)(const Vector2 &)const>(&TabContainer::get_tab_idx_at_point)>("get_tab_idx_at_point")
            .fun<static_cast<int32_t(TabContainer::*)(Control *)const>(&TabContainer::get_tab_idx_from_control)>("get_tab_idx_from_control")
            .fun<static_cast<void(TabContainer::*)(Node *)>(&TabContainer::set_popup)>("set_popup")
            .fun<static_cast<Popup *(TabContainer::*)()const>(&TabContainer::get_popup)>("get_popup")
;    qjs::Value _TabPosition = context->newObject();
    _TabPosition["POSITION_TOP"] = TabContainer::TabPosition::POSITION_TOP;
    _TabPosition["POSITION_BOTTOM"] = TabContainer::TabPosition::POSITION_BOTTOM;
    _TabPosition["POSITION_MAX"] = TabContainer::TabPosition::POSITION_MAX;
    _module.add("TabPosition", std::move(_TabPosition));
}