
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tab_bar.hpp>
#include <godot_cpp/classes/tab_container.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TabContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<TabContainer>("TabContainer")
			.constructor<>()
			.base<Container>()
			.property<static_cast<TabBar::AlignmentMode (TabContainer::*)() const>(&TabContainer::get_tab_alignment), static_cast<void (TabContainer::*)(TabBar::AlignmentMode)>(&TabContainer::set_tab_alignment)>((new std::string("tab_alignment"))->c_str())
			.property<static_cast<int32_t (TabContainer::*)() const>(&TabContainer::get_current_tab), static_cast<void (TabContainer::*)(int32_t)>(&TabContainer::set_current_tab)>((new std::string("current_tab"))->c_str())
			.property<static_cast<TabContainer::TabPosition (TabContainer::*)() const>(&TabContainer::get_tabs_position), static_cast<void (TabContainer::*)(TabContainer::TabPosition)>(&TabContainer::set_tabs_position)>((new std::string("tabs_position"))->c_str())
			.property<static_cast<bool (TabContainer::*)() const>(&TabContainer::get_clip_tabs), static_cast<void (TabContainer::*)(bool)>(&TabContainer::set_clip_tabs)>((new std::string("clip_tabs"))->c_str())
			.property<static_cast<bool (TabContainer::*)() const>(&TabContainer::are_tabs_visible), static_cast<void (TabContainer::*)(bool)>(&TabContainer::set_tabs_visible)>((new std::string("tabs_visible"))->c_str())
			.property<static_cast<bool (TabContainer::*)() const>(&TabContainer::is_all_tabs_in_front), static_cast<void (TabContainer::*)(bool)>(&TabContainer::set_all_tabs_in_front)>((new std::string("all_tabs_in_front"))->c_str())
			.property<static_cast<bool (TabContainer::*)() const>(&TabContainer::get_drag_to_rearrange_enabled), static_cast<void (TabContainer::*)(bool)>(&TabContainer::set_drag_to_rearrange_enabled)>((new std::string("drag_to_rearrange_enabled"))->c_str())
			.property<static_cast<int32_t (TabContainer::*)() const>(&TabContainer::get_tabs_rearrange_group), static_cast<void (TabContainer::*)(int32_t)>(&TabContainer::set_tabs_rearrange_group)>((new std::string("tabs_rearrange_group"))->c_str())
			.property<static_cast<bool (TabContainer::*)() const>(&TabContainer::get_use_hidden_tabs_for_min_size), static_cast<void (TabContainer::*)(bool)>(&TabContainer::set_use_hidden_tabs_for_min_size)>((new std::string("use_hidden_tabs_for_min_size"))->c_str())
			.property<static_cast<Control::FocusMode (TabContainer::*)() const>(&TabContainer::get_tab_focus_mode), static_cast<void (TabContainer::*)(Control::FocusMode)>(&TabContainer::set_tab_focus_mode)>((new std::string("tab_focus_mode"))->c_str())
			.property<static_cast<bool (TabContainer::*)() const>(&TabContainer::get_deselect_enabled), static_cast<void (TabContainer::*)(bool)>(&TabContainer::set_deselect_enabled)>((new std::string("deselect_enabled"))->c_str())
			.fun<static_cast<int32_t (TabContainer::*)() const>(&TabContainer::get_tab_count)>((new std::string("get_tab_count"))->c_str())
			.fun<static_cast<int32_t (TabContainer::*)() const>(&TabContainer::get_previous_tab)>((new std::string("get_previous_tab"))->c_str())
			.fun<static_cast<bool (TabContainer::*)()>(&TabContainer::select_previous_available)>((new std::string("select_previous_available"))->c_str())
			.fun<static_cast<bool (TabContainer::*)()>(&TabContainer::select_next_available)>((new std::string("select_next_available"))->c_str())
			.fun<static_cast<Control *(TabContainer::*)() const>(&TabContainer::get_current_tab_control)>((new std::string("get_current_tab_control"))->c_str())
			.fun<static_cast<TabBar *(TabContainer::*)() const>(&TabContainer::get_tab_bar)>((new std::string("get_tab_bar"))->c_str())
			.fun<static_cast<Control *(TabContainer::*)(int32_t) const>(&TabContainer::get_tab_control)>((new std::string("get_tab_control"))->c_str())
			.fun<static_cast<void (TabContainer::*)(int32_t, const String &)>(&TabContainer::set_tab_title)>((new std::string("set_tab_title"))->c_str())
			.fun<static_cast<String (TabContainer::*)(int32_t) const>(&TabContainer::get_tab_title)>((new std::string("get_tab_title"))->c_str())
			.fun<static_cast<void (TabContainer::*)(int32_t, const String &)>(&TabContainer::set_tab_tooltip)>((new std::string("set_tab_tooltip"))->c_str())
			.fun<static_cast<String (TabContainer::*)(int32_t) const>(&TabContainer::get_tab_tooltip)>((new std::string("get_tab_tooltip"))->c_str())
			.fun<static_cast<void (TabContainer::*)(int32_t, const Ref<Texture2D> &)>(&TabContainer::set_tab_icon)>((new std::string("set_tab_icon"))->c_str())
			.fun<static_cast<Ref<Texture2D> (TabContainer::*)(int32_t) const>(&TabContainer::get_tab_icon)>((new std::string("get_tab_icon"))->c_str())
			.fun<static_cast<void (TabContainer::*)(int32_t, int32_t)>(&TabContainer::set_tab_icon_max_width)>((new std::string("set_tab_icon_max_width"))->c_str())
			.fun<static_cast<int32_t (TabContainer::*)(int32_t) const>(&TabContainer::get_tab_icon_max_width)>((new std::string("get_tab_icon_max_width"))->c_str())
			.fun<static_cast<void (TabContainer::*)(int32_t, bool)>(&TabContainer::set_tab_disabled)>((new std::string("set_tab_disabled"))->c_str())
			.fun<static_cast<bool (TabContainer::*)(int32_t) const>(&TabContainer::is_tab_disabled)>((new std::string("is_tab_disabled"))->c_str())
			.fun<static_cast<void (TabContainer::*)(int32_t, bool)>(&TabContainer::set_tab_hidden)>((new std::string("set_tab_hidden"))->c_str())
			.fun<static_cast<bool (TabContainer::*)(int32_t) const>(&TabContainer::is_tab_hidden)>((new std::string("is_tab_hidden"))->c_str())
			.fun<static_cast<void (TabContainer::*)(int32_t, const Variant &)>(&TabContainer::set_tab_metadata)>((new std::string("set_tab_metadata"))->c_str())
			.fun<static_cast<Variant (TabContainer::*)(int32_t) const>(&TabContainer::get_tab_metadata)>((new std::string("get_tab_metadata"))->c_str())
			.fun<static_cast<void (TabContainer::*)(int32_t, const Ref<Texture2D> &)>(&TabContainer::set_tab_button_icon)>((new std::string("set_tab_button_icon"))->c_str())
			.fun<static_cast<Ref<Texture2D> (TabContainer::*)(int32_t) const>(&TabContainer::get_tab_button_icon)>((new std::string("get_tab_button_icon"))->c_str())
			.fun<static_cast<int32_t (TabContainer::*)(const Vector2 &) const>(&TabContainer::get_tab_idx_at_point)>((new std::string("get_tab_idx_at_point"))->c_str())
			.fun<static_cast<int32_t (TabContainer::*)(Control *) const>(&TabContainer::get_tab_idx_from_control)>((new std::string("get_tab_idx_from_control"))->c_str())
			.fun<static_cast<void (TabContainer::*)(Node *)>(&TabContainer::set_popup)>((new std::string("set_popup"))->c_str())
			.fun<static_cast<Popup *(TabContainer::*)() const>(&TabContainer::get_popup)>((new std::string("get_popup"))->c_str());
	qjs::Value _TabPosition = context->newObject();
	_TabPosition[(new std::string("POSITION_TOP"))->c_str()] = TabContainer::TabPosition::POSITION_TOP;
	_TabPosition[(new std::string("POSITION_BOTTOM"))->c_str()] = TabContainer::TabPosition::POSITION_BOTTOM;
	_TabPosition[(new std::string("POSITION_MAX"))->c_str()] = TabContainer::TabPosition::POSITION_MAX;
	_module.add("TabPosition", std::move(_TabPosition));
}