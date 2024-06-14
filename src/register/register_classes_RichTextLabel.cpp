
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/rich_text_effect.hpp>
#include <godot_cpp/classes/rich_text_label.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
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

void register_classes_RichTextLabel() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<RichTextLabel>("RichTextLabel")
			.constructor<>()
			.base<Control>()
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_using_bbcode), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_use_bbcode)>((new std::string("bbcode_enabled"))->c_str())
			.property<static_cast<String (RichTextLabel::*)() const>(&RichTextLabel::get_text), static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::set_text)>((new std::string("text"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_fit_content_enabled), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_fit_content)>((new std::string("fit_content"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_scroll_active), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_scroll_active)>((new std::string("scroll_active"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_scroll_following), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_scroll_follow)>((new std::string("scroll_following"))->c_str())
			.property<static_cast<TextServer::AutowrapMode (RichTextLabel::*)() const>(&RichTextLabel::get_autowrap_mode), static_cast<void (RichTextLabel::*)(TextServer::AutowrapMode)>(&RichTextLabel::set_autowrap_mode)>((new std::string("autowrap_mode"))->c_str())
			.property<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_tab_size), static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::set_tab_size)>((new std::string("tab_size"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_context_menu_enabled), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_context_menu_enabled)>((new std::string("context_menu_enabled"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_shortcut_keys_enabled), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_shortcut_keys_enabled)>((new std::string("shortcut_keys_enabled"))->c_str())
			.property<static_cast<Array (RichTextLabel::*)()>(&RichTextLabel::get_effects), static_cast<void (RichTextLabel::*)(const Array &)>(&RichTextLabel::set_effects)>((new std::string("custom_effects"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_meta_underlined), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_meta_underline)>((new std::string("meta_underlined"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_hint_underlined), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_hint_underline)>((new std::string("hint_underlined"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_threaded), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_threaded)>((new std::string("threaded"))->c_str())
			.property<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_progress_bar_delay), static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::set_progress_bar_delay)>((new std::string("progress_bar_delay"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_selection_enabled), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_selection_enabled)>((new std::string("selection_enabled"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_deselect_on_focus_loss_enabled), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_deselect_on_focus_loss_enabled)>((new std::string("deselect_on_focus_loss_enabled"))->c_str())
			.property<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_drag_and_drop_selection_enabled), static_cast<void (RichTextLabel::*)(bool)>(&RichTextLabel::set_drag_and_drop_selection_enabled)>((new std::string("drag_and_drop_selection_enabled"))->c_str())
			.property<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_visible_characters), static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::set_visible_characters)>((new std::string("visible_characters"))->c_str())
			.property<static_cast<TextServer::VisibleCharactersBehavior (RichTextLabel::*)() const>(&RichTextLabel::get_visible_characters_behavior), static_cast<void (RichTextLabel::*)(TextServer::VisibleCharactersBehavior)>(&RichTextLabel::set_visible_characters_behavior)>((new std::string("visible_characters_behavior"))->c_str())
			.property<static_cast<double (RichTextLabel::*)() const>(&RichTextLabel::get_visible_ratio), static_cast<void (RichTextLabel::*)(double)>(&RichTextLabel::set_visible_ratio)>((new std::string("visible_ratio"))->c_str())
			.property<static_cast<Control::TextDirection (RichTextLabel::*)() const>(&RichTextLabel::get_text_direction), static_cast<void (RichTextLabel::*)(Control::TextDirection)>(&RichTextLabel::set_text_direction)>((new std::string("text_direction"))->c_str())
			.property<static_cast<String (RichTextLabel::*)() const>(&RichTextLabel::get_language), static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::set_language)>((new std::string("language"))->c_str())
			.property<static_cast<TextServer::StructuredTextParser (RichTextLabel::*)() const>(&RichTextLabel::get_structured_text_bidi_override), static_cast<void (RichTextLabel::*)(TextServer::StructuredTextParser)>(&RichTextLabel::set_structured_text_bidi_override)>((new std::string("structured_text_bidi_override"))->c_str())
			.property<static_cast<Array (RichTextLabel::*)() const>(&RichTextLabel::get_structured_text_bidi_override_options), static_cast<void (RichTextLabel::*)(const Array &)>(&RichTextLabel::set_structured_text_bidi_override_options)>((new std::string("structured_text_bidi_override_options"))->c_str())
			.fun<static_cast<String (RichTextLabel::*)() const>(&RichTextLabel::get_parsed_text)>((new std::string("get_parsed_text"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::add_text)>((new std::string("add_text"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Ref<Texture2D> &, int32_t, int32_t, const Color &, InlineAlignment, const Rect2 &, const Variant &, bool, const String &, bool)>(&RichTextLabel::add_image)>((new std::string("add_image"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Variant &, BitField<RichTextLabel::ImageUpdateMask>, const Ref<Texture2D> &, int32_t, int32_t, const Color &, InlineAlignment, const Rect2 &, bool, const String &, bool)>(&RichTextLabel::update_image)>((new std::string("update_image"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::newline)>((new std::string("newline"))->c_str())
			.fun<static_cast<bool (RichTextLabel::*)(int32_t, bool)>(&RichTextLabel::remove_paragraph)>((new std::string("remove_paragraph"))->c_str())
			.fun<static_cast<bool (RichTextLabel::*)(int32_t)>(&RichTextLabel::invalidate_paragraph)>((new std::string("invalidate_paragraph"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Ref<Font> &, int32_t)>(&RichTextLabel::push_font)>((new std::string("push_font"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::push_font_size)>((new std::string("push_font_size"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_normal)>((new std::string("push_normal"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_bold)>((new std::string("push_bold"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_bold_italics)>((new std::string("push_bold_italics"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_italics)>((new std::string("push_italics"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_mono)>((new std::string("push_mono"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::push_color)>((new std::string("push_color"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::push_outline_size)>((new std::string("push_outline_size"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::push_outline_color)>((new std::string("push_outline_color"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(HorizontalAlignment, Control::TextDirection, const String &, TextServer::StructuredTextParser, BitField<TextServer::JustificationFlag>, const PackedFloat32Array &)>(&RichTextLabel::push_paragraph)>((new std::string("push_paragraph"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::push_indent)>((new std::string("push_indent"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(int32_t, RichTextLabel::ListType, bool, const String &)>(&RichTextLabel::push_list)>((new std::string("push_list"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Variant &, RichTextLabel::MetaUnderline)>(&RichTextLabel::push_meta)>((new std::string("push_meta"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::push_hint)>((new std::string("push_hint"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::push_language)>((new std::string("push_language"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_underline)>((new std::string("push_underline"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_strikethrough)>((new std::string("push_strikethrough"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(int32_t, InlineAlignment, int32_t)>(&RichTextLabel::push_table)>((new std::string("push_table"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const String &, const Ref<Font> &, int32_t, const Rect2 &, const Color &, int32_t, const Color &)>(&RichTextLabel::push_dropcap)>((new std::string("push_dropcap"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(int32_t, bool, int32_t)>(&RichTextLabel::set_table_column_expand)>((new std::string("set_table_column_expand"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Color &, const Color &)>(&RichTextLabel::set_cell_row_background_color)>((new std::string("set_cell_row_background_color"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::set_cell_border_color)>((new std::string("set_cell_border_color"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Vector2 &, const Vector2 &)>(&RichTextLabel::set_cell_size_override)>((new std::string("set_cell_size_override"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Rect2 &)>(&RichTextLabel::set_cell_padding)>((new std::string("set_cell_padding"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_cell)>((new std::string("push_cell"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::push_fgcolor)>((new std::string("push_fgcolor"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::push_bgcolor)>((new std::string("push_bgcolor"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Ref<RichTextEffect> &, const Dictionary &)>(&RichTextLabel::push_customfx)>((new std::string("push_customfx"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_context)>((new std::string("push_context"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::pop_context)>((new std::string("pop_context"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::pop)>((new std::string("pop"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::pop_all)>((new std::string("pop_all"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<VScrollBar *(RichTextLabel::*)()>(&RichTextLabel::get_v_scroll_bar)>((new std::string("get_v_scroll_bar"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::scroll_to_line)>((new std::string("scroll_to_line"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::scroll_to_paragraph)>((new std::string("scroll_to_paragraph"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::scroll_to_selection)>((new std::string("scroll_to_selection"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_selection_from)>((new std::string("get_selection_from"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_selection_to)>((new std::string("get_selection_to"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::select_all)>((new std::string("select_all"))->c_str())
			.fun<static_cast<String (RichTextLabel::*)() const>(&RichTextLabel::get_selected_text)>((new std::string("get_selected_text"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::deselect)>((new std::string("deselect"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::parse_bbcode)>((new std::string("parse_bbcode"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::append_text)>((new std::string("append_text"))->c_str())
			.fun<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_ready)>((new std::string("is_ready"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)(int32_t)>(&RichTextLabel::get_character_line)>((new std::string("get_character_line"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)(int32_t)>(&RichTextLabel::get_character_paragraph)>((new std::string("get_character_paragraph"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_total_character_count)>((new std::string("get_total_character_count"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_line_count)>((new std::string("get_line_count"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_visible_line_count)>((new std::string("get_visible_line_count"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_paragraph_count)>((new std::string("get_paragraph_count"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_visible_paragraph_count)>((new std::string("get_visible_paragraph_count"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_content_height)>((new std::string("get_content_height"))->c_str())
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_content_width)>((new std::string("get_content_width"))->c_str())
			.fun<static_cast<double (RichTextLabel::*)(int32_t)>(&RichTextLabel::get_line_offset)>((new std::string("get_line_offset"))->c_str())
			.fun<static_cast<double (RichTextLabel::*)(int32_t)>(&RichTextLabel::get_paragraph_offset)>((new std::string("get_paragraph_offset"))->c_str())
			.fun<static_cast<Dictionary (RichTextLabel::*)(const PackedStringArray &)>(&RichTextLabel::parse_expressions_for_values)>((new std::string("parse_expressions_for_values"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(const Variant &)>(&RichTextLabel::install_effect)>((new std::string("install_effect"))->c_str())
			.fun<static_cast<PopupMenu *(RichTextLabel::*)() const>(&RichTextLabel::get_menu)>((new std::string("get_menu"))->c_str())
			.fun<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_menu_visible)>((new std::string("is_menu_visible"))->c_str())
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::menu_option)>((new std::string("menu_option"))->c_str());
	qjs::Value _ListType = context->newObject();
	_ListType[(new std::string("LIST_NUMBERS"))->c_str()] = RichTextLabel::ListType::LIST_NUMBERS;
	_ListType[(new std::string("LIST_LETTERS"))->c_str()] = RichTextLabel::ListType::LIST_LETTERS;
	_ListType[(new std::string("LIST_ROMAN"))->c_str()] = RichTextLabel::ListType::LIST_ROMAN;
	_ListType[(new std::string("LIST_DOTS"))->c_str()] = RichTextLabel::ListType::LIST_DOTS;
	_module.add("ListType", std::move(_ListType));
	qjs::Value _MenuItems = context->newObject();
	_MenuItems[(new std::string("MENU_COPY"))->c_str()] = RichTextLabel::MenuItems::MENU_COPY;
	_MenuItems[(new std::string("MENU_SELECT_ALL"))->c_str()] = RichTextLabel::MenuItems::MENU_SELECT_ALL;
	_MenuItems[(new std::string("MENU_MAX"))->c_str()] = RichTextLabel::MenuItems::MENU_MAX;
	_module.add("MenuItems", std::move(_MenuItems));
	qjs::Value _MetaUnderline = context->newObject();
	_MetaUnderline[(new std::string("META_UNDERLINE_NEVER"))->c_str()] = RichTextLabel::MetaUnderline::META_UNDERLINE_NEVER;
	_MetaUnderline[(new std::string("META_UNDERLINE_ALWAYS"))->c_str()] = RichTextLabel::MetaUnderline::META_UNDERLINE_ALWAYS;
	_MetaUnderline[(new std::string("META_UNDERLINE_ON_HOVER"))->c_str()] = RichTextLabel::MetaUnderline::META_UNDERLINE_ON_HOVER;
	_module.add("MetaUnderline", std::move(_MetaUnderline));
	qjs::Value _ImageUpdateMask = context->newObject();
	_ImageUpdateMask[(new std::string("UPDATE_TEXTURE"))->c_str()] = RichTextLabel::ImageUpdateMask::UPDATE_TEXTURE;
	_ImageUpdateMask[(new std::string("UPDATE_SIZE"))->c_str()] = RichTextLabel::ImageUpdateMask::UPDATE_SIZE;
	_ImageUpdateMask[(new std::string("UPDATE_COLOR"))->c_str()] = RichTextLabel::ImageUpdateMask::UPDATE_COLOR;
	_ImageUpdateMask[(new std::string("UPDATE_ALIGNMENT"))->c_str()] = RichTextLabel::ImageUpdateMask::UPDATE_ALIGNMENT;
	_ImageUpdateMask[(new std::string("UPDATE_REGION"))->c_str()] = RichTextLabel::ImageUpdateMask::UPDATE_REGION;
	_ImageUpdateMask[(new std::string("UPDATE_PAD"))->c_str()] = RichTextLabel::ImageUpdateMask::UPDATE_PAD;
	_ImageUpdateMask[(new std::string("UPDATE_TOOLTIP"))->c_str()] = RichTextLabel::ImageUpdateMask::UPDATE_TOOLTIP;
	_ImageUpdateMask[(new std::string("UPDATE_WIDTH_IN_PERCENT"))->c_str()] = RichTextLabel::ImageUpdateMask::UPDATE_WIDTH_IN_PERCENT;
	_module.add("ImageUpdateMask", std::move(_ImageUpdateMask));
}