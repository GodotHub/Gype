
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextEdit() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<TextEdit>("TextEdit")
			.constructor<>()
			.base<Control>()
			.property<static_cast<String (TextEdit::*)() const>(&TextEdit::get_text), static_cast<void (TextEdit::*)(const String &)>(&TextEdit::set_text)>((new std::string("text"))->c_str())
			.property<static_cast<String (TextEdit::*)() const>(&TextEdit::get_placeholder), static_cast<void (TextEdit::*)(const String &)>(&TextEdit::set_placeholder)>((new std::string("placeholder_text"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_editable), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_editable)>((new std::string("editable"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_context_menu_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_context_menu_enabled)>((new std::string("context_menu_enabled"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_shortcut_keys_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_shortcut_keys_enabled)>((new std::string("shortcut_keys_enabled"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_selecting_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_selecting_enabled)>((new std::string("selecting_enabled"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_deselect_on_focus_loss_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_deselect_on_focus_loss_enabled)>((new std::string("deselect_on_focus_loss_enabled"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_drag_and_drop_selection_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_drag_and_drop_selection_enabled)>((new std::string("drag_and_drop_selection_enabled"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_virtual_keyboard_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_virtual_keyboard_enabled)>((new std::string("virtual_keyboard_enabled"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_middle_mouse_paste_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_middle_mouse_paste_enabled)>((new std::string("middle_mouse_paste_enabled"))->c_str())
			.property<static_cast<TextEdit::LineWrappingMode (TextEdit::*)() const>(&TextEdit::get_line_wrapping_mode), static_cast<void (TextEdit::*)(TextEdit::LineWrappingMode)>(&TextEdit::set_line_wrapping_mode)>((new std::string("wrap_mode"))->c_str())
			.property<static_cast<TextServer::AutowrapMode (TextEdit::*)() const>(&TextEdit::get_autowrap_mode), static_cast<void (TextEdit::*)(TextServer::AutowrapMode)>(&TextEdit::set_autowrap_mode)>((new std::string("autowrap_mode"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_indent_wrapped_lines), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_indent_wrapped_lines)>((new std::string("indent_wrapped_lines"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_smooth_scroll_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_smooth_scroll_enabled)>((new std::string("scroll_smooth"))->c_str())
			.property<static_cast<double (TextEdit::*)() const>(&TextEdit::get_v_scroll_speed), static_cast<void (TextEdit::*)(double)>(&TextEdit::set_v_scroll_speed)>((new std::string("scroll_v_scroll_speed"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_scroll_past_end_of_file_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_scroll_past_end_of_file_enabled)>((new std::string("scroll_past_end_of_file"))->c_str())
			.property<static_cast<double (TextEdit::*)() const>(&TextEdit::get_v_scroll), static_cast<void (TextEdit::*)(double)>(&TextEdit::set_v_scroll)>((new std::string("scroll_vertical"))->c_str())
			.property<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_h_scroll), static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::set_h_scroll)>((new std::string("scroll_horizontal"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_fit_content_height_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_fit_content_height_enabled)>((new std::string("scroll_fit_content_height"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_drawing_minimap), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_draw_minimap)>((new std::string("minimap_draw"))->c_str())
			.property<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_minimap_width), static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::set_minimap_width)>((new std::string("minimap_width"))->c_str())
			.property<static_cast<TextEdit::CaretType (TextEdit::*)() const>(&TextEdit::get_caret_type), static_cast<void (TextEdit::*)(TextEdit::CaretType)>(&TextEdit::set_caret_type)>((new std::string("caret_type"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_caret_blink_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_caret_blink_enabled)>((new std::string("caret_blink"))->c_str())
			.property<static_cast<double (TextEdit::*)() const>(&TextEdit::get_caret_blink_interval), static_cast<void (TextEdit::*)(double)>(&TextEdit::set_caret_blink_interval)>((new std::string("caret_blink_interval"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_drawing_caret_when_editable_disabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_draw_caret_when_editable_disabled)>((new std::string("caret_draw_when_editable_disabled"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_move_caret_on_right_click_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_move_caret_on_right_click_enabled)>((new std::string("caret_move_on_right_click"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_caret_mid_grapheme_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_caret_mid_grapheme_enabled)>((new std::string("caret_mid_grapheme"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_multiple_carets_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_multiple_carets_enabled)>((new std::string("caret_multiple"))->c_str())
			.property<static_cast<Ref<SyntaxHighlighter> (TextEdit::*)() const>(&TextEdit::get_syntax_highlighter), static_cast<void (TextEdit::*)(const Ref<SyntaxHighlighter> &)>(&TextEdit::set_syntax_highlighter)>((new std::string("syntax_highlighter"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_highlight_all_occurrences_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_highlight_all_occurrences)>((new std::string("highlight_all_occurrences"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_highlight_current_line_enabled), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_highlight_current_line)>((new std::string("highlight_current_line"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::get_draw_control_chars), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_draw_control_chars)>((new std::string("draw_control_chars"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_drawing_tabs), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_draw_tabs)>((new std::string("draw_tabs"))->c_str())
			.property<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_drawing_spaces), static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_draw_spaces)>((new std::string("draw_spaces"))->c_str())
			.property<static_cast<Control::TextDirection (TextEdit::*)() const>(&TextEdit::get_text_direction), static_cast<void (TextEdit::*)(Control::TextDirection)>(&TextEdit::set_text_direction)>((new std::string("text_direction"))->c_str())
			.property<static_cast<String (TextEdit::*)() const>(&TextEdit::get_language), static_cast<void (TextEdit::*)(const String &)>(&TextEdit::set_language)>((new std::string("language"))->c_str())
			.property<static_cast<TextServer::StructuredTextParser (TextEdit::*)() const>(&TextEdit::get_structured_text_bidi_override), static_cast<void (TextEdit::*)(TextServer::StructuredTextParser)>(&TextEdit::set_structured_text_bidi_override)>((new std::string("structured_text_bidi_override"))->c_str())
			.property<static_cast<Array (TextEdit::*)() const>(&TextEdit::get_structured_text_bidi_override_options), static_cast<void (TextEdit::*)(const Array &)>(&TextEdit::set_structured_text_bidi_override_options)>((new std::string("structured_text_bidi_override_options"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t)>(&TextEdit::_handle_unicode_input)>((new std::string("_handle_unicode_input"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::_backspace)>((new std::string("_backspace"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::_cut)>((new std::string("_cut"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::_copy)>((new std::string("_copy"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::_paste)>((new std::string("_paste"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::_paste_primary_clipboard)>((new std::string("_paste_primary_clipboard"))->c_str())
			.fun<static_cast<bool (TextEdit::*)() const>(&TextEdit::has_ime_text)>((new std::string("has_ime_text"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::cancel_ime)>((new std::string("cancel_ime"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::apply_ime)>((new std::string("apply_ime"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::set_tab_size)>((new std::string("set_tab_size"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_tab_size)>((new std::string("get_tab_size"))->c_str())
			.fun<static_cast<void (TextEdit::*)(bool)>(&TextEdit::set_overtype_mode_enabled)>((new std::string("set_overtype_mode_enabled"))->c_str())
			.fun<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_overtype_mode_enabled)>((new std::string("is_overtype_mode_enabled"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_line_count)>((new std::string("get_line_count"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, const String &)>(&TextEdit::set_line)>((new std::string("set_line"))->c_str())
			.fun<static_cast<String (TextEdit::*)(int32_t) const>(&TextEdit::get_line)>((new std::string("get_line"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_line_width)>((new std::string("get_line_width"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_line_height)>((new std::string("get_line_height"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_indent_level)>((new std::string("get_indent_level"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_first_non_whitespace_column)>((new std::string("get_first_non_whitespace_column"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t)>(&TextEdit::swap_lines)>((new std::string("swap_lines"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, const String &)>(&TextEdit::insert_line_at)>((new std::string("insert_line_at"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, bool)>(&TextEdit::remove_line_at)>((new std::string("remove_line_at"))->c_str())
			.fun<static_cast<void (TextEdit::*)(const String &, int32_t)>(&TextEdit::insert_text_at_caret)>((new std::string("insert_text_at_caret"))->c_str())
			.fun<static_cast<void (TextEdit::*)(const String &, int32_t, int32_t, bool, bool)>(&TextEdit::insert_text)>((new std::string("insert_text"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t, int32_t, int32_t)>(&TextEdit::remove_text)>((new std::string("remove_text"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_last_unhidden_line)>((new std::string("get_last_unhidden_line"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_next_visible_line_offset_from)>((new std::string("get_next_visible_line_offset_from"))->c_str())
			.fun<static_cast<Vector2i (TextEdit::*)(int32_t, int32_t, int32_t) const>(&TextEdit::get_next_visible_line_index_offset_from)>((new std::string("get_next_visible_line_index_offset_from"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::backspace)>((new std::string("backspace"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::cut)>((new std::string("cut"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::copy)>((new std::string("copy"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::paste)>((new std::string("paste"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::paste_primary_clipboard)>((new std::string("paste_primary_clipboard"))->c_str())
			.fun<static_cast<void (TextEdit::*)(TextEdit::EditAction)>(&TextEdit::start_action)>((new std::string("start_action"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::end_action)>((new std::string("end_action"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::begin_complex_operation)>((new std::string("begin_complex_operation"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::end_complex_operation)>((new std::string("end_complex_operation"))->c_str())
			.fun<static_cast<bool (TextEdit::*)() const>(&TextEdit::has_undo)>((new std::string("has_undo"))->c_str())
			.fun<static_cast<bool (TextEdit::*)() const>(&TextEdit::has_redo)>((new std::string("has_redo"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::undo)>((new std::string("undo"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::redo)>((new std::string("redo"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::clear_undo_history)>((new std::string("clear_undo_history"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::tag_saved_version)>((new std::string("tag_saved_version"))->c_str())
			.fun<static_cast<uint32_t (TextEdit::*)() const>(&TextEdit::get_version)>((new std::string("get_version"))->c_str())
			.fun<static_cast<uint32_t (TextEdit::*)() const>(&TextEdit::get_saved_version)>((new std::string("get_saved_version"))->c_str())
			.fun<static_cast<void (TextEdit::*)(const String &)>(&TextEdit::set_search_text)>((new std::string("set_search_text"))->c_str())
			.fun<static_cast<void (TextEdit::*)(uint32_t)>(&TextEdit::set_search_flags)>((new std::string("set_search_flags"))->c_str())
			.fun<static_cast<Vector2i (TextEdit::*)(const String &, uint32_t, int32_t, int32_t) const>(&TextEdit::search)>((new std::string("search"))->c_str())
			.fun<static_cast<void (TextEdit::*)(const Callable &)>(&TextEdit::set_tooltip_request_func)>((new std::string("set_tooltip_request_func"))->c_str())
			.fun<static_cast<Vector2 (TextEdit::*)() const>(&TextEdit::get_local_mouse_pos)>((new std::string("get_local_mouse_pos"))->c_str())
			.fun<static_cast<String (TextEdit::*)(const Vector2 &) const>(&TextEdit::get_word_at_pos)>((new std::string("get_word_at_pos"))->c_str())
			.fun<static_cast<Vector2i (TextEdit::*)(const Vector2i &, bool) const>(&TextEdit::get_line_column_at_pos)>((new std::string("get_line_column_at_pos"))->c_str())
			.fun<static_cast<Vector2i (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_pos_at_line_column)>((new std::string("get_pos_at_line_column"))->c_str())
			.fun<static_cast<Rect2i (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_rect_at_line_column)>((new std::string("get_rect_at_line_column"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(const Vector2i &) const>(&TextEdit::get_minimap_line_at_pos)>((new std::string("get_minimap_line_at_pos"))->c_str())
			.fun<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_dragging_cursor)>((new std::string("is_dragging_cursor"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(bool, int32_t) const>(&TextEdit::is_mouse_over_selection)>((new std::string("is_mouse_over_selection"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t, int32_t)>(&TextEdit::add_caret)>((new std::string("add_caret"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::remove_caret)>((new std::string("remove_caret"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::remove_secondary_carets)>((new std::string("remove_secondary_carets"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_caret_count)>((new std::string("get_caret_count"))->c_str())
			.fun<static_cast<void (TextEdit::*)(bool)>(&TextEdit::add_caret_at_carets)>((new std::string("add_caret_at_carets"))->c_str())
			.fun<static_cast<PackedInt32Array (TextEdit::*)(bool) const>(&TextEdit::get_sorted_carets)>((new std::string("get_sorted_carets"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t, int32_t, int32_t, bool)>(&TextEdit::collapse_carets)>((new std::string("collapse_carets"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::merge_overlapping_carets)>((new std::string("merge_overlapping_carets"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::begin_multicaret_edit)>((new std::string("begin_multicaret_edit"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::end_multicaret_edit)>((new std::string("end_multicaret_edit"))->c_str())
			.fun<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_in_mulitcaret_edit)>((new std::string("is_in_mulitcaret_edit"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(int32_t) const>(&TextEdit::multicaret_edit_ignore_caret)>((new std::string("multicaret_edit_ignore_caret"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(int32_t) const>(&TextEdit::is_caret_visible)>((new std::string("is_caret_visible"))->c_str())
			.fun<static_cast<Vector2 (TextEdit::*)(int32_t) const>(&TextEdit::get_caret_draw_pos)>((new std::string("get_caret_draw_pos"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, bool, bool, int32_t, int32_t)>(&TextEdit::set_caret_line)>((new std::string("set_caret_line"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_caret_line)>((new std::string("get_caret_line"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, bool, int32_t)>(&TextEdit::set_caret_column)>((new std::string("set_caret_column"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_caret_column)>((new std::string("get_caret_column"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_caret_wrap_index)>((new std::string("get_caret_wrap_index"))->c_str())
			.fun<static_cast<String (TextEdit::*)(int32_t) const>(&TextEdit::get_word_under_caret)>((new std::string("get_word_under_caret"))->c_str())
			.fun<static_cast<void (TextEdit::*)(TextEdit::SelectionMode)>(&TextEdit::set_selection_mode)>((new std::string("set_selection_mode"))->c_str())
			.fun<static_cast<TextEdit::SelectionMode (TextEdit::*)() const>(&TextEdit::get_selection_mode)>((new std::string("get_selection_mode"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::select_all)>((new std::string("select_all"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::select_word_under_caret)>((new std::string("select_word_under_caret"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::add_selection_for_next_occurrence)>((new std::string("add_selection_for_next_occurrence"))->c_str())
			.fun<static_cast<void (TextEdit::*)()>(&TextEdit::skip_selection_for_next_occurrence)>((new std::string("skip_selection_for_next_occurrence"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&TextEdit::select)>((new std::string("select"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(int32_t) const>(&TextEdit::has_selection)>((new std::string("has_selection"))->c_str())
			.fun<static_cast<String (TextEdit::*)(int32_t)>(&TextEdit::get_selected_text)>((new std::string("get_selected_text"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t, int32_t, bool, bool) const>(&TextEdit::get_selection_at_line_column)>((new std::string("get_selection_at_line_column"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TextEdit::*)(bool, bool) const>(&TextEdit::get_line_ranges_from_carets)>((new std::string("get_line_ranges_from_carets"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_selection_origin_line)>((new std::string("get_selection_origin_line"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_selection_origin_column)>((new std::string("get_selection_origin_column"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, bool, int32_t, int32_t)>(&TextEdit::set_selection_origin_line)>((new std::string("set_selection_origin_line"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t)>(&TextEdit::set_selection_origin_column)>((new std::string("set_selection_origin_column"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_selection_from_line)>((new std::string("get_selection_from_line"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_selection_from_column)>((new std::string("get_selection_from_column"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_selection_to_line)>((new std::string("get_selection_to_line"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_selection_to_column)>((new std::string("get_selection_to_column"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(int32_t) const>(&TextEdit::is_caret_after_selection_origin)>((new std::string("is_caret_after_selection_origin"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::deselect)>((new std::string("deselect"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::delete_selection)>((new std::string("delete_selection"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(int32_t) const>(&TextEdit::is_line_wrapped)>((new std::string("is_line_wrapped"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_line_wrap_count)>((new std::string("get_line_wrap_count"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_line_wrap_index_at_column)>((new std::string("get_line_wrap_index_at_column"))->c_str())
			.fun<static_cast<PackedStringArray (TextEdit::*)(int32_t) const>(&TextEdit::get_line_wrapped_text)>((new std::string("get_line_wrapped_text"))->c_str())
			.fun<static_cast<VScrollBar *(TextEdit::*)() const>(&TextEdit::get_v_scroll_bar)>((new std::string("get_v_scroll_bar"))->c_str())
			.fun<static_cast<HScrollBar *(TextEdit::*)() const>(&TextEdit::get_h_scroll_bar)>((new std::string("get_h_scroll_bar"))->c_str())
			.fun<static_cast<double (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_scroll_pos_for_line)>((new std::string("get_scroll_pos_for_line"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t)>(&TextEdit::set_line_as_first_visible)>((new std::string("set_line_as_first_visible"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_first_visible_line)>((new std::string("get_first_visible_line"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t)>(&TextEdit::set_line_as_center_visible)>((new std::string("set_line_as_center_visible"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t)>(&TextEdit::set_line_as_last_visible)>((new std::string("set_line_as_last_visible"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_last_full_visible_line)>((new std::string("get_last_full_visible_line"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_last_full_visible_line_wrap_index)>((new std::string("get_last_full_visible_line_wrap_index"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_visible_line_count)>((new std::string("get_visible_line_count"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_visible_line_count_in_range)>((new std::string("get_visible_line_count_in_range"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_total_visible_line_count)>((new std::string("get_total_visible_line_count"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::adjust_viewport_to_caret)>((new std::string("adjust_viewport_to_caret"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::center_viewport_to_caret)>((new std::string("center_viewport_to_caret"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_minimap_visible_lines)>((new std::string("get_minimap_visible_lines"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::add_gutter)>((new std::string("add_gutter"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::remove_gutter)>((new std::string("remove_gutter"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_gutter_count)>((new std::string("get_gutter_count"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, const String &)>(&TextEdit::set_gutter_name)>((new std::string("set_gutter_name"))->c_str())
			.fun<static_cast<String (TextEdit::*)(int32_t) const>(&TextEdit::get_gutter_name)>((new std::string("get_gutter_name"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, TextEdit::GutterType)>(&TextEdit::set_gutter_type)>((new std::string("set_gutter_type"))->c_str())
			.fun<static_cast<TextEdit::GutterType (TextEdit::*)(int32_t) const>(&TextEdit::get_gutter_type)>((new std::string("get_gutter_type"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t)>(&TextEdit::set_gutter_width)>((new std::string("set_gutter_width"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_gutter_width)>((new std::string("get_gutter_width"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, bool)>(&TextEdit::set_gutter_draw)>((new std::string("set_gutter_draw"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(int32_t) const>(&TextEdit::is_gutter_drawn)>((new std::string("is_gutter_drawn"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, bool)>(&TextEdit::set_gutter_clickable)>((new std::string("set_gutter_clickable"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(int32_t) const>(&TextEdit::is_gutter_clickable)>((new std::string("is_gutter_clickable"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, bool)>(&TextEdit::set_gutter_overwritable)>((new std::string("set_gutter_overwritable"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(int32_t) const>(&TextEdit::is_gutter_overwritable)>((new std::string("is_gutter_overwritable"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t)>(&TextEdit::merge_gutters)>((new std::string("merge_gutters"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, const Callable &)>(&TextEdit::set_gutter_custom_draw)>((new std::string("set_gutter_custom_draw"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)() const>(&TextEdit::get_total_gutter_width)>((new std::string("get_total_gutter_width"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t, const Variant &)>(&TextEdit::set_line_gutter_metadata)>((new std::string("set_line_gutter_metadata"))->c_str())
			.fun<static_cast<Variant (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_line_gutter_metadata)>((new std::string("get_line_gutter_metadata"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t, const String &)>(&TextEdit::set_line_gutter_text)>((new std::string("set_line_gutter_text"))->c_str())
			.fun<static_cast<String (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_line_gutter_text)>((new std::string("get_line_gutter_text"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t, const Ref<Texture2D> &)>(&TextEdit::set_line_gutter_icon)>((new std::string("set_line_gutter_icon"))->c_str())
			.fun<static_cast<Ref<Texture2D> (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_line_gutter_icon)>((new std::string("get_line_gutter_icon"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t, const Color &)>(&TextEdit::set_line_gutter_item_color)>((new std::string("set_line_gutter_item_color"))->c_str())
			.fun<static_cast<Color (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::get_line_gutter_item_color)>((new std::string("get_line_gutter_item_color"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t, bool)>(&TextEdit::set_line_gutter_clickable)>((new std::string("set_line_gutter_clickable"))->c_str())
			.fun<static_cast<bool (TextEdit::*)(int32_t, int32_t) const>(&TextEdit::is_line_gutter_clickable)>((new std::string("is_line_gutter_clickable"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, const Color &)>(&TextEdit::set_line_background_color)>((new std::string("set_line_background_color"))->c_str())
			.fun<static_cast<Color (TextEdit::*)(int32_t) const>(&TextEdit::get_line_background_color)>((new std::string("get_line_background_color"))->c_str())
			.fun<static_cast<PopupMenu *(TextEdit::*)() const>(&TextEdit::get_menu)>((new std::string("get_menu"))->c_str())
			.fun<static_cast<bool (TextEdit::*)() const>(&TextEdit::is_menu_visible)>((new std::string("is_menu_visible"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t)>(&TextEdit::menu_option)>((new std::string("menu_option"))->c_str())
			.fun<static_cast<void (TextEdit::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&TextEdit::adjust_carets_after_edit)>((new std::string("adjust_carets_after_edit"))->c_str())
			.fun<static_cast<PackedInt32Array (TextEdit::*)()>(&TextEdit::get_caret_index_edit_order)>((new std::string("get_caret_index_edit_order"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_selection_line)>((new std::string("get_selection_line"))->c_str())
			.fun<static_cast<int32_t (TextEdit::*)(int32_t) const>(&TextEdit::get_selection_column)>((new std::string("get_selection_column"))->c_str());
	qjs::Value _MenuItems = context->newObject();
	_MenuItems[(new std::string("MENU_CUT"))->c_str()] = TextEdit::MenuItems::MENU_CUT;
	_MenuItems[(new std::string("MENU_COPY"))->c_str()] = TextEdit::MenuItems::MENU_COPY;
	_MenuItems[(new std::string("MENU_PASTE"))->c_str()] = TextEdit::MenuItems::MENU_PASTE;
	_MenuItems[(new std::string("MENU_CLEAR"))->c_str()] = TextEdit::MenuItems::MENU_CLEAR;
	_MenuItems[(new std::string("MENU_SELECT_ALL"))->c_str()] = TextEdit::MenuItems::MENU_SELECT_ALL;
	_MenuItems[(new std::string("MENU_UNDO"))->c_str()] = TextEdit::MenuItems::MENU_UNDO;
	_MenuItems[(new std::string("MENU_REDO"))->c_str()] = TextEdit::MenuItems::MENU_REDO;
	_MenuItems[(new std::string("MENU_SUBMENU_TEXT_DIR"))->c_str()] = TextEdit::MenuItems::MENU_SUBMENU_TEXT_DIR;
	_MenuItems[(new std::string("MENU_DIR_INHERITED"))->c_str()] = TextEdit::MenuItems::MENU_DIR_INHERITED;
	_MenuItems[(new std::string("MENU_DIR_AUTO"))->c_str()] = TextEdit::MenuItems::MENU_DIR_AUTO;
	_MenuItems[(new std::string("MENU_DIR_LTR"))->c_str()] = TextEdit::MenuItems::MENU_DIR_LTR;
	_MenuItems[(new std::string("MENU_DIR_RTL"))->c_str()] = TextEdit::MenuItems::MENU_DIR_RTL;
	_MenuItems[(new std::string("MENU_DISPLAY_UCC"))->c_str()] = TextEdit::MenuItems::MENU_DISPLAY_UCC;
	_MenuItems[(new std::string("MENU_SUBMENU_INSERT_UCC"))->c_str()] = TextEdit::MenuItems::MENU_SUBMENU_INSERT_UCC;
	_MenuItems[(new std::string("MENU_INSERT_LRM"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_LRM;
	_MenuItems[(new std::string("MENU_INSERT_RLM"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_RLM;
	_MenuItems[(new std::string("MENU_INSERT_LRE"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_LRE;
	_MenuItems[(new std::string("MENU_INSERT_RLE"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_RLE;
	_MenuItems[(new std::string("MENU_INSERT_LRO"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_LRO;
	_MenuItems[(new std::string("MENU_INSERT_RLO"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_RLO;
	_MenuItems[(new std::string("MENU_INSERT_PDF"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_PDF;
	_MenuItems[(new std::string("MENU_INSERT_ALM"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_ALM;
	_MenuItems[(new std::string("MENU_INSERT_LRI"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_LRI;
	_MenuItems[(new std::string("MENU_INSERT_RLI"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_RLI;
	_MenuItems[(new std::string("MENU_INSERT_FSI"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_FSI;
	_MenuItems[(new std::string("MENU_INSERT_PDI"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_PDI;
	_MenuItems[(new std::string("MENU_INSERT_ZWJ"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_ZWJ;
	_MenuItems[(new std::string("MENU_INSERT_ZWNJ"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_ZWNJ;
	_MenuItems[(new std::string("MENU_INSERT_WJ"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_WJ;
	_MenuItems[(new std::string("MENU_INSERT_SHY"))->c_str()] = TextEdit::MenuItems::MENU_INSERT_SHY;
	_MenuItems[(new std::string("MENU_MAX"))->c_str()] = TextEdit::MenuItems::MENU_MAX;
	_module.add("MenuItems", std::move(_MenuItems));
	qjs::Value _EditAction = context->newObject();
	_EditAction[(new std::string("ACTION_NONE"))->c_str()] = TextEdit::EditAction::ACTION_NONE;
	_EditAction[(new std::string("ACTION_TYPING"))->c_str()] = TextEdit::EditAction::ACTION_TYPING;
	_EditAction[(new std::string("ACTION_BACKSPACE"))->c_str()] = TextEdit::EditAction::ACTION_BACKSPACE;
	_EditAction[(new std::string("ACTION_DELETE"))->c_str()] = TextEdit::EditAction::ACTION_DELETE;
	_module.add("EditAction", std::move(_EditAction));
	qjs::Value _SearchFlags = context->newObject();
	_SearchFlags[(new std::string("SEARCH_MATCH_CASE"))->c_str()] = TextEdit::SearchFlags::SEARCH_MATCH_CASE;
	_SearchFlags[(new std::string("SEARCH_WHOLE_WORDS"))->c_str()] = TextEdit::SearchFlags::SEARCH_WHOLE_WORDS;
	_SearchFlags[(new std::string("SEARCH_BACKWARDS"))->c_str()] = TextEdit::SearchFlags::SEARCH_BACKWARDS;
	_module.add("SearchFlags", std::move(_SearchFlags));
	qjs::Value _CaretType = context->newObject();
	_CaretType[(new std::string("CARET_TYPE_LINE"))->c_str()] = TextEdit::CaretType::CARET_TYPE_LINE;
	_CaretType[(new std::string("CARET_TYPE_BLOCK"))->c_str()] = TextEdit::CaretType::CARET_TYPE_BLOCK;
	_module.add("CaretType", std::move(_CaretType));
	qjs::Value _SelectionMode = context->newObject();
	_SelectionMode[(new std::string("SELECTION_MODE_NONE"))->c_str()] = TextEdit::SelectionMode::SELECTION_MODE_NONE;
	_SelectionMode[(new std::string("SELECTION_MODE_SHIFT"))->c_str()] = TextEdit::SelectionMode::SELECTION_MODE_SHIFT;
	_SelectionMode[(new std::string("SELECTION_MODE_POINTER"))->c_str()] = TextEdit::SelectionMode::SELECTION_MODE_POINTER;
	_SelectionMode[(new std::string("SELECTION_MODE_WORD"))->c_str()] = TextEdit::SelectionMode::SELECTION_MODE_WORD;
	_SelectionMode[(new std::string("SELECTION_MODE_LINE"))->c_str()] = TextEdit::SelectionMode::SELECTION_MODE_LINE;
	_module.add("SelectionMode", std::move(_SelectionMode));
	qjs::Value _LineWrappingMode = context->newObject();
	_LineWrappingMode[(new std::string("LINE_WRAPPING_NONE"))->c_str()] = TextEdit::LineWrappingMode::LINE_WRAPPING_NONE;
	_LineWrappingMode[(new std::string("LINE_WRAPPING_BOUNDARY"))->c_str()] = TextEdit::LineWrappingMode::LINE_WRAPPING_BOUNDARY;
	_module.add("LineWrappingMode", std::move(_LineWrappingMode));
	qjs::Value _GutterType = context->newObject();
	_GutterType[(new std::string("GUTTER_TYPE_STRING"))->c_str()] = TextEdit::GutterType::GUTTER_TYPE_STRING;
	_GutterType[(new std::string("GUTTER_TYPE_ICON"))->c_str()] = TextEdit::GutterType::GUTTER_TYPE_ICON;
	_GutterType[(new std::string("GUTTER_TYPE_CUSTOM"))->c_str()] = TextEdit::GutterType::GUTTER_TYPE_CUSTOM;
	_module.add("GutterType", std::move(_GutterType));
}