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
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RichTextLabel() {
	qjs::Context::Module &_module = _Control;
	_module.class_<RichTextLabel>("RichTextLabel")
			.constructor<>()
			.property<&RichTextLabel::is_using_bbcode, &RichTextLabel::set_use_bbcode>("bbcode_enabled")
			.property<&RichTextLabel::get_text, &RichTextLabel::set_text>("text")
			.property<&RichTextLabel::is_fit_content_enabled, &RichTextLabel::set_fit_content>("fit_content")
			.property<&RichTextLabel::is_scroll_active, &RichTextLabel::set_scroll_active>("scroll_active")
			.property<&RichTextLabel::is_scroll_following, &RichTextLabel::set_scroll_follow>("scroll_following")
			.property<&RichTextLabel::get_autowrap_mode, &RichTextLabel::set_autowrap_mode>("autowrap_mode")
			.property<&RichTextLabel::get_tab_size, &RichTextLabel::set_tab_size>("tab_size")
			.property<&RichTextLabel::is_context_menu_enabled, &RichTextLabel::set_context_menu_enabled>("context_menu_enabled")
			.property<&RichTextLabel::is_shortcut_keys_enabled, &RichTextLabel::set_shortcut_keys_enabled>("shortcut_keys_enabled")
			.property<&RichTextLabel::get_effects, &RichTextLabel::set_effects>("custom_effects")
			.property<&RichTextLabel::is_meta_underlined, &RichTextLabel::set_meta_underline>("meta_underlined")
			.property<&RichTextLabel::is_hint_underlined, &RichTextLabel::set_hint_underline>("hint_underlined")
			.property<&RichTextLabel::is_threaded, &RichTextLabel::set_threaded>("threaded")
			.property<&RichTextLabel::get_progress_bar_delay, &RichTextLabel::set_progress_bar_delay>("progress_bar_delay")
			.property<&RichTextLabel::is_selection_enabled, &RichTextLabel::set_selection_enabled>("selection_enabled")
			.property<&RichTextLabel::is_deselect_on_focus_loss_enabled, &RichTextLabel::set_deselect_on_focus_loss_enabled>("deselect_on_focus_loss_enabled")
			.property<&RichTextLabel::is_drag_and_drop_selection_enabled, &RichTextLabel::set_drag_and_drop_selection_enabled>("drag_and_drop_selection_enabled")
			.property<&RichTextLabel::get_visible_characters, &RichTextLabel::set_visible_characters>("visible_characters")
			.property<&RichTextLabel::get_visible_characters_behavior, &RichTextLabel::set_visible_characters_behavior>("visible_characters_behavior")
			.property<&RichTextLabel::get_visible_ratio, &RichTextLabel::set_visible_ratio>("visible_ratio")
			.property<&RichTextLabel::get_text_direction, &RichTextLabel::set_text_direction>("text_direction")
			.property<&RichTextLabel::get_language, &RichTextLabel::set_language>("language")
			.property<&RichTextLabel::get_structured_text_bidi_override, &RichTextLabel::set_structured_text_bidi_override>("structured_text_bidi_override")
			.property<&RichTextLabel::get_structured_text_bidi_override_options, &RichTextLabel::set_structured_text_bidi_override_options>("structured_text_bidi_override_options")
			.fun<static_cast<String (RichTextLabel::*)() const>(&RichTextLabel::get_parsed_text)>("get_parsed_text")
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::add_text)>("add_text")
			.fun<static_cast<void (RichTextLabel::*)(const Ref<Texture2D> &, int32_t, int32_t, const Color &, InlineAlignment, const Rect2 &, const Variant &, bool, const String &, bool)>(&RichTextLabel::add_image)>("add_image")
			.fun<static_cast<void (RichTextLabel::*)(const Variant &, BitField<RichTextLabel::ImageUpdateMask>, const Ref<Texture2D> &, int32_t, int32_t, const Color &, InlineAlignment, const Rect2 &, bool, const String &, bool)>(&RichTextLabel::update_image)>("update_image")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::newline)>("newline")
			.fun<static_cast<bool (RichTextLabel::*)(int32_t)>(&RichTextLabel::remove_paragraph)>("remove_paragraph")
			.fun<static_cast<void (RichTextLabel::*)(const Ref<Font> &, int32_t)>(&RichTextLabel::push_font)>("push_font")
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::push_font_size)>("push_font_size")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_normal)>("push_normal")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_bold)>("push_bold")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_bold_italics)>("push_bold_italics")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_italics)>("push_italics")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_mono)>("push_mono")
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::push_color)>("push_color")
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::push_outline_size)>("push_outline_size")
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::push_outline_color)>("push_outline_color")
			.fun<static_cast<void (RichTextLabel::*)(HorizontalAlignment, Control::TextDirection, const String &, TextServer::StructuredTextParser, BitField<TextServer::JustificationFlag>, const PackedFloat32Array &)>(&RichTextLabel::push_paragraph)>("push_paragraph")
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::push_indent)>("push_indent")
			.fun<static_cast<void (RichTextLabel::*)(int32_t, RichTextLabel::ListType, bool, const String &)>(&RichTextLabel::push_list)>("push_list")
			.fun<static_cast<void (RichTextLabel::*)(const Variant &)>(&RichTextLabel::push_meta)>("push_meta")
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::push_hint)>("push_hint")
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::push_language)>("push_language")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_underline)>("push_underline")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_strikethrough)>("push_strikethrough")
			.fun<static_cast<void (RichTextLabel::*)(int32_t, InlineAlignment, int32_t)>(&RichTextLabel::push_table)>("push_table")
			.fun<static_cast<void (RichTextLabel::*)(const String &, const Ref<Font> &, int32_t, const Rect2 &, const Color &, int32_t, const Color &)>(&RichTextLabel::push_dropcap)>("push_dropcap")
			.fun<static_cast<void (RichTextLabel::*)(int32_t, bool, int32_t)>(&RichTextLabel::set_table_column_expand)>("set_table_column_expand")
			.fun<static_cast<void (RichTextLabel::*)(const Color &, const Color &)>(&RichTextLabel::set_cell_row_background_color)>("set_cell_row_background_color")
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::set_cell_border_color)>("set_cell_border_color")
			.fun<static_cast<void (RichTextLabel::*)(const Vector2 &, const Vector2 &)>(&RichTextLabel::set_cell_size_override)>("set_cell_size_override")
			.fun<static_cast<void (RichTextLabel::*)(const Rect2 &)>(&RichTextLabel::set_cell_padding)>("set_cell_padding")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_cell)>("push_cell")
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::push_fgcolor)>("push_fgcolor")
			.fun<static_cast<void (RichTextLabel::*)(const Color &)>(&RichTextLabel::push_bgcolor)>("push_bgcolor")
			.fun<static_cast<void (RichTextLabel::*)(const Ref<RichTextEffect> &, const Dictionary &)>(&RichTextLabel::push_customfx)>("push_customfx")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::push_context)>("push_context")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::pop_context)>("pop_context")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::pop)>("pop")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::pop_all)>("pop_all")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::clear)>("clear")
			.fun<static_cast<VScrollBar *(RichTextLabel::*)()>(&RichTextLabel::get_v_scroll_bar)>("get_v_scroll_bar")
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::scroll_to_line)>("scroll_to_line")
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::scroll_to_paragraph)>("scroll_to_paragraph")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::scroll_to_selection)>("scroll_to_selection")
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_selection_from)>("get_selection_from")
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_selection_to)>("get_selection_to")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::select_all)>("select_all")
			.fun<static_cast<String (RichTextLabel::*)() const>(&RichTextLabel::get_selected_text)>("get_selected_text")
			.fun<static_cast<void (RichTextLabel::*)()>(&RichTextLabel::deselect)>("deselect")
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::parse_bbcode)>("parse_bbcode")
			.fun<static_cast<void (RichTextLabel::*)(const String &)>(&RichTextLabel::append_text)>("append_text")
			.fun<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_ready)>("is_ready")
			.fun<static_cast<int32_t (RichTextLabel::*)(int32_t)>(&RichTextLabel::get_character_line)>("get_character_line")
			.fun<static_cast<int32_t (RichTextLabel::*)(int32_t)>(&RichTextLabel::get_character_paragraph)>("get_character_paragraph")
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_total_character_count)>("get_total_character_count")
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_line_count)>("get_line_count")
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_visible_line_count)>("get_visible_line_count")
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_paragraph_count)>("get_paragraph_count")
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_visible_paragraph_count)>("get_visible_paragraph_count")
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_content_height)>("get_content_height")
			.fun<static_cast<int32_t (RichTextLabel::*)() const>(&RichTextLabel::get_content_width)>("get_content_width")
			.fun<static_cast<double (RichTextLabel::*)(int32_t)>(&RichTextLabel::get_line_offset)>("get_line_offset")
			.fun<static_cast<double (RichTextLabel::*)(int32_t)>(&RichTextLabel::get_paragraph_offset)>("get_paragraph_offset")
			.fun<static_cast<Dictionary (RichTextLabel::*)(const PackedStringArray &)>(&RichTextLabel::parse_expressions_for_values)>("parse_expressions_for_values")
			.fun<static_cast<void (RichTextLabel::*)(const Variant &)>(&RichTextLabel::install_effect)>("install_effect")
			.fun<static_cast<PopupMenu *(RichTextLabel::*)() const>(&RichTextLabel::get_menu)>("get_menu")
			.fun<static_cast<bool (RichTextLabel::*)() const>(&RichTextLabel::is_menu_visible)>("is_menu_visible")
			.fun<static_cast<void (RichTextLabel::*)(int32_t)>(&RichTextLabel::menu_option)>("menu_option");
}