#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TextEdit() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<TextEdit>("TextEdit")
            .constructor<>()
            .base<Control>()
            .property<static_cast<String(TextEdit::*)()const>(&TextEdit::get_text),static_cast<void(TextEdit::*)(const String &)>(&TextEdit::set_text)>("text")
            .property<static_cast<String(TextEdit::*)()const>(&TextEdit::get_placeholder),static_cast<void(TextEdit::*)(const String &)>(&TextEdit::set_placeholder)>("placeholder_text")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_editable),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_editable)>("editable")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_context_menu_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_context_menu_enabled)>("context_menu_enabled")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_shortcut_keys_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_shortcut_keys_enabled)>("shortcut_keys_enabled")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_selecting_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_selecting_enabled)>("selecting_enabled")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_deselect_on_focus_loss_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_deselect_on_focus_loss_enabled)>("deselect_on_focus_loss_enabled")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_drag_and_drop_selection_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_drag_and_drop_selection_enabled)>("drag_and_drop_selection_enabled")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_virtual_keyboard_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_virtual_keyboard_enabled)>("virtual_keyboard_enabled")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_middle_mouse_paste_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_middle_mouse_paste_enabled)>("middle_mouse_paste_enabled")
            .property<static_cast<TextEdit::LineWrappingMode(TextEdit::*)()const>(&TextEdit::get_line_wrapping_mode),static_cast<void(TextEdit::*)(TextEdit::LineWrappingMode)>(&TextEdit::set_line_wrapping_mode)>("wrap_mode")
            .property<static_cast<TextServer::AutowrapMode(TextEdit::*)()const>(&TextEdit::get_autowrap_mode),static_cast<void(TextEdit::*)(TextServer::AutowrapMode)>(&TextEdit::set_autowrap_mode)>("autowrap_mode")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_indent_wrapped_lines),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_indent_wrapped_lines)>("indent_wrapped_lines")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_smooth_scroll_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_smooth_scroll_enabled)>("scroll_smooth")
            .property<static_cast<double(TextEdit::*)()const>(&TextEdit::get_v_scroll_speed),static_cast<void(TextEdit::*)(double)>(&TextEdit::set_v_scroll_speed)>("scroll_v_scroll_speed")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_scroll_past_end_of_file_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_scroll_past_end_of_file_enabled)>("scroll_past_end_of_file")
            .property<static_cast<double(TextEdit::*)()const>(&TextEdit::get_v_scroll),static_cast<void(TextEdit::*)(double)>(&TextEdit::set_v_scroll)>("scroll_vertical")
            .property<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_h_scroll),static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::set_h_scroll)>("scroll_horizontal")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_fit_content_height_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_fit_content_height_enabled)>("scroll_fit_content_height")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_drawing_minimap),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_draw_minimap)>("minimap_draw")
            .property<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_minimap_width),static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::set_minimap_width)>("minimap_width")
            .property<static_cast<TextEdit::CaretType(TextEdit::*)()const>(&TextEdit::get_caret_type),static_cast<void(TextEdit::*)(TextEdit::CaretType)>(&TextEdit::set_caret_type)>("caret_type")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_caret_blink_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_caret_blink_enabled)>("caret_blink")
            .property<static_cast<double(TextEdit::*)()const>(&TextEdit::get_caret_blink_interval),static_cast<void(TextEdit::*)(double)>(&TextEdit::set_caret_blink_interval)>("caret_blink_interval")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_drawing_caret_when_editable_disabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_draw_caret_when_editable_disabled)>("caret_draw_when_editable_disabled")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_move_caret_on_right_click_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_move_caret_on_right_click_enabled)>("caret_move_on_right_click")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_caret_mid_grapheme_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_caret_mid_grapheme_enabled)>("caret_mid_grapheme")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_multiple_carets_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_multiple_carets_enabled)>("caret_multiple")
            .property<static_cast<Ref<SyntaxHighlighter>(TextEdit::*)()const>(&TextEdit::get_syntax_highlighter),static_cast<void(TextEdit::*)(const Ref<SyntaxHighlighter> &)>(&TextEdit::set_syntax_highlighter)>("syntax_highlighter")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_highlight_all_occurrences_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_highlight_all_occurrences)>("highlight_all_occurrences")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_highlight_current_line_enabled),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_highlight_current_line)>("highlight_current_line")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::get_draw_control_chars),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_draw_control_chars)>("draw_control_chars")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_drawing_tabs),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_draw_tabs)>("draw_tabs")
            .property<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_drawing_spaces),static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_draw_spaces)>("draw_spaces")
            .property<static_cast<Control::TextDirection(TextEdit::*)()const>(&TextEdit::get_text_direction),static_cast<void(TextEdit::*)(Control::TextDirection)>(&TextEdit::set_text_direction)>("text_direction")
            .property<static_cast<String(TextEdit::*)()const>(&TextEdit::get_language),static_cast<void(TextEdit::*)(const String &)>(&TextEdit::set_language)>("language")
            .property<static_cast<TextServer::StructuredTextParser(TextEdit::*)()const>(&TextEdit::get_structured_text_bidi_override),static_cast<void(TextEdit::*)(TextServer::StructuredTextParser)>(&TextEdit::set_structured_text_bidi_override)>("structured_text_bidi_override")
            .property<static_cast<Array(TextEdit::*)()const>(&TextEdit::get_structured_text_bidi_override_options),static_cast<void(TextEdit::*)(const Array &)>(&TextEdit::set_structured_text_bidi_override_options)>("structured_text_bidi_override_options")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t)>(&TextEdit::_handle_unicode_input)>("_handle_unicode_input")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::_backspace)>("_backspace")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::_cut)>("_cut")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::_copy)>("_copy")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::_paste)>("_paste")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::_paste_primary_clipboard)>("_paste_primary_clipboard")
            .fun<static_cast<bool(TextEdit::*)()const>(&TextEdit::has_ime_text)>("has_ime_text")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::cancel_ime)>("cancel_ime")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::apply_ime)>("apply_ime")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::set_tab_size)>("set_tab_size")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_tab_size)>("get_tab_size")
            .fun<static_cast<void(TextEdit::*)(bool)>(&TextEdit::set_overtype_mode_enabled)>("set_overtype_mode_enabled")
            .fun<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_overtype_mode_enabled)>("is_overtype_mode_enabled")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::clear)>("clear")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_line_count)>("get_line_count")
            .fun<static_cast<void(TextEdit::*)(int32_t,const String &)>(&TextEdit::set_line)>("set_line")
            .fun<static_cast<String(TextEdit::*)(int32_t)const>(&TextEdit::get_line)>("get_line")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_line_width)>("get_line_width")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_line_height)>("get_line_height")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_indent_level)>("get_indent_level")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_first_non_whitespace_column)>("get_first_non_whitespace_column")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t)>(&TextEdit::swap_lines)>("swap_lines")
            .fun<static_cast<void(TextEdit::*)(int32_t,const String &)>(&TextEdit::insert_line_at)>("insert_line_at")
            .fun<static_cast<void(TextEdit::*)(int32_t,bool)>(&TextEdit::remove_line_at)>("remove_line_at")
            .fun<static_cast<void(TextEdit::*)(const String &,int32_t)>(&TextEdit::insert_text_at_caret)>("insert_text_at_caret")
            .fun<static_cast<void(TextEdit::*)(const String &,int32_t,int32_t,bool,bool)>(&TextEdit::insert_text)>("insert_text")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t,int32_t,int32_t)>(&TextEdit::remove_text)>("remove_text")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_last_unhidden_line)>("get_last_unhidden_line")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_next_visible_line_offset_from)>("get_next_visible_line_offset_from")
            .fun<static_cast<Vector2i(TextEdit::*)(int32_t,int32_t,int32_t)const>(&TextEdit::get_next_visible_line_index_offset_from)>("get_next_visible_line_index_offset_from")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::backspace)>("backspace")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::cut)>("cut")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::copy)>("copy")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::paste)>("paste")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::paste_primary_clipboard)>("paste_primary_clipboard")
            .fun<static_cast<void(TextEdit::*)(TextEdit::EditAction)>(&TextEdit::start_action)>("start_action")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::end_action)>("end_action")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::begin_complex_operation)>("begin_complex_operation")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::end_complex_operation)>("end_complex_operation")
            .fun<static_cast<bool(TextEdit::*)()const>(&TextEdit::has_undo)>("has_undo")
            .fun<static_cast<bool(TextEdit::*)()const>(&TextEdit::has_redo)>("has_redo")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::undo)>("undo")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::redo)>("redo")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::clear_undo_history)>("clear_undo_history")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::tag_saved_version)>("tag_saved_version")
            .fun<static_cast<uint32_t(TextEdit::*)()const>(&TextEdit::get_version)>("get_version")
            .fun<static_cast<uint32_t(TextEdit::*)()const>(&TextEdit::get_saved_version)>("get_saved_version")
            .fun<static_cast<void(TextEdit::*)(const String &)>(&TextEdit::set_search_text)>("set_search_text")
            .fun<static_cast<void(TextEdit::*)(uint32_t)>(&TextEdit::set_search_flags)>("set_search_flags")
            .fun<static_cast<Vector2i(TextEdit::*)(const String &,uint32_t,int32_t,int32_t)const>(&TextEdit::search)>("search")
            .fun<static_cast<void(TextEdit::*)(const Callable &)>(&TextEdit::set_tooltip_request_func)>("set_tooltip_request_func")
            .fun<static_cast<Vector2(TextEdit::*)()const>(&TextEdit::get_local_mouse_pos)>("get_local_mouse_pos")
            .fun<static_cast<String(TextEdit::*)(const Vector2 &)const>(&TextEdit::get_word_at_pos)>("get_word_at_pos")
            .fun<static_cast<Vector2i(TextEdit::*)(const Vector2i &,bool)const>(&TextEdit::get_line_column_at_pos)>("get_line_column_at_pos")
            .fun<static_cast<Vector2i(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_pos_at_line_column)>("get_pos_at_line_column")
            .fun<static_cast<Rect2i(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_rect_at_line_column)>("get_rect_at_line_column")
            .fun<static_cast<int32_t(TextEdit::*)(const Vector2i &)const>(&TextEdit::get_minimap_line_at_pos)>("get_minimap_line_at_pos")
            .fun<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_dragging_cursor)>("is_dragging_cursor")
            .fun<static_cast<bool(TextEdit::*)(bool,int32_t)const>(&TextEdit::is_mouse_over_selection)>("is_mouse_over_selection")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t,int32_t)>(&TextEdit::add_caret)>("add_caret")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::remove_caret)>("remove_caret")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::remove_secondary_carets)>("remove_secondary_carets")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_caret_count)>("get_caret_count")
            .fun<static_cast<void(TextEdit::*)(bool)>(&TextEdit::add_caret_at_carets)>("add_caret_at_carets")
            .fun<static_cast<PackedInt32Array(TextEdit::*)(bool)const>(&TextEdit::get_sorted_carets)>("get_sorted_carets")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t,int32_t,int32_t,bool)>(&TextEdit::collapse_carets)>("collapse_carets")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::merge_overlapping_carets)>("merge_overlapping_carets")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::begin_multicaret_edit)>("begin_multicaret_edit")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::end_multicaret_edit)>("end_multicaret_edit")
            .fun<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_in_mulitcaret_edit)>("is_in_mulitcaret_edit")
            .fun<static_cast<bool(TextEdit::*)(int32_t)const>(&TextEdit::multicaret_edit_ignore_caret)>("multicaret_edit_ignore_caret")
            .fun<static_cast<bool(TextEdit::*)(int32_t)const>(&TextEdit::is_caret_visible)>("is_caret_visible")
            .fun<static_cast<Vector2(TextEdit::*)(int32_t)const>(&TextEdit::get_caret_draw_pos)>("get_caret_draw_pos")
            .fun<static_cast<void(TextEdit::*)(int32_t,bool,bool,int32_t,int32_t)>(&TextEdit::set_caret_line)>("set_caret_line")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_caret_line)>("get_caret_line")
            .fun<static_cast<void(TextEdit::*)(int32_t,bool,int32_t)>(&TextEdit::set_caret_column)>("set_caret_column")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_caret_column)>("get_caret_column")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_caret_wrap_index)>("get_caret_wrap_index")
            .fun<static_cast<String(TextEdit::*)(int32_t)const>(&TextEdit::get_word_under_caret)>("get_word_under_caret")
            .fun<static_cast<void(TextEdit::*)(TextEdit::SelectionMode)>(&TextEdit::set_selection_mode)>("set_selection_mode")
            .fun<static_cast<TextEdit::SelectionMode(TextEdit::*)()const>(&TextEdit::get_selection_mode)>("get_selection_mode")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::select_all)>("select_all")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::select_word_under_caret)>("select_word_under_caret")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::add_selection_for_next_occurrence)>("add_selection_for_next_occurrence")
            .fun<static_cast<void(TextEdit::*)()>(&TextEdit::skip_selection_for_next_occurrence)>("skip_selection_for_next_occurrence")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&TextEdit::select)>("select")
            .fun<static_cast<bool(TextEdit::*)(int32_t)const>(&TextEdit::has_selection)>("has_selection")
            .fun<static_cast<String(TextEdit::*)(int32_t)>(&TextEdit::get_selected_text)>("get_selected_text")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t,int32_t,bool,bool)const>(&TextEdit::get_selection_at_line_column)>("get_selection_at_line_column")
            .fun<static_cast<TypedArray<Vector2i>(TextEdit::*)(bool,bool)const>(&TextEdit::get_line_ranges_from_carets)>("get_line_ranges_from_carets")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_selection_origin_line)>("get_selection_origin_line")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_selection_origin_column)>("get_selection_origin_column")
            .fun<static_cast<void(TextEdit::*)(int32_t,bool,int32_t,int32_t)>(&TextEdit::set_selection_origin_line)>("set_selection_origin_line")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t)>(&TextEdit::set_selection_origin_column)>("set_selection_origin_column")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_selection_from_line)>("get_selection_from_line")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_selection_from_column)>("get_selection_from_column")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_selection_to_line)>("get_selection_to_line")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_selection_to_column)>("get_selection_to_column")
            .fun<static_cast<bool(TextEdit::*)(int32_t)const>(&TextEdit::is_caret_after_selection_origin)>("is_caret_after_selection_origin")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::deselect)>("deselect")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::delete_selection)>("delete_selection")
            .fun<static_cast<bool(TextEdit::*)(int32_t)const>(&TextEdit::is_line_wrapped)>("is_line_wrapped")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_line_wrap_count)>("get_line_wrap_count")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_line_wrap_index_at_column)>("get_line_wrap_index_at_column")
            .fun<static_cast<PackedStringArray(TextEdit::*)(int32_t)const>(&TextEdit::get_line_wrapped_text)>("get_line_wrapped_text")
            .fun<static_cast<VScrollBar *(TextEdit::*)()const>(&TextEdit::get_v_scroll_bar)>("get_v_scroll_bar")
            .fun<static_cast<HScrollBar *(TextEdit::*)()const>(&TextEdit::get_h_scroll_bar)>("get_h_scroll_bar")
            .fun<static_cast<double(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_scroll_pos_for_line)>("get_scroll_pos_for_line")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t)>(&TextEdit::set_line_as_first_visible)>("set_line_as_first_visible")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_first_visible_line)>("get_first_visible_line")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t)>(&TextEdit::set_line_as_center_visible)>("set_line_as_center_visible")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t)>(&TextEdit::set_line_as_last_visible)>("set_line_as_last_visible")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_last_full_visible_line)>("get_last_full_visible_line")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_last_full_visible_line_wrap_index)>("get_last_full_visible_line_wrap_index")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_visible_line_count)>("get_visible_line_count")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_visible_line_count_in_range)>("get_visible_line_count_in_range")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_total_visible_line_count)>("get_total_visible_line_count")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::adjust_viewport_to_caret)>("adjust_viewport_to_caret")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::center_viewport_to_caret)>("center_viewport_to_caret")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_minimap_visible_lines)>("get_minimap_visible_lines")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::add_gutter)>("add_gutter")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::remove_gutter)>("remove_gutter")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_gutter_count)>("get_gutter_count")
            .fun<static_cast<void(TextEdit::*)(int32_t,const String &)>(&TextEdit::set_gutter_name)>("set_gutter_name")
            .fun<static_cast<String(TextEdit::*)(int32_t)const>(&TextEdit::get_gutter_name)>("get_gutter_name")
            .fun<static_cast<void(TextEdit::*)(int32_t,TextEdit::GutterType)>(&TextEdit::set_gutter_type)>("set_gutter_type")
            .fun<static_cast<TextEdit::GutterType(TextEdit::*)(int32_t)const>(&TextEdit::get_gutter_type)>("get_gutter_type")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t)>(&TextEdit::set_gutter_width)>("set_gutter_width")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_gutter_width)>("get_gutter_width")
            .fun<static_cast<void(TextEdit::*)(int32_t,bool)>(&TextEdit::set_gutter_draw)>("set_gutter_draw")
            .fun<static_cast<bool(TextEdit::*)(int32_t)const>(&TextEdit::is_gutter_drawn)>("is_gutter_drawn")
            .fun<static_cast<void(TextEdit::*)(int32_t,bool)>(&TextEdit::set_gutter_clickable)>("set_gutter_clickable")
            .fun<static_cast<bool(TextEdit::*)(int32_t)const>(&TextEdit::is_gutter_clickable)>("is_gutter_clickable")
            .fun<static_cast<void(TextEdit::*)(int32_t,bool)>(&TextEdit::set_gutter_overwritable)>("set_gutter_overwritable")
            .fun<static_cast<bool(TextEdit::*)(int32_t)const>(&TextEdit::is_gutter_overwritable)>("is_gutter_overwritable")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t)>(&TextEdit::merge_gutters)>("merge_gutters")
            .fun<static_cast<void(TextEdit::*)(int32_t,const Callable &)>(&TextEdit::set_gutter_custom_draw)>("set_gutter_custom_draw")
            .fun<static_cast<int32_t(TextEdit::*)()const>(&TextEdit::get_total_gutter_width)>("get_total_gutter_width")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t,const Variant &)>(&TextEdit::set_line_gutter_metadata)>("set_line_gutter_metadata")
            .fun<static_cast<Variant(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_line_gutter_metadata)>("get_line_gutter_metadata")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t,const String &)>(&TextEdit::set_line_gutter_text)>("set_line_gutter_text")
            .fun<static_cast<String(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_line_gutter_text)>("get_line_gutter_text")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t,const Ref<Texture2D> &)>(&TextEdit::set_line_gutter_icon)>("set_line_gutter_icon")
            .fun<static_cast<Ref<Texture2D>(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_line_gutter_icon)>("get_line_gutter_icon")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t,const Color &)>(&TextEdit::set_line_gutter_item_color)>("set_line_gutter_item_color")
            .fun<static_cast<Color(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::get_line_gutter_item_color)>("get_line_gutter_item_color")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t,bool)>(&TextEdit::set_line_gutter_clickable)>("set_line_gutter_clickable")
            .fun<static_cast<bool(TextEdit::*)(int32_t,int32_t)const>(&TextEdit::is_line_gutter_clickable)>("is_line_gutter_clickable")
            .fun<static_cast<void(TextEdit::*)(int32_t,const Color &)>(&TextEdit::set_line_background_color)>("set_line_background_color")
            .fun<static_cast<Color(TextEdit::*)(int32_t)const>(&TextEdit::get_line_background_color)>("get_line_background_color")
            .fun<static_cast<PopupMenu *(TextEdit::*)()const>(&TextEdit::get_menu)>("get_menu")
            .fun<static_cast<bool(TextEdit::*)()const>(&TextEdit::is_menu_visible)>("is_menu_visible")
            .fun<static_cast<void(TextEdit::*)(int32_t)>(&TextEdit::menu_option)>("menu_option")
            .fun<static_cast<void(TextEdit::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&TextEdit::adjust_carets_after_edit)>("adjust_carets_after_edit")
            .fun<static_cast<PackedInt32Array(TextEdit::*)()>(&TextEdit::get_caret_index_edit_order)>("get_caret_index_edit_order")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_selection_line)>("get_selection_line")
            .fun<static_cast<int32_t(TextEdit::*)(int32_t)const>(&TextEdit::get_selection_column)>("get_selection_column")
