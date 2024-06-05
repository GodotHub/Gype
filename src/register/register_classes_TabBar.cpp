#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tab_bar.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TabBar() {
	qjs::Context::Module &_module = _Control;
	_module.class_<TabBar>("TabBar")
			.constructor<>()
			.property<&TabBar::get_tab_count, &TabBar::set_tab_count>("tab_count")
			.property<&TabBar::get_current_tab, &TabBar::set_current_tab>("current_tab")
			.property<&TabBar::get_tab_alignment, &TabBar::set_tab_alignment>("tab_alignment")
			.property<&TabBar::get_clip_tabs, &TabBar::set_clip_tabs>("clip_tabs")
			.property<&TabBar::get_tab_close_display_policy, &TabBar::set_tab_close_display_policy>("tab_close_display_policy")
			.property<&TabBar::get_max_tab_width, &TabBar::set_max_tab_width>("max_tab_width")
			.property<&TabBar::get_scrolling_enabled, &TabBar::set_scrolling_enabled>("scrolling_enabled")
			.property<&TabBar::get_drag_to_rearrange_enabled, &TabBar::set_drag_to_rearrange_enabled>("drag_to_rearrange_enabled")
			.property<&TabBar::get_tabs_rearrange_group, &TabBar::set_tabs_rearrange_group>("tabs_rearrange_group")
			.property<&TabBar::get_scroll_to_selected, &TabBar::set_scroll_to_selected>("scroll_to_selected")
			.property<&TabBar::get_select_with_rmb, &TabBar::set_select_with_rmb>("select_with_rmb")
			.fun<static_cast<int32_t (TabBar::*)() const>(&TabBar::get_previous_tab)>("get_previous_tab")
			.fun<static_cast<bool (TabBar::*)()>(&TabBar::select_previous_available)>("select_previous_available")
			.fun<static_cast<bool (TabBar::*)()>(&TabBar::select_next_available)>("select_next_available")
			.fun<static_cast<void (TabBar::*)(int32_t, const String &)>(&TabBar::set_tab_title)>("set_tab_title")
			.fun<static_cast<String (TabBar::*)(int32_t) const>(&TabBar::get_tab_title)>("get_tab_title")
			.fun<static_cast<void (TabBar::*)(int32_t, Control::TextDirection)>(&TabBar::set_tab_text_direction)>("set_tab_text_direction")
			.fun<static_cast<Control::TextDirection (TabBar::*)(int32_t) const>(&TabBar::get_tab_text_direction)>("get_tab_text_direction")
			.fun<static_cast<void (TabBar::*)(int32_t, const String &)>(&TabBar::set_tab_language)>("set_tab_language")
			.fun<static_cast<String (TabBar::*)(int32_t) const>(&TabBar::get_tab_language)>("get_tab_language")
			.fun<static_cast<void (TabBar::*)(int32_t, const Ref<Texture2D> &)>(&TabBar::set_tab_icon)>("set_tab_icon")
			.fun<static_cast<Ref<Texture2D> (TabBar::*)(int32_t) const>(&TabBar::get_tab_icon)>("get_tab_icon")
			.fun<static_cast<void (TabBar::*)(int32_t, int32_t)>(&TabBar::set_tab_icon_max_width)>("set_tab_icon_max_width")
			.fun<static_cast<int32_t (TabBar::*)(int32_t) const>(&TabBar::get_tab_icon_max_width)>("get_tab_icon_max_width")
			.fun<static_cast<void (TabBar::*)(int32_t, const Ref<Texture2D> &)>(&TabBar::set_tab_button_icon)>("set_tab_button_icon")
			.fun<static_cast<Ref<Texture2D> (TabBar::*)(int32_t) const>(&TabBar::get_tab_button_icon)>("get_tab_button_icon")
			.fun<static_cast<void (TabBar::*)(int32_t, bool)>(&TabBar::set_tab_disabled)>("set_tab_disabled")
			.fun<static_cast<bool (TabBar::*)(int32_t) const>(&TabBar::is_tab_disabled)>("is_tab_disabled")
			.fun<static_cast<void (TabBar::*)(int32_t, bool)>(&TabBar::set_tab_hidden)>("set_tab_hidden")
			.fun<static_cast<bool (TabBar::*)(int32_t) const>(&TabBar::is_tab_hidden)>("is_tab_hidden")
			.fun<static_cast<void (TabBar::*)(int32_t, const Variant &)>(&TabBar::set_tab_metadata)>("set_tab_metadata")
			.fun<static_cast<Variant (TabBar::*)(int32_t) const>(&TabBar::get_tab_metadata)>("get_tab_metadata")
			.fun<static_cast<void (TabBar::*)(int32_t)>(&TabBar::remove_tab)>("remove_tab")
			.fun<static_cast<void (TabBar::*)(const String &, const Ref<Texture2D> &)>(&TabBar::add_tab)>("add_tab")
			.fun<static_cast<int32_t (TabBar::*)(const Vector2 &) const>(&TabBar::get_tab_idx_at_point)>("get_tab_idx_at_point")
			.fun<static_cast<int32_t (TabBar::*)() const>(&TabBar::get_tab_offset)>("get_tab_offset")
			.fun<static_cast<bool (TabBar::*)() const>(&TabBar::get_offset_buttons_visible)>("get_offset_buttons_visible")
			.fun<static_cast<void (TabBar::*)(int32_t)>(&TabBar::ensure_tab_visible)>("ensure_tab_visible")
			.fun<static_cast<Rect2 (TabBar::*)(int32_t) const>(&TabBar::get_tab_rect)>("get_tab_rect")
			.fun<static_cast<void (TabBar::*)(int32_t, int32_t)>(&TabBar::move_tab)>("move_tab")
			.fun<static_cast<void (TabBar::*)()>(&TabBar::clear_tabs)>("clear_tabs");
}