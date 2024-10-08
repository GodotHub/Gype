
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/item_list.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void item_list_class_finalizer(JSRuntime *rt, JSValue val) {
	ItemList *item_list = static_cast<ItemList *>(JS_GetOpaque(val, ItemList::__class_id));
	if (item_list)
		ItemList::free(nullptr, item_list);
}

static JSClassDef item_list_class_def = {
	"ItemList",
	.finalizer = item_list_class_finalizer
};

static JSValue item_list_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ItemList *item_list_class;
	JSValue obj = JS_NewObjectClass(ctx, ItemList::__class_id);
	if (JS_IsException(obj))
		return obj;
	item_list_class = memnew(ItemList);
	if (!item_list_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, item_list_class);
	return obj;
}
static JSValue item_list_class_add_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ItemList::add_item, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_add_icon_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ItemList::add_icon_item, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_text, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_text, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_icon, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_icon, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_text_direction, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_text_direction, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_language, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_language, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_icon_transposed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_icon_transposed, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_is_item_icon_transposed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::is_item_icon_transposed, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_icon_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_icon_region, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_icon_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_icon_region, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_icon_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_icon_modulate, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_icon_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_icon_modulate, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_selectable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_selectable, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_is_item_selectable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::is_item_selectable, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_disabled, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_is_item_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::is_item_disabled, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_metadata, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_metadata, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_custom_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_custom_bg_color, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_custom_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_custom_bg_color, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_custom_fg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_custom_fg_color, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_custom_fg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_custom_fg_color, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_get_item_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_rect, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_tooltip_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_tooltip_enabled, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_is_item_tooltip_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::is_item_tooltip_enabled, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_item_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_tooltip, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_tooltip, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::select, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_deselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::deselect, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_deselect_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::deselect_all, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_is_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::is_selected, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_get_selected_items(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ItemList::get_selected_items, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_move_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::move_item, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_set_item_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_item_count, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_item_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_count, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_remove_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::remove_item, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::clear, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_sort_items_by_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::sort_items_by_text, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_set_fixed_column_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_fixed_column_width, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_fixed_column_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_fixed_column_width, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_same_column_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_same_column_width, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_is_same_column_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::is_same_column_width, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_max_text_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_max_text_lines, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_max_text_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_max_text_lines, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_max_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_max_columns, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_max_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_max_columns, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_select_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_select_mode, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_select_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_select_mode, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_icon_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_icon_mode, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_icon_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_icon_mode, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_fixed_icon_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_fixed_icon_size, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_fixed_icon_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_fixed_icon_size, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_icon_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_icon_scale, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_icon_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_icon_scale, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_allow_rmb_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_allow_rmb_select, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_allow_rmb_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_allow_rmb_select, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_allow_reselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_allow_reselect, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_allow_reselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_allow_reselect, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_allow_search(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_allow_search, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_allow_search(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_allow_search, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_auto_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_auto_height, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_has_auto_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::has_auto_height, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_is_anything_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ItemList::is_anything_selected, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_get_item_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_item_at_position, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_ensure_current_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::ensure_current_is_visible, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_v_scroll_bar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ItemList::get_v_scroll_bar, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_set_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::set_text_overrun_behavior, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue item_list_class_get_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ItemList::get_text_overrun_behavior, ItemList::__class_id, ctx, this_val, argv);
};
static JSValue item_list_class_force_update_list_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ItemList::force_update_list_size, ItemList::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry item_list_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_item", 3, &item_list_class_add_item),
	JS_CFUNC_DEF("add_icon_item", 2, &item_list_class_add_icon_item),
	JS_CFUNC_DEF("set_item_text", 2, &item_list_class_set_item_text),
	JS_CFUNC_DEF("get_item_text", 1, &item_list_class_get_item_text),
	JS_CFUNC_DEF("set_item_icon", 2, &item_list_class_set_item_icon),
	JS_CFUNC_DEF("get_item_icon", 1, &item_list_class_get_item_icon),
	JS_CFUNC_DEF("set_item_text_direction", 2, &item_list_class_set_item_text_direction),
	JS_CFUNC_DEF("get_item_text_direction", 1, &item_list_class_get_item_text_direction),
	JS_CFUNC_DEF("set_item_language", 2, &item_list_class_set_item_language),
	JS_CFUNC_DEF("get_item_language", 1, &item_list_class_get_item_language),
	JS_CFUNC_DEF("set_item_icon_transposed", 2, &item_list_class_set_item_icon_transposed),
	JS_CFUNC_DEF("is_item_icon_transposed", 1, &item_list_class_is_item_icon_transposed),
	JS_CFUNC_DEF("set_item_icon_region", 2, &item_list_class_set_item_icon_region),
	JS_CFUNC_DEF("get_item_icon_region", 1, &item_list_class_get_item_icon_region),
	JS_CFUNC_DEF("set_item_icon_modulate", 2, &item_list_class_set_item_icon_modulate),
	JS_CFUNC_DEF("get_item_icon_modulate", 1, &item_list_class_get_item_icon_modulate),
	JS_CFUNC_DEF("set_item_selectable", 2, &item_list_class_set_item_selectable),
	JS_CFUNC_DEF("is_item_selectable", 1, &item_list_class_is_item_selectable),
	JS_CFUNC_DEF("set_item_disabled", 2, &item_list_class_set_item_disabled),
	JS_CFUNC_DEF("is_item_disabled", 1, &item_list_class_is_item_disabled),
	JS_CFUNC_DEF("set_item_metadata", 2, &item_list_class_set_item_metadata),
	JS_CFUNC_DEF("get_item_metadata", 1, &item_list_class_get_item_metadata),
	JS_CFUNC_DEF("set_item_custom_bg_color", 2, &item_list_class_set_item_custom_bg_color),
	JS_CFUNC_DEF("get_item_custom_bg_color", 1, &item_list_class_get_item_custom_bg_color),
	JS_CFUNC_DEF("set_item_custom_fg_color", 2, &item_list_class_set_item_custom_fg_color),
	JS_CFUNC_DEF("get_item_custom_fg_color", 1, &item_list_class_get_item_custom_fg_color),
	JS_CFUNC_DEF("get_item_rect", 2, &item_list_class_get_item_rect),
	JS_CFUNC_DEF("set_item_tooltip_enabled", 2, &item_list_class_set_item_tooltip_enabled),
	JS_CFUNC_DEF("is_item_tooltip_enabled", 1, &item_list_class_is_item_tooltip_enabled),
	JS_CFUNC_DEF("set_item_tooltip", 2, &item_list_class_set_item_tooltip),
	JS_CFUNC_DEF("get_item_tooltip", 1, &item_list_class_get_item_tooltip),
	JS_CFUNC_DEF("select", 2, &item_list_class_select),
	JS_CFUNC_DEF("deselect", 1, &item_list_class_deselect),
	JS_CFUNC_DEF("deselect_all", 0, &item_list_class_deselect_all),
	JS_CFUNC_DEF("is_selected", 1, &item_list_class_is_selected),
	JS_CFUNC_DEF("get_selected_items", 0, &item_list_class_get_selected_items),
	JS_CFUNC_DEF("move_item", 2, &item_list_class_move_item),
	JS_CFUNC_DEF("set_item_count", 1, &item_list_class_set_item_count),
	JS_CFUNC_DEF("get_item_count", 0, &item_list_class_get_item_count),
	JS_CFUNC_DEF("remove_item", 1, &item_list_class_remove_item),
	JS_CFUNC_DEF("clear", 0, &item_list_class_clear),
	JS_CFUNC_DEF("sort_items_by_text", 0, &item_list_class_sort_items_by_text),
	JS_CFUNC_DEF("set_fixed_column_width", 1, &item_list_class_set_fixed_column_width),
	JS_CFUNC_DEF("get_fixed_column_width", 0, &item_list_class_get_fixed_column_width),
	JS_CFUNC_DEF("set_same_column_width", 1, &item_list_class_set_same_column_width),
	JS_CFUNC_DEF("is_same_column_width", 0, &item_list_class_is_same_column_width),
	JS_CFUNC_DEF("set_max_text_lines", 1, &item_list_class_set_max_text_lines),
	JS_CFUNC_DEF("get_max_text_lines", 0, &item_list_class_get_max_text_lines),
	JS_CFUNC_DEF("set_max_columns", 1, &item_list_class_set_max_columns),
	JS_CFUNC_DEF("get_max_columns", 0, &item_list_class_get_max_columns),
	JS_CFUNC_DEF("set_select_mode", 1, &item_list_class_set_select_mode),
	JS_CFUNC_DEF("get_select_mode", 0, &item_list_class_get_select_mode),
	JS_CFUNC_DEF("set_icon_mode", 1, &item_list_class_set_icon_mode),
	JS_CFUNC_DEF("get_icon_mode", 0, &item_list_class_get_icon_mode),
	JS_CFUNC_DEF("set_fixed_icon_size", 1, &item_list_class_set_fixed_icon_size),
	JS_CFUNC_DEF("get_fixed_icon_size", 0, &item_list_class_get_fixed_icon_size),
	JS_CFUNC_DEF("set_icon_scale", 1, &item_list_class_set_icon_scale),
	JS_CFUNC_DEF("get_icon_scale", 0, &item_list_class_get_icon_scale),
	JS_CFUNC_DEF("set_allow_rmb_select", 1, &item_list_class_set_allow_rmb_select),
	JS_CFUNC_DEF("get_allow_rmb_select", 0, &item_list_class_get_allow_rmb_select),
	JS_CFUNC_DEF("set_allow_reselect", 1, &item_list_class_set_allow_reselect),
	JS_CFUNC_DEF("get_allow_reselect", 0, &item_list_class_get_allow_reselect),
	JS_CFUNC_DEF("set_allow_search", 1, &item_list_class_set_allow_search),
	JS_CFUNC_DEF("get_allow_search", 0, &item_list_class_get_allow_search),
	JS_CFUNC_DEF("set_auto_height", 1, &item_list_class_set_auto_height),
	JS_CFUNC_DEF("has_auto_height", 0, &item_list_class_has_auto_height),
	JS_CFUNC_DEF("is_anything_selected", 0, &item_list_class_is_anything_selected),
	JS_CFUNC_DEF("get_item_at_position", 2, &item_list_class_get_item_at_position),
	JS_CFUNC_DEF("ensure_current_is_visible", 0, &item_list_class_ensure_current_is_visible),
	JS_CFUNC_DEF("get_v_scroll_bar", 0, &item_list_class_get_v_scroll_bar),
	JS_CFUNC_DEF("set_text_overrun_behavior", 1, &item_list_class_set_text_overrun_behavior),
	JS_CFUNC_DEF("get_text_overrun_behavior", 0, &item_list_class_get_text_overrun_behavior),
	JS_CFUNC_DEF("force_update_list_size", 0, &item_list_class_force_update_list_size),
};

static int js_item_list_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ItemList::__class_id);
	classes["ItemList"] = ItemList::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ItemList::__class_id, &item_list_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ItemList::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, item_list_class_proto_funcs, _countof(item_list_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, item_list_class_constructor, "ItemList", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ItemList", ctor);

	return 0;
}

JSModuleDef *_js_init_item_list_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_item_list_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ItemList");
	return m;
}

JSModuleDef *js_init_item_list_module(JSContext *ctx) {
	return _js_init_item_list_module(ctx, "godot/classes/item_list");
}

void register_item_list() {
	js_init_item_list_module(ctx);
}