#include <godot_cpp/classes/item_list.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ItemList() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<ItemList>("ItemList")
            .constructor<>()
            .base<Control>()
            .property<static_cast<ItemList::SelectMode(ItemList::*)()const>(&ItemList::get_select_mode),static_cast<void(ItemList::*)(ItemList::SelectMode)>(&ItemList::set_select_mode)>("select_mode")
            .property<static_cast<bool(ItemList::*)()const>(&ItemList::get_allow_reselect),static_cast<void(ItemList::*)(bool)>(&ItemList::set_allow_reselect)>("allow_reselect")
            .property<static_cast<bool(ItemList::*)()const>(&ItemList::get_allow_rmb_select),static_cast<void(ItemList::*)(bool)>(&ItemList::set_allow_rmb_select)>("allow_rmb_select")
            .property<static_cast<bool(ItemList::*)()const>(&ItemList::get_allow_search),static_cast<void(ItemList::*)(bool)>(&ItemList::set_allow_search)>("allow_search")
            .property<static_cast<int32_t(ItemList::*)()const>(&ItemList::get_max_text_lines),static_cast<void(ItemList::*)(int32_t)>(&ItemList::set_max_text_lines)>("max_text_lines")
            .property<static_cast<bool(ItemList::*)()const>(&ItemList::has_auto_height),static_cast<void(ItemList::*)(bool)>(&ItemList::set_auto_height)>("auto_height")
            .property<static_cast<TextServer::OverrunBehavior(ItemList::*)()const>(&ItemList::get_text_overrun_behavior),static_cast<void(ItemList::*)(TextServer::OverrunBehavior)>(&ItemList::set_text_overrun_behavior)>("text_overrun_behavior")
            .property<static_cast<int32_t(ItemList::*)()const>(&ItemList::get_item_count),static_cast<void(ItemList::*)(int32_t)>(&ItemList::set_item_count)>("item_count")
            .property<static_cast<int32_t(ItemList::*)()const>(&ItemList::get_max_columns),static_cast<void(ItemList::*)(int32_t)>(&ItemList::set_max_columns)>("max_columns")
            .property<static_cast<bool(ItemList::*)()const>(&ItemList::is_same_column_width),static_cast<void(ItemList::*)(bool)>(&ItemList::set_same_column_width)>("same_column_width")
            .property<static_cast<int32_t(ItemList::*)()const>(&ItemList::get_fixed_column_width),static_cast<void(ItemList::*)(int32_t)>(&ItemList::set_fixed_column_width)>("fixed_column_width")
            .property<static_cast<ItemList::IconMode(ItemList::*)()const>(&ItemList::get_icon_mode),static_cast<void(ItemList::*)(ItemList::IconMode)>(&ItemList::set_icon_mode)>("icon_mode")
            .property<static_cast<double(ItemList::*)()const>(&ItemList::get_icon_scale),static_cast<void(ItemList::*)(double)>(&ItemList::set_icon_scale)>("icon_scale")
            .property<static_cast<Vector2i(ItemList::*)()const>(&ItemList::get_fixed_icon_size),static_cast<void(ItemList::*)(const Vector2i &)>(&ItemList::set_fixed_icon_size)>("fixed_icon_size")
            .fun<static_cast<int32_t(ItemList::*)(const String &,const Ref<Texture2D> &,bool)>(&ItemList::add_item)>("add_item")
            .fun<static_cast<int32_t(ItemList::*)(const Ref<Texture2D> &,bool)>(&ItemList::add_icon_item)>("add_icon_item")
            .fun<static_cast<void(ItemList::*)(int32_t,const String &)>(&ItemList::set_item_text)>("set_item_text")
            .fun<static_cast<String(ItemList::*)(int32_t)const>(&ItemList::get_item_text)>("get_item_text")
            .fun<static_cast<void(ItemList::*)(int32_t,const Ref<Texture2D> &)>(&ItemList::set_item_icon)>("set_item_icon")
            .fun<static_cast<Ref<Texture2D>(ItemList::*)(int32_t)const>(&ItemList::get_item_icon)>("get_item_icon")
            .fun<static_cast<void(ItemList::*)(int32_t,Control::TextDirection)>(&ItemList::set_item_text_direction)>("set_item_text_direction")
            .fun<static_cast<Control::TextDirection(ItemList::*)(int32_t)const>(&ItemList::get_item_text_direction)>("get_item_text_direction")
            .fun<static_cast<void(ItemList::*)(int32_t,const String &)>(&ItemList::set_item_language)>("set_item_language")
            .fun<static_cast<String(ItemList::*)(int32_t)const>(&ItemList::get_item_language)>("get_item_language")
            .fun<static_cast<void(ItemList::*)(int32_t,bool)>(&ItemList::set_item_icon_transposed)>("set_item_icon_transposed")
            .fun<static_cast<bool(ItemList::*)(int32_t)const>(&ItemList::is_item_icon_transposed)>("is_item_icon_transposed")
            .fun<static_cast<void(ItemList::*)(int32_t,const Rect2 &)>(&ItemList::set_item_icon_region)>("set_item_icon_region")
            .fun<static_cast<Rect2(ItemList::*)(int32_t)const>(&ItemList::get_item_icon_region)>("get_item_icon_region")
            .fun<static_cast<void(ItemList::*)(int32_t,const Color &)>(&ItemList::set_item_icon_modulate)>("set_item_icon_modulate")
            .fun<static_cast<Color(ItemList::*)(int32_t)const>(&ItemList::get_item_icon_modulate)>("get_item_icon_modulate")
            .fun<static_cast<void(ItemList::*)(int32_t,bool)>(&ItemList::set_item_selectable)>("set_item_selectable")
            .fun<static_cast<bool(ItemList::*)(int32_t)const>(&ItemList::is_item_selectable)>("is_item_selectable")
            .fun<static_cast<void(ItemList::*)(int32_t,bool)>(&ItemList::set_item_disabled)>("set_item_disabled")
            .fun<static_cast<bool(ItemList::*)(int32_t)const>(&ItemList::is_item_disabled)>("is_item_disabled")
            .fun<static_cast<void(ItemList::*)(int32_t,const Variant &)>(&ItemList::set_item_metadata)>("set_item_metadata")
            .fun<static_cast<Variant(ItemList::*)(int32_t)const>(&ItemList::get_item_metadata)>("get_item_metadata")
            .fun<static_cast<void(ItemList::*)(int32_t,const Color &)>(&ItemList::set_item_custom_bg_color)>("set_item_custom_bg_color")
            .fun<static_cast<Color(ItemList::*)(int32_t)const>(&ItemList::get_item_custom_bg_color)>("get_item_custom_bg_color")
            .fun<static_cast<void(ItemList::*)(int32_t,const Color &)>(&ItemList::set_item_custom_fg_color)>("set_item_custom_fg_color")
            .fun<static_cast<Color(ItemList::*)(int32_t)const>(&ItemList::get_item_custom_fg_color)>("get_item_custom_fg_color")
            .fun<static_cast<Rect2(ItemList::*)(int32_t,bool)const>(&ItemList::get_item_rect)>("get_item_rect")
            .fun<static_cast<void(ItemList::*)(int32_t,bool)>(&ItemList::set_item_tooltip_enabled)>("set_item_tooltip_enabled")
            .fun<static_cast<bool(ItemList::*)(int32_t)const>(&ItemList::is_item_tooltip_enabled)>("is_item_tooltip_enabled")
            .fun<static_cast<void(ItemList::*)(int32_t,const String &)>(&ItemList::set_item_tooltip)>("set_item_tooltip")
            .fun<static_cast<String(ItemList::*)(int32_t)const>(&ItemList::get_item_tooltip)>("get_item_tooltip")
            .fun<static_cast<void(ItemList::*)(int32_t,bool)>(&ItemList::select)>("select")
            .fun<static_cast<void(ItemList::*)(int32_t)>(&ItemList::deselect)>("deselect")
            .fun<static_cast<void(ItemList::*)()>(&ItemList::deselect_all)>("deselect_all")
            .fun<static_cast<bool(ItemList::*)(int32_t)const>(&ItemList::is_selected)>("is_selected")
            .fun<static_cast<PackedInt32Array(ItemList::*)()>(&ItemList::get_selected_items)>("get_selected_items")
            .fun<static_cast<void(ItemList::*)(int32_t,int32_t)>(&ItemList::move_item)>("move_item")
            .fun<static_cast<void(ItemList::*)(int32_t)>(&ItemList::remove_item)>("remove_item")
            .fun<static_cast<void(ItemList::*)()>(&ItemList::clear)>("clear")
            .fun<static_cast<void(ItemList::*)()>(&ItemList::sort_items_by_text)>("sort_items_by_text")
            .fun<static_cast<bool(ItemList::*)()>(&ItemList::is_anything_selected)>("is_anything_selected")
            .fun<static_cast<int32_t(ItemList::*)(const Vector2 &,bool)const>(&ItemList::get_item_at_position)>("get_item_at_position")
            .fun<static_cast<void(ItemList::*)()>(&ItemList::ensure_current_is_visible)>("ensure_current_is_visible")
            .fun<static_cast<VScrollBar *(ItemList::*)()>(&ItemList::get_v_scroll_bar)>("get_v_scroll_bar")
            .fun<static_cast<void(ItemList::*)()>(&ItemList::force_update_list_size)>("force_update_list_size")
;    qjs::Value _IconMode = context->newObject();
    _IconMode["ICON_MODE_TOP"] = ItemList::IconMode::ICON_MODE_TOP;
    _IconMode["ICON_MODE_LEFT"] = ItemList::IconMode::ICON_MODE_LEFT;
    _module.add("IconMode", std::move(_IconMode));
    qjs::Value _SelectMode = context->newObject();
    _SelectMode["SELECT_SINGLE"] = ItemList::SelectMode::SELECT_SINGLE;
    _SelectMode["SELECT_MULTI"] = ItemList::SelectMode::SELECT_MULTI;
    _module.add("SelectMode", std::move(_SelectMode));
}