#include <godot_cpp/classes/rich_text_label.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/rich_text_effect.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RichTextLabel() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<RichTextLabel>("RichTextLabel")
            .constructor<>()
            .base<Control>()
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_using_bbcode),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_use_bbcode)>("bbcode_enabled")
            .property<static_cast<String(RichTextLabel::*)()const>(&RichTextLabel::get_text),static_cast<void(RichTextLabel::*)(const String &)>(&RichTextLabel::set_text)>("text")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_fit_content_enabled),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_fit_content)>("fit_content")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_scroll_active),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_scroll_active)>("scroll_active")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_scroll_following),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_scroll_follow)>("scroll_following")
            .property<static_cast<TextServer::AutowrapMode(RichTextLabel::*)()const>(&RichTextLabel::get_autowrap_mode),static_cast<void(RichTextLabel::*)(TextServer::AutowrapMode)>(&RichTextLabel::set_autowrap_mode)>("autowrap_mode")
            .property<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_tab_size),static_cast<void(RichTextLabel::*)(int32_t)>(&RichTextLabel::set_tab_size)>("tab_size")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_context_menu_enabled),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_context_menu_enabled)>("context_menu_enabled")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_shortcut_keys_enabled),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_shortcut_keys_enabled)>("shortcut_keys_enabled")
            .property<static_cast<Array(RichTextLabel::*)()>(&RichTextLabel::get_effects),static_cast<void(RichTextLabel::*)(const Array &)>(&RichTextLabel::set_effects)>("custom_effects")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_meta_underlined),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_meta_underline)>("meta_underlined")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_hint_underlined),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_hint_underline)>("hint_underlined")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_threaded),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_threaded)>("threaded")
            .property<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_progress_bar_delay),static_cast<void(RichTextLabel::*)(int32_t)>(&RichTextLabel::set_progress_bar_delay)>("progress_bar_delay")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_selection_enabled),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_selection_enabled)>("selection_enabled")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_deselect_on_focus_loss_enabled),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_deselect_on_focus_loss_enabled)>("deselect_on_focus_loss_enabled")
            .property<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_drag_and_drop_selection_enabled),static_cast<void(RichTextLabel::*)(bool)>(&RichTextLabel::set_drag_and_drop_selection_enabled)>("drag_and_drop_selection_enabled")
            .property<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_visible_characters),static_cast<void(RichTextLabel::*)(int32_t)>(&RichTextLabel::set_visible_characters)>("visible_characters")
            .property<static_cast<TextServer::VisibleCharactersBehavior(RichTextLabel::*)()const>(&RichTextLabel::get_visible_characters_behavior),static_cast<void(RichTextLabel::*)(TextServer::VisibleCharactersBehavior)>(&RichTextLabel::set_visible_characters_behavior)>("visible_characters_behavior")
            .property<static_cast<double(RichTextLabel::*)()const>(&RichTextLabel::get_visible_ratio),static_cast<void(RichTextLabel::*)(double)>(&RichTextLabel::set_visible_ratio)>("visible_ratio")
            .property<static_cast<Control::TextDirection(RichTextLabel::*)()const>(&RichTextLabel::get_text_direction),static_cast<void(RichTextLabel::*)(Control::TextDirection)>(&RichTextLabel::set_text_direction)>("text_direction")
            .property<static_cast<String(RichTextLabel::*)()const>(&RichTextLabel::get_language),static_cast<void(RichTextLabel::*)(const String &)>(&RichTextLabel::set_language)>("language")
            .property<static_cast<TextServer::StructuredTextParser(RichTextLabel::*)()const>(&RichTextLabel::get_structured_text_bidi_override),static_cast<void(RichTextLabel::*)(TextServer::StructuredTextParser)>(&RichTextLabel::set_structured_text_bidi_override)>("structured_text_bidi_override")
            .property<static_cast<Array(RichTextLabel::*)()const>(&RichTextLabel::get_structured_text_bidi_override_options),static_cast<void(RichTextLabel::*)(const Array &)>(&RichTextLabel::set_structured_text_bidi_override_options)>("structured_text_bidi_override_options")
            .fun<static_cast<String(RichTextLabel::*)()const>(&RichTextLabel::get_parsed_text)>("get_parsed_text")
            .fun<static_cast<void(RichTextLabel::*)(const String &)>(&RichTextLabel::add_text)>("add_text")
            .fun<static_cast<void(RichTextLabel::*)(const Ref<Texture2D> &,int32_t,int32_t,const Color &,InlineAlignment,const Rect2 &,const Variant &,bool,const String &,bool)>(&RichTextLabel::add_image)>("add_image")
            .fun<static_cast<void(RichTextLabel::*)(const Variant &,BitField<RichTextLabel::ImageUpdateMask>,const Ref<Texture2D> &,int32_t,int32_t,const Color &,InlineAlignment,const Rect2 &,bool,const String &,bool)>(&RichTextLabel::update_image)>("update_image")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::newline)>("newline")
            .fun<static_cast<bool(RichTextLabel::*)(int32_t,bool)>(&RichTextLabel::remove_paragraph)>("remove_paragraph")
            .fun<static_cast<bool(RichTextLabel::*)(int32_t)>(&RichTextLabel::invalidate_paragraph)>("invalidate_paragraph")
            .fun<static_cast<void(RichTextLabel::*)(const Ref<Font> &,int32_t)>(&RichTextLabel::push_font)>("push_font")
            .fun<static_cast<void(RichTextLabel::*)(int32_t)>(&RichTextLabel::push_font_size)>("push_font_size")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::push_normal)>("push_normal")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::push_bold)>("push_bold")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::push_bold_italics)>("push_bold_italics")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::push_italics)>("push_italics")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::push_mono)>("push_mono")
            .fun<static_cast<void(RichTextLabel::*)(const Color &)>(&RichTextLabel::push_color)>("push_color")
            .fun<static_cast<void(RichTextLabel::*)(int32_t)>(&RichTextLabel::push_outline_size)>("push_outline_size")
            .fun<static_cast<void(RichTextLabel::*)(const Color &)>(&RichTextLabel::push_outline_color)>("push_outline_color")
            .fun<static_cast<void(RichTextLabel::*)(HorizontalAlignment,Control::TextDirection,const String &,TextServer::StructuredTextParser,BitField<TextServer::JustificationFlag>,const PackedFloat32Array &)>(&RichTextLabel::push_paragraph)>("push_paragraph")
            .fun<static_cast<void(RichTextLabel::*)(int32_t)>(&RichTextLabel::push_indent)>("push_indent")
            .fun<static_cast<void(RichTextLabel::*)(int32_t,RichTextLabel::ListType,bool,const String &)>(&RichTextLabel::push_list)>("push_list")
            .fun<static_cast<void(RichTextLabel::*)(const Variant &,RichTextLabel::MetaUnderline)>(&RichTextLabel::push_meta)>("push_meta")
            .fun<static_cast<void(RichTextLabel::*)(const String &)>(&RichTextLabel::push_hint)>("push_hint")
            .fun<static_cast<void(RichTextLabel::*)(const String &)>(&RichTextLabel::push_language)>("push_language")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::push_underline)>("push_underline")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::push_strikethrough)>("push_strikethrough")
            .fun<static_cast<void(RichTextLabel::*)(int32_t,InlineAlignment,int32_t)>(&RichTextLabel::push_table)>("push_table")
            .fun<static_cast<void(RichTextLabel::*)(const String &,const Ref<Font> &,int32_t,const Rect2 &,const Color &,int32_t,const Color &)>(&RichTextLabel::push_dropcap)>("push_dropcap")
            .fun<static_cast<void(RichTextLabel::*)(int32_t,bool,int32_t)>(&RichTextLabel::set_table_column_expand)>("set_table_column_expand")
            .fun<static_cast<void(RichTextLabel::*)(const Color &,const Color &)>(&RichTextLabel::set_cell_row_background_color)>("set_cell_row_background_color")
            .fun<static_cast<void(RichTextLabel::*)(const Color &)>(&RichTextLabel::set_cell_border_color)>("set_cell_border_color")
            .fun<static_cast<void(RichTextLabel::*)(const Vector2 &,const Vector2 &)>(&RichTextLabel::set_cell_size_override)>("set_cell_size_override")
            .fun<static_cast<void(RichTextLabel::*)(const Rect2 &)>(&RichTextLabel::set_cell_padding)>("set_cell_padding")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::push_cell)>("push_cell")
            .fun<static_cast<void(RichTextLabel::*)(const Color &)>(&RichTextLabel::push_fgcolor)>("push_fgcolor")
            .fun<static_cast<void(RichTextLabel::*)(const Color &)>(&RichTextLabel::push_bgcolor)>("push_bgcolor")
            .fun<static_cast<void(RichTextLabel::*)(const Ref<RichTextEffect> &,const Dictionary &)>(&RichTextLabel::push_customfx)>("push_customfx")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::push_context)>("push_context")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::pop_context)>("pop_context")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::pop)>("pop")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::pop_all)>("pop_all")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::clear)>("clear")
            .fun<static_cast<VScrollBar *(RichTextLabel::*)()>(&RichTextLabel::get_v_scroll_bar)>("get_v_scroll_bar")
            .fun<static_cast<void(RichTextLabel::*)(int32_t)>(&RichTextLabel::scroll_to_line)>("scroll_to_line")
            .fun<static_cast<void(RichTextLabel::*)(int32_t)>(&RichTextLabel::scroll_to_paragraph)>("scroll_to_paragraph")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::scroll_to_selection)>("scroll_to_selection")
            .fun<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_selection_from)>("get_selection_from")
            .fun<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_selection_to)>("get_selection_to")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::select_all)>("select_all")
            .fun<static_cast<String(RichTextLabel::*)()const>(&RichTextLabel::get_selected_text)>("get_selected_text")
            .fun<static_cast<void(RichTextLabel::*)()>(&RichTextLabel::deselect)>("deselect")
            .fun<static_cast<void(RichTextLabel::*)(const String &)>(&RichTextLabel::parse_bbcode)>("parse_bbcode")
            .fun<static_cast<void(RichTextLabel::*)(const String &)>(&RichTextLabel::append_text)>("append_text")
            .fun<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_ready)>("is_ready")
            .fun<static_cast<int32_t(RichTextLabel::*)(int32_t)>(&RichTextLabel::get_character_line)>("get_character_line")
            .fun<static_cast<int32_t(RichTextLabel::*)(int32_t)>(&RichTextLabel::get_character_paragraph)>("get_character_paragraph")
            .fun<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_total_character_count)>("get_total_character_count")
            .fun<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_line_count)>("get_line_count")
            .fun<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_visible_line_count)>("get_visible_line_count")
            .fun<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_paragraph_count)>("get_paragraph_count")
            .fun<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_visible_paragraph_count)>("get_visible_paragraph_count")
            .fun<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_content_height)>("get_content_height")
            .fun<static_cast<int32_t(RichTextLabel::*)()const>(&RichTextLabel::get_content_width)>("get_content_width")
            .fun<static_cast<double(RichTextLabel::*)(int32_t)>(&RichTextLabel::get_line_offset)>("get_line_offset")
            .fun<static_cast<double(RichTextLabel::*)(int32_t)>(&RichTextLabel::get_paragraph_offset)>("get_paragraph_offset")
            .fun<static_cast<Dictionary(RichTextLabel::*)(const PackedStringArray &)>(&RichTextLabel::parse_expressions_for_values)>("parse_expressions_for_values")
            .fun<static_cast<void(RichTextLabel::*)(const Variant &)>(&RichTextLabel::install_effect)>("install_effect")
            .fun<static_cast<PopupMenu *(RichTextLabel::*)()const>(&RichTextLabel::get_menu)>("get_menu")
            .fun<static_cast<bool(RichTextLabel::*)()const>(&RichTextLabel::is_menu_visible)>("is_menu_visible")
            .fun<static_cast<void(RichTextLabel::*)(int32_t)>(&RichTextLabel::menu_option)>("menu_option")
