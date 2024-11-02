
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/rich_text_effect.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/rich_text_label.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rich_text_label_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rich_text_label_class_def = {
	"RichTextLabel",
	.finalizer = rich_text_label_class_finalizer
};

static JSValue rich_text_label_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RichTextLabel::__class_id);
	if (JS_IsException(obj))
		return obj;

	RichTextLabel *rich_text_label_class;
	if (argc == 1) 
		rich_text_label_class = static_cast<RichTextLabel *>(Variant(*argv).operator Object *());
	else 
		rich_text_label_class = memnew(RichTextLabel);
	if (!rich_text_label_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rich_text_label_class);
	return obj;
}
static JSValue rich_text_label_class_get_parsed_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_parsed_text, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_add_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::add_text, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_text, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_add_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::add_image, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_update_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::update_image, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_newline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::newline, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_remove_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RichTextLabel::remove_paragraph, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_invalidate_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RichTextLabel::invalidate_paragraph, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_font, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_font_size, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_normal, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_bold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_bold, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_bold_italics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_bold_italics, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_italics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_italics, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_mono(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_mono, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_color, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_outline_size, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_outline_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_outline_color, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_paragraph, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_indent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_indent, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_list, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_meta, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_hint, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_language, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_underline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_underline, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_strikethrough(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_strikethrough, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_table(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_table, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_dropcap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_dropcap, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_table_column_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_table_column_expand, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_cell_row_background_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_cell_row_background_color, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_cell_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_cell_border_color, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_cell_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_cell_size_override, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_cell_padding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_cell_padding, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_cell(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_cell, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_fgcolor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_fgcolor, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_bgcolor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_bgcolor, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_customfx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_customfx, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_push_context(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::push_context, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_pop_context(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::pop_context, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_pop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::pop, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_pop_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::pop_all, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::clear, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_structured_text_bidi_override, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_structured_text_bidi_override, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_structured_text_bidi_override_options, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_structured_text_bidi_override_options, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_text_direction, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_text_direction, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_language, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_language, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_autowrap_mode, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_autowrap_mode, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_meta_underline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_meta_underline, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_meta_underlined(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_meta_underlined, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_hint_underline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_hint_underline, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_hint_underlined(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_hint_underlined, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_scroll_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_scroll_active, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_scroll_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_scroll_active, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_scroll_follow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_scroll_follow, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_scroll_following(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_scroll_following, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_v_scroll_bar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RichTextLabel::get_v_scroll_bar, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_scroll_to_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::scroll_to_line, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_scroll_to_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::scroll_to_paragraph, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_scroll_to_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::scroll_to_selection, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_tab_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_tab_size, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_tab_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_tab_size, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_fit_content(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_fit_content, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_fit_content_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_fit_content_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_selection_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_selection_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_context_menu_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_context_menu_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_context_menu_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_shortcut_keys_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_shortcut_keys_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_shortcut_keys_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_deselect_on_focus_loss_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_deselect_on_focus_loss_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_deselect_on_focus_loss_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_drag_and_drop_selection_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_drag_and_drop_selection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_drag_and_drop_selection_enabled, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_selection_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_selection_from, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_selection_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_selection_to, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_select_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::select_all, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_selected_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_selected_text, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_deselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::deselect, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_parse_bbcode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::parse_bbcode, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_append_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::append_text, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_text, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_ready(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_ready, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_threaded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_threaded, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_threaded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_threaded, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_progress_bar_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_progress_bar_delay, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_progress_bar_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_progress_bar_delay, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_visible_characters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_visible_characters, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_visible_characters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_characters, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_visible_characters_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_characters_behavior, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_visible_characters_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_visible_characters_behavior, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_visible_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_visible_ratio, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_visible_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_ratio, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_character_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RichTextLabel::get_character_line, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_character_paragraph(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RichTextLabel::get_character_paragraph, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_total_character_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_total_character_count, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_use_bbcode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_use_bbcode, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_using_bbcode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_using_bbcode, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_line_count, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_visible_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_line_count, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_paragraph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_paragraph_count, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_visible_paragraph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_visible_paragraph_count, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_content_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_content_height, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_content_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_content_width, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_line_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RichTextLabel::get_line_offset, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_paragraph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RichTextLabel::get_paragraph_offset, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_parse_expressions_for_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RichTextLabel::parse_expressions_for_values, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_set_effects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::set_effects, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_effects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RichTextLabel::get_effects, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_install_effect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::install_effect, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_get_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::get_menu, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_is_menu_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RichTextLabel::is_menu_visible, ctx, this_val, argc, argv);
};
static JSValue rich_text_label_class_menu_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RichTextLabel::menu_option, ctx, this_val, argc, argv);
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
static JSValue rich_text_label_class_get_meta_clicked_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	RichTextLabel *opaque = reinterpret_cast<RichTextLabel *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "meta_clicked_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "meta_clicked").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "meta_clicked_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue rich_text_label_class_get_meta_hover_started_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	RichTextLabel *opaque = reinterpret_cast<RichTextLabel *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "meta_hover_started_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "meta_hover_started").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "meta_hover_started_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue rich_text_label_class_get_meta_hover_ended_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	RichTextLabel *opaque = reinterpret_cast<RichTextLabel *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "meta_hover_ended_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "meta_hover_ended").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "meta_hover_ended_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue rich_text_label_class_get_finished_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	RichTextLabel *opaque = reinterpret_cast<RichTextLabel *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "finished_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "finished").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "finished_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_rich_text_label_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bbcode_enabled"),
        JS_NewCFunction(ctx, rich_text_label_class_is_using_bbcode, "is_using_bbcode", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_use_bbcode, "set_use_bbcode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "text"),
        JS_NewCFunction(ctx, rich_text_label_class_get_text, "get_text", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_text, "set_text", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fit_content"),
        JS_NewCFunction(ctx, rich_text_label_class_is_fit_content_enabled, "is_fit_content_enabled", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_fit_content, "set_fit_content", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scroll_active"),
        JS_NewCFunction(ctx, rich_text_label_class_is_scroll_active, "is_scroll_active", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_scroll_active, "set_scroll_active", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scroll_following"),
        JS_NewCFunction(ctx, rich_text_label_class_is_scroll_following, "is_scroll_following", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_scroll_follow, "set_scroll_follow", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "autowrap_mode"),
        JS_NewCFunction(ctx, rich_text_label_class_get_autowrap_mode, "get_autowrap_mode", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_autowrap_mode, "set_autowrap_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tab_size"),
        JS_NewCFunction(ctx, rich_text_label_class_get_tab_size, "get_tab_size", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_tab_size, "set_tab_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "context_menu_enabled"),
        JS_NewCFunction(ctx, rich_text_label_class_is_context_menu_enabled, "is_context_menu_enabled", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_context_menu_enabled, "set_context_menu_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shortcut_keys_enabled"),
        JS_NewCFunction(ctx, rich_text_label_class_is_shortcut_keys_enabled, "is_shortcut_keys_enabled", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_shortcut_keys_enabled, "set_shortcut_keys_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "custom_effects"),
        JS_NewCFunction(ctx, rich_text_label_class_get_effects, "get_effects", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_effects, "set_effects", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "meta_underlined"),
        JS_NewCFunction(ctx, rich_text_label_class_is_meta_underlined, "is_meta_underlined", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_meta_underline, "set_meta_underline", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "hint_underlined"),
        JS_NewCFunction(ctx, rich_text_label_class_is_hint_underlined, "is_hint_underlined", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_hint_underline, "set_hint_underline", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "threaded"),
        JS_NewCFunction(ctx, rich_text_label_class_is_threaded, "is_threaded", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_threaded, "set_threaded", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "progress_bar_delay"),
        JS_NewCFunction(ctx, rich_text_label_class_get_progress_bar_delay, "get_progress_bar_delay", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_progress_bar_delay, "set_progress_bar_delay", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "selection_enabled"),
        JS_NewCFunction(ctx, rich_text_label_class_is_selection_enabled, "is_selection_enabled", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_selection_enabled, "set_selection_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "deselect_on_focus_loss_enabled"),
        JS_NewCFunction(ctx, rich_text_label_class_is_deselect_on_focus_loss_enabled, "is_deselect_on_focus_loss_enabled", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_deselect_on_focus_loss_enabled, "set_deselect_on_focus_loss_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_and_drop_selection_enabled"),
        JS_NewCFunction(ctx, rich_text_label_class_is_drag_and_drop_selection_enabled, "is_drag_and_drop_selection_enabled", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_drag_and_drop_selection_enabled, "set_drag_and_drop_selection_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "visible_characters"),
        JS_NewCFunction(ctx, rich_text_label_class_get_visible_characters, "get_visible_characters", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_visible_characters, "set_visible_characters", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "visible_characters_behavior"),
        JS_NewCFunction(ctx, rich_text_label_class_get_visible_characters_behavior, "get_visible_characters_behavior", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_visible_characters_behavior, "set_visible_characters_behavior", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "visible_ratio"),
        JS_NewCFunction(ctx, rich_text_label_class_get_visible_ratio, "get_visible_ratio", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_visible_ratio, "set_visible_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "text_direction"),
        JS_NewCFunction(ctx, rich_text_label_class_get_text_direction, "get_text_direction", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_text_direction, "set_text_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "language"),
        JS_NewCFunction(ctx, rich_text_label_class_get_language, "get_language", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_language, "set_language", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "structured_text_bidi_override"),
        JS_NewCFunction(ctx, rich_text_label_class_get_structured_text_bidi_override, "get_structured_text_bidi_override", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_structured_text_bidi_override, "set_structured_text_bidi_override", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "structured_text_bidi_override_options"),
        JS_NewCFunction(ctx, rich_text_label_class_get_structured_text_bidi_override_options, "get_structured_text_bidi_override_options", 0),
        JS_NewCFunction(ctx, rich_text_label_class_set_structured_text_bidi_override_options, "set_structured_text_bidi_override_options", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "meta_clicked"),
		JS_NewCFunction(ctx, rich_text_label_class_get_meta_clicked_signal, "get_meta_clicked_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "meta_hover_started"),
		JS_NewCFunction(ctx, rich_text_label_class_get_meta_hover_started_signal, "get_meta_hover_started_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "meta_hover_ended"),
		JS_NewCFunction(ctx, rich_text_label_class_get_meta_hover_ended_signal, "get_meta_hover_ended_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "finished"),
		JS_NewCFunction(ctx, rich_text_label_class_get_finished_signal, "get_finished_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_rich_text_label_enum(JSContext *ctx, JSValue proto) {
	JSValue ListType_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ListType_obj, "LIST_NUMBERS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ListType_obj, "LIST_LETTERS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ListType_obj, "LIST_ROMAN", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ListType_obj, "LIST_DOTS", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "ListType", ListType_obj);
	JSValue MenuItems_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, MenuItems_obj, "MENU_COPY", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, MenuItems_obj, "MENU_SELECT_ALL", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, MenuItems_obj, "MENU_MAX", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "MenuItems", MenuItems_obj);
	JSValue MetaUnderline_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, MetaUnderline_obj, "META_UNDERLINE_NEVER", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, MetaUnderline_obj, "META_UNDERLINE_ALWAYS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, MetaUnderline_obj, "META_UNDERLINE_ON_HOVER", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "MetaUnderline", MetaUnderline_obj);
	JSValue ImageUpdateMask_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ImageUpdateMask_obj, "UPDATE_TEXTURE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ImageUpdateMask_obj, "UPDATE_SIZE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ImageUpdateMask_obj, "UPDATE_COLOR", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, ImageUpdateMask_obj, "UPDATE_ALIGNMENT", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, ImageUpdateMask_obj, "UPDATE_REGION", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, ImageUpdateMask_obj, "UPDATE_PAD", JS_NewInt64(ctx, 32));
	JS_SetPropertyStr(ctx, ImageUpdateMask_obj, "UPDATE_TOOLTIP", JS_NewInt64(ctx, 64));
	JS_SetPropertyStr(ctx, ImageUpdateMask_obj, "UPDATE_WIDTH_IN_PERCENT", JS_NewInt64(ctx, 128));
	JS_SetPropertyStr(ctx, proto, "ImageUpdateMask", ImageUpdateMask_obj);
}

static int js_rich_text_label_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RichTextLabel"] = RichTextLabel::__class_id;
	class_id_list.insert(RichTextLabel::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RichTextLabel::__class_id, &rich_text_label_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RichTextLabel::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RichTextLabel::__class_id, proto);

	define_rich_text_label_property(ctx, proto);
	define_rich_text_label_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rich_text_label_class_proto_funcs, _countof(rich_text_label_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rich_text_label_class_constructor, "RichTextLabel", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RichTextLabel", ctor);

	return 0;
}

JSModuleDef *_js_init_rich_text_label_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rich_text_label_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RichTextLabel");
	return m;
}

JSModuleDef *js_init_rich_text_label_module(JSContext *ctx) {
	return _js_init_rich_text_label_module(ctx, "@godot/classes/rich_text_label");
}

void register_rich_text_label() {
	RichTextLabel::__init_js_class_id();
	js_init_rich_text_label_module(ctx);
}