
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/rich_text_label.hpp>
#include <godot_cpp/classes/rich_text_effect.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rich_text_label_class_finalizer(JSRuntime *rt, JSValue val) {
	RichTextLabel *rich_text_label = static_cast<RichTextLabel *>(JS_GetOpaque(val, RichTextLabel::__class_id));
	if (rich_text_label)
		RichTextLabel::free(nullptr, rich_text_label);
}

static JSClassDef rich_text_label_class_def = {
	"RichTextLabel",
	.finalizer = rich_text_label_class_finalizer
};

static JSValue rich_text_label_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RichTextLabel *rich_text_label_class;
	JSValue obj = JS_NewObjectClass(ctx, RichTextLabel::__class_id);
	if (JS_IsException(obj))
		return obj;
	rich_text_label_class = memnew(RichTextLabel);
	if (!rich_text_label_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rich_text_label_class);
	return obj;
}
static JSValue rich_text_label_class_get_parsed_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_parsed_text, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_add_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::add_text, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_text, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_add_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::add_image, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_update_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::update_image, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_newline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::newline, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_remove_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RichTextLabel::remove_paragraph, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_invalidate_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RichTextLabel::invalidate_paragraph, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_push_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_font, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_font_size, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_normal, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_bold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_bold, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_bold_italics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_bold_italics, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_italics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_italics, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_mono(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_mono, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_color, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_outline_size, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_outline_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_outline_color, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_paragraph, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_indent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_indent, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_list, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_meta, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_hint, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_language, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_underline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_underline, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_strikethrough(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_strikethrough, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_table(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_table, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_dropcap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_dropcap, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_set_table_column_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_table_column_expand, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_set_cell_row_background_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_cell_row_background_color, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_set_cell_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_cell_border_color, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_set_cell_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_cell_size_override, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_set_cell_padding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_cell_padding, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_cell, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_fgcolor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_fgcolor, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_bgcolor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_bgcolor, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_customfx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_customfx, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_push_context(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::push_context, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_pop_context(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::pop_context, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_pop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::pop, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_pop_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::pop_all, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::clear, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_structured_text_bidi_override, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_structured_text_bidi_override, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_structured_text_bidi_override_options, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_structured_text_bidi_override_options, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_text_direction, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_text_direction, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_language, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_language, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_autowrap_mode, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_autowrap_mode, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_meta_underline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_meta_underline, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_meta_underlined(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_meta_underlined, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_hint_underline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_hint_underline, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_hint_underlined(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_hint_underlined, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_scroll_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_scroll_active, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_scroll_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_scroll_active, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_scroll_follow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_scroll_follow, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_scroll_following(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_scroll_following, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_v_scroll_bar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RichTextLabel::get_v_scroll_bar, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_scroll_to_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::scroll_to_line, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_scroll_to_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::scroll_to_paragraph, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_scroll_to_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::scroll_to_selection, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_set_tab_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_tab_size, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_tab_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_tab_size, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_fit_content(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_fit_content, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_fit_content_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_fit_content_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_selection_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_selection_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_context_menu_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_context_menu_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_shortcut_keys_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_shortcut_keys_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_deselect_on_focus_loss_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_deselect_on_focus_loss_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_drag_and_drop_selection_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_drag_and_drop_selection_enabled, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_selection_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_selection_from, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_selection_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_selection_to, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_select_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::select_all, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_selected_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_selected_text, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_deselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::deselect, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_parse_bbcode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::parse_bbcode, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_append_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::append_text, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_text, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_is_ready(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_ready, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_threaded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_threaded, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_threaded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_threaded, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_progress_bar_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_progress_bar_delay, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_progress_bar_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_progress_bar_delay, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_visible_characters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_visible_characters, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_visible_characters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_characters, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_visible_characters_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_characters_behavior, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_visible_characters_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_visible_characters_behavior, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_set_visible_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_visible_ratio, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_visible_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_ratio, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_character_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RichTextLabel::get_character_line, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_character_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RichTextLabel::get_character_paragraph, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_total_character_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_total_character_count, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_use_bbcode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_use_bbcode, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_is_using_bbcode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_using_bbcode, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_line_count, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_visible_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_line_count, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_paragraph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_paragraph_count, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_visible_paragraph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_paragraph_count, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_content_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_content_height, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_content_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_content_width, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_line_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RichTextLabel::get_line_offset, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_get_paragraph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RichTextLabel::get_paragraph_offset, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_parse_expressions_for_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RichTextLabel::parse_expressions_for_values, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_set_effects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::set_effects, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_effects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RichTextLabel::get_effects, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_install_effect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::install_effect, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rich_text_label_class_get_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::get_menu, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_is_menu_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RichTextLabel::is_menu_visible, RichTextLabel::__class_id, ctx, this_val, argv);
};
static JSValue rich_text_label_class_menu_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RichTextLabel::menu_option, RichTextLabel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry rich_text_label_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_parsed_text", 0, &rich_text_label_class_get_parsed_text),
	JS_CFUNC_DEF("add_text", 1, &rich_text_label_class_add_text),
	JS_CFUNC_DEF("set_text", 1, &rich_text_label_class_set_text),
	JS_CFUNC_DEF("add_image", 10, &rich_text_label_class_add_image),
	JS_CFUNC_DEF("update_image", 11, &rich_text_label_class_update_image),
	JS_CFUNC_DEF("newline", 0, &rich_text_label_class_newline),
	JS_CFUNC_DEF("remove_paragraph", 2, &rich_text_label_class_remove_paragraph),
	JS_CFUNC_DEF("invalidate_paragraph", 1, &rich_text_label_class_invalidate_paragraph),
	JS_CFUNC_DEF("push_font", 2, &rich_text_label_class_push_font),
	JS_CFUNC_DEF("push_font_size", 1, &rich_text_label_class_push_font_size),
	JS_CFUNC_DEF("push_normal", 0, &rich_text_label_class_push_normal),
	JS_CFUNC_DEF("push_bold", 0, &rich_text_label_class_push_bold),
	JS_CFUNC_DEF("push_bold_italics", 0, &rich_text_label_class_push_bold_italics),
	JS_CFUNC_DEF("push_italics", 0, &rich_text_label_class_push_italics),
	JS_CFUNC_DEF("push_mono", 0, &rich_text_label_class_push_mono),
	JS_CFUNC_DEF("push_color", 1, &rich_text_label_class_push_color),
	JS_CFUNC_DEF("push_outline_size", 1, &rich_text_label_class_push_outline_size),
	JS_CFUNC_DEF("push_outline_color", 1, &rich_text_label_class_push_outline_color),
	JS_CFUNC_DEF("push_paragraph", 6, &rich_text_label_class_push_paragraph),
	JS_CFUNC_DEF("push_indent", 1, &rich_text_label_class_push_indent),
	JS_CFUNC_DEF("push_list", 4, &rich_text_label_class_push_list),
	JS_CFUNC_DEF("push_meta", 2, &rich_text_label_class_push_meta),
	JS_CFUNC_DEF("push_hint", 1, &rich_text_label_class_push_hint),
	JS_CFUNC_DEF("push_language", 1, &rich_text_label_class_push_language),
	JS_CFUNC_DEF("push_underline", 0, &rich_text_label_class_push_underline),
	JS_CFUNC_DEF("push_strikethrough", 0, &rich_text_label_class_push_strikethrough),
	JS_CFUNC_DEF("push_table", 3, &rich_text_label_class_push_table),
	JS_CFUNC_DEF("push_dropcap", 7, &rich_text_label_class_push_dropcap),
	JS_CFUNC_DEF("set_table_column_expand", 3, &rich_text_label_class_set_table_column_expand),
	JS_CFUNC_DEF("set_cell_row_background_color", 2, &rich_text_label_class_set_cell_row_background_color),
	JS_CFUNC_DEF("set_cell_border_color", 1, &rich_text_label_class_set_cell_border_color),
	JS_CFUNC_DEF("set_cell_size_override", 2, &rich_text_label_class_set_cell_size_override),
	JS_CFUNC_DEF("set_cell_padding", 1, &rich_text_label_class_set_cell_padding),
	JS_CFUNC_DEF("push_cell", 0, &rich_text_label_class_push_cell),
	JS_CFUNC_DEF("push_fgcolor", 1, &rich_text_label_class_push_fgcolor),
	JS_CFUNC_DEF("push_bgcolor", 1, &rich_text_label_class_push_bgcolor),
	JS_CFUNC_DEF("push_customfx", 2, &rich_text_label_class_push_customfx),
	JS_CFUNC_DEF("push_context", 0, &rich_text_label_class_push_context),
	JS_CFUNC_DEF("pop_context", 0, &rich_text_label_class_pop_context),
	JS_CFUNC_DEF("pop", 0, &rich_text_label_class_pop),
	JS_CFUNC_DEF("pop_all", 0, &rich_text_label_class_pop_all),
	JS_CFUNC_DEF("clear", 0, &rich_text_label_class_clear),
	JS_CFUNC_DEF("set_structured_text_bidi_override", 1, &rich_text_label_class_set_structured_text_bidi_override),
	JS_CFUNC_DEF("get_structured_text_bidi_override", 0, &rich_text_label_class_get_structured_text_bidi_override),
	JS_CFUNC_DEF("set_structured_text_bidi_override_options", 1, &rich_text_label_class_set_structured_text_bidi_override_options),
	JS_CFUNC_DEF("get_structured_text_bidi_override_options", 0, &rich_text_label_class_get_structured_text_bidi_override_options),
	JS_CFUNC_DEF("set_text_direction", 1, &rich_text_label_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &rich_text_label_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &rich_text_label_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &rich_text_label_class_get_language),
	JS_CFUNC_DEF("set_autowrap_mode", 1, &rich_text_label_class_set_autowrap_mode),
	JS_CFUNC_DEF("get_autowrap_mode", 0, &rich_text_label_class_get_autowrap_mode),
	JS_CFUNC_DEF("set_meta_underline", 1, &rich_text_label_class_set_meta_underline),
	JS_CFUNC_DEF("is_meta_underlined", 0, &rich_text_label_class_is_meta_underlined),
	JS_CFUNC_DEF("set_hint_underline", 1, &rich_text_label_class_set_hint_underline),
	JS_CFUNC_DEF("is_hint_underlined", 0, &rich_text_label_class_is_hint_underlined),
	JS_CFUNC_DEF("set_scroll_active", 1, &rich_text_label_class_set_scroll_active),
	JS_CFUNC_DEF("is_scroll_active", 0, &rich_text_label_class_is_scroll_active),
	JS_CFUNC_DEF("set_scroll_follow", 1, &rich_text_label_class_set_scroll_follow),
	JS_CFUNC_DEF("is_scroll_following", 0, &rich_text_label_class_is_scroll_following),
	JS_CFUNC_DEF("get_v_scroll_bar", 0, &rich_text_label_class_get_v_scroll_bar),
	JS_CFUNC_DEF("scroll_to_line", 1, &rich_text_label_class_scroll_to_line),
	JS_CFUNC_DEF("scroll_to_paragraph", 1, &rich_text_label_class_scroll_to_paragraph),
	JS_CFUNC_DEF("scroll_to_selection", 0, &rich_text_label_class_scroll_to_selection),
	JS_CFUNC_DEF("set_tab_size", 1, &rich_text_label_class_set_tab_size),
	JS_CFUNC_DEF("get_tab_size", 0, &rich_text_label_class_get_tab_size),
	JS_CFUNC_DEF("set_fit_content", 1, &rich_text_label_class_set_fit_content),
	JS_CFUNC_DEF("is_fit_content_enabled", 0, &rich_text_label_class_is_fit_content_enabled),
	JS_CFUNC_DEF("set_selection_enabled", 1, &rich_text_label_class_set_selection_enabled),
	JS_CFUNC_DEF("is_selection_enabled", 0, &rich_text_label_class_is_selection_enabled),
	JS_CFUNC_DEF("set_context_menu_enabled", 1, &rich_text_label_class_set_context_menu_enabled),
	JS_CFUNC_DEF("is_context_menu_enabled", 0, &rich_text_label_class_is_context_menu_enabled),
	JS_CFUNC_DEF("set_shortcut_keys_enabled", 1, &rich_text_label_class_set_shortcut_keys_enabled),
	JS_CFUNC_DEF("is_shortcut_keys_enabled", 0, &rich_text_label_class_is_shortcut_keys_enabled),
	JS_CFUNC_DEF("set_deselect_on_focus_loss_enabled", 1, &rich_text_label_class_set_deselect_on_focus_loss_enabled),
	JS_CFUNC_DEF("is_deselect_on_focus_loss_enabled", 0, &rich_text_label_class_is_deselect_on_focus_loss_enabled),
	JS_CFUNC_DEF("set_drag_and_drop_selection_enabled", 1, &rich_text_label_class_set_drag_and_drop_selection_enabled),
	JS_CFUNC_DEF("is_drag_and_drop_selection_enabled", 0, &rich_text_label_class_is_drag_and_drop_selection_enabled),
	JS_CFUNC_DEF("get_selection_from", 0, &rich_text_label_class_get_selection_from),
	JS_CFUNC_DEF("get_selection_to", 0, &rich_text_label_class_get_selection_to),
	JS_CFUNC_DEF("select_all", 0, &rich_text_label_class_select_all),
	JS_CFUNC_DEF("get_selected_text", 0, &rich_text_label_class_get_selected_text),
	JS_CFUNC_DEF("deselect", 0, &rich_text_label_class_deselect),
	JS_CFUNC_DEF("parse_bbcode", 1, &rich_text_label_class_parse_bbcode),
	JS_CFUNC_DEF("append_text", 1, &rich_text_label_class_append_text),
	JS_CFUNC_DEF("get_text", 0, &rich_text_label_class_get_text),
	JS_CFUNC_DEF("is_ready", 0, &rich_text_label_class_is_ready),
	JS_CFUNC_DEF("set_threaded", 1, &rich_text_label_class_set_threaded),
	JS_CFUNC_DEF("is_threaded", 0, &rich_text_label_class_is_threaded),
	JS_CFUNC_DEF("set_progress_bar_delay", 1, &rich_text_label_class_set_progress_bar_delay),
	JS_CFUNC_DEF("get_progress_bar_delay", 0, &rich_text_label_class_get_progress_bar_delay),
	JS_CFUNC_DEF("set_visible_characters", 1, &rich_text_label_class_set_visible_characters),
	JS_CFUNC_DEF("get_visible_characters", 0, &rich_text_label_class_get_visible_characters),
	JS_CFUNC_DEF("get_visible_characters_behavior", 0, &rich_text_label_class_get_visible_characters_behavior),
	JS_CFUNC_DEF("set_visible_characters_behavior", 1, &rich_text_label_class_set_visible_characters_behavior),
	JS_CFUNC_DEF("set_visible_ratio", 1, &rich_text_label_class_set_visible_ratio),
	JS_CFUNC_DEF("get_visible_ratio", 0, &rich_text_label_class_get_visible_ratio),
	JS_CFUNC_DEF("get_character_line", 1, &rich_text_label_class_get_character_line),
	JS_CFUNC_DEF("get_character_paragraph", 1, &rich_text_label_class_get_character_paragraph),
	JS_CFUNC_DEF("get_total_character_count", 0, &rich_text_label_class_get_total_character_count),
	JS_CFUNC_DEF("set_use_bbcode", 1, &rich_text_label_class_set_use_bbcode),
	JS_CFUNC_DEF("is_using_bbcode", 0, &rich_text_label_class_is_using_bbcode),
	JS_CFUNC_DEF("get_line_count", 0, &rich_text_label_class_get_line_count),
	JS_CFUNC_DEF("get_visible_line_count", 0, &rich_text_label_class_get_visible_line_count),
	JS_CFUNC_DEF("get_paragraph_count", 0, &rich_text_label_class_get_paragraph_count),
	JS_CFUNC_DEF("get_visible_paragraph_count", 0, &rich_text_label_class_get_visible_paragraph_count),
	JS_CFUNC_DEF("get_content_height", 0, &rich_text_label_class_get_content_height),
	JS_CFUNC_DEF("get_content_width", 0, &rich_text_label_class_get_content_width),
	JS_CFUNC_DEF("get_line_offset", 1, &rich_text_label_class_get_line_offset),
	JS_CFUNC_DEF("get_paragraph_offset", 1, &rich_text_label_class_get_paragraph_offset),
	JS_CFUNC_DEF("parse_expressions_for_values", 1, &rich_text_label_class_parse_expressions_for_values),
	JS_CFUNC_DEF("set_effects", 1, &rich_text_label_class_set_effects),
	JS_CFUNC_DEF("get_effects", 0, &rich_text_label_class_get_effects),
	JS_CFUNC_DEF("install_effect", 1, &rich_text_label_class_install_effect),
	JS_CFUNC_DEF("get_menu", 0, &rich_text_label_class_get_menu),
	JS_CFUNC_DEF("is_menu_visible", 0, &rich_text_label_class_is_menu_visible),
	JS_CFUNC_DEF("menu_option", 1, &rich_text_label_class_menu_option),
};

static int js_rich_text_label_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RichTextLabel::__class_id);
	classes["RichTextLabel"] = RichTextLabel::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RichTextLabel::__class_id, &rich_text_label_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RichTextLabel::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rich_text_label_class_proto_funcs, _countof(rich_text_label_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rich_text_label_class_constructor, "RichTextLabel", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RichTextLabel", ctor);

	return 0;
}

JSModuleDef *_js_init_rich_text_label_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rich_text_label_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RichTextLabel");
	return m;
}

JSModuleDef *js_init_rich_text_label_module(JSContext *ctx) {
	return _js_init_rich_text_label_module(ctx, "godot/classes/rich_text_label");
}

void register_rich_text_label() {
	js_init_rich_text_label_module(ctx);
}