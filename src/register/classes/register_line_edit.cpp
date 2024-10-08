
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void line_edit_class_finalizer(JSRuntime *rt, JSValue val) {
	LineEdit *line_edit = static_cast<LineEdit *>(JS_GetOpaque(val, LineEdit::__class_id));
	if (line_edit)
		LineEdit::free(nullptr, line_edit);
}

static JSClassDef line_edit_class_def = {
	"LineEdit",
	.finalizer = line_edit_class_finalizer
};

static JSValue line_edit_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	LineEdit *line_edit_class;
	JSValue obj = JS_NewObjectClass(ctx, LineEdit::__class_id);
	if (JS_IsException(obj))
		return obj;
	line_edit_class = memnew(LineEdit);
	if (!line_edit_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, line_edit_class);
	return obj;
}
static JSValue line_edit_class_set_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_horizontal_alignment, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_horizontal_alignment, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::clear, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::select, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_select_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::select_all, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_deselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::deselect, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_has_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::has_selection, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_get_selected_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&LineEdit::get_selected_text, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_get_selection_from_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_selection_from_column, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_get_selection_to_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_selection_to_column, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_text, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_text, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_get_draw_control_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_draw_control_chars, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_draw_control_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_draw_control_chars, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_text_direction, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_text_direction, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_language, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_language, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_structured_text_bidi_override, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_structured_text_bidi_override, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_structured_text_bidi_override_options, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_structured_text_bidi_override_options, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_placeholder, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_placeholder, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_caret_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_caret_column, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_caret_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_caret_column, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_get_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_scroll_offset, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_expand_to_text_length_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_expand_to_text_length_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_expand_to_text_length_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_expand_to_text_length_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_caret_blink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_caret_blink_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_caret_blink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_caret_blink_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_caret_mid_grapheme_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_caret_mid_grapheme_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_caret_mid_grapheme_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_caret_mid_grapheme_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_caret_force_displayed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_caret_force_displayed, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_caret_force_displayed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_caret_force_displayed, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_caret_blink_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_caret_blink_interval, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_caret_blink_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_caret_blink_interval, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_max_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_max_length, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_max_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_max_length, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_insert_text_at_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::insert_text_at_caret, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_delete_char_at_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::delete_char_at_caret, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_delete_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::delete_text, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_editable, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_editable, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_secret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_secret, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_secret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_secret, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_secret_character(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_secret_character, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_secret_character(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_secret_character, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_menu_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::menu_option, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_menu, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_is_menu_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_menu_visible, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_context_menu_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&LineEdit::is_context_menu_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_virtual_keyboard_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_virtual_keyboard_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_virtual_keyboard_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_virtual_keyboard_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_virtual_keyboard_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_virtual_keyboard_type, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_virtual_keyboard_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_virtual_keyboard_type, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_clear_button_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_clear_button_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_clear_button_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_clear_button_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_shortcut_keys_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_shortcut_keys_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_middle_mouse_paste_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_middle_mouse_paste_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_middle_mouse_paste_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_middle_mouse_paste_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_selecting_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_selecting_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_selecting_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_selecting_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_deselect_on_focus_loss_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_deselect_on_focus_loss_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_drag_and_drop_selection_enabled, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_drag_and_drop_selection_enabled, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_right_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_right_icon, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_right_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&LineEdit::get_right_icon, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_flat, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_flat, LineEdit::__class_id, ctx, this_val, argv);
};
static JSValue line_edit_class_set_select_all_on_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LineEdit::set_select_all_on_focus, LineEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_select_all_on_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_select_all_on_focus, LineEdit::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry line_edit_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_horizontal_alignment", 1, &line_edit_class_set_horizontal_alignment),
	JS_CFUNC_DEF("get_horizontal_alignment", 0, &line_edit_class_get_horizontal_alignment),
	JS_CFUNC_DEF("clear", 0, &line_edit_class_clear),
	JS_CFUNC_DEF("select", 2, &line_edit_class_select),
	JS_CFUNC_DEF("select_all", 0, &line_edit_class_select_all),
	JS_CFUNC_DEF("deselect", 0, &line_edit_class_deselect),
	JS_CFUNC_DEF("has_selection", 0, &line_edit_class_has_selection),
	JS_CFUNC_DEF("get_selected_text", 0, &line_edit_class_get_selected_text),
	JS_CFUNC_DEF("get_selection_from_column", 0, &line_edit_class_get_selection_from_column),
	JS_CFUNC_DEF("get_selection_to_column", 0, &line_edit_class_get_selection_to_column),
	JS_CFUNC_DEF("set_text", 1, &line_edit_class_set_text),
	JS_CFUNC_DEF("get_text", 0, &line_edit_class_get_text),
	JS_CFUNC_DEF("get_draw_control_chars", 0, &line_edit_class_get_draw_control_chars),
	JS_CFUNC_DEF("set_draw_control_chars", 1, &line_edit_class_set_draw_control_chars),
	JS_CFUNC_DEF("set_text_direction", 1, &line_edit_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &line_edit_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &line_edit_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &line_edit_class_get_language),
	JS_CFUNC_DEF("set_structured_text_bidi_override", 1, &line_edit_class_set_structured_text_bidi_override),
	JS_CFUNC_DEF("get_structured_text_bidi_override", 0, &line_edit_class_get_structured_text_bidi_override),
	JS_CFUNC_DEF("set_structured_text_bidi_override_options", 1, &line_edit_class_set_structured_text_bidi_override_options),
	JS_CFUNC_DEF("get_structured_text_bidi_override_options", 0, &line_edit_class_get_structured_text_bidi_override_options),
	JS_CFUNC_DEF("set_placeholder", 1, &line_edit_class_set_placeholder),
	JS_CFUNC_DEF("get_placeholder", 0, &line_edit_class_get_placeholder),
	JS_CFUNC_DEF("set_caret_column", 1, &line_edit_class_set_caret_column),
	JS_CFUNC_DEF("get_caret_column", 0, &line_edit_class_get_caret_column),
	JS_CFUNC_DEF("get_scroll_offset", 0, &line_edit_class_get_scroll_offset),
	JS_CFUNC_DEF("set_expand_to_text_length_enabled", 1, &line_edit_class_set_expand_to_text_length_enabled),
	JS_CFUNC_DEF("is_expand_to_text_length_enabled", 0, &line_edit_class_is_expand_to_text_length_enabled),
	JS_CFUNC_DEF("set_caret_blink_enabled", 1, &line_edit_class_set_caret_blink_enabled),
	JS_CFUNC_DEF("is_caret_blink_enabled", 0, &line_edit_class_is_caret_blink_enabled),
	JS_CFUNC_DEF("set_caret_mid_grapheme_enabled", 1, &line_edit_class_set_caret_mid_grapheme_enabled),
	JS_CFUNC_DEF("is_caret_mid_grapheme_enabled", 0, &line_edit_class_is_caret_mid_grapheme_enabled),
	JS_CFUNC_DEF("set_caret_force_displayed", 1, &line_edit_class_set_caret_force_displayed),
	JS_CFUNC_DEF("is_caret_force_displayed", 0, &line_edit_class_is_caret_force_displayed),
	JS_CFUNC_DEF("set_caret_blink_interval", 1, &line_edit_class_set_caret_blink_interval),
	JS_CFUNC_DEF("get_caret_blink_interval", 0, &line_edit_class_get_caret_blink_interval),
	JS_CFUNC_DEF("set_max_length", 1, &line_edit_class_set_max_length),
	JS_CFUNC_DEF("get_max_length", 0, &line_edit_class_get_max_length),
	JS_CFUNC_DEF("insert_text_at_caret", 1, &line_edit_class_insert_text_at_caret),
	JS_CFUNC_DEF("delete_char_at_caret", 0, &line_edit_class_delete_char_at_caret),
	JS_CFUNC_DEF("delete_text", 2, &line_edit_class_delete_text),
	JS_CFUNC_DEF("set_editable", 1, &line_edit_class_set_editable),
	JS_CFUNC_DEF("is_editable", 0, &line_edit_class_is_editable),
	JS_CFUNC_DEF("set_secret", 1, &line_edit_class_set_secret),
	JS_CFUNC_DEF("is_secret", 0, &line_edit_class_is_secret),
	JS_CFUNC_DEF("set_secret_character", 1, &line_edit_class_set_secret_character),
	JS_CFUNC_DEF("get_secret_character", 0, &line_edit_class_get_secret_character),
	JS_CFUNC_DEF("menu_option", 1, &line_edit_class_menu_option),
	JS_CFUNC_DEF("get_menu", 0, &line_edit_class_get_menu),
	JS_CFUNC_DEF("is_menu_visible", 0, &line_edit_class_is_menu_visible),
	JS_CFUNC_DEF("set_context_menu_enabled", 1, &line_edit_class_set_context_menu_enabled),
	JS_CFUNC_DEF("is_context_menu_enabled", 0, &line_edit_class_is_context_menu_enabled),
	JS_CFUNC_DEF("set_virtual_keyboard_enabled", 1, &line_edit_class_set_virtual_keyboard_enabled),
	JS_CFUNC_DEF("is_virtual_keyboard_enabled", 0, &line_edit_class_is_virtual_keyboard_enabled),
	JS_CFUNC_DEF("set_virtual_keyboard_type", 1, &line_edit_class_set_virtual_keyboard_type),
	JS_CFUNC_DEF("get_virtual_keyboard_type", 0, &line_edit_class_get_virtual_keyboard_type),
	JS_CFUNC_DEF("set_clear_button_enabled", 1, &line_edit_class_set_clear_button_enabled),
	JS_CFUNC_DEF("is_clear_button_enabled", 0, &line_edit_class_is_clear_button_enabled),
	JS_CFUNC_DEF("set_shortcut_keys_enabled", 1, &line_edit_class_set_shortcut_keys_enabled),
	JS_CFUNC_DEF("is_shortcut_keys_enabled", 0, &line_edit_class_is_shortcut_keys_enabled),
	JS_CFUNC_DEF("set_middle_mouse_paste_enabled", 1, &line_edit_class_set_middle_mouse_paste_enabled),
	JS_CFUNC_DEF("is_middle_mouse_paste_enabled", 0, &line_edit_class_is_middle_mouse_paste_enabled),
	JS_CFUNC_DEF("set_selecting_enabled", 1, &line_edit_class_set_selecting_enabled),
	JS_CFUNC_DEF("is_selecting_enabled", 0, &line_edit_class_is_selecting_enabled),
	JS_CFUNC_DEF("set_deselect_on_focus_loss_enabled", 1, &line_edit_class_set_deselect_on_focus_loss_enabled),
	JS_CFUNC_DEF("is_deselect_on_focus_loss_enabled", 0, &line_edit_class_is_deselect_on_focus_loss_enabled),
	JS_CFUNC_DEF("set_drag_and_drop_selection_enabled", 1, &line_edit_class_set_drag_and_drop_selection_enabled),
	JS_CFUNC_DEF("is_drag_and_drop_selection_enabled", 0, &line_edit_class_is_drag_and_drop_selection_enabled),
	JS_CFUNC_DEF("set_right_icon", 1, &line_edit_class_set_right_icon),
	JS_CFUNC_DEF("get_right_icon", 0, &line_edit_class_get_right_icon),
	JS_CFUNC_DEF("set_flat", 1, &line_edit_class_set_flat),
	JS_CFUNC_DEF("is_flat", 0, &line_edit_class_is_flat),
	JS_CFUNC_DEF("set_select_all_on_focus", 1, &line_edit_class_set_select_all_on_focus),
	JS_CFUNC_DEF("is_select_all_on_focus", 0, &line_edit_class_is_select_all_on_focus),
};

static int js_line_edit_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&LineEdit::__class_id);
	classes["LineEdit"] = LineEdit::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), LineEdit::__class_id, &line_edit_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LineEdit::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, line_edit_class_proto_funcs, _countof(line_edit_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, line_edit_class_constructor, "LineEdit", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "LineEdit", ctor);

	return 0;
}

JSModuleDef *_js_init_line_edit_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_line_edit_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LineEdit");
	return m;
}

JSModuleDef *js_init_line_edit_module(JSContext *ctx) {
	return _js_init_line_edit_module(ctx, "godot/classes/line_edit");
}

void register_line_edit() {
	js_init_line_edit_module(ctx);
}