
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/item_list.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ItemList() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ItemList>("ItemList")
			.constructor<>()
			.base<Control>()
			.property<static_cast<ItemList::SelectMode (ItemList::*)() const>(&ItemList::get_select_mode), static_cast<void (ItemList::*)(ItemList::SelectMode)>(&ItemList::set_select_mode)>((new std::string("select_mode"))->c_str())
			.property<static_cast<bool (ItemList::*)() const>(&ItemList::get_allow_reselect), static_cast<void (ItemList::*)(bool)>(&ItemList::set_allow_reselect)>((new std::string("allow_reselect"))->c_str())
			.property<static_cast<bool (ItemList::*)() const>(&ItemList::get_allow_rmb_select), static_cast<void (ItemList::*)(bool)>(&ItemList::set_allow_rmb_select)>((new std::string("allow_rmb_select"))->c_str())
			.property<static_cast<bool (ItemList::*)() const>(&ItemList::get_allow_search), static_cast<void (ItemList::*)(bool)>(&ItemList::set_allow_search)>((new std::string("allow_search"))->c_str())
			.property<static_cast<int32_t (ItemList::*)() const>(&ItemList::get_max_text_lines), static_cast<void (ItemList::*)(int32_t)>(&ItemList::set_max_text_lines)>((new std::string("max_text_lines"))->c_str())
			.property<static_cast<bool (ItemList::*)() const>(&ItemList::has_auto_height), static_cast<void (ItemList::*)(bool)>(&ItemList::set_auto_height)>((new std::string("auto_height"))->c_str())
			.property<static_cast<TextServer::OverrunBehavior (ItemList::*)() const>(&ItemList::get_text_overrun_behavior), static_cast<void (ItemList::*)(TextServer::OverrunBehavior)>(&ItemList::set_text_overrun_behavior)>((new std::string("text_overrun_behavior"))->c_str())
			.property<static_cast<int32_t (ItemList::*)() const>(&ItemList::get_item_count), static_cast<void (ItemList::*)(int32_t)>(&ItemList::set_item_count)>((new std::string("item_count"))->c_str())
			.property<static_cast<int32_t (ItemList::*)() const>(&ItemList::get_max_columns), static_cast<void (ItemList::*)(int32_t)>(&ItemList::set_max_columns)>((new std::string("max_columns"))->c_str())
			.property<static_cast<bool (ItemList::*)() const>(&ItemList::is_same_column_width), static_cast<void (ItemList::*)(bool)>(&ItemList::set_same_column_width)>((new std::string("same_column_width"))->c_str())
			.property<static_cast<int32_t (ItemList::*)() const>(&ItemList::get_fixed_column_width), static_cast<void (ItemList::*)(int32_t)>(&ItemList::set_fixed_column_width)>((new std::string("fixed_column_width"))->c_str())
			.property<static_cast<ItemList::IconMode (ItemList::*)() const>(&ItemList::get_icon_mode), static_cast<void (ItemList::*)(ItemList::IconMode)>(&ItemList::set_icon_mode)>((new std::string("icon_mode"))->c_str())
			.property<static_cast<double (ItemList::*)() const>(&ItemList::get_icon_scale), static_cast<void (ItemList::*)(double)>(&ItemList::set_icon_scale)>((new std::string("icon_scale"))->c_str())
			.property<static_cast<Vector2i (ItemList::*)() const>(&ItemList::get_fixed_icon_size), static_cast<void (ItemList::*)(const Vector2i &)>(&ItemList::set_fixed_icon_size)>((new std::string("fixed_icon_size"))->c_str())
			.fun<static_cast<int32_t (ItemList::*)(const String &, const Ref<Texture2D> &, bool)>(&ItemList::add_item)>((new std::string("add_item"))->c_str())
			.fun<static_cast<int32_t (ItemList::*)(const Ref<Texture2D> &, bool)>(&ItemList::add_icon_item)>((new std::string("add_icon_item"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, const String &)>(&ItemList::set_item_text)>((new std::string("set_item_text"))->c_str())
			.fun<static_cast<String (ItemList::*)(int32_t) const>(&ItemList::get_item_text)>((new std::string("get_item_text"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, const Ref<Texture2D> &)>(&ItemList::set_item_icon)>((new std::string("set_item_icon"))->c_str())
			.fun<static_cast<Ref<Texture2D> (ItemList::*)(int32_t) const>(&ItemList::get_item_icon)>((new std::string("get_item_icon"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, Control::TextDirection)>(&ItemList::set_item_text_direction)>((new std::string("set_item_text_direction"))->c_str())
			.fun<static_cast<Control::TextDirection (ItemList::*)(int32_t) const>(&ItemList::get_item_text_direction)>((new std::string("get_item_text_direction"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, const String &)>(&ItemList::set_item_language)>((new std::string("set_item_language"))->c_str())
			.fun<static_cast<String (ItemList::*)(int32_t) const>(&ItemList::get_item_language)>((new std::string("get_item_language"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, bool)>(&ItemList::set_item_icon_transposed)>((new std::string("set_item_icon_transposed"))->c_str())
			.fun<static_cast<bool (ItemList::*)(int32_t) const>(&ItemList::is_item_icon_transposed)>((new std::string("is_item_icon_transposed"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, const Rect2 &)>(&ItemList::set_item_icon_region)>((new std::string("set_item_icon_region"))->c_str())
			.fun<static_cast<Rect2 (ItemList::*)(int32_t) const>(&ItemList::get_item_icon_region)>((new std::string("get_item_icon_region"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, const Color &)>(&ItemList::set_item_icon_modulate)>((new std::string("set_item_icon_modulate"))->c_str())
			.fun<static_cast<Color (ItemList::*)(int32_t) const>(&ItemList::get_item_icon_modulate)>((new std::string("get_item_icon_modulate"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, bool)>(&ItemList::set_item_selectable)>((new std::string("set_item_selectable"))->c_str())
			.fun<static_cast<bool (ItemList::*)(int32_t) const>(&ItemList::is_item_selectable)>((new std::string("is_item_selectable"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, bool)>(&ItemList::set_item_disabled)>((new std::string("set_item_disabled"))->c_str())
			.fun<static_cast<bool (ItemList::*)(int32_t) const>(&ItemList::is_item_disabled)>((new std::string("is_item_disabled"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, const Variant &)>(&ItemList::set_item_metadata)>((new std::string("set_item_metadata"))->c_str())
			.fun<static_cast<Variant (ItemList::*)(int32_t) const>(&ItemList::get_item_metadata)>((new std::string("get_item_metadata"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, const Color &)>(&ItemList::set_item_custom_bg_color)>((new std::string("set_item_custom_bg_color"))->c_str())
			.fun<static_cast<Color (ItemList::*)(int32_t) const>(&ItemList::get_item_custom_bg_color)>((new std::string("get_item_custom_bg_color"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, const Color &)>(&ItemList::set_item_custom_fg_color)>((new std::string("set_item_custom_fg_color"))->c_str())
			.fun<static_cast<Color (ItemList::*)(int32_t) const>(&ItemList::get_item_custom_fg_color)>((new std::string("get_item_custom_fg_color"))->c_str())
			.fun<static_cast<Rect2 (ItemList::*)(int32_t, bool) const>(&ItemList::get_item_rect)>((new std::string("get_item_rect"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, bool)>(&ItemList::set_item_tooltip_enabled)>((new std::string("set_item_tooltip_enabled"))->c_str())
			.fun<static_cast<bool (ItemList::*)(int32_t) const>(&ItemList::is_item_tooltip_enabled)>((new std::string("is_item_tooltip_enabled"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, const String &)>(&ItemList::set_item_tooltip)>((new std::string("set_item_tooltip"))->c_str())
			.fun<static_cast<String (ItemList::*)(int32_t) const>(&ItemList::get_item_tooltip)>((new std::string("get_item_tooltip"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, bool)>(&ItemList::select)>((new std::string("select"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t)>(&ItemList::deselect)>((new std::string("deselect"))->c_str())
			.fun<static_cast<void (ItemList::*)()>(&ItemList::deselect_all)>((new std::string("deselect_all"))->c_str())
			.fun<static_cast<bool (ItemList::*)(int32_t) const>(&ItemList::is_selected)>((new std::string("is_selected"))->c_str())
			.fun<static_cast<PackedInt32Array (ItemList::*)()>(&ItemList::get_selected_items)>((new std::string("get_selected_items"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t, int32_t)>(&ItemList::move_item)>((new std::string("move_item"))->c_str())
			.fun<static_cast<void (ItemList::*)(int32_t)>(&ItemList::remove_item)>((new std::string("remove_item"))->c_str())
			.fun<static_cast<void (ItemList::*)()>(&ItemList::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (ItemList::*)()>(&ItemList::sort_items_by_text)>((new std::string("sort_items_by_text"))->c_str())
			.fun<static_cast<bool (ItemList::*)()>(&ItemList::is_anything_selected)>((new std::string("is_anything_selected"))->c_str())
			.fun<static_cast<int32_t (ItemList::*)(const Vector2 &, bool) const>(&ItemList::get_item_at_position)>((new std::string("get_item_at_position"))->c_str())
			.fun<static_cast<void (ItemList::*)()>(&ItemList::ensure_current_is_visible)>((new std::string("ensure_current_is_visible"))->c_str())
			.fun<static_cast<VScrollBar *(ItemList::*)()>(&ItemList::get_v_scroll_bar)>((new std::string("get_v_scroll_bar"))->c_str())
			.fun<static_cast<void (ItemList::*)()>(&ItemList::force_update_list_size)>((new std::string("force_update_list_size"))->c_str());
	qjs::Value _IconMode = context->newObject();
	_IconMode[(new std::string("ICON_MODE_TOP"))->c_str()] = ItemList::IconMode::ICON_MODE_TOP;
	_IconMode[(new std::string("ICON_MODE_LEFT"))->c_str()] = ItemList::IconMode::ICON_MODE_LEFT;
	_module.add("IconMode", std::move(_IconMode));
	qjs::Value _SelectMode = context->newObject();
	_SelectMode[(new std::string("SELECT_SINGLE"))->c_str()] = ItemList::SelectMode::SELECT_SINGLE;
	_SelectMode[(new std::string("SELECT_MULTI"))->c_str()] = ItemList::SelectMode::SELECT_MULTI;
	_module.add("SelectMode", std::move(_SelectMode));
}