;    qjs::Value _MenuItems = context->newObject();
    _MenuItems["MENU_CUT"] = TextEdit::MenuItems::MENU_CUT;
    _MenuItems["MENU_COPY"] = TextEdit::MenuItems::MENU_COPY;
    _MenuItems["MENU_PASTE"] = TextEdit::MenuItems::MENU_PASTE;
    _MenuItems["MENU_CLEAR"] = TextEdit::MenuItems::MENU_CLEAR;
    _MenuItems["MENU_SELECT_ALL"] = TextEdit::MenuItems::MENU_SELECT_ALL;
    _MenuItems["MENU_UNDO"] = TextEdit::MenuItems::MENU_UNDO;
    _MenuItems["MENU_REDO"] = TextEdit::MenuItems::MENU_REDO;
    _MenuItems["MENU_SUBMENU_TEXT_DIR"] = TextEdit::MenuItems::MENU_SUBMENU_TEXT_DIR;
    _MenuItems["MENU_DIR_INHERITED"] = TextEdit::MenuItems::MENU_DIR_INHERITED;
    _MenuItems["MENU_DIR_AUTO"] = TextEdit::MenuItems::MENU_DIR_AUTO;
    _MenuItems["MENU_DIR_LTR"] = TextEdit::MenuItems::MENU_DIR_LTR;
    _MenuItems["MENU_DIR_RTL"] = TextEdit::MenuItems::MENU_DIR_RTL;
    _MenuItems["MENU_DISPLAY_UCC"] = TextEdit::MenuItems::MENU_DISPLAY_UCC;
    _MenuItems["MENU_SUBMENU_INSERT_UCC"] = TextEdit::MenuItems::MENU_SUBMENU_INSERT_UCC;
    _MenuItems["MENU_INSERT_LRM"] = TextEdit::MenuItems::MENU_INSERT_LRM;
    _MenuItems["MENU_INSERT_RLM"] = TextEdit::MenuItems::MENU_INSERT_RLM;
    _MenuItems["MENU_INSERT_LRE"] = TextEdit::MenuItems::MENU_INSERT_LRE;
    _MenuItems["MENU_INSERT_RLE"] = TextEdit::MenuItems::MENU_INSERT_RLE;
    _MenuItems["MENU_INSERT_LRO"] = TextEdit::MenuItems::MENU_INSERT_LRO;
    _MenuItems["MENU_INSERT_RLO"] = TextEdit::MenuItems::MENU_INSERT_RLO;
    _MenuItems["MENU_INSERT_PDF"] = TextEdit::MenuItems::MENU_INSERT_PDF;
    _MenuItems["MENU_INSERT_ALM"] = TextEdit::MenuItems::MENU_INSERT_ALM;
    _MenuItems["MENU_INSERT_LRI"] = TextEdit::MenuItems::MENU_INSERT_LRI;
    _MenuItems["MENU_INSERT_RLI"] = TextEdit::MenuItems::MENU_INSERT_RLI;
    _MenuItems["MENU_INSERT_FSI"] = TextEdit::MenuItems::MENU_INSERT_FSI;
    _MenuItems["MENU_INSERT_PDI"] = TextEdit::MenuItems::MENU_INSERT_PDI;
    _MenuItems["MENU_INSERT_ZWJ"] = TextEdit::MenuItems::MENU_INSERT_ZWJ;
    _MenuItems["MENU_INSERT_ZWNJ"] = TextEdit::MenuItems::MENU_INSERT_ZWNJ;
    _MenuItems["MENU_INSERT_WJ"] = TextEdit::MenuItems::MENU_INSERT_WJ;
    _MenuItems["MENU_INSERT_SHY"] = TextEdit::MenuItems::MENU_INSERT_SHY;
    _MenuItems["MENU_MAX"] = TextEdit::MenuItems::MENU_MAX;
    _module.add("MenuItems", std::move(_MenuItems));
    qjs::Value _EditAction = context->newObject();
    _EditAction["ACTION_NONE"] = TextEdit::EditAction::ACTION_NONE;
    _EditAction["ACTION_TYPING"] = TextEdit::EditAction::ACTION_TYPING;
    _EditAction["ACTION_BACKSPACE"] = TextEdit::EditAction::ACTION_BACKSPACE;
    _EditAction["ACTION_DELETE"] = TextEdit::EditAction::ACTION_DELETE;
    _module.add("EditAction", std::move(_EditAction));
    qjs::Value _SearchFlags = context->newObject();
    _SearchFlags["SEARCH_MATCH_CASE"] = TextEdit::SearchFlags::SEARCH_MATCH_CASE;
    _SearchFlags["SEARCH_WHOLE_WORDS"] = TextEdit::SearchFlags::SEARCH_WHOLE_WORDS;
    _SearchFlags["SEARCH_BACKWARDS"] = TextEdit::SearchFlags::SEARCH_BACKWARDS;
    _module.add("SearchFlags", std::move(_SearchFlags));
    qjs::Value _CaretType = context->newObject();
    _CaretType["CARET_TYPE_LINE"] = TextEdit::CaretType::CARET_TYPE_LINE;
    _CaretType["CARET_TYPE_BLOCK"] = TextEdit::CaretType::CARET_TYPE_BLOCK;
    _module.add("CaretType", std::move(_CaretType));
    qjs::Value _SelectionMode = context->newObject();
    _SelectionMode["SELECTION_MODE_NONE"] = TextEdit::SelectionMode::SELECTION_MODE_NONE;
    _SelectionMode["SELECTION_MODE_SHIFT"] = TextEdit::SelectionMode::SELECTION_MODE_SHIFT;
    _SelectionMode["SELECTION_MODE_POINTER"] = TextEdit::SelectionMode::SELECTION_MODE_POINTER;
    _SelectionMode["SELECTION_MODE_WORD"] = TextEdit::SelectionMode::SELECTION_MODE_WORD;
    _SelectionMode["SELECTION_MODE_LINE"] = TextEdit::SelectionMode::SELECTION_MODE_LINE;
    _module.add("SelectionMode", std::move(_SelectionMode));
    qjs::Value _LineWrappingMode = context->newObject();
    _LineWrappingMode["LINE_WRAPPING_NONE"] = TextEdit::LineWrappingMode::LINE_WRAPPING_NONE;
    _LineWrappingMode["LINE_WRAPPING_BOUNDARY"] = TextEdit::LineWrappingMode::LINE_WRAPPING_BOUNDARY;
    _module.add("LineWrappingMode", std::move(_LineWrappingMode));
    qjs::Value _GutterType = context->newObject();
    _GutterType["GUTTER_TYPE_STRING"] = TextEdit::GutterType::GUTTER_TYPE_STRING;
    _GutterType["GUTTER_TYPE_ICON"] = TextEdit::GutterType::GUTTER_TYPE_ICON;
    _GutterType["GUTTER_TYPE_CUSTOM"] = TextEdit::GutterType::GUTTER_TYPE_CUSTOM;
    _module.add("GutterType", std::move(_GutterType));
}