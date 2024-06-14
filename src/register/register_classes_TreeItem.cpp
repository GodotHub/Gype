
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/tree.hpp>
#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TreeItem() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TreeItem>("TreeItem")
			.constructor<>()
			.base<Object>()
			.property<static_cast<bool (TreeItem::*)()>(&TreeItem::is_collapsed), static_cast<void (TreeItem::*)(bool)>(&TreeItem::set_collapsed)>((new std::string("collapsed"))->c_str())
			.property<static_cast<bool (TreeItem::*)()>(&TreeItem::is_visible), static_cast<void (TreeItem::*)(bool)>(&TreeItem::set_visible)>((new std::string("visible"))->c_str())
			.property<static_cast<bool (TreeItem::*)() const>(&TreeItem::is_folding_disabled), static_cast<void (TreeItem::*)(bool)>(&TreeItem::set_disable_folding)>((new std::string("disable_folding"))->c_str())
			.property<static_cast<int32_t (TreeItem::*)() const>(&TreeItem::get_custom_minimum_height), static_cast<void (TreeItem::*)(int32_t)>(&TreeItem::set_custom_minimum_height)>((new std::string("custom_minimum_height"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, TreeItem::TreeCellMode)>(&TreeItem::set_cell_mode)>((new std::string("set_cell_mode"))->c_str())
			.fun<static_cast<TreeItem::TreeCellMode (TreeItem::*)(int32_t) const>(&TreeItem::get_cell_mode)>((new std::string("get_cell_mode"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, bool)>(&TreeItem::set_edit_multiline)>((new std::string("set_edit_multiline"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(int32_t) const>(&TreeItem::is_edit_multiline)>((new std::string("is_edit_multiline"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, bool)>(&TreeItem::set_checked)>((new std::string("set_checked"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, bool)>(&TreeItem::set_indeterminate)>((new std::string("set_indeterminate"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(int32_t) const>(&TreeItem::is_checked)>((new std::string("is_checked"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(int32_t) const>(&TreeItem::is_indeterminate)>((new std::string("is_indeterminate"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, bool)>(&TreeItem::propagate_check)>((new std::string("propagate_check"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const String &)>(&TreeItem::set_text)>((new std::string("set_text"))->c_str())
			.fun<static_cast<String (TreeItem::*)(int32_t) const>(&TreeItem::get_text)>((new std::string("get_text"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, Control::TextDirection)>(&TreeItem::set_text_direction)>((new std::string("set_text_direction"))->c_str())
			.fun<static_cast<Control::TextDirection (TreeItem::*)(int32_t) const>(&TreeItem::get_text_direction)>((new std::string("get_text_direction"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, TextServer::AutowrapMode)>(&TreeItem::set_autowrap_mode)>((new std::string("set_autowrap_mode"))->c_str())
			.fun<static_cast<TextServer::AutowrapMode (TreeItem::*)(int32_t) const>(&TreeItem::get_autowrap_mode)>((new std::string("get_autowrap_mode"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, TextServer::OverrunBehavior)>(&TreeItem::set_text_overrun_behavior)>((new std::string("set_text_overrun_behavior"))->c_str())
			.fun<static_cast<TextServer::OverrunBehavior (TreeItem::*)(int32_t) const>(&TreeItem::get_text_overrun_behavior)>((new std::string("get_text_overrun_behavior"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, TextServer::StructuredTextParser)>(&TreeItem::set_structured_text_bidi_override)>((new std::string("set_structured_text_bidi_override"))->c_str())
			.fun<static_cast<TextServer::StructuredTextParser (TreeItem::*)(int32_t) const>(&TreeItem::get_structured_text_bidi_override)>((new std::string("get_structured_text_bidi_override"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Array &)>(&TreeItem::set_structured_text_bidi_override_options)>((new std::string("set_structured_text_bidi_override_options"))->c_str())
			.fun<static_cast<Array (TreeItem::*)(int32_t) const>(&TreeItem::get_structured_text_bidi_override_options)>((new std::string("get_structured_text_bidi_override_options"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const String &)>(&TreeItem::set_language)>((new std::string("set_language"))->c_str())
			.fun<static_cast<String (TreeItem::*)(int32_t) const>(&TreeItem::get_language)>((new std::string("get_language"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const String &)>(&TreeItem::set_suffix)>((new std::string("set_suffix"))->c_str())
			.fun<static_cast<String (TreeItem::*)(int32_t) const>(&TreeItem::get_suffix)>((new std::string("get_suffix"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Ref<Texture2D> &)>(&TreeItem::set_icon)>((new std::string("set_icon"))->c_str())
			.fun<static_cast<Ref<Texture2D> (TreeItem::*)(int32_t) const>(&TreeItem::get_icon)>((new std::string("get_icon"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Rect2 &)>(&TreeItem::set_icon_region)>((new std::string("set_icon_region"))->c_str())
			.fun<static_cast<Rect2 (TreeItem::*)(int32_t) const>(&TreeItem::get_icon_region)>((new std::string("get_icon_region"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, int32_t)>(&TreeItem::set_icon_max_width)>((new std::string("set_icon_max_width"))->c_str())
			.fun<static_cast<int32_t (TreeItem::*)(int32_t) const>(&TreeItem::get_icon_max_width)>((new std::string("get_icon_max_width"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Color &)>(&TreeItem::set_icon_modulate)>((new std::string("set_icon_modulate"))->c_str())
			.fun<static_cast<Color (TreeItem::*)(int32_t) const>(&TreeItem::get_icon_modulate)>((new std::string("get_icon_modulate"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, double)>(&TreeItem::set_range)>((new std::string("set_range"))->c_str())
			.fun<static_cast<double (TreeItem::*)(int32_t) const>(&TreeItem::get_range)>((new std::string("get_range"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, double, double, double, bool)>(&TreeItem::set_range_config)>((new std::string("set_range_config"))->c_str())
			.fun<static_cast<Dictionary (TreeItem::*)(int32_t)>(&TreeItem::get_range_config)>((new std::string("get_range_config"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Variant &)>(&TreeItem::set_metadata)>((new std::string("set_metadata"))->c_str())
			.fun<static_cast<Variant (TreeItem::*)(int32_t) const>(&TreeItem::get_metadata)>((new std::string("get_metadata"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, Object *, const StringName &)>(&TreeItem::set_custom_draw)>((new std::string("set_custom_draw"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Callable &)>(&TreeItem::set_custom_draw_callback)>((new std::string("set_custom_draw_callback"))->c_str())
			.fun<static_cast<Callable (TreeItem::*)(int32_t) const>(&TreeItem::get_custom_draw_callback)>((new std::string("get_custom_draw_callback"))->c_str())
			.fun<static_cast<void (TreeItem::*)(bool)>(&TreeItem::set_collapsed_recursive)>((new std::string("set_collapsed_recursive"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(bool)>(&TreeItem::is_any_collapsed)>((new std::string("is_any_collapsed"))->c_str())
			.fun<static_cast<bool (TreeItem::*)() const>(&TreeItem::is_visible_in_tree)>((new std::string("is_visible_in_tree"))->c_str())
			.fun<static_cast<void (TreeItem::*)()>(&TreeItem::uncollapse_tree)>((new std::string("uncollapse_tree"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, bool)>(&TreeItem::set_selectable)>((new std::string("set_selectable"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(int32_t) const>(&TreeItem::is_selectable)>((new std::string("is_selectable"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(int32_t)>(&TreeItem::is_selected)>((new std::string("is_selected"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t)>(&TreeItem::select)>((new std::string("select"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t)>(&TreeItem::deselect)>((new std::string("deselect"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, bool)>(&TreeItem::set_editable)>((new std::string("set_editable"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(int32_t)>(&TreeItem::is_editable)>((new std::string("is_editable"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Color &)>(&TreeItem::set_custom_color)>((new std::string("set_custom_color"))->c_str())
			.fun<static_cast<Color (TreeItem::*)(int32_t) const>(&TreeItem::get_custom_color)>((new std::string("get_custom_color"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t)>(&TreeItem::clear_custom_color)>((new std::string("clear_custom_color"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Ref<Font> &)>(&TreeItem::set_custom_font)>((new std::string("set_custom_font"))->c_str())
			.fun<static_cast<Ref<Font> (TreeItem::*)(int32_t) const>(&TreeItem::get_custom_font)>((new std::string("get_custom_font"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, int32_t)>(&TreeItem::set_custom_font_size)>((new std::string("set_custom_font_size"))->c_str())
			.fun<static_cast<int32_t (TreeItem::*)(int32_t) const>(&TreeItem::get_custom_font_size)>((new std::string("get_custom_font_size"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Color &, bool)>(&TreeItem::set_custom_bg_color)>((new std::string("set_custom_bg_color"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t)>(&TreeItem::clear_custom_bg_color)>((new std::string("clear_custom_bg_color"))->c_str())
			.fun<static_cast<Color (TreeItem::*)(int32_t) const>(&TreeItem::get_custom_bg_color)>((new std::string("get_custom_bg_color"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, bool)>(&TreeItem::set_custom_as_button)>((new std::string("set_custom_as_button"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(int32_t) const>(&TreeItem::is_custom_set_as_button)>((new std::string("is_custom_set_as_button"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const Ref<Texture2D> &, int32_t, bool, const String &)>(&TreeItem::add_button)>((new std::string("add_button"))->c_str())
			.fun<static_cast<int32_t (TreeItem::*)(int32_t) const>(&TreeItem::get_button_count)>((new std::string("get_button_count"))->c_str())
			.fun<static_cast<String (TreeItem::*)(int32_t, int32_t) const>(&TreeItem::get_button_tooltip_text)>((new std::string("get_button_tooltip_text"))->c_str())
			.fun<static_cast<int32_t (TreeItem::*)(int32_t, int32_t) const>(&TreeItem::get_button_id)>((new std::string("get_button_id"))->c_str())
			.fun<static_cast<int32_t (TreeItem::*)(int32_t, int32_t) const>(&TreeItem::get_button_by_id)>((new std::string("get_button_by_id"))->c_str())
			.fun<static_cast<Color (TreeItem::*)(int32_t, int32_t) const>(&TreeItem::get_button_color)>((new std::string("get_button_color"))->c_str())
			.fun<static_cast<Ref<Texture2D> (TreeItem::*)(int32_t, int32_t) const>(&TreeItem::get_button)>((new std::string("get_button"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, int32_t, const String &)>(&TreeItem::set_button_tooltip_text)>((new std::string("set_button_tooltip_text"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, int32_t, const Ref<Texture2D> &)>(&TreeItem::set_button)>((new std::string("set_button"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, int32_t)>(&TreeItem::erase_button)>((new std::string("erase_button"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, int32_t, bool)>(&TreeItem::set_button_disabled)>((new std::string("set_button_disabled"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, int32_t, const Color &)>(&TreeItem::set_button_color)>((new std::string("set_button_color"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(int32_t, int32_t) const>(&TreeItem::is_button_disabled)>((new std::string("is_button_disabled"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, const String &)>(&TreeItem::set_tooltip_text)>((new std::string("set_tooltip_text"))->c_str())
			.fun<static_cast<String (TreeItem::*)(int32_t) const>(&TreeItem::get_tooltip_text)>((new std::string("get_tooltip_text"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, HorizontalAlignment)>(&TreeItem::set_text_alignment)>((new std::string("set_text_alignment"))->c_str())
			.fun<static_cast<HorizontalAlignment (TreeItem::*)(int32_t) const>(&TreeItem::get_text_alignment)>((new std::string("get_text_alignment"))->c_str())
			.fun<static_cast<void (TreeItem::*)(int32_t, bool)>(&TreeItem::set_expand_right)>((new std::string("set_expand_right"))->c_str())
			.fun<static_cast<bool (TreeItem::*)(int32_t) const>(&TreeItem::get_expand_right)>((new std::string("get_expand_right"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)(int32_t)>(&TreeItem::create_child)>((new std::string("create_child"))->c_str())
			.fun<static_cast<void (TreeItem::*)(TreeItem *)>(&TreeItem::add_child)>((new std::string("add_child"))->c_str())
			.fun<static_cast<void (TreeItem::*)(TreeItem *)>(&TreeItem::remove_child)>((new std::string("remove_child"))->c_str())
			.fun<static_cast<Tree *(TreeItem::*)() const>(&TreeItem::get_tree)>((new std::string("get_tree"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)() const>(&TreeItem::get_next)>((new std::string("get_next"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)()>(&TreeItem::get_prev)>((new std::string("get_prev"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)() const>(&TreeItem::get_parent)>((new std::string("get_parent"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)() const>(&TreeItem::get_first_child)>((new std::string("get_first_child"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)(bool)>(&TreeItem::get_next_in_tree)>((new std::string("get_next_in_tree"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)(bool)>(&TreeItem::get_prev_in_tree)>((new std::string("get_prev_in_tree"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)(bool)>(&TreeItem::get_next_visible)>((new std::string("get_next_visible"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)(bool)>(&TreeItem::get_prev_visible)>((new std::string("get_prev_visible"))->c_str())
			.fun<static_cast<TreeItem *(TreeItem::*)(int32_t)>(&TreeItem::get_child)>((new std::string("get_child"))->c_str())
			.fun<static_cast<int32_t (TreeItem::*)()>(&TreeItem::get_child_count)>((new std::string("get_child_count"))->c_str())
			.fun<static_cast<TypedArray<TreeItem> (TreeItem::*)()>(&TreeItem::get_children)>((new std::string("get_children"))->c_str())
			.fun<static_cast<int32_t (TreeItem::*)()>(&TreeItem::get_index)>((new std::string("get_index"))->c_str())
			.fun<static_cast<void (TreeItem::*)(TreeItem *)>(&TreeItem::move_before)>((new std::string("move_before"))->c_str())
			.fun<static_cast<void (TreeItem::*)(TreeItem *)>(&TreeItem::move_after)>((new std::string("move_after"))->c_str())
			.fun<static_cast<void (TreeItem::*)(const StringName &, rest<Variant> args)>(&TreeItem::call_recursive)>((new std::string("call_recursive"))->c_str());
	qjs::Value _TreeCellMode = context->newObject();
	_TreeCellMode[(new std::string("CELL_MODE_STRING"))->c_str()] = TreeItem::TreeCellMode::CELL_MODE_STRING;
	_TreeCellMode[(new std::string("CELL_MODE_CHECK"))->c_str()] = TreeItem::TreeCellMode::CELL_MODE_CHECK;
	_TreeCellMode[(new std::string("CELL_MODE_RANGE"))->c_str()] = TreeItem::TreeCellMode::CELL_MODE_RANGE;
	_TreeCellMode[(new std::string("CELL_MODE_ICON"))->c_str()] = TreeItem::TreeCellMode::CELL_MODE_ICON;
	_TreeCellMode[(new std::string("CELL_MODE_CUSTOM"))->c_str()] = TreeItem::TreeCellMode::CELL_MODE_CUSTOM;
	_module.add("TreeCellMode", std::move(_TreeCellMode));
}