;    qjs::Value _ListType = context->newObject();
    _ListType["LIST_NUMBERS"] = RichTextLabel::ListType::LIST_NUMBERS;
    _ListType["LIST_LETTERS"] = RichTextLabel::ListType::LIST_LETTERS;
    _ListType["LIST_ROMAN"] = RichTextLabel::ListType::LIST_ROMAN;
    _ListType["LIST_DOTS"] = RichTextLabel::ListType::LIST_DOTS;
    _module.add("ListType", std::move(_ListType));
    qjs::Value _MenuItems = context->newObject();
    _MenuItems["MENU_COPY"] = RichTextLabel::MenuItems::MENU_COPY;
    _MenuItems["MENU_SELECT_ALL"] = RichTextLabel::MenuItems::MENU_SELECT_ALL;
    _MenuItems["MENU_MAX"] = RichTextLabel::MenuItems::MENU_MAX;
    _module.add("MenuItems", std::move(_MenuItems));
    qjs::Value _MetaUnderline = context->newObject();
    _MetaUnderline["META_UNDERLINE_NEVER"] = RichTextLabel::MetaUnderline::META_UNDERLINE_NEVER;
    _MetaUnderline["META_UNDERLINE_ALWAYS"] = RichTextLabel::MetaUnderline::META_UNDERLINE_ALWAYS;
    _MetaUnderline["META_UNDERLINE_ON_HOVER"] = RichTextLabel::MetaUnderline::META_UNDERLINE_ON_HOVER;
    _module.add("MetaUnderline", std::move(_MetaUnderline));
    qjs::Value _ImageUpdateMask = context->newObject();
    _ImageUpdateMask["UPDATE_TEXTURE"] = RichTextLabel::ImageUpdateMask::UPDATE_TEXTURE;
    _ImageUpdateMask["UPDATE_SIZE"] = RichTextLabel::ImageUpdateMask::UPDATE_SIZE;
    _ImageUpdateMask["UPDATE_COLOR"] = RichTextLabel::ImageUpdateMask::UPDATE_COLOR;
    _ImageUpdateMask["UPDATE_ALIGNMENT"] = RichTextLabel::ImageUpdateMask::UPDATE_ALIGNMENT;
    _ImageUpdateMask["UPDATE_REGION"] = RichTextLabel::ImageUpdateMask::UPDATE_REGION;
    _ImageUpdateMask["UPDATE_PAD"] = RichTextLabel::ImageUpdateMask::UPDATE_PAD;
    _ImageUpdateMask["UPDATE_TOOLTIP"] = RichTextLabel::ImageUpdateMask::UPDATE_TOOLTIP;
    _ImageUpdateMask["UPDATE_WIDTH_IN_PERCENT"] = RichTextLabel::ImageUpdateMask::UPDATE_WIDTH_IN_PERCENT;
    _module.add("ImageUpdateMask", std::move(_ImageUpdateMask));
}