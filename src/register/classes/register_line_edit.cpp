
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void line_edit_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef line_edit_class_def = {
	"LineEdit",
	.finalizer = line_edit_class_finalizer
};

static JSValue line_edit_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, LineEdit::__class_id);
	if (JS_IsException(obj))
		return obj;
	LineEdit *line_edit_class = memnew(LineEdit);
	if (!line_edit_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, line_edit_class);	
	return obj;
}
static JSValue line_edit_class_set_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_horizontal_alignment, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_horizontal_alignment, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::select, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_select_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::select_all, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_deselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::deselect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_has_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::has_selection, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_get_selected_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&LineEdit::get_selected_text, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_get_selection_from_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_selection_from_column, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_get_selection_to_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_selection_to_column, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_text, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_text, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_get_draw_control_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_draw_control_chars, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_draw_control_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_draw_control_chars, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_text_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_text_direction, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_language, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_language, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_structured_text_bidi_override, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_structured_text_bidi_override, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_structured_text_bidi_override_options, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_structured_text_bidi_override_options, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_placeholder, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_placeholder, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_caret_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_caret_column, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_caret_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_caret_column, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_get_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_scroll_offset, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_expand_to_text_length_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_expand_to_text_length_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_expand_to_text_length_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_expand_to_text_length_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_caret_blink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_caret_blink_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_caret_blink_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_caret_blink_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_caret_mid_grapheme_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_caret_mid_grapheme_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_caret_mid_grapheme_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_caret_mid_grapheme_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_caret_force_displayed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_caret_force_displayed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_caret_force_displayed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_caret_force_displayed, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_caret_blink_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_caret_blink_interval, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_caret_blink_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_caret_blink_interval, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_max_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_max_length, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_max_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_max_length, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_insert_text_at_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::insert_text_at_caret, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_delete_char_at_caret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::delete_char_at_caret, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_delete_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::delete_text, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_editable, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_editable, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_secret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_secret, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_secret(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_secret, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_secret_character(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_secret_character, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_secret_character(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_secret_character, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_menu_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::menu_option, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_menu, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_is_menu_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_menu_visible, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_context_menu_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&LineEdit::is_context_menu_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_virtual_keyboard_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_virtual_keyboard_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_virtual_keyboard_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_virtual_keyboard_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_virtual_keyboard_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_virtual_keyboard_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_virtual_keyboard_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::get_virtual_keyboard_type, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_clear_button_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_clear_button_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_clear_button_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_clear_button_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_shortcut_keys_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_shortcut_keys_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_middle_mouse_paste_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_middle_mouse_paste_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_middle_mouse_paste_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_middle_mouse_paste_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_selecting_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_selecting_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_selecting_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_selecting_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_deselect_on_focus_loss_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_deselect_on_focus_loss_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_drag_and_drop_selection_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_drag_and_drop_selection_enabled, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_right_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_right_icon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_get_right_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&LineEdit::get_right_icon, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_flat, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_flat, ctx, this_val, argc, argv);
};
static JSValue line_edit_class_set_select_all_on_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LineEdit::set_select_all_on_focus, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue line_edit_class_is_select_all_on_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LineEdit::is_select_all_on_focus, ctx, this_val, argc, argv);
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

void define_line_edit_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "text"),
        JS_NewCFunction(ctx, line_edit_class_get_text, "get_text", 0),
        JS_NewCFunction(ctx, line_edit_class_set_text, "set_text", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "placeholder_text"),
        JS_NewCFunction(ctx, line_edit_class_get_placeholder, "get_placeholder", 0),
        JS_NewCFunction(ctx, line_edit_class_set_placeholder, "set_placeholder", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alignment"),
        JS_NewCFunction(ctx, line_edit_class_get_horizontal_alignment, "get_horizontal_alignment", 0),
        JS_NewCFunction(ctx, line_edit_class_set_horizontal_alignment, "set_horizontal_alignment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "max_length"),
        JS_NewCFunction(ctx, line_edit_class_get_max_length, "get_max_length", 0),
        JS_NewCFunction(ctx, line_edit_class_set_max_length, "set_max_length", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "editable"),
        JS_NewCFunction(ctx, line_edit_class_is_editable, "is_editable", 0),
        JS_NewCFunction(ctx, line_edit_class_set_editable, "set_editable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "expand_to_text_length"),
        JS_NewCFunction(ctx, line_edit_class_is_expand_to_text_length_enabled, "is_expand_to_text_length_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_expand_to_text_length_enabled, "set_expand_to_text_length_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "context_menu_enabled"),
        JS_NewCFunction(ctx, line_edit_class_is_context_menu_enabled, "is_context_menu_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_context_menu_enabled, "set_context_menu_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "virtual_keyboard_enabled"),
        JS_NewCFunction(ctx, line_edit_class_is_virtual_keyboard_enabled, "is_virtual_keyboard_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_virtual_keyboard_enabled, "set_virtual_keyboard_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "virtual_keyboard_type"),
        JS_NewCFunction(ctx, line_edit_class_get_virtual_keyboard_type, "get_virtual_keyboard_type", 0),
        JS_NewCFunction(ctx, line_edit_class_set_virtual_keyboard_type, "set_virtual_keyboard_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "clear_button_enabled"),
        JS_NewCFunction(ctx, line_edit_class_is_clear_button_enabled, "is_clear_button_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_clear_button_enabled, "set_clear_button_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shortcut_keys_enabled"),
        JS_NewCFunction(ctx, line_edit_class_is_shortcut_keys_enabled, "is_shortcut_keys_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_shortcut_keys_enabled, "set_shortcut_keys_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "middle_mouse_paste_enabled"),
        JS_NewCFunction(ctx, line_edit_class_is_middle_mouse_paste_enabled, "is_middle_mouse_paste_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_middle_mouse_paste_enabled, "set_middle_mouse_paste_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "selecting_enabled"),
        JS_NewCFunction(ctx, line_edit_class_is_selecting_enabled, "is_selecting_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_selecting_enabled, "set_selecting_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "deselect_on_focus_loss_enabled"),
        JS_NewCFunction(ctx, line_edit_class_is_deselect_on_focus_loss_enabled, "is_deselect_on_focus_loss_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_deselect_on_focus_loss_enabled, "set_deselect_on_focus_loss_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "drag_and_drop_selection_enabled"),
        JS_NewCFunction(ctx, line_edit_class_is_drag_and_drop_selection_enabled, "is_drag_and_drop_selection_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_drag_and_drop_selection_enabled, "set_drag_and_drop_selection_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "right_icon"),
        JS_NewCFunction(ctx, line_edit_class_get_right_icon, "get_right_icon", 0),
        JS_NewCFunction(ctx, line_edit_class_set_right_icon, "set_right_icon", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flat"),
        JS_NewCFunction(ctx, line_edit_class_is_flat, "is_flat", 0),
        JS_NewCFunction(ctx, line_edit_class_set_flat, "set_flat", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "draw_control_chars"),
        JS_NewCFunction(ctx, line_edit_class_get_draw_control_chars, "get_draw_control_chars", 0),
        JS_NewCFunction(ctx, line_edit_class_set_draw_control_chars, "set_draw_control_chars", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "select_all_on_focus"),
        JS_NewCFunction(ctx, line_edit_class_is_select_all_on_focus, "is_select_all_on_focus", 0),
        JS_NewCFunction(ctx, line_edit_class_set_select_all_on_focus, "set_select_all_on_focus", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "caret_blink"),
        JS_NewCFunction(ctx, line_edit_class_is_caret_blink_enabled, "is_caret_blink_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_caret_blink_enabled, "set_caret_blink_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "caret_blink_interval"),
        JS_NewCFunction(ctx, line_edit_class_get_caret_blink_interval, "get_caret_blink_interval", 0),
        JS_NewCFunction(ctx, line_edit_class_set_caret_blink_interval, "set_caret_blink_interval", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "caret_column"),
        JS_NewCFunction(ctx, line_edit_class_get_caret_column, "get_caret_column", 0),
        JS_NewCFunction(ctx, line_edit_class_set_caret_column, "set_caret_column", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "caret_force_displayed"),
        JS_NewCFunction(ctx, line_edit_class_is_caret_force_displayed, "is_caret_force_displayed", 0),
        JS_NewCFunction(ctx, line_edit_class_set_caret_force_displayed, "set_caret_force_displayed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "caret_mid_grapheme"),
        JS_NewCFunction(ctx, line_edit_class_is_caret_mid_grapheme_enabled, "is_caret_mid_grapheme_enabled", 0),
        JS_NewCFunction(ctx, line_edit_class_set_caret_mid_grapheme_enabled, "set_caret_mid_grapheme_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "secret"),
        JS_NewCFunction(ctx, line_edit_class_is_secret, "is_secret", 0),
        JS_NewCFunction(ctx, line_edit_class_set_secret, "set_secret", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "secret_character"),
        JS_NewCFunction(ctx, line_edit_class_get_secret_character, "get_secret_character", 0),
        JS_NewCFunction(ctx, line_edit_class_set_secret_character, "set_secret_character", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "text_direction"),
        JS_NewCFunction(ctx, line_edit_class_get_text_direction, "get_text_direction", 0),
        JS_NewCFunction(ctx, line_edit_class_set_text_direction, "set_text_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "language"),
        JS_NewCFunction(ctx, line_edit_class_get_language, "get_language", 0),
        JS_NewCFunction(ctx, line_edit_class_set_language, "set_language", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "structured_text_bidi_override"),
        JS_NewCFunction(ctx, line_edit_class_get_structured_text_bidi_override, "get_structured_text_bidi_override", 0),
        JS_NewCFunction(ctx, line_edit_class_set_structured_text_bidi_override, "set_structured_text_bidi_override", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "structured_text_bidi_override_options"),
        JS_NewCFunction(ctx, line_edit_class_get_structured_text_bidi_override_options, "get_structured_text_bidi_override_options", 0),
        JS_NewCFunction(ctx, line_edit_class_set_structured_text_bidi_override_options, "set_structured_text_bidi_override_options", 1),
        JS_PROP_GETSET
    );
}

static int js_line_edit_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&LineEdit::__class_id);
	classes["LineEdit"] = LineEdit::__class_id;
	class_id_list.insert(LineEdit::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), LineEdit::__class_id, &line_edit_class_def);

	JSValue proto = JS_NewObjectClass(ctx, LineEdit::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LineEdit::__class_id, proto);

	define_line_edit_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, line_edit_class_proto_funcs, _countof(line_edit_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, line_edit_class_constructor, "LineEdit", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "LineEdit", ctor);

	return 0;
}

JSModuleDef *_js_init_line_edit_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	LineEdit::__init_js_class_id();
	js_init_line_edit_module(ctx);
}