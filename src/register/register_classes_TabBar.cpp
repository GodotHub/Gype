
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tab_bar.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TabBar() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<TabBar>("TabBar")
			.constructor<>()
			.base<Control>()
			.property<static_cast<int32_t (TabBar::*)() const>(&TabBar::get_current_tab), static_cast<void (TabBar::*)(int32_t)>(&TabBar::set_current_tab)>((new std::string("current_tab"))->c_str())
			.property<static_cast<TabBar::AlignmentMode (TabBar::*)() const>(&TabBar::get_tab_alignment), static_cast<void (TabBar::*)(TabBar::AlignmentMode)>(&TabBar::set_tab_alignment)>((new std::string("tab_alignment"))->c_str())
			.property<static_cast<bool (TabBar::*)() const>(&TabBar::get_clip_tabs), static_cast<void (TabBar::*)(bool)>(&TabBar::set_clip_tabs)>((new std::string("clip_tabs"))->c_str())
			.property<static_cast<TabBar::CloseButtonDisplayPolicy (TabBar::*)() const>(&TabBar::get_tab_close_display_policy), static_cast<void (TabBar::*)(TabBar::CloseButtonDisplayPolicy)>(&TabBar::set_tab_close_display_policy)>((new std::string("tab_close_display_policy"))->c_str())
			.property<static_cast<int32_t (TabBar::*)() const>(&TabBar::get_max_tab_width), static_cast<void (TabBar::*)(int32_t)>(&TabBar::set_max_tab_width)>((new std::string("max_tab_width"))->c_str())
			.property<static_cast<bool (TabBar::*)() const>(&TabBar::get_scrolling_enabled), static_cast<void (TabBar::*)(bool)>(&TabBar::set_scrolling_enabled)>((new std::string("scrolling_enabled"))->c_str())
			.property<static_cast<bool (TabBar::*)() const>(&TabBar::get_drag_to_rearrange_enabled), static_cast<void (TabBar::*)(bool)>(&TabBar::set_drag_to_rearrange_enabled)>((new std::string("drag_to_rearrange_enabled"))->c_str())
			.property<static_cast<int32_t (TabBar::*)() const>(&TabBar::get_tabs_rearrange_group), static_cast<void (TabBar::*)(int32_t)>(&TabBar::set_tabs_rearrange_group)>((new std::string("tabs_rearrange_group"))->c_str())
			.property<static_cast<bool (TabBar::*)() const>(&TabBar::get_scroll_to_selected), static_cast<void (TabBar::*)(bool)>(&TabBar::set_scroll_to_selected)>((new std::string("scroll_to_selected"))->c_str())
			.property<static_cast<bool (TabBar::*)() const>(&TabBar::get_select_with_rmb), static_cast<void (TabBar::*)(bool)>(&TabBar::set_select_with_rmb)>((new std::string("select_with_rmb"))->c_str())
			.property<static_cast<bool (TabBar::*)() const>(&TabBar::get_deselect_enabled), static_cast<void (TabBar::*)(bool)>(&TabBar::set_deselect_enabled)>((new std::string("deselect_enabled"))->c_str())
			.property<static_cast<int32_t (TabBar::*)() const>(&TabBar::get_tab_count), static_cast<void (TabBar::*)(int32_t)>(&TabBar::set_tab_count)>((new std::string("tab_count"))->c_str())
			.fun<static_cast<int32_t (TabBar::*)() const>(&TabBar::get_previous_tab)>((new std::string("get_previous_tab"))->c_str())
			.fun<static_cast<bool (TabBar::*)()>(&TabBar::select_previous_available)>((new std::string("select_previous_available"))->c_str())
			.fun<static_cast<bool (TabBar::*)()>(&TabBar::select_next_available)>((new std::string("select_next_available"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, const String &)>(&TabBar::set_tab_title)>((new std::string("set_tab_title"))->c_str())
			.fun<static_cast<String (TabBar::*)(int32_t) const>(&TabBar::get_tab_title)>((new std::string("get_tab_title"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, const String &)>(&TabBar::set_tab_tooltip)>((new std::string("set_tab_tooltip"))->c_str())
			.fun<static_cast<String (TabBar::*)(int32_t) const>(&TabBar::get_tab_tooltip)>((new std::string("get_tab_tooltip"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, Control::TextDirection)>(&TabBar::set_tab_text_direction)>((new std::string("set_tab_text_direction"))->c_str())
			.fun<static_cast<Control::TextDirection (TabBar::*)(int32_t) const>(&TabBar::get_tab_text_direction)>((new std::string("get_tab_text_direction"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, const String &)>(&TabBar::set_tab_language)>((new std::string("set_tab_language"))->c_str())
			.fun<static_cast<String (TabBar::*)(int32_t) const>(&TabBar::get_tab_language)>((new std::string("get_tab_language"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, const Ref<Texture2D> &)>(&TabBar::set_tab_icon)>((new std::string("set_tab_icon"))->c_str())
			.fun<static_cast<Ref<Texture2D> (TabBar::*)(int32_t) const>(&TabBar::get_tab_icon)>((new std::string("get_tab_icon"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, int32_t)>(&TabBar::set_tab_icon_max_width)>((new std::string("set_tab_icon_max_width"))->c_str())
			.fun<static_cast<int32_t (TabBar::*)(int32_t) const>(&TabBar::get_tab_icon_max_width)>((new std::string("get_tab_icon_max_width"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, const Ref<Texture2D> &)>(&TabBar::set_tab_button_icon)>((new std::string("set_tab_button_icon"))->c_str())
			.fun<static_cast<Ref<Texture2D> (TabBar::*)(int32_t) const>(&TabBar::get_tab_button_icon)>((new std::string("get_tab_button_icon"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, bool)>(&TabBar::set_tab_disabled)>((new std::string("set_tab_disabled"))->c_str())
			.fun<static_cast<bool (TabBar::*)(int32_t) const>(&TabBar::is_tab_disabled)>((new std::string("is_tab_disabled"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, bool)>(&TabBar::set_tab_hidden)>((new std::string("set_tab_hidden"))->c_str())
			.fun<static_cast<bool (TabBar::*)(int32_t) const>(&TabBar::is_tab_hidden)>((new std::string("is_tab_hidden"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, const Variant &)>(&TabBar::set_tab_metadata)>((new std::string("set_tab_metadata"))->c_str())
			.fun<static_cast<Variant (TabBar::*)(int32_t) const>(&TabBar::get_tab_metadata)>((new std::string("get_tab_metadata"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t)>(&TabBar::remove_tab)>((new std::string("remove_tab"))->c_str())
			.fun<static_cast<void (TabBar::*)(const String &, const Ref<Texture2D> &)>(&TabBar::add_tab)>((new std::string("add_tab"))->c_str())
			.fun<static_cast<int32_t (TabBar::*)(const Vector2 &) const>(&TabBar::get_tab_idx_at_point)>((new std::string("get_tab_idx_at_point"))->c_str())
			.fun<static_cast<int32_t (TabBar::*)() const>(&TabBar::get_tab_offset)>((new std::string("get_tab_offset"))->c_str())
			.fun<static_cast<bool (TabBar::*)() const>(&TabBar::get_offset_buttons_visible)>((new std::string("get_offset_buttons_visible"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t)>(&TabBar::ensure_tab_visible)>((new std::string("ensure_tab_visible"))->c_str())
			.fun<static_cast<Rect2 (TabBar::*)(int32_t) const>(&TabBar::get_tab_rect)>((new std::string("get_tab_rect"))->c_str())
			.fun<static_cast<void (TabBar::*)(int32_t, int32_t)>(&TabBar::move_tab)>((new std::string("move_tab"))->c_str())
			.fun<static_cast<void (TabBar::*)()>(&TabBar::clear_tabs)>((new std::string("clear_tabs"))->c_str());
	qjs::Value _AlignmentMode = context->newObject();
	_AlignmentMode[(new std::string("ALIGNMENT_LEFT"))->c_str()] = TabBar::AlignmentMode::ALIGNMENT_LEFT;
	_AlignmentMode[(new std::string("ALIGNMENT_CENTER"))->c_str()] = TabBar::AlignmentMode::ALIGNMENT_CENTER;
	_AlignmentMode[(new std::string("ALIGNMENT_RIGHT"))->c_str()] = TabBar::AlignmentMode::ALIGNMENT_RIGHT;
	_AlignmentMode[(new std::string("ALIGNMENT_MAX"))->c_str()] = TabBar::AlignmentMode::ALIGNMENT_MAX;
	_module.add("AlignmentMode", std::move(_AlignmentMode));
	qjs::Value _CloseButtonDisplayPolicy = context->newObject();
	_CloseButtonDisplayPolicy[(new std::string("CLOSE_BUTTON_SHOW_NEVER"))->c_str()] = TabBar::CloseButtonDisplayPolicy::CLOSE_BUTTON_SHOW_NEVER;
	_CloseButtonDisplayPolicy[(new std::string("CLOSE_BUTTON_SHOW_ACTIVE_ONLY"))->c_str()] = TabBar::CloseButtonDisplayPolicy::CLOSE_BUTTON_SHOW_ACTIVE_ONLY;
	_CloseButtonDisplayPolicy[(new std::string("CLOSE_BUTTON_SHOW_ALWAYS"))->c_str()] = TabBar::CloseButtonDisplayPolicy::CLOSE_BUTTON_SHOW_ALWAYS;
	_CloseButtonDisplayPolicy[(new std::string("CLOSE_BUTTON_MAX"))->c_str()] = TabBar::CloseButtonDisplayPolicy::CLOSE_BUTTON_MAX;
	_module.add("CloseButtonDisplayPolicy", std::move(_CloseButtonDisplayPolicy));
}