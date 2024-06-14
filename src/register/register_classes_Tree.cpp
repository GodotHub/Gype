
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/tree.hpp>
#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Tree() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<Tree>("Tree")
			.constructor<>()
			.base<Control>()
			.property<static_cast<int32_t (Tree::*)() const>(&Tree::get_columns), static_cast<void (Tree::*)(int32_t)>(&Tree::set_columns)>((new std::string("columns"))->c_str())
			.property<static_cast<bool (Tree::*)() const>(&Tree::are_column_titles_visible), static_cast<void (Tree::*)(bool)>(&Tree::set_column_titles_visible)>((new std::string("column_titles_visible"))->c_str())
			.property<static_cast<bool (Tree::*)() const>(&Tree::get_allow_reselect), static_cast<void (Tree::*)(bool)>(&Tree::set_allow_reselect)>((new std::string("allow_reselect"))->c_str())
			.property<static_cast<bool (Tree::*)() const>(&Tree::get_allow_rmb_select), static_cast<void (Tree::*)(bool)>(&Tree::set_allow_rmb_select)>((new std::string("allow_rmb_select"))->c_str())
			.property<static_cast<bool (Tree::*)() const>(&Tree::get_allow_search), static_cast<void (Tree::*)(bool)>(&Tree::set_allow_search)>((new std::string("allow_search"))->c_str())
			.property<static_cast<bool (Tree::*)() const>(&Tree::is_folding_hidden), static_cast<void (Tree::*)(bool)>(&Tree::set_hide_folding)>((new std::string("hide_folding"))->c_str())
			.property<static_cast<bool (Tree::*)() const>(&Tree::is_recursive_folding_enabled), static_cast<void (Tree::*)(bool)>(&Tree::set_enable_recursive_folding)>((new std::string("enable_recursive_folding"))->c_str())
			.property<static_cast<bool (Tree::*)() const>(&Tree::is_root_hidden), static_cast<void (Tree::*)(bool)>(&Tree::set_hide_root)>((new std::string("hide_root"))->c_str())
			.property<static_cast<int32_t (Tree::*)() const>(&Tree::get_drop_mode_flags), static_cast<void (Tree::*)(int32_t)>(&Tree::set_drop_mode_flags)>((new std::string("drop_mode_flags"))->c_str())
			.property<static_cast<Tree::SelectMode (Tree::*)() const>(&Tree::get_select_mode), static_cast<void (Tree::*)(Tree::SelectMode)>(&Tree::set_select_mode)>((new std::string("select_mode"))->c_str())
			.property<static_cast<bool (Tree::*)() const>(&Tree::is_h_scroll_enabled), static_cast<void (Tree::*)(bool)>(&Tree::set_h_scroll_enabled)>((new std::string("scroll_horizontal_enabled"))->c_str())
			.property<static_cast<bool (Tree::*)() const>(&Tree::is_v_scroll_enabled), static_cast<void (Tree::*)(bool)>(&Tree::set_v_scroll_enabled)>((new std::string("scroll_vertical_enabled"))->c_str())
			.fun<static_cast<void (Tree::*)()>(&Tree::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<TreeItem *(Tree::*)(TreeItem *, int32_t)>(&Tree::create_item)>((new std::string("create_item"))->c_str())
			.fun<static_cast<TreeItem *(Tree::*)() const>(&Tree::get_root)>((new std::string("get_root"))->c_str())
			.fun<static_cast<void (Tree::*)(int32_t, int32_t)>(&Tree::set_column_custom_minimum_width)>((new std::string("set_column_custom_minimum_width"))->c_str())
			.fun<static_cast<void (Tree::*)(int32_t, bool)>(&Tree::set_column_expand)>((new std::string("set_column_expand"))->c_str())
			.fun<static_cast<void (Tree::*)(int32_t, int32_t)>(&Tree::set_column_expand_ratio)>((new std::string("set_column_expand_ratio"))->c_str())
			.fun<static_cast<void (Tree::*)(int32_t, bool)>(&Tree::set_column_clip_content)>((new std::string("set_column_clip_content"))->c_str())
			.fun<static_cast<bool (Tree::*)(int32_t) const>(&Tree::is_column_expanding)>((new std::string("is_column_expanding"))->c_str())
			.fun<static_cast<bool (Tree::*)(int32_t) const>(&Tree::is_column_clipping_content)>((new std::string("is_column_clipping_content"))->c_str())
			.fun<static_cast<int32_t (Tree::*)(int32_t) const>(&Tree::get_column_expand_ratio)>((new std::string("get_column_expand_ratio"))->c_str())
			.fun<static_cast<int32_t (Tree::*)(int32_t) const>(&Tree::get_column_width)>((new std::string("get_column_width"))->c_str())
			.fun<static_cast<TreeItem *(Tree::*)(TreeItem *)>(&Tree::get_next_selected)>((new std::string("get_next_selected"))->c_str())
			.fun<static_cast<TreeItem *(Tree::*)() const>(&Tree::get_selected)>((new std::string("get_selected"))->c_str())
			.fun<static_cast<void (Tree::*)(TreeItem *, int32_t)>(&Tree::set_selected)>((new std::string("set_selected"))->c_str())
			.fun<static_cast<int32_t (Tree::*)() const>(&Tree::get_selected_column)>((new std::string("get_selected_column"))->c_str())
			.fun<static_cast<int32_t (Tree::*)() const>(&Tree::get_pressed_button)>((new std::string("get_pressed_button"))->c_str())
			.fun<static_cast<void (Tree::*)()>(&Tree::deselect_all)>((new std::string("deselect_all"))->c_str())
			.fun<static_cast<TreeItem *(Tree::*)() const>(&Tree::get_edited)>((new std::string("get_edited"))->c_str())
			.fun<static_cast<int32_t (Tree::*)() const>(&Tree::get_edited_column)>((new std::string("get_edited_column"))->c_str())
			.fun<static_cast<bool (Tree::*)(bool)>(&Tree::edit_selected)>((new std::string("edit_selected"))->c_str())
			.fun<static_cast<Rect2 (Tree::*)() const>(&Tree::get_custom_popup_rect)>((new std::string("get_custom_popup_rect"))->c_str())
			.fun<static_cast<Rect2 (Tree::*)(TreeItem *, int32_t, int32_t) const>(&Tree::get_item_area_rect)>((new std::string("get_item_area_rect"))->c_str())
			.fun<static_cast<TreeItem *(Tree::*)(const Vector2 &) const>(&Tree::get_item_at_position)>((new std::string("get_item_at_position"))->c_str())
			.fun<static_cast<int32_t (Tree::*)(const Vector2 &) const>(&Tree::get_column_at_position)>((new std::string("get_column_at_position"))->c_str())
			.fun<static_cast<int32_t (Tree::*)(const Vector2 &) const>(&Tree::get_drop_section_at_position)>((new std::string("get_drop_section_at_position"))->c_str())
			.fun<static_cast<int32_t (Tree::*)(const Vector2 &) const>(&Tree::get_button_id_at_position)>((new std::string("get_button_id_at_position"))->c_str())
			.fun<static_cast<void (Tree::*)()>(&Tree::ensure_cursor_is_visible)>((new std::string("ensure_cursor_is_visible"))->c_str())
			.fun<static_cast<void (Tree::*)(int32_t, const String &)>(&Tree::set_column_title)>((new std::string("set_column_title"))->c_str())
			.fun<static_cast<String (Tree::*)(int32_t) const>(&Tree::get_column_title)>((new std::string("get_column_title"))->c_str())
			.fun<static_cast<void (Tree::*)(int32_t, HorizontalAlignment)>(&Tree::set_column_title_alignment)>((new std::string("set_column_title_alignment"))->c_str())
			.fun<static_cast<HorizontalAlignment (Tree::*)(int32_t) const>(&Tree::get_column_title_alignment)>((new std::string("get_column_title_alignment"))->c_str())
			.fun<static_cast<void (Tree::*)(int32_t, Control::TextDirection)>(&Tree::set_column_title_direction)>((new std::string("set_column_title_direction"))->c_str())
			.fun<static_cast<Control::TextDirection (Tree::*)(int32_t) const>(&Tree::get_column_title_direction)>((new std::string("get_column_title_direction"))->c_str())
			.fun<static_cast<void (Tree::*)(int32_t, const String &)>(&Tree::set_column_title_language)>((new std::string("set_column_title_language"))->c_str())
			.fun<static_cast<String (Tree::*)(int32_t) const>(&Tree::get_column_title_language)>((new std::string("get_column_title_language"))->c_str())
			.fun<static_cast<Vector2 (Tree::*)() const>(&Tree::get_scroll)>((new std::string("get_scroll"))->c_str())
			.fun<static_cast<void (Tree::*)(TreeItem *, bool)>(&Tree::scroll_to_item)>((new std::string("scroll_to_item"))->c_str());
	qjs::Value _SelectMode = context->newObject();
	_SelectMode[(new std::string("SELECT_SINGLE"))->c_str()] = Tree::SelectMode::SELECT_SINGLE;
	_SelectMode[(new std::string("SELECT_ROW"))->c_str()] = Tree::SelectMode::SELECT_ROW;
	_SelectMode[(new std::string("SELECT_MULTI"))->c_str()] = Tree::SelectMode::SELECT_MULTI;
	_module.add("SelectMode", std::move(_SelectMode));
	qjs::Value _DropModeFlags = context->newObject();
	_DropModeFlags[(new std::string("DROP_MODE_DISABLED"))->c_str()] = Tree::DropModeFlags::DROP_MODE_DISABLED;
	_DropModeFlags[(new std::string("DROP_MODE_ON_ITEM"))->c_str()] = Tree::DropModeFlags::DROP_MODE_ON_ITEM;
	_DropModeFlags[(new std::string("DROP_MODE_INBETWEEN"))->c_str()] = Tree::DropModeFlags::DROP_MODE_INBETWEEN;
	_module.add("DropModeFlags", std::move(_DropModeFlags));
}