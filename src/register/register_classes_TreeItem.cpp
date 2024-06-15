#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/tree.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TreeItem() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TreeItem>("TreeItem")
            .constructor<>()
            .base<Object>()
            .property<static_cast<bool(TreeItem::*)()>(&TreeItem::is_collapsed),static_cast<void(TreeItem::*)(bool)>(&TreeItem::set_collapsed)>("collapsed")
            .property<static_cast<bool(TreeItem::*)()>(&TreeItem::is_visible),static_cast<void(TreeItem::*)(bool)>(&TreeItem::set_visible)>("visible")
            .property<static_cast<bool(TreeItem::*)()const>(&TreeItem::is_folding_disabled),static_cast<void(TreeItem::*)(bool)>(&TreeItem::set_disable_folding)>("disable_folding")
            .property<static_cast<int32_t(TreeItem::*)()const>(&TreeItem::get_custom_minimum_height),static_cast<void(TreeItem::*)(int32_t)>(&TreeItem::set_custom_minimum_height)>("custom_minimum_height")
            .fun<static_cast<void(TreeItem::*)(int32_t,TreeItem::TreeCellMode)>(&TreeItem::set_cell_mode)>("set_cell_mode")
            .fun<static_cast<TreeItem::TreeCellMode(TreeItem::*)(int32_t)const>(&TreeItem::get_cell_mode)>("get_cell_mode")
            .fun<static_cast<void(TreeItem::*)(int32_t,bool)>(&TreeItem::set_edit_multiline)>("set_edit_multiline")
            .fun<static_cast<bool(TreeItem::*)(int32_t)const>(&TreeItem::is_edit_multiline)>("is_edit_multiline")
            .fun<static_cast<void(TreeItem::*)(int32_t,bool)>(&TreeItem::set_checked)>("set_checked")
            .fun<static_cast<void(TreeItem::*)(int32_t,bool)>(&TreeItem::set_indeterminate)>("set_indeterminate")
            .fun<static_cast<bool(TreeItem::*)(int32_t)const>(&TreeItem::is_checked)>("is_checked")
            .fun<static_cast<bool(TreeItem::*)(int32_t)const>(&TreeItem::is_indeterminate)>("is_indeterminate")
            .fun<static_cast<void(TreeItem::*)(int32_t,bool)>(&TreeItem::propagate_check)>("propagate_check")
            .fun<static_cast<void(TreeItem::*)(int32_t,const String &)>(&TreeItem::set_text)>("set_text")
            .fun<static_cast<String(TreeItem::*)(int32_t)const>(&TreeItem::get_text)>("get_text")
            .fun<static_cast<void(TreeItem::*)(int32_t,Control::TextDirection)>(&TreeItem::set_text_direction)>("set_text_direction")
            .fun<static_cast<Control::TextDirection(TreeItem::*)(int32_t)const>(&TreeItem::get_text_direction)>("get_text_direction")
            .fun<static_cast<void(TreeItem::*)(int32_t,TextServer::AutowrapMode)>(&TreeItem::set_autowrap_mode)>("set_autowrap_mode")
            .fun<static_cast<TextServer::AutowrapMode(TreeItem::*)(int32_t)const>(&TreeItem::get_autowrap_mode)>("get_autowrap_mode")
            .fun<static_cast<void(TreeItem::*)(int32_t,TextServer::OverrunBehavior)>(&TreeItem::set_text_overrun_behavior)>("set_text_overrun_behavior")
            .fun<static_cast<TextServer::OverrunBehavior(TreeItem::*)(int32_t)const>(&TreeItem::get_text_overrun_behavior)>("get_text_overrun_behavior")
            .fun<static_cast<void(TreeItem::*)(int32_t,TextServer::StructuredTextParser)>(&TreeItem::set_structured_text_bidi_override)>("set_structured_text_bidi_override")
            .fun<static_cast<TextServer::StructuredTextParser(TreeItem::*)(int32_t)const>(&TreeItem::get_structured_text_bidi_override)>("get_structured_text_bidi_override")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Array &)>(&TreeItem::set_structured_text_bidi_override_options)>("set_structured_text_bidi_override_options")
            .fun<static_cast<Array(TreeItem::*)(int32_t)const>(&TreeItem::get_structured_text_bidi_override_options)>("get_structured_text_bidi_override_options")
            .fun<static_cast<void(TreeItem::*)(int32_t,const String &)>(&TreeItem::set_language)>("set_language")
            .fun<static_cast<String(TreeItem::*)(int32_t)const>(&TreeItem::get_language)>("get_language")
            .fun<static_cast<void(TreeItem::*)(int32_t,const String &)>(&TreeItem::set_suffix)>("set_suffix")
            .fun<static_cast<String(TreeItem::*)(int32_t)const>(&TreeItem::get_suffix)>("get_suffix")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Ref<Texture2D> &)>(&TreeItem::set_icon)>("set_icon")
            .fun<static_cast<Ref<Texture2D>(TreeItem::*)(int32_t)const>(&TreeItem::get_icon)>("get_icon")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Rect2 &)>(&TreeItem::set_icon_region)>("set_icon_region")
            .fun<static_cast<Rect2(TreeItem::*)(int32_t)const>(&TreeItem::get_icon_region)>("get_icon_region")
            .fun<static_cast<void(TreeItem::*)(int32_t,int32_t)>(&TreeItem::set_icon_max_width)>("set_icon_max_width")
            .fun<static_cast<int32_t(TreeItem::*)(int32_t)const>(&TreeItem::get_icon_max_width)>("get_icon_max_width")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Color &)>(&TreeItem::set_icon_modulate)>("set_icon_modulate")
            .fun<static_cast<Color(TreeItem::*)(int32_t)const>(&TreeItem::get_icon_modulate)>("get_icon_modulate")
            .fun<static_cast<void(TreeItem::*)(int32_t,double)>(&TreeItem::set_range)>("set_range")
            .fun<static_cast<double(TreeItem::*)(int32_t)const>(&TreeItem::get_range)>("get_range")
            .fun<static_cast<void(TreeItem::*)(int32_t,double,double,double,bool)>(&TreeItem::set_range_config)>("set_range_config")
            .fun<static_cast<Dictionary(TreeItem::*)(int32_t)>(&TreeItem::get_range_config)>("get_range_config")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Variant &)>(&TreeItem::set_metadata)>("set_metadata")
            .fun<static_cast<Variant(TreeItem::*)(int32_t)const>(&TreeItem::get_metadata)>("get_metadata")
            .fun<static_cast<void(TreeItem::*)(int32_t,Object *,const StringName &)>(&TreeItem::set_custom_draw)>("set_custom_draw")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Callable &)>(&TreeItem::set_custom_draw_callback)>("set_custom_draw_callback")
            .fun<static_cast<Callable(TreeItem::*)(int32_t)const>(&TreeItem::get_custom_draw_callback)>("get_custom_draw_callback")
            .fun<static_cast<void(TreeItem::*)(bool)>(&TreeItem::set_collapsed_recursive)>("set_collapsed_recursive")
            .fun<static_cast<bool(TreeItem::*)(bool)>(&TreeItem::is_any_collapsed)>("is_any_collapsed")
            .fun<static_cast<bool(TreeItem::*)()const>(&TreeItem::is_visible_in_tree)>("is_visible_in_tree")
            .fun<static_cast<void(TreeItem::*)()>(&TreeItem::uncollapse_tree)>("uncollapse_tree")
            .fun<static_cast<void(TreeItem::*)(int32_t,bool)>(&TreeItem::set_selectable)>("set_selectable")
            .fun<static_cast<bool(TreeItem::*)(int32_t)const>(&TreeItem::is_selectable)>("is_selectable")
            .fun<static_cast<bool(TreeItem::*)(int32_t)>(&TreeItem::is_selected)>("is_selected")
            .fun<static_cast<void(TreeItem::*)(int32_t)>(&TreeItem::select)>("select")
            .fun<static_cast<void(TreeItem::*)(int32_t)>(&TreeItem::deselect)>("deselect")
            .fun<static_cast<void(TreeItem::*)(int32_t,bool)>(&TreeItem::set_editable)>("set_editable")
            .fun<static_cast<bool(TreeItem::*)(int32_t)>(&TreeItem::is_editable)>("is_editable")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Color &)>(&TreeItem::set_custom_color)>("set_custom_color")
            .fun<static_cast<Color(TreeItem::*)(int32_t)const>(&TreeItem::get_custom_color)>("get_custom_color")
            .fun<static_cast<void(TreeItem::*)(int32_t)>(&TreeItem::clear_custom_color)>("clear_custom_color")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Ref<Font> &)>(&TreeItem::set_custom_font)>("set_custom_font")
            .fun<static_cast<Ref<Font>(TreeItem::*)(int32_t)const>(&TreeItem::get_custom_font)>("get_custom_font")
            .fun<static_cast<void(TreeItem::*)(int32_t,int32_t)>(&TreeItem::set_custom_font_size)>("set_custom_font_size")
            .fun<static_cast<int32_t(TreeItem::*)(int32_t)const>(&TreeItem::get_custom_font_size)>("get_custom_font_size")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Color &,bool)>(&TreeItem::set_custom_bg_color)>("set_custom_bg_color")
            .fun<static_cast<void(TreeItem::*)(int32_t)>(&TreeItem::clear_custom_bg_color)>("clear_custom_bg_color")
            .fun<static_cast<Color(TreeItem::*)(int32_t)const>(&TreeItem::get_custom_bg_color)>("get_custom_bg_color")
            .fun<static_cast<void(TreeItem::*)(int32_t,bool)>(&TreeItem::set_custom_as_button)>("set_custom_as_button")
            .fun<static_cast<bool(TreeItem::*)(int32_t)const>(&TreeItem::is_custom_set_as_button)>("is_custom_set_as_button")
            .fun<static_cast<void(TreeItem::*)(int32_t,const Ref<Texture2D> &,int32_t,bool,const String &)>(&TreeItem::add_button)>("add_button")
            .fun<static_cast<int32_t(TreeItem::*)(int32_t)const>(&TreeItem::get_button_count)>("get_button_count")
            .fun<static_cast<String(TreeItem::*)(int32_t,int32_t)const>(&TreeItem::get_button_tooltip_text)>("get_button_tooltip_text")
            .fun<static_cast<int32_t(TreeItem::*)(int32_t,int32_t)const>(&TreeItem::get_button_id)>("get_button_id")
            .fun<static_cast<int32_t(TreeItem::*)(int32_t,int32_t)const>(&TreeItem::get_button_by_id)>("get_button_by_id")
            .fun<static_cast<Color(TreeItem::*)(int32_t,int32_t)const>(&TreeItem::get_button_color)>("get_button_color")
            .fun<static_cast<Ref<Texture2D>(TreeItem::*)(int32_t,int32_t)const>(&TreeItem::get_button)>("get_button")
            .fun<static_cast<void(TreeItem::*)(int32_t,int32_t,const String &)>(&TreeItem::set_button_tooltip_text)>("set_button_tooltip_text")
            .fun<static_cast<void(TreeItem::*)(int32_t,int32_t,const Ref<Texture2D> &)>(&TreeItem::set_button)>("set_button")
            .fun<static_cast<void(TreeItem::*)(int32_t,int32_t)>(&TreeItem::erase_button)>("erase_button")
            .fun<static_cast<void(TreeItem::*)(int32_t,int32_t,bool)>(&TreeItem::set_button_disabled)>("set_button_disabled")
            .fun<static_cast<void(TreeItem::*)(int32_t,int32_t,const Color &)>(&TreeItem::set_button_color)>("set_button_color")
            .fun<static_cast<bool(TreeItem::*)(int32_t,int32_t)const>(&TreeItem::is_button_disabled)>("is_button_disabled")
            .fun<static_cast<void(TreeItem::*)(int32_t,const String &)>(&TreeItem::set_tooltip_text)>("set_tooltip_text")
            .fun<static_cast<String(TreeItem::*)(int32_t)const>(&TreeItem::get_tooltip_text)>("get_tooltip_text")
            .fun<static_cast<void(TreeItem::*)(int32_t,HorizontalAlignment)>(&TreeItem::set_text_alignment)>("set_text_alignment")
            .fun<static_cast<HorizontalAlignment(TreeItem::*)(int32_t)const>(&TreeItem::get_text_alignment)>("get_text_alignment")
            .fun<static_cast<void(TreeItem::*)(int32_t,bool)>(&TreeItem::set_expand_right)>("set_expand_right")
            .fun<static_cast<bool(TreeItem::*)(int32_t)const>(&TreeItem::get_expand_right)>("get_expand_right")
            .fun<static_cast<TreeItem *(TreeItem::*)(int32_t)>(&TreeItem::create_child)>("create_child")
            .fun<static_cast<void(TreeItem::*)(TreeItem *)>(&TreeItem::add_child)>("add_child")
            .fun<static_cast<void(TreeItem::*)(TreeItem *)>(&TreeItem::remove_child)>("remove_child")
            .fun<static_cast<Tree *(TreeItem::*)()const>(&TreeItem::get_tree)>("get_tree")
            .fun<static_cast<TreeItem *(TreeItem::*)()const>(&TreeItem::get_next)>("get_next")
            .fun<static_cast<TreeItem *(TreeItem::*)()>(&TreeItem::get_prev)>("get_prev")
            .fun<static_cast<TreeItem *(TreeItem::*)()const>(&TreeItem::get_parent)>("get_parent")
            .fun<static_cast<TreeItem *(TreeItem::*)()const>(&TreeItem::get_first_child)>("get_first_child")
            .fun<static_cast<TreeItem *(TreeItem::*)(bool)>(&TreeItem::get_next_in_tree)>("get_next_in_tree")
            .fun<static_cast<TreeItem *(TreeItem::*)(bool)>(&TreeItem::get_prev_in_tree)>("get_prev_in_tree")
            .fun<static_cast<TreeItem *(TreeItem::*)(bool)>(&TreeItem::get_next_visible)>("get_next_visible")
            .fun<static_cast<TreeItem *(TreeItem::*)(bool)>(&TreeItem::get_prev_visible)>("get_prev_visible")
            .fun<static_cast<TreeItem *(TreeItem::*)(int32_t)>(&TreeItem::get_child)>("get_child")
            .fun<static_cast<int32_t(TreeItem::*)()>(&TreeItem::get_child_count)>("get_child_count")
            .fun<static_cast<TypedArray<TreeItem>(TreeItem::*)()>(&TreeItem::get_children)>("get_children")
            .fun<static_cast<int32_t(TreeItem::*)()>(&TreeItem::get_index)>("get_index")
            .fun<static_cast<void(TreeItem::*)(TreeItem *)>(&TreeItem::move_before)>("move_before")
            .fun<static_cast<void(TreeItem::*)(TreeItem *)>(&TreeItem::move_after)>("move_after")
            .fun<static_cast<void(TreeItem::*)(const StringName &,rest<Variant> args)>(&TreeItem::call_recursive)>("call_recursive")
;    qjs::Value _TreeCellMode = context->newObject();
    _TreeCellMode["CELL_MODE_STRING"] = TreeItem::TreeCellMode::CELL_MODE_STRING;
    _TreeCellMode["CELL_MODE_CHECK"] = TreeItem::TreeCellMode::CELL_MODE_CHECK;
    _TreeCellMode["CELL_MODE_RANGE"] = TreeItem::TreeCellMode::CELL_MODE_RANGE;
    _TreeCellMode["CELL_MODE_ICON"] = TreeItem::TreeCellMode::CELL_MODE_ICON;
    _TreeCellMode["CELL_MODE_CUSTOM"] = TreeItem::TreeCellMode::CELL_MODE_CUSTOM;
    _module.add("TreeCellMode", std::move(_TreeCellMode));
}