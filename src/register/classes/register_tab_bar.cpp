
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/tab_bar.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tab_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	TabBar *tab_bar = static_cast<TabBar *>(JS_GetOpaque(val, TabBar::__class_id));
	if (tab_bar)
		TabBar::free(nullptr, tab_bar);
}

static JSClassDef tab_bar_class_def = {
	"TabBar",
	.finalizer = tab_bar_class_finalizer
};

static JSValue tab_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TabBar *tab_bar_class;
	JSValue obj = JS_NewObjectClass(ctx, TabBar::__class_id);
	if (JS_IsException(obj))
		return obj;
	tab_bar_class = memnew(TabBar);
	if (!tab_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tab_bar_class);
	return obj;
}
static JSValue tab_bar_class_set_tab_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_count, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_count, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_current_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_current_tab, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_current_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_current_tab, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_get_previous_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_previous_tab, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_select_previous_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TabBar::select_previous_available, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_select_next_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TabBar::select_next_available, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_title, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_title, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_tooltip, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_tooltip, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_text_direction, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_text_direction, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_language, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_language, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_icon, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_icon, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_icon_max_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_icon_max_width, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_icon_max_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_icon_max_width, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_button_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_button_icon, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_button_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_button_icon, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_disabled, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_is_tab_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::is_tab_disabled, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_hidden, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_is_tab_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::is_tab_hidden, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_metadata, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_metadata(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_metadata, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_remove_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::remove_tab, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_add_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::add_tab, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_idx_at_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_idx_at_point, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tab_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_alignment, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_alignment, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_clip_tabs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_clip_tabs, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_clip_tabs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_clip_tabs, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_get_tab_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_offset, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_get_offset_buttons_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_offset_buttons_visible, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_ensure_tab_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::ensure_tab_visible, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_rect, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_move_tab(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::move_tab, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_set_tab_close_display_policy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tab_close_display_policy, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tab_close_display_policy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tab_close_display_policy, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_max_tab_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_max_tab_width, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_max_tab_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_max_tab_width, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_scrolling_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_scrolling_enabled, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_scrolling_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_scrolling_enabled, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_drag_to_rearrange_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_drag_to_rearrange_enabled, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_drag_to_rearrange_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_drag_to_rearrange_enabled, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_tabs_rearrange_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_tabs_rearrange_group, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_tabs_rearrange_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_tabs_rearrange_group, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_scroll_to_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_scroll_to_selected, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_scroll_to_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_scroll_to_selected, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_select_with_rmb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_select_with_rmb, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_select_with_rmb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_select_with_rmb, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_set_deselect_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::set_deselect_enabled, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tab_bar_class_get_deselect_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TabBar::get_deselect_enabled, TabBar::__class_id, ctx, this_val, argv);
};
static JSValue tab_bar_class_clear_tabs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TabBar::clear_tabs, TabBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
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

static int js_tab_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TabBar::__class_id);
	classes["TabBar"] = TabBar::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TabBar::__class_id, &tab_bar_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TabBar::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tab_bar_class_proto_funcs, _countof(tab_bar_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tab_bar_class_constructor, "TabBar", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TabBar", ctor);

	return 0;
}

JSModuleDef *_js_init_tab_bar_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tab_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TabBar");
	return m;
}

JSModuleDef *js_init_tab_bar_module(JSContext *ctx) {
	return _js_init_tab_bar_module(ctx, "godot/classes/tab_bar");
}

void register_tab_bar() {
	js_init_tab_bar_module(ctx);
}