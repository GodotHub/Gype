
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/classes/tree.hpp>
#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void tree_item_class_finalizer(JSRuntime *rt, JSValue val) {
	TreeItem *tree_item = static_cast<TreeItem *>(JS_GetOpaque(val, TreeItem::__class_id));
	if (tree_item)
		TreeItem::free(nullptr, tree_item);
}

static JSClassDef tree_item_class_def = {
	"TreeItem",
	.finalizer = tree_item_class_finalizer
};

static JSValue tree_item_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TreeItem *tree_item_class;
	JSValue obj = JS_NewObjectClass(ctx, TreeItem::__class_id);
	if (JS_IsException(obj))
		return obj;
	tree_item_class = memnew(TreeItem);
	if (!tree_item_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tree_item_class);
	return obj;
}
static JSValue tree_item_class_set_cell_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_cell_mode, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_cell_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_cell_mode, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_edit_multiline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_edit_multiline, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_edit_multiline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::is_edit_multiline, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_checked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_checked, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_set_indeterminate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_indeterminate, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_checked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::is_checked, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_is_indeterminate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::is_indeterminate, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_propagate_check(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::propagate_check, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_text, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_text, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_text_direction, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_text_direction, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_autowrap_mode, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_autowrap_mode, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_text_overrun_behavior, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_text_overrun_behavior, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_structured_text_bidi_override, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_structured_text_bidi_override, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_structured_text_bidi_override_options, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_structured_text_bidi_override_options, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_language, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_language, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_suffix, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_suffix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_suffix, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_icon, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_icon, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_icon_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_icon_region, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_icon_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_icon_region, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_icon_max_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_icon_max_width, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_icon_max_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_icon_max_width, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_icon_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_icon_modulate, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_icon_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_icon_modulate, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_range, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_range, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_range_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_range_config, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_range_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_range_config, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_metadata, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_metadata, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_custom_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_custom_draw, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_set_custom_draw_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_custom_draw_callback, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_custom_draw_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_custom_draw_callback, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_collapsed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_collapsed, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_collapsed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::is_collapsed, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_collapsed_recursive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_collapsed_recursive, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_any_collapsed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::is_any_collapsed, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_visible, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::is_visible, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_is_visible_in_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::is_visible_in_tree, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_uncollapse_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::uncollapse_tree, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_set_custom_minimum_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_custom_minimum_height, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_custom_minimum_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_custom_minimum_height, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_selectable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_selectable, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_selectable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::is_selectable, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_is_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::is_selected, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::select, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_deselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::deselect, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_editable, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::is_editable, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_custom_color, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_custom_color, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_clear_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::clear_custom_color, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_set_custom_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_custom_font, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_custom_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_custom_font, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_custom_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_custom_font_size, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_custom_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_custom_font_size, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_custom_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_custom_bg_color, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_clear_custom_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::clear_custom_bg_color, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_custom_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_custom_bg_color, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_custom_as_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_custom_as_button, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_custom_set_as_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::is_custom_set_as_button, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_add_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::add_button, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_button_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_button_count, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_button_tooltip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_button_tooltip_text, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_button_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_button_id, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_button_by_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_button_by_id, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_button_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_button_color, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_button, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_button_tooltip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_button_tooltip_text, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_set_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_button, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_erase_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::erase_button, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_set_button_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_button_disabled, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_set_button_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_button_color, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_button_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::is_button_disabled, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_tooltip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_tooltip_text, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_tooltip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_tooltip_text, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_text_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_text_alignment, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_text_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_text_alignment, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_expand_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_expand_right, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_expand_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_expand_right, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_set_disable_folding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::set_disable_folding, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_is_folding_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::is_folding_disabled, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_create_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::create_child, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_add_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::add_child, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_remove_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::remove_child, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_get_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_tree, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_next(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_next, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_prev(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_prev, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_parent, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_first_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TreeItem::get_first_child, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_next_in_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_next_in_tree, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_prev_in_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_prev_in_tree, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_next_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_next_visible, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_prev_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_prev_visible, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_child(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_child, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_child_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_child_count, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_children, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_get_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TreeItem::get_index, TreeItem::__class_id, ctx, this_val, argv);
};
static JSValue tree_item_class_move_before(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::move_before, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_move_after(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TreeItem::move_after, TreeItem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_item_class_call_recursive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_vararg_method_no_ret(&TreeItem::js_call_recursive, TreeItem::__class_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
}
static const JSCFunctionListEntry tree_item_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_cell_mode", 2, &tree_item_class_set_cell_mode),
	JS_CFUNC_DEF("get_cell_mode", 1, &tree_item_class_get_cell_mode),
	JS_CFUNC_DEF("set_edit_multiline", 2, &tree_item_class_set_edit_multiline),
	JS_CFUNC_DEF("is_edit_multiline", 1, &tree_item_class_is_edit_multiline),
	JS_CFUNC_DEF("set_checked", 2, &tree_item_class_set_checked),
	JS_CFUNC_DEF("set_indeterminate", 2, &tree_item_class_set_indeterminate),
	JS_CFUNC_DEF("is_checked", 1, &tree_item_class_is_checked),
	JS_CFUNC_DEF("is_indeterminate", 1, &tree_item_class_is_indeterminate),
	JS_CFUNC_DEF("propagate_check", 2, &tree_item_class_propagate_check),
	JS_CFUNC_DEF("set_text", 2, &tree_item_class_set_text),
	JS_CFUNC_DEF("get_text", 1, &tree_item_class_get_text),
	JS_CFUNC_DEF("set_text_direction", 2, &tree_item_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 1, &tree_item_class_get_text_direction),
	JS_CFUNC_DEF("set_autowrap_mode", 2, &tree_item_class_set_autowrap_mode),
	JS_CFUNC_DEF("get_autowrap_mode", 1, &tree_item_class_get_autowrap_mode),
	JS_CFUNC_DEF("set_text_overrun_behavior", 2, &tree_item_class_set_text_overrun_behavior),
	JS_CFUNC_DEF("get_text_overrun_behavior", 1, &tree_item_class_get_text_overrun_behavior),
	JS_CFUNC_DEF("set_structured_text_bidi_override", 2, &tree_item_class_set_structured_text_bidi_override),
	JS_CFUNC_DEF("get_structured_text_bidi_override", 1, &tree_item_class_get_structured_text_bidi_override),
	JS_CFUNC_DEF("set_structured_text_bidi_override_options", 2, &tree_item_class_set_structured_text_bidi_override_options),
	JS_CFUNC_DEF("get_structured_text_bidi_override_options", 1, &tree_item_class_get_structured_text_bidi_override_options),
	JS_CFUNC_DEF("set_language", 2, &tree_item_class_set_language),
	JS_CFUNC_DEF("get_language", 1, &tree_item_class_get_language),
	JS_CFUNC_DEF("set_suffix", 2, &tree_item_class_set_suffix),
	JS_CFUNC_DEF("get_suffix", 1, &tree_item_class_get_suffix),
	JS_CFUNC_DEF("set_icon", 2, &tree_item_class_set_icon),
	JS_CFUNC_DEF("get_icon", 1, &tree_item_class_get_icon),
	JS_CFUNC_DEF("set_icon_region", 2, &tree_item_class_set_icon_region),
	JS_CFUNC_DEF("get_icon_region", 1, &tree_item_class_get_icon_region),
	JS_CFUNC_DEF("set_icon_max_width", 2, &tree_item_class_set_icon_max_width),
	JS_CFUNC_DEF("get_icon_max_width", 1, &tree_item_class_get_icon_max_width),
	JS_CFUNC_DEF("set_icon_modulate", 2, &tree_item_class_set_icon_modulate),
	JS_CFUNC_DEF("get_icon_modulate", 1, &tree_item_class_get_icon_modulate),
	JS_CFUNC_DEF("set_range", 2, &tree_item_class_set_range),
	JS_CFUNC_DEF("get_range", 1, &tree_item_class_get_range),
	JS_CFUNC_DEF("set_range_config", 5, &tree_item_class_set_range_config),
	JS_CFUNC_DEF("get_range_config", 1, &tree_item_class_get_range_config),
	JS_CFUNC_DEF("set_metadata", 2, &tree_item_class_set_metadata),
	JS_CFUNC_DEF("get_metadata", 1, &tree_item_class_get_metadata),
	JS_CFUNC_DEF("set_custom_draw", 3, &tree_item_class_set_custom_draw),
	JS_CFUNC_DEF("set_custom_draw_callback", 2, &tree_item_class_set_custom_draw_callback),
	JS_CFUNC_DEF("get_custom_draw_callback", 1, &tree_item_class_get_custom_draw_callback),
	JS_CFUNC_DEF("set_collapsed", 1, &tree_item_class_set_collapsed),
	JS_CFUNC_DEF("is_collapsed", 0, &tree_item_class_is_collapsed),
	JS_CFUNC_DEF("set_collapsed_recursive", 1, &tree_item_class_set_collapsed_recursive),
	JS_CFUNC_DEF("is_any_collapsed", 1, &tree_item_class_is_any_collapsed),
	JS_CFUNC_DEF("set_visible", 1, &tree_item_class_set_visible),
	JS_CFUNC_DEF("is_visible", 0, &tree_item_class_is_visible),
	JS_CFUNC_DEF("is_visible_in_tree", 0, &tree_item_class_is_visible_in_tree),
	JS_CFUNC_DEF("uncollapse_tree", 0, &tree_item_class_uncollapse_tree),
	JS_CFUNC_DEF("set_custom_minimum_height", 1, &tree_item_class_set_custom_minimum_height),
	JS_CFUNC_DEF("get_custom_minimum_height", 0, &tree_item_class_get_custom_minimum_height),
	JS_CFUNC_DEF("set_selectable", 2, &tree_item_class_set_selectable),
	JS_CFUNC_DEF("is_selectable", 1, &tree_item_class_is_selectable),
	JS_CFUNC_DEF("is_selected", 1, &tree_item_class_is_selected),
	JS_CFUNC_DEF("select", 1, &tree_item_class_select),
	JS_CFUNC_DEF("deselect", 1, &tree_item_class_deselect),
	JS_CFUNC_DEF("set_editable", 2, &tree_item_class_set_editable),
	JS_CFUNC_DEF("is_editable", 1, &tree_item_class_is_editable),
	JS_CFUNC_DEF("set_custom_color", 2, &tree_item_class_set_custom_color),
	JS_CFUNC_DEF("get_custom_color", 1, &tree_item_class_get_custom_color),
	JS_CFUNC_DEF("clear_custom_color", 1, &tree_item_class_clear_custom_color),
	JS_CFUNC_DEF("set_custom_font", 2, &tree_item_class_set_custom_font),
	JS_CFUNC_DEF("get_custom_font", 1, &tree_item_class_get_custom_font),
	JS_CFUNC_DEF("set_custom_font_size", 2, &tree_item_class_set_custom_font_size),
	JS_CFUNC_DEF("get_custom_font_size", 1, &tree_item_class_get_custom_font_size),
	JS_CFUNC_DEF("set_custom_bg_color", 3, &tree_item_class_set_custom_bg_color),
	JS_CFUNC_DEF("clear_custom_bg_color", 1, &tree_item_class_clear_custom_bg_color),
	JS_CFUNC_DEF("get_custom_bg_color", 1, &tree_item_class_get_custom_bg_color),
	JS_CFUNC_DEF("set_custom_as_button", 2, &tree_item_class_set_custom_as_button),
	JS_CFUNC_DEF("is_custom_set_as_button", 1, &tree_item_class_is_custom_set_as_button),
	JS_CFUNC_DEF("add_button", 5, &tree_item_class_add_button),
	JS_CFUNC_DEF("get_button_count", 1, &tree_item_class_get_button_count),
	JS_CFUNC_DEF("get_button_tooltip_text", 2, &tree_item_class_get_button_tooltip_text),
	JS_CFUNC_DEF("get_button_id", 2, &tree_item_class_get_button_id),
	JS_CFUNC_DEF("get_button_by_id", 2, &tree_item_class_get_button_by_id),
	JS_CFUNC_DEF("get_button_color", 2, &tree_item_class_get_button_color),
	JS_CFUNC_DEF("get_button", 2, &tree_item_class_get_button),
	JS_CFUNC_DEF("set_button_tooltip_text", 3, &tree_item_class_set_button_tooltip_text),
	JS_CFUNC_DEF("set_button", 3, &tree_item_class_set_button),
	JS_CFUNC_DEF("erase_button", 2, &tree_item_class_erase_button),
	JS_CFUNC_DEF("set_button_disabled", 3, &tree_item_class_set_button_disabled),
	JS_CFUNC_DEF("set_button_color", 3, &tree_item_class_set_button_color),
	JS_CFUNC_DEF("is_button_disabled", 2, &tree_item_class_is_button_disabled),
	JS_CFUNC_DEF("set_tooltip_text", 2, &tree_item_class_set_tooltip_text),
	JS_CFUNC_DEF("get_tooltip_text", 1, &tree_item_class_get_tooltip_text),
	JS_CFUNC_DEF("set_text_alignment", 2, &tree_item_class_set_text_alignment),
	JS_CFUNC_DEF("get_text_alignment", 1, &tree_item_class_get_text_alignment),
	JS_CFUNC_DEF("set_expand_right", 2, &tree_item_class_set_expand_right),
	JS_CFUNC_DEF("get_expand_right", 1, &tree_item_class_get_expand_right),
	JS_CFUNC_DEF("set_disable_folding", 1, &tree_item_class_set_disable_folding),
	JS_CFUNC_DEF("is_folding_disabled", 0, &tree_item_class_is_folding_disabled),
	JS_CFUNC_DEF("create_child", 1, &tree_item_class_create_child),
	JS_CFUNC_DEF("add_child", 1, &tree_item_class_add_child),
	JS_CFUNC_DEF("remove_child", 1, &tree_item_class_remove_child),
	JS_CFUNC_DEF("get_tree", 0, &tree_item_class_get_tree),
	JS_CFUNC_DEF("get_next", 0, &tree_item_class_get_next),
	JS_CFUNC_DEF("get_prev", 0, &tree_item_class_get_prev),
	JS_CFUNC_DEF("get_parent", 0, &tree_item_class_get_parent),
	JS_CFUNC_DEF("get_first_child", 0, &tree_item_class_get_first_child),
	JS_CFUNC_DEF("get_next_in_tree", 1, &tree_item_class_get_next_in_tree),
	JS_CFUNC_DEF("get_prev_in_tree", 1, &tree_item_class_get_prev_in_tree),
	JS_CFUNC_DEF("get_next_visible", 1, &tree_item_class_get_next_visible),
	JS_CFUNC_DEF("get_prev_visible", 1, &tree_item_class_get_prev_visible),
	JS_CFUNC_DEF("get_child", 1, &tree_item_class_get_child),
	JS_CFUNC_DEF("get_child_count", 0, &tree_item_class_get_child_count),
	JS_CFUNC_DEF("get_children", 0, &tree_item_class_get_children),
	JS_CFUNC_DEF("get_index", 0, &tree_item_class_get_index),
	JS_CFUNC_DEF("move_before", 1, &tree_item_class_move_before),
	JS_CFUNC_DEF("move_after", 1, &tree_item_class_move_after),
	JS_CFUNC_DEF("call_recursive", 1, &tree_item_class_call_recursive),
};

static int js_tree_item_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TreeItem::__class_id);
	classes["TreeItem"] = TreeItem::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TreeItem::__class_id, &tree_item_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TreeItem::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tree_item_class_proto_funcs, _countof(tree_item_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tree_item_class_constructor, "TreeItem", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TreeItem", ctor);

	return 0;
}

JSModuleDef *_js_init_tree_item_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tree_item_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TreeItem");
	return m;
}

JSModuleDef *js_init_tree_item_module(JSContext *ctx) {
	return _js_init_tree_item_module(ctx, "godot/classes/tree_item");
}

void register_tree_item() {
	js_init_tree_item_module(ctx);
}