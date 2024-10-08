
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void text_edit_class_finalizer(JSRuntime *rt, JSValue val) {
	TextEdit *text_edit = static_cast<TextEdit *>(JS_GetOpaque(val, TextEdit::__class_id));
	if (text_edit)
		TextEdit::free(nullptr, text_edit);
}

static JSClassDef text_edit_class_def = {
	"TextEdit",
	.finalizer = text_edit_class_finalizer
};

static JSValue text_edit_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextEdit *text_edit_class;
	JSValue obj = JS_NewObjectClass(ctx, TextEdit::__class_id);
	if (JS_IsException(obj))
		return obj;
	text_edit_class = memnew(TextEdit);
	if (!text_edit_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, text_edit_class);
	return obj;
}
static JSValue text_edit_class_has_ime_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::has_ime_text, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_cancel_ime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::cancel_ime, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_apply_ime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::apply_ime, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_editable, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_editable, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_text_direction, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_text_direction, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_language, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_language, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_structured_text_bidi_override, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_structured_text_bidi_override, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_structured_text_bidi_override_options, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_structured_text_bidi_override_options, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_tab_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_tab_size, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_tab_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_tab_size, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_indent_wrapped_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_indent_wrapped_lines, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_indent_wrapped_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_indent_wrapped_lines, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_overtype_mode_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_overtype_mode_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_overtype_mode_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_overtype_mode_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_context_menu_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_context_menu_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_shortcut_keys_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_shortcut_keys_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_virtual_keyboard_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_virtual_keyboard_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_virtual_keyboard_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_virtual_keyboard_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_middle_mouse_paste_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_middle_mouse_paste_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_middle_mouse_paste_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_middle_mouse_paste_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::clear, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_text, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_text, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_count, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_placeholder, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_placeholder, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_line_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_width, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_line_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_height, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_indent_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_indent_level, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_first_non_whitespace_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_first_non_whitespace_column, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_swap_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::swap_lines, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_insert_line_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::insert_line_at, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_remove_line_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::remove_line_at, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_insert_text_at_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::insert_text_at_caret, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_insert_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::insert_text, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_remove_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::remove_text, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_last_unhidden_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_last_unhidden_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_next_visible_line_offset_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_next_visible_line_offset_from, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_next_visible_line_index_offset_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_next_visible_line_index_offset_from, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_backspace(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::backspace, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_cut(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::cut, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_copy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::copy, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_paste(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::paste, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_paste_primary_clipboard(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::paste_primary_clipboard, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_start_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::start_action, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_end_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::end_action, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_begin_complex_operation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::begin_complex_operation, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_end_complex_operation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::end_complex_operation, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_has_undo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::has_undo, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_has_redo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::has_redo, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_undo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::undo, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_redo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::redo, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_clear_undo_history(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::clear_undo_history, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_tag_saved_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::tag_saved_version, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_version, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_saved_version(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_saved_version, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_search_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_search_text, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_set_search_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_search_flags, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_search(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::search, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_tooltip_request_func(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_tooltip_request_func, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_local_mouse_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_local_mouse_pos, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_word_at_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_word_at_pos, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_line_column_at_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_column_at_pos, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_pos_at_line_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_pos_at_line_column, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_rect_at_line_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_rect_at_line_column, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_minimap_line_at_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_minimap_line_at_pos, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_is_dragging_cursor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_dragging_cursor, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_is_mouse_over_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_mouse_over_selection, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_caret_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_caret_type, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_caret_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_caret_type, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_caret_blink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_caret_blink_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_caret_blink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_caret_blink_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_caret_blink_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_caret_blink_interval, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_caret_blink_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_caret_blink_interval, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_draw_caret_when_editable_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_draw_caret_when_editable_disabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_drawing_caret_when_editable_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_drawing_caret_when_editable_disabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_move_caret_on_right_click_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_move_caret_on_right_click_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_move_caret_on_right_click_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_move_caret_on_right_click_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_caret_mid_grapheme_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_caret_mid_grapheme_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_caret_mid_grapheme_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_caret_mid_grapheme_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_multiple_carets_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_multiple_carets_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_multiple_carets_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_multiple_carets_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_add_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextEdit::add_caret, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_remove_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::remove_caret, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_remove_secondary_carets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::remove_secondary_carets, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_caret_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_caret_count, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_add_caret_at_carets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::add_caret_at_carets, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_sorted_carets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_sorted_carets, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_collapse_carets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::collapse_carets, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_merge_overlapping_carets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::merge_overlapping_carets, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_begin_multicaret_edit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::begin_multicaret_edit, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_end_multicaret_edit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::end_multicaret_edit, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_in_mulitcaret_edit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_in_mulitcaret_edit, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_multicaret_edit_ignore_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::multicaret_edit_ignore_caret, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_is_caret_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_caret_visible, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_caret_draw_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_caret_draw_pos, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_caret_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_caret_line, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_caret_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_caret_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_caret_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_caret_column, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_caret_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_caret_column, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_caret_wrap_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_caret_wrap_index, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_word_under_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_word_under_caret, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_use_default_word_separators(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_use_default_word_separators, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_default_word_separators_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_default_word_separators_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_use_custom_word_separators(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_use_custom_word_separators, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_custom_word_separators_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_custom_word_separators_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_custom_word_separators(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_custom_word_separators, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_custom_word_separators(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_custom_word_separators, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_selecting_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_selecting_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_selecting_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_selecting_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_deselect_on_focus_loss_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_deselect_on_focus_loss_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_drag_and_drop_selection_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_drag_and_drop_selection_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_selection_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_selection_mode, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_selection_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_mode, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_select_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::select_all, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_select_word_under_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::select_word_under_caret, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_add_selection_for_next_occurrence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::add_selection_for_next_occurrence, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_skip_selection_for_next_occurrence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::skip_selection_for_next_occurrence, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::select, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_has_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::has_selection, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_selected_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextEdit::get_selected_text, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_selection_at_line_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_at_line_column, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_line_ranges_from_carets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_ranges_from_carets, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_selection_origin_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_origin_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_selection_origin_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_origin_column, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_selection_origin_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_selection_origin_line, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_set_selection_origin_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_selection_origin_column, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_selection_from_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_from_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_selection_from_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_from_column, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_selection_to_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_to_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_selection_to_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_to_column, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_is_caret_after_selection_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_caret_after_selection_origin, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_deselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::deselect, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_delete_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::delete_selection, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_set_line_wrapping_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_wrapping_mode, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_line_wrapping_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_wrapping_mode, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_autowrap_mode, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_autowrap_mode, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_is_line_wrapped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_line_wrapped, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_line_wrap_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_wrap_count, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_line_wrap_index_at_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_wrap_index_at_column, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_line_wrapped_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_wrapped_text, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_smooth_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_smooth_scroll_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_smooth_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_smooth_scroll_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_v_scroll_bar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_v_scroll_bar, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_h_scroll_bar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_h_scroll_bar, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_v_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_v_scroll, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_v_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_v_scroll, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_h_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_h_scroll, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_h_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_h_scroll, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_scroll_past_end_of_file_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_scroll_past_end_of_file_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_scroll_past_end_of_file_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_scroll_past_end_of_file_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_v_scroll_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_v_scroll_speed, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_v_scroll_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_v_scroll_speed, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_fit_content_height_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_fit_content_height_enabled, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_fit_content_height_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_fit_content_height_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_scroll_pos_for_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_scroll_pos_for_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_line_as_first_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_as_first_visible, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_first_visible_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_first_visible_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_line_as_center_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_as_center_visible, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_set_line_as_last_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_as_last_visible, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_last_full_visible_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_last_full_visible_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_last_full_visible_line_wrap_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_last_full_visible_line_wrap_index, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_visible_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_visible_line_count, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_visible_line_count_in_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_visible_line_count_in_range, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_total_visible_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_total_visible_line_count, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_adjust_viewport_to_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::adjust_viewport_to_caret, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_center_viewport_to_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::center_viewport_to_caret, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_set_draw_minimap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_draw_minimap, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_drawing_minimap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_drawing_minimap, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_minimap_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_minimap_width, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_minimap_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_minimap_width, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_minimap_visible_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_minimap_visible_lines, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_add_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::add_gutter, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_remove_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::remove_gutter, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_gutter_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_gutter_count, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_gutter_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_gutter_name, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_gutter_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_gutter_name, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_gutter_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_gutter_type, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_gutter_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_gutter_type, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_gutter_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_gutter_width, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_gutter_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_gutter_width, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_gutter_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_gutter_draw, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_gutter_drawn(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_gutter_drawn, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_gutter_clickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_gutter_clickable, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_gutter_clickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_gutter_clickable, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_gutter_overwritable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_gutter_overwritable, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_gutter_overwritable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_gutter_overwritable, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_merge_gutters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::merge_gutters, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_set_gutter_custom_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_gutter_custom_draw, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_total_gutter_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_total_gutter_width, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_line_gutter_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_gutter_metadata, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_line_gutter_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_gutter_metadata, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_line_gutter_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_gutter_text, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_line_gutter_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_gutter_text, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_line_gutter_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_gutter_icon, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_line_gutter_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_gutter_icon, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_line_gutter_item_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_gutter_item_color, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_line_gutter_item_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_gutter_item_color, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_line_gutter_clickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_gutter_clickable, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_line_gutter_clickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_line_gutter_clickable, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_line_background_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_line_background_color, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_line_background_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_line_background_color, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_syntax_highlighter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_syntax_highlighter, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_syntax_highlighter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_syntax_highlighter, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_highlight_current_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_highlight_current_line, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_highlight_current_line_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_highlight_current_line_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_highlight_all_occurrences(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_highlight_all_occurrences, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_highlight_all_occurrences_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_highlight_all_occurrences_enabled, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_draw_control_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_draw_control_chars, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_draw_control_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_draw_control_chars, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_set_draw_tabs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_draw_tabs, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_drawing_tabs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_drawing_tabs, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_set_draw_spaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::set_draw_spaces, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_is_drawing_spaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_drawing_spaces, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_menu, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_is_menu_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::is_menu_visible, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_menu_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::menu_option, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_adjust_carets_after_edit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextEdit::adjust_carets_after_edit, TextEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_edit_class_get_caret_index_edit_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextEdit::get_caret_index_edit_order, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_selection_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_line, TextEdit::__class_id, ctx, this_val, argv);
};
static JSValue text_edit_class_get_selection_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextEdit::get_selection_column, TextEdit::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry text_edit_class_proto_funcs[] = {
	JS_CFUNC_DEF("has_ime_text", 0, &text_edit_class_has_ime_text),
	JS_CFUNC_DEF("cancel_ime", 0, &text_edit_class_cancel_ime),
	JS_CFUNC_DEF("apply_ime", 0, &text_edit_class_apply_ime),
	JS_CFUNC_DEF("set_editable", 1, &text_edit_class_set_editable),
	JS_CFUNC_DEF("is_editable", 0, &text_edit_class_is_editable),
	JS_CFUNC_DEF("set_text_direction", 1, &text_edit_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &text_edit_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &text_edit_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &text_edit_class_get_language),
	JS_CFUNC_DEF("set_structured_text_bidi_override", 1, &text_edit_class_set_structured_text_bidi_override),
	JS_CFUNC_DEF("get_structured_text_bidi_override", 0, &text_edit_class_get_structured_text_bidi_override),
	JS_CFUNC_DEF("set_structured_text_bidi_override_options", 1, &text_edit_class_set_structured_text_bidi_override_options),
	JS_CFUNC_DEF("get_structured_text_bidi_override_options", 0, &text_edit_class_get_structured_text_bidi_override_options),
	JS_CFUNC_DEF("set_tab_size", 1, &text_edit_class_set_tab_size),
	JS_CFUNC_DEF("get_tab_size", 0, &text_edit_class_get_tab_size),
	JS_CFUNC_DEF("set_indent_wrapped_lines", 1, &text_edit_class_set_indent_wrapped_lines),
	JS_CFUNC_DEF("is_indent_wrapped_lines", 0, &text_edit_class_is_indent_wrapped_lines),
	JS_CFUNC_DEF("set_overtype_mode_enabled", 1, &text_edit_class_set_overtype_mode_enabled),
	JS_CFUNC_DEF("is_overtype_mode_enabled", 0, &text_edit_class_is_overtype_mode_enabled),
	JS_CFUNC_DEF("set_context_menu_enabled", 1, &text_edit_class_set_context_menu_enabled),
	JS_CFUNC_DEF("is_context_menu_enabled", 0, &text_edit_class_is_context_menu_enabled),
	JS_CFUNC_DEF("set_shortcut_keys_enabled", 1, &text_edit_class_set_shortcut_keys_enabled),
	JS_CFUNC_DEF("is_shortcut_keys_enabled", 0, &text_edit_class_is_shortcut_keys_enabled),
	JS_CFUNC_DEF("set_virtual_keyboard_enabled", 1, &text_edit_class_set_virtual_keyboard_enabled),
	JS_CFUNC_DEF("is_virtual_keyboard_enabled", 0, &text_edit_class_is_virtual_keyboard_enabled),
	JS_CFUNC_DEF("set_middle_mouse_paste_enabled", 1, &text_edit_class_set_middle_mouse_paste_enabled),
	JS_CFUNC_DEF("is_middle_mouse_paste_enabled", 0, &text_edit_class_is_middle_mouse_paste_enabled),
	JS_CFUNC_DEF("clear", 0, &text_edit_class_clear),
	JS_CFUNC_DEF("set_text", 1, &text_edit_class_set_text),
	JS_CFUNC_DEF("get_text", 0, &text_edit_class_get_text),
	JS_CFUNC_DEF("get_line_count", 0, &text_edit_class_get_line_count),
	JS_CFUNC_DEF("set_placeholder", 1, &text_edit_class_set_placeholder),
	JS_CFUNC_DEF("get_placeholder", 0, &text_edit_class_get_placeholder),
	JS_CFUNC_DEF("set_line", 2, &text_edit_class_set_line),
	JS_CFUNC_DEF("get_line", 1, &text_edit_class_get_line),
	JS_CFUNC_DEF("get_line_width", 2, &text_edit_class_get_line_width),
	JS_CFUNC_DEF("get_line_height", 0, &text_edit_class_get_line_height),
	JS_CFUNC_DEF("get_indent_level", 1, &text_edit_class_get_indent_level),
	JS_CFUNC_DEF("get_first_non_whitespace_column", 1, &text_edit_class_get_first_non_whitespace_column),
	JS_CFUNC_DEF("swap_lines", 2, &text_edit_class_swap_lines),
	JS_CFUNC_DEF("insert_line_at", 2, &text_edit_class_insert_line_at),
	JS_CFUNC_DEF("remove_line_at", 2, &text_edit_class_remove_line_at),
	JS_CFUNC_DEF("insert_text_at_caret", 2, &text_edit_class_insert_text_at_caret),
	JS_CFUNC_DEF("insert_text", 5, &text_edit_class_insert_text),
	JS_CFUNC_DEF("remove_text", 4, &text_edit_class_remove_text),
	JS_CFUNC_DEF("get_last_unhidden_line", 0, &text_edit_class_get_last_unhidden_line),
	JS_CFUNC_DEF("get_next_visible_line_offset_from", 2, &text_edit_class_get_next_visible_line_offset_from),
	JS_CFUNC_DEF("get_next_visible_line_index_offset_from", 3, &text_edit_class_get_next_visible_line_index_offset_from),
	JS_CFUNC_DEF("backspace", 1, &text_edit_class_backspace),
	JS_CFUNC_DEF("cut", 1, &text_edit_class_cut),
	JS_CFUNC_DEF("copy", 1, &text_edit_class_copy),
	JS_CFUNC_DEF("paste", 1, &text_edit_class_paste),
	JS_CFUNC_DEF("paste_primary_clipboard", 1, &text_edit_class_paste_primary_clipboard),
	JS_CFUNC_DEF("start_action", 1, &text_edit_class_start_action),
	JS_CFUNC_DEF("end_action", 0, &text_edit_class_end_action),
	JS_CFUNC_DEF("begin_complex_operation", 0, &text_edit_class_begin_complex_operation),
	JS_CFUNC_DEF("end_complex_operation", 0, &text_edit_class_end_complex_operation),
	JS_CFUNC_DEF("has_undo", 0, &text_edit_class_has_undo),
	JS_CFUNC_DEF("has_redo", 0, &text_edit_class_has_redo),
	JS_CFUNC_DEF("undo", 0, &text_edit_class_undo),
	JS_CFUNC_DEF("redo", 0, &text_edit_class_redo),
	JS_CFUNC_DEF("clear_undo_history", 0, &text_edit_class_clear_undo_history),
	JS_CFUNC_DEF("tag_saved_version", 0, &text_edit_class_tag_saved_version),
	JS_CFUNC_DEF("get_version", 0, &text_edit_class_get_version),
	JS_CFUNC_DEF("get_saved_version", 0, &text_edit_class_get_saved_version),
	JS_CFUNC_DEF("set_search_text", 1, &text_edit_class_set_search_text),
	JS_CFUNC_DEF("set_search_flags", 1, &text_edit_class_set_search_flags),
	JS_CFUNC_DEF("search", 4, &text_edit_class_search),
	JS_CFUNC_DEF("set_tooltip_request_func", 1, &text_edit_class_set_tooltip_request_func),
	JS_CFUNC_DEF("get_local_mouse_pos", 0, &text_edit_class_get_local_mouse_pos),
	JS_CFUNC_DEF("get_word_at_pos", 1, &text_edit_class_get_word_at_pos),
	JS_CFUNC_DEF("get_line_column_at_pos", 2, &text_edit_class_get_line_column_at_pos),
	JS_CFUNC_DEF("get_pos_at_line_column", 2, &text_edit_class_get_pos_at_line_column),
	JS_CFUNC_DEF("get_rect_at_line_column", 2, &text_edit_class_get_rect_at_line_column),
	JS_CFUNC_DEF("get_minimap_line_at_pos", 1, &text_edit_class_get_minimap_line_at_pos),
	JS_CFUNC_DEF("is_dragging_cursor", 0, &text_edit_class_is_dragging_cursor),
	JS_CFUNC_DEF("is_mouse_over_selection", 2, &text_edit_class_is_mouse_over_selection),
	JS_CFUNC_DEF("set_caret_type", 1, &text_edit_class_set_caret_type),
	JS_CFUNC_DEF("get_caret_type", 0, &text_edit_class_get_caret_type),
	JS_CFUNC_DEF("set_caret_blink_enabled", 1, &text_edit_class_set_caret_blink_enabled),
	JS_CFUNC_DEF("is_caret_blink_enabled", 0, &text_edit_class_is_caret_blink_enabled),
	JS_CFUNC_DEF("set_caret_blink_interval", 1, &text_edit_class_set_caret_blink_interval),
	JS_CFUNC_DEF("get_caret_blink_interval", 0, &text_edit_class_get_caret_blink_interval),
	JS_CFUNC_DEF("set_draw_caret_when_editable_disabled", 1, &text_edit_class_set_draw_caret_when_editable_disabled),
	JS_CFUNC_DEF("is_drawing_caret_when_editable_disabled", 0, &text_edit_class_is_drawing_caret_when_editable_disabled),
	JS_CFUNC_DEF("set_move_caret_on_right_click_enabled", 1, &text_edit_class_set_move_caret_on_right_click_enabled),
	JS_CFUNC_DEF("is_move_caret_on_right_click_enabled", 0, &text_edit_class_is_move_caret_on_right_click_enabled),
	JS_CFUNC_DEF("set_caret_mid_grapheme_enabled", 1, &text_edit_class_set_caret_mid_grapheme_enabled),
	JS_CFUNC_DEF("is_caret_mid_grapheme_enabled", 0, &text_edit_class_is_caret_mid_grapheme_enabled),
	JS_CFUNC_DEF("set_multiple_carets_enabled", 1, &text_edit_class_set_multiple_carets_enabled),
	JS_CFUNC_DEF("is_multiple_carets_enabled", 0, &text_edit_class_is_multiple_carets_enabled),
	JS_CFUNC_DEF("add_caret", 2, &text_edit_class_add_caret),
	JS_CFUNC_DEF("remove_caret", 1, &text_edit_class_remove_caret),
	JS_CFUNC_DEF("remove_secondary_carets", 0, &text_edit_class_remove_secondary_carets),
	JS_CFUNC_DEF("get_caret_count", 0, &text_edit_class_get_caret_count),
	JS_CFUNC_DEF("add_caret_at_carets", 1, &text_edit_class_add_caret_at_carets),
	JS_CFUNC_DEF("get_sorted_carets", 1, &text_edit_class_get_sorted_carets),
	JS_CFUNC_DEF("collapse_carets", 5, &text_edit_class_collapse_carets),
	JS_CFUNC_DEF("merge_overlapping_carets", 0, &text_edit_class_merge_overlapping_carets),
	JS_CFUNC_DEF("begin_multicaret_edit", 0, &text_edit_class_begin_multicaret_edit),
	JS_CFUNC_DEF("end_multicaret_edit", 0, &text_edit_class_end_multicaret_edit),
	JS_CFUNC_DEF("is_in_mulitcaret_edit", 0, &text_edit_class_is_in_mulitcaret_edit),
	JS_CFUNC_DEF("multicaret_edit_ignore_caret", 1, &text_edit_class_multicaret_edit_ignore_caret),
	JS_CFUNC_DEF("is_caret_visible", 1, &text_edit_class_is_caret_visible),
	JS_CFUNC_DEF("get_caret_draw_pos", 1, &text_edit_class_get_caret_draw_pos),
	JS_CFUNC_DEF("set_caret_line", 5, &text_edit_class_set_caret_line),
	JS_CFUNC_DEF("get_caret_line", 1, &text_edit_class_get_caret_line),
	JS_CFUNC_DEF("set_caret_column", 3, &text_edit_class_set_caret_column),
	JS_CFUNC_DEF("get_caret_column", 1, &text_edit_class_get_caret_column),
	JS_CFUNC_DEF("get_caret_wrap_index", 1, &text_edit_class_get_caret_wrap_index),
	JS_CFUNC_DEF("get_word_under_caret", 1, &text_edit_class_get_word_under_caret),
	JS_CFUNC_DEF("set_use_default_word_separators", 1, &text_edit_class_set_use_default_word_separators),
	JS_CFUNC_DEF("is_default_word_separators_enabled", 0, &text_edit_class_is_default_word_separators_enabled),
	JS_CFUNC_DEF("set_use_custom_word_separators", 1, &text_edit_class_set_use_custom_word_separators),
	JS_CFUNC_DEF("is_custom_word_separators_enabled", 0, &text_edit_class_is_custom_word_separators_enabled),
	JS_CFUNC_DEF("set_custom_word_separators", 1, &text_edit_class_set_custom_word_separators),
	JS_CFUNC_DEF("get_custom_word_separators", 0, &text_edit_class_get_custom_word_separators),
	JS_CFUNC_DEF("set_selecting_enabled", 1, &text_edit_class_set_selecting_enabled),
	JS_CFUNC_DEF("is_selecting_enabled", 0, &text_edit_class_is_selecting_enabled),
	JS_CFUNC_DEF("set_deselect_on_focus_loss_enabled", 1, &text_edit_class_set_deselect_on_focus_loss_enabled),
	JS_CFUNC_DEF("is_deselect_on_focus_loss_enabled", 0, &text_edit_class_is_deselect_on_focus_loss_enabled),
	JS_CFUNC_DEF("set_drag_and_drop_selection_enabled", 1, &text_edit_class_set_drag_and_drop_selection_enabled),
	JS_CFUNC_DEF("is_drag_and_drop_selection_enabled", 0, &text_edit_class_is_drag_and_drop_selection_enabled),
	JS_CFUNC_DEF("set_selection_mode", 1, &text_edit_class_set_selection_mode),
	JS_CFUNC_DEF("get_selection_mode", 0, &text_edit_class_get_selection_mode),
	JS_CFUNC_DEF("select_all", 0, &text_edit_class_select_all),
	JS_CFUNC_DEF("select_word_under_caret", 1, &text_edit_class_select_word_under_caret),
	JS_CFUNC_DEF("add_selection_for_next_occurrence", 0, &text_edit_class_add_selection_for_next_occurrence),
	JS_CFUNC_DEF("skip_selection_for_next_occurrence", 0, &text_edit_class_skip_selection_for_next_occurrence),
	JS_CFUNC_DEF("select", 5, &text_edit_class_select),
	JS_CFUNC_DEF("has_selection", 1, &text_edit_class_has_selection),
	JS_CFUNC_DEF("get_selected_text", 1, &text_edit_class_get_selected_text),
	JS_CFUNC_DEF("get_selection_at_line_column", 4, &text_edit_class_get_selection_at_line_column),
	JS_CFUNC_DEF("get_line_ranges_from_carets", 2, &text_edit_class_get_line_ranges_from_carets),
	JS_CFUNC_DEF("get_selection_origin_line", 1, &text_edit_class_get_selection_origin_line),
	JS_CFUNC_DEF("get_selection_origin_column", 1, &text_edit_class_get_selection_origin_column),
	JS_CFUNC_DEF("set_selection_origin_line", 4, &text_edit_class_set_selection_origin_line),
	JS_CFUNC_DEF("set_selection_origin_column", 2, &text_edit_class_set_selection_origin_column),
	JS_CFUNC_DEF("get_selection_from_line", 1, &text_edit_class_get_selection_from_line),
	JS_CFUNC_DEF("get_selection_from_column", 1, &text_edit_class_get_selection_from_column),
	JS_CFUNC_DEF("get_selection_to_line", 1, &text_edit_class_get_selection_to_line),
	JS_CFUNC_DEF("get_selection_to_column", 1, &text_edit_class_get_selection_to_column),
	JS_CFUNC_DEF("is_caret_after_selection_origin", 1, &text_edit_class_is_caret_after_selection_origin),
	JS_CFUNC_DEF("deselect", 1, &text_edit_class_deselect),
	JS_CFUNC_DEF("delete_selection", 1, &text_edit_class_delete_selection),
	JS_CFUNC_DEF("set_line_wrapping_mode", 1, &text_edit_class_set_line_wrapping_mode),
	JS_CFUNC_DEF("get_line_wrapping_mode", 0, &text_edit_class_get_line_wrapping_mode),
	JS_CFUNC_DEF("set_autowrap_mode", 1, &text_edit_class_set_autowrap_mode),
	JS_CFUNC_DEF("get_autowrap_mode", 0, &text_edit_class_get_autowrap_mode),
	JS_CFUNC_DEF("is_line_wrapped", 1, &text_edit_class_is_line_wrapped),
	JS_CFUNC_DEF("get_line_wrap_count", 1, &text_edit_class_get_line_wrap_count),
	JS_CFUNC_DEF("get_line_wrap_index_at_column", 2, &text_edit_class_get_line_wrap_index_at_column),
	JS_CFUNC_DEF("get_line_wrapped_text", 1, &text_edit_class_get_line_wrapped_text),
	JS_CFUNC_DEF("set_smooth_scroll_enabled", 1, &text_edit_class_set_smooth_scroll_enabled),
	JS_CFUNC_DEF("is_smooth_scroll_enabled", 0, &text_edit_class_is_smooth_scroll_enabled),
	JS_CFUNC_DEF("get_v_scroll_bar", 0, &text_edit_class_get_v_scroll_bar),
	JS_CFUNC_DEF("get_h_scroll_bar", 0, &text_edit_class_get_h_scroll_bar),
	JS_CFUNC_DEF("set_v_scroll", 1, &text_edit_class_set_v_scroll),
	JS_CFUNC_DEF("get_v_scroll", 0, &text_edit_class_get_v_scroll),
	JS_CFUNC_DEF("set_h_scroll", 1, &text_edit_class_set_h_scroll),
	JS_CFUNC_DEF("get_h_scroll", 0, &text_edit_class_get_h_scroll),
	JS_CFUNC_DEF("set_scroll_past_end_of_file_enabled", 1, &text_edit_class_set_scroll_past_end_of_file_enabled),
	JS_CFUNC_DEF("is_scroll_past_end_of_file_enabled", 0, &text_edit_class_is_scroll_past_end_of_file_enabled),
	JS_CFUNC_DEF("set_v_scroll_speed", 1, &text_edit_class_set_v_scroll_speed),
	JS_CFUNC_DEF("get_v_scroll_speed", 0, &text_edit_class_get_v_scroll_speed),
	JS_CFUNC_DEF("set_fit_content_height_enabled", 1, &text_edit_class_set_fit_content_height_enabled),
	JS_CFUNC_DEF("is_fit_content_height_enabled", 0, &text_edit_class_is_fit_content_height_enabled),
	JS_CFUNC_DEF("get_scroll_pos_for_line", 2, &text_edit_class_get_scroll_pos_for_line),
	JS_CFUNC_DEF("set_line_as_first_visible", 2, &text_edit_class_set_line_as_first_visible),
	JS_CFUNC_DEF("get_first_visible_line", 0, &text_edit_class_get_first_visible_line),
	JS_CFUNC_DEF("set_line_as_center_visible", 2, &text_edit_class_set_line_as_center_visible),
	JS_CFUNC_DEF("set_line_as_last_visible", 2, &text_edit_class_set_line_as_last_visible),
	JS_CFUNC_DEF("get_last_full_visible_line", 0, &text_edit_class_get_last_full_visible_line),
	JS_CFUNC_DEF("get_last_full_visible_line_wrap_index", 0, &text_edit_class_get_last_full_visible_line_wrap_index),
	JS_CFUNC_DEF("get_visible_line_count", 0, &text_edit_class_get_visible_line_count),
	JS_CFUNC_DEF("get_visible_line_count_in_range", 2, &text_edit_class_get_visible_line_count_in_range),
	JS_CFUNC_DEF("get_total_visible_line_count", 0, &text_edit_class_get_total_visible_line_count),
	JS_CFUNC_DEF("adjust_viewport_to_caret", 1, &text_edit_class_adjust_viewport_to_caret),
	JS_CFUNC_DEF("center_viewport_to_caret", 1, &text_edit_class_center_viewport_to_caret),
	JS_CFUNC_DEF("set_draw_minimap", 1, &text_edit_class_set_draw_minimap),
	JS_CFUNC_DEF("is_drawing_minimap", 0, &text_edit_class_is_drawing_minimap),
	JS_CFUNC_DEF("set_minimap_width", 1, &text_edit_class_set_minimap_width),
	JS_CFUNC_DEF("get_minimap_width", 0, &text_edit_class_get_minimap_width),
	JS_CFUNC_DEF("get_minimap_visible_lines", 0, &text_edit_class_get_minimap_visible_lines),
	JS_CFUNC_DEF("add_gutter", 1, &text_edit_class_add_gutter),
	JS_CFUNC_DEF("remove_gutter", 1, &text_edit_class_remove_gutter),
	JS_CFUNC_DEF("get_gutter_count", 0, &text_edit_class_get_gutter_count),
	JS_CFUNC_DEF("set_gutter_name", 2, &text_edit_class_set_gutter_name),
	JS_CFUNC_DEF("get_gutter_name", 1, &text_edit_class_get_gutter_name),
	JS_CFUNC_DEF("set_gutter_type", 2, &text_edit_class_set_gutter_type),
	JS_CFUNC_DEF("get_gutter_type", 1, &text_edit_class_get_gutter_type),
	JS_CFUNC_DEF("set_gutter_width", 2, &text_edit_class_set_gutter_width),
	JS_CFUNC_DEF("get_gutter_width", 1, &text_edit_class_get_gutter_width),
	JS_CFUNC_DEF("set_gutter_draw", 2, &text_edit_class_set_gutter_draw),
	JS_CFUNC_DEF("is_gutter_drawn", 1, &text_edit_class_is_gutter_drawn),
	JS_CFUNC_DEF("set_gutter_clickable", 2, &text_edit_class_set_gutter_clickable),
	JS_CFUNC_DEF("is_gutter_clickable", 1, &text_edit_class_is_gutter_clickable),
	JS_CFUNC_DEF("set_gutter_overwritable", 2, &text_edit_class_set_gutter_overwritable),
	JS_CFUNC_DEF("is_gutter_overwritable", 1, &text_edit_class_is_gutter_overwritable),
	JS_CFUNC_DEF("merge_gutters", 2, &text_edit_class_merge_gutters),
	JS_CFUNC_DEF("set_gutter_custom_draw", 2, &text_edit_class_set_gutter_custom_draw),
	JS_CFUNC_DEF("get_total_gutter_width", 0, &text_edit_class_get_total_gutter_width),
	JS_CFUNC_DEF("set_line_gutter_metadata", 3, &text_edit_class_set_line_gutter_metadata),
	JS_CFUNC_DEF("get_line_gutter_metadata", 2, &text_edit_class_get_line_gutter_metadata),
	JS_CFUNC_DEF("set_line_gutter_text", 3, &text_edit_class_set_line_gutter_text),
	JS_CFUNC_DEF("get_line_gutter_text", 2, &text_edit_class_get_line_gutter_text),
	JS_CFUNC_DEF("set_line_gutter_icon", 3, &text_edit_class_set_line_gutter_icon),
	JS_CFUNC_DEF("get_line_gutter_icon", 2, &text_edit_class_get_line_gutter_icon),
	JS_CFUNC_DEF("set_line_gutter_item_color", 3, &text_edit_class_set_line_gutter_item_color),
	JS_CFUNC_DEF("get_line_gutter_item_color", 2, &text_edit_class_get_line_gutter_item_color),
	JS_CFUNC_DEF("set_line_gutter_clickable", 3, &text_edit_class_set_line_gutter_clickable),
	JS_CFUNC_DEF("is_line_gutter_clickable", 2, &text_edit_class_is_line_gutter_clickable),
	JS_CFUNC_DEF("set_line_background_color", 2, &text_edit_class_set_line_background_color),
	JS_CFUNC_DEF("get_line_background_color", 1, &text_edit_class_get_line_background_color),
	JS_CFUNC_DEF("set_syntax_highlighter", 1, &text_edit_class_set_syntax_highlighter),
	JS_CFUNC_DEF("get_syntax_highlighter", 0, &text_edit_class_get_syntax_highlighter),
	JS_CFUNC_DEF("set_highlight_current_line", 1, &text_edit_class_set_highlight_current_line),
	JS_CFUNC_DEF("is_highlight_current_line_enabled", 0, &text_edit_class_is_highlight_current_line_enabled),
	JS_CFUNC_DEF("set_highlight_all_occurrences", 1, &text_edit_class_set_highlight_all_occurrences),
	JS_CFUNC_DEF("is_highlight_all_occurrences_enabled", 0, &text_edit_class_is_highlight_all_occurrences_enabled),
	JS_CFUNC_DEF("get_draw_control_chars", 0, &text_edit_class_get_draw_control_chars),
	JS_CFUNC_DEF("set_draw_control_chars", 1, &text_edit_class_set_draw_control_chars),
	JS_CFUNC_DEF("set_draw_tabs", 1, &text_edit_class_set_draw_tabs),
	JS_CFUNC_DEF("is_drawing_tabs", 0, &text_edit_class_is_drawing_tabs),
	JS_CFUNC_DEF("set_draw_spaces", 1, &text_edit_class_set_draw_spaces),
	JS_CFUNC_DEF("is_drawing_spaces", 0, &text_edit_class_is_drawing_spaces),
	JS_CFUNC_DEF("get_menu", 0, &text_edit_class_get_menu),
	JS_CFUNC_DEF("is_menu_visible", 0, &text_edit_class_is_menu_visible),
	JS_CFUNC_DEF("menu_option", 1, &text_edit_class_menu_option),
	JS_CFUNC_DEF("adjust_carets_after_edit", 5, &text_edit_class_adjust_carets_after_edit),
	JS_CFUNC_DEF("get_caret_index_edit_order", 0, &text_edit_class_get_caret_index_edit_order),
	JS_CFUNC_DEF("get_selection_line", 1, &text_edit_class_get_selection_line),
	JS_CFUNC_DEF("get_selection_column", 1, &text_edit_class_get_selection_column),
};

static int js_text_edit_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextEdit::__class_id);
	classes["TextEdit"] = TextEdit::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextEdit::__class_id, &text_edit_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextEdit::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, text_edit_class_proto_funcs, _countof(text_edit_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, text_edit_class_constructor, "TextEdit", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextEdit", ctor);

	return 0;
}

JSModuleDef *_js_init_text_edit_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_text_edit_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextEdit");
	return m;
}

JSModuleDef *js_init_text_edit_module(JSContext *ctx) {
	return _js_init_text_edit_module(ctx, "godot/classes/text_edit");
}

void register_text_edit() {
	js_init_text_edit_module(ctx);
}