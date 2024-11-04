
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/tab_bar.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tab_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	TabBar *tab_bar = static_cast<TabBar *>(JS_GetOpaque(val, TabBar::__class_id));
	if (tab_bar)
		memdelete(tab_bar);
}

static JSClassDef tab_bar_class_def = {
	"TabBar",
	.finalizer = tab_bar_class_finalizer
};

static JSValue tab_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TabBar::__class_id);
	if (JS_IsException(obj))
		return obj;

	TabBar *tab_bar_class;
	if (argc == 1) 
		tab_bar_class = static_cast<TabBar *>(Variant(*argv).operator Object *());
	else 
		tab_bar_class = memnew(TabBar);
	if (!tab_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, tab_bar_class);
	return obj;
}
static JSValue tab_bar_class_set_tab_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_count, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_count, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_current_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_current_tab, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_current_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_current_tab, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_previous_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_previous_tab, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_select_previous_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TabBar::select_previous_available, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_select_next_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TabBar::select_next_available, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_title, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_title, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_tooltip, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_tooltip, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_text_direction, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_text_direction, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_language, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_language, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_icon, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_icon, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_icon_max_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_icon_max_width, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_icon_max_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_icon_max_width, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_button_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_button_icon, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_button_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_button_icon, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_disabled, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_is_tab_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::is_tab_disabled, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_hidden, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_is_tab_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::is_tab_hidden, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_metadata, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_metadata, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_remove_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::remove_tab, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_add_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::add_tab, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_idx_at_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_idx_at_point, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_alignment, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_alignment, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_clip_tabs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_clip_tabs, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_clip_tabs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_clip_tabs, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_offset, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_offset_buttons_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_offset_buttons_visible, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_ensure_tab_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::ensure_tab_visible, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_rect, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_move_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::move_tab, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tab_close_display_policy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tab_close_display_policy, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tab_close_display_policy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tab_close_display_policy, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_max_tab_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_max_tab_width, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_max_tab_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_max_tab_width, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_scrolling_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_scrolling_enabled, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_scrolling_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_scrolling_enabled, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_drag_to_rearrange_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_drag_to_rearrange_enabled, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_drag_to_rearrange_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_drag_to_rearrange_enabled, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_tabs_rearrange_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_tabs_rearrange_group, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_tabs_rearrange_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_tabs_rearrange_group, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_scroll_to_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_scroll_to_selected, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_scroll_to_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_scroll_to_selected, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_select_with_rmb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_select_with_rmb, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_select_with_rmb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_select_with_rmb, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_set_deselect_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::set_deselect_enabled, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_get_deselect_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TabBar::get_deselect_enabled, ctx, this_val, argc, argv);
};
static JSValue tab_bar_class_clear_tabs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TabBar::clear_tabs, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry tab_bar_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_tab_count", 1, &tab_bar_class_set_tab_count),
	JS_CFUNC_DEF("get_tab_count", 0, &tab_bar_class_get_tab_count),
	JS_CFUNC_DEF("set_current_tab", 1, &tab_bar_class_set_current_tab),
	JS_CFUNC_DEF("get_current_tab", 0, &tab_bar_class_get_current_tab),
	JS_CFUNC_DEF("get_previous_tab", 0, &tab_bar_class_get_previous_tab),
	JS_CFUNC_DEF("select_previous_available", 0, &tab_bar_class_select_previous_available),
	JS_CFUNC_DEF("select_next_available", 0, &tab_bar_class_select_next_available),
	JS_CFUNC_DEF("set_tab_title", 2, &tab_bar_class_set_tab_title),
	JS_CFUNC_DEF("get_tab_title", 1, &tab_bar_class_get_tab_title),
	JS_CFUNC_DEF("set_tab_tooltip", 2, &tab_bar_class_set_tab_tooltip),
	JS_CFUNC_DEF("get_tab_tooltip", 1, &tab_bar_class_get_tab_tooltip),
	JS_CFUNC_DEF("set_tab_text_direction", 2, &tab_bar_class_set_tab_text_direction),
	JS_CFUNC_DEF("get_tab_text_direction", 1, &tab_bar_class_get_tab_text_direction),
	JS_CFUNC_DEF("set_tab_language", 2, &tab_bar_class_set_tab_language),
	JS_CFUNC_DEF("get_tab_language", 1, &tab_bar_class_get_tab_language),
	JS_CFUNC_DEF("set_tab_icon", 2, &tab_bar_class_set_tab_icon),
	JS_CFUNC_DEF("get_tab_icon", 1, &tab_bar_class_get_tab_icon),
	JS_CFUNC_DEF("set_tab_icon_max_width", 2, &tab_bar_class_set_tab_icon_max_width),
	JS_CFUNC_DEF("get_tab_icon_max_width", 1, &tab_bar_class_get_tab_icon_max_width),
	JS_CFUNC_DEF("set_tab_button_icon", 2, &tab_bar_class_set_tab_button_icon),
	JS_CFUNC_DEF("get_tab_button_icon", 1, &tab_bar_class_get_tab_button_icon),
	JS_CFUNC_DEF("set_tab_disabled", 2, &tab_bar_class_set_tab_disabled),
	JS_CFUNC_DEF("is_tab_disabled", 1, &tab_bar_class_is_tab_disabled),
	JS_CFUNC_DEF("set_tab_hidden", 2, &tab_bar_class_set_tab_hidden),
	JS_CFUNC_DEF("is_tab_hidden", 1, &tab_bar_class_is_tab_hidden),
	JS_CFUNC_DEF("set_tab_metadata", 2, &tab_bar_class_set_tab_metadata),
	JS_CFUNC_DEF("get_tab_metadata", 1, &tab_bar_class_get_tab_metadata),
	JS_CFUNC_DEF("remove_tab", 1, &tab_bar_class_remove_tab),
	JS_CFUNC_DEF("add_tab", 2, &tab_bar_class_add_tab),
	JS_CFUNC_DEF("get_tab_idx_at_point", 1, &tab_bar_class_get_tab_idx_at_point),
	JS_CFUNC_DEF("set_tab_alignment", 1, &tab_bar_class_set_tab_alignment),
	JS_CFUNC_DEF("get_tab_alignment", 0, &tab_bar_class_get_tab_alignment),
	JS_CFUNC_DEF("set_clip_tabs", 1, &tab_bar_class_set_clip_tabs),
	JS_CFUNC_DEF("get_clip_tabs", 0, &tab_bar_class_get_clip_tabs),
	JS_CFUNC_DEF("get_tab_offset", 0, &tab_bar_class_get_tab_offset),
	JS_CFUNC_DEF("get_offset_buttons_visible", 0, &tab_bar_class_get_offset_buttons_visible),
	JS_CFUNC_DEF("ensure_tab_visible", 1, &tab_bar_class_ensure_tab_visible),
	JS_CFUNC_DEF("get_tab_rect", 1, &tab_bar_class_get_tab_rect),
	JS_CFUNC_DEF("move_tab", 2, &tab_bar_class_move_tab),
	JS_CFUNC_DEF("set_tab_close_display_policy", 1, &tab_bar_class_set_tab_close_display_policy),
	JS_CFUNC_DEF("get_tab_close_display_policy", 0, &tab_bar_class_get_tab_close_display_policy),
	JS_CFUNC_DEF("set_max_tab_width", 1, &tab_bar_class_set_max_tab_width),
	JS_CFUNC_DEF("get_max_tab_width", 0, &tab_bar_class_get_max_tab_width),
	JS_CFUNC_DEF("set_scrolling_enabled", 1, &tab_bar_class_set_scrolling_enabled),
	JS_CFUNC_DEF("get_scrolling_enabled", 0, &tab_bar_class_get_scrolling_enabled),
	JS_CFUNC_DEF("set_drag_to_rearrange_enabled", 1, &tab_bar_class_set_drag_to_rearrange_enabled),
	JS_CFUNC_DEF("get_drag_to_rearrange_enabled", 0, &tab_bar_class_get_drag_to_rearrange_enabled),
	JS_CFUNC_DEF("set_tabs_rearrange_group", 1, &tab_bar_class_set_tabs_rearrange_group),
	JS_CFUNC_DEF("get_tabs_rearrange_group", 0, &tab_bar_class_get_tabs_rearrange_group),
	JS_CFUNC_DEF("set_scroll_to_selected", 1, &tab_bar_class_set_scroll_to_selected),
	JS_CFUNC_DEF("get_scroll_to_selected", 0, &tab_bar_class_get_scroll_to_selected),
	JS_CFUNC_DEF("set_select_with_rmb", 1, &tab_bar_class_set_select_with_rmb),
	JS_CFUNC_DEF("get_select_with_rmb", 0, &tab_bar_class_get_select_with_rmb),
	JS_CFUNC_DEF("set_deselect_enabled", 1, &tab_bar_class_set_deselect_enabled),
	JS_CFUNC_DEF("get_deselect_enabled", 0, &tab_bar_class_get_deselect_enabled),
	JS_CFUNC_DEF("clear_tabs", 0, &tab_bar_class_clear_tabs),
};
static JSValue tab_bar_class_get_tab_selected_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	TabBar *opaque = reinterpret_cast<TabBar *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "tab_selected_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "tab_selected").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "tab_selected_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue tab_bar_class_get_tab_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	TabBar *opaque = reinterpret_cast<TabBar *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "tab_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "tab_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "tab_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue tab_bar_class_get_tab_clicked_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	TabBar *opaque = reinterpret_cast<TabBar *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "tab_clicked_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "tab_clicked").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "tab_clicked_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue tab_bar_class_get_tab_rmb_clicked_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	TabBar *opaque = reinterpret_cast<TabBar *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "tab_rmb_clicked_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "tab_rmb_clicked").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "tab_rmb_clicked_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue tab_bar_class_get_tab_close_pressed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	TabBar *opaque = reinterpret_cast<TabBar *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "tab_close_pressed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "tab_close_pressed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "tab_close_pressed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue tab_bar_class_get_tab_button_pressed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	TabBar *opaque = reinterpret_cast<TabBar *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "tab_button_pressed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "tab_button_pressed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "tab_button_pressed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue tab_bar_class_get_tab_hovered_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	TabBar *opaque = reinterpret_cast<TabBar *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "tab_hovered_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "tab_hovered").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "tab_hovered_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue tab_bar_class_get_active_tab_rearranged_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	TabBar *opaque = reinterpret_cast<TabBar *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "active_tab_rearranged_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "active_tab_rearranged").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "active_tab_rearranged_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_tab_bar_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "current_tab"),
        JS_NewCFunction(ctx, tab_bar_class_get_current_tab, "get_current_tab", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_current_tab, "set_current_tab", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tab_alignment"),
        JS_NewCFunction(ctx, tab_bar_class_get_tab_alignment, "get_tab_alignment", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_tab_alignment, "set_tab_alignment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "clip_tabs"),
        JS_NewCFunction(ctx, tab_bar_class_get_clip_tabs, "get_clip_tabs", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_clip_tabs, "set_clip_tabs", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tab_close_display_policy"),
        JS_NewCFunction(ctx, tab_bar_class_get_tab_close_display_policy, "get_tab_close_display_policy", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_tab_close_display_policy, "set_tab_close_display_policy", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_tab_width"),
        JS_NewCFunction(ctx, tab_bar_class_get_max_tab_width, "get_max_tab_width", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_max_tab_width, "set_max_tab_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scrolling_enabled"),
        JS_NewCFunction(ctx, tab_bar_class_get_scrolling_enabled, "get_scrolling_enabled", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_scrolling_enabled, "set_scrolling_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_to_rearrange_enabled"),
        JS_NewCFunction(ctx, tab_bar_class_get_drag_to_rearrange_enabled, "get_drag_to_rearrange_enabled", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_drag_to_rearrange_enabled, "set_drag_to_rearrange_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tabs_rearrange_group"),
        JS_NewCFunction(ctx, tab_bar_class_get_tabs_rearrange_group, "get_tabs_rearrange_group", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_tabs_rearrange_group, "set_tabs_rearrange_group", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scroll_to_selected"),
        JS_NewCFunction(ctx, tab_bar_class_get_scroll_to_selected, "get_scroll_to_selected", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_scroll_to_selected, "set_scroll_to_selected", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "select_with_rmb"),
        JS_NewCFunction(ctx, tab_bar_class_get_select_with_rmb, "get_select_with_rmb", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_select_with_rmb, "set_select_with_rmb", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "deselect_enabled"),
        JS_NewCFunction(ctx, tab_bar_class_get_deselect_enabled, "get_deselect_enabled", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_deselect_enabled, "set_deselect_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tab_count"),
        JS_NewCFunction(ctx, tab_bar_class_get_tab_count, "get_tab_count", 0),
        JS_NewCFunction(ctx, tab_bar_class_set_tab_count, "set_tab_count", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "tab_selected"),
		JS_NewCFunction(ctx, tab_bar_class_get_tab_selected_signal, "get_tab_selected_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "tab_changed"),
		JS_NewCFunction(ctx, tab_bar_class_get_tab_changed_signal, "get_tab_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "tab_clicked"),
		JS_NewCFunction(ctx, tab_bar_class_get_tab_clicked_signal, "get_tab_clicked_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "tab_rmb_clicked"),
		JS_NewCFunction(ctx, tab_bar_class_get_tab_rmb_clicked_signal, "get_tab_rmb_clicked_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "tab_close_pressed"),
		JS_NewCFunction(ctx, tab_bar_class_get_tab_close_pressed_signal, "get_tab_close_pressed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "tab_button_pressed"),
		JS_NewCFunction(ctx, tab_bar_class_get_tab_button_pressed_signal, "get_tab_button_pressed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "tab_hovered"),
		JS_NewCFunction(ctx, tab_bar_class_get_tab_hovered_signal, "get_tab_hovered_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "active_tab_rearranged"),
		JS_NewCFunction(ctx, tab_bar_class_get_active_tab_rearranged_signal, "get_active_tab_rearranged_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_tab_bar_enum(JSContext *ctx, JSValue proto) {
	JSValue AlignmentMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AlignmentMode_obj, "ALIGNMENT_LEFT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AlignmentMode_obj, "ALIGNMENT_CENTER", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, AlignmentMode_obj, "ALIGNMENT_RIGHT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, AlignmentMode_obj, "ALIGNMENT_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "AlignmentMode", AlignmentMode_obj);
	JSValue CloseButtonDisplayPolicy_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, CloseButtonDisplayPolicy_obj, "CLOSE_BUTTON_SHOW_NEVER", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, CloseButtonDisplayPolicy_obj, "CLOSE_BUTTON_SHOW_ACTIVE_ONLY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, CloseButtonDisplayPolicy_obj, "CLOSE_BUTTON_SHOW_ALWAYS", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, CloseButtonDisplayPolicy_obj, "CLOSE_BUTTON_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "CloseButtonDisplayPolicy", CloseButtonDisplayPolicy_obj);
}

static int js_tab_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["TabBar"] = TabBar::__class_id;
	class_id_list.insert(TabBar::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TabBar::__class_id, &tab_bar_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TabBar::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TabBar::__class_id, proto);

	define_tab_bar_property(ctx, proto);
	define_tab_bar_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, tab_bar_class_proto_funcs, _countof(tab_bar_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, tab_bar_class_constructor, "TabBar", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "TabBar", ctor);
	constructors[TabBar::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_tab_bar_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tab_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TabBar");
	return m;
}

JSModuleDef *js_init_tab_bar_module(JSContext *ctx) {
	return _js_init_tab_bar_module(ctx, "@godot/classes/tab_bar");
}

void register_tab_bar() {
	TabBar::__init_js_class_id();
	js_init_tab_bar_module(ctx);
}