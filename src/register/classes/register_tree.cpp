
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/tree.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tree_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef tree_class_def = {
	"Tree",
	.finalizer = tree_class_finalizer
};

static JSValue tree_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Tree::__class_id);
	if (JS_IsException(obj))
		return obj;
	Tree *tree_class = memnew(Tree);
	if (!tree_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, tree_class);	
	return obj;
}
static JSValue tree_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_create_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Tree::create_item, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_root, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_column_custom_minimum_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_column_custom_minimum_width, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_column_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_column_expand, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_column_expand_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_column_expand_ratio, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_column_clip_content(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_column_clip_content, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_column_expanding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::is_column_expanding, ctx, this_val, argc, argv);
};
static JSValue tree_class_is_column_clipping_content(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::is_column_clipping_content, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_column_expand_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_column_expand_ratio, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_column_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_column_width, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_hide_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_hide_root, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_root_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::is_root_hidden, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_next_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Tree::get_next_selected, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_selected, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_selected, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_selected_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_selected_column, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_pressed_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_pressed_button, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_select_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_select_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_select_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_select_mode, ctx, this_val, argc, argv);
};
static JSValue tree_class_deselect_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::deselect_all, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_columns, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_columns, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_edited(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_edited, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_edited_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_edited_column, ctx, this_val, argc, argv);
};
static JSValue tree_class_edit_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Tree::edit_selected, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_custom_popup_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_custom_popup_rect, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_item_area_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_item_area_rect, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_item_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_item_at_position, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_column_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_column_at_position, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_drop_section_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_drop_section_at_position, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_button_id_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_button_id_at_position, ctx, this_val, argc, argv);
};
static JSValue tree_class_ensure_cursor_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::ensure_cursor_is_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_column_titles_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_column_titles_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_are_column_titles_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::are_column_titles_visible, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_column_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_column_title, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_column_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_column_title, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_column_title_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_column_title_alignment, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_column_title_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_column_title_alignment, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_column_title_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_column_title_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_column_title_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_column_title_direction, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_column_title_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_column_title_language, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_column_title_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_column_title_language, ctx, this_val, argc, argv);
};
static JSValue tree_class_get_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_scroll, ctx, this_val, argc, argv);
};
static JSValue tree_class_scroll_to_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::scroll_to_item, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_h_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_h_scroll_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_h_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::is_h_scroll_enabled, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_v_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_v_scroll_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_v_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::is_v_scroll_enabled, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_hide_folding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_hide_folding, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_folding_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::is_folding_hidden, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_enable_recursive_folding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_enable_recursive_folding, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_recursive_folding_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::is_recursive_folding_enabled, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_drop_mode_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_drop_mode_flags, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_drop_mode_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_drop_mode_flags, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_allow_rmb_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_allow_rmb_select, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_allow_rmb_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_allow_rmb_select, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_allow_reselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_allow_reselect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_allow_reselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_allow_reselect, ctx, this_val, argc, argv);
};
static JSValue tree_class_set_allow_search(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Tree::set_allow_search, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_allow_search(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Tree::get_allow_search, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry tree_class_proto_funcs[] = {
	JS_CFUNC_DEF("clear", 0, &tree_class_clear),
	JS_CFUNC_DEF("create_item", 2, &tree_class_create_item),
	JS_CFUNC_DEF("get_root", 0, &tree_class_get_root),
	JS_CFUNC_DEF("set_column_custom_minimum_width", 2, &tree_class_set_column_custom_minimum_width),
	JS_CFUNC_DEF("set_column_expand", 2, &tree_class_set_column_expand),
	JS_CFUNC_DEF("set_column_expand_ratio", 2, &tree_class_set_column_expand_ratio),
	JS_CFUNC_DEF("set_column_clip_content", 2, &tree_class_set_column_clip_content),
	JS_CFUNC_DEF("is_column_expanding", 1, &tree_class_is_column_expanding),
	JS_CFUNC_DEF("is_column_clipping_content", 1, &tree_class_is_column_clipping_content),
	JS_CFUNC_DEF("get_column_expand_ratio", 1, &tree_class_get_column_expand_ratio),
	JS_CFUNC_DEF("get_column_width", 1, &tree_class_get_column_width),
	JS_CFUNC_DEF("set_hide_root", 1, &tree_class_set_hide_root),
	JS_CFUNC_DEF("is_root_hidden", 0, &tree_class_is_root_hidden),
	JS_CFUNC_DEF("get_next_selected", 1, &tree_class_get_next_selected),
	JS_CFUNC_DEF("get_selected", 0, &tree_class_get_selected),
	JS_CFUNC_DEF("set_selected", 2, &tree_class_set_selected),
	JS_CFUNC_DEF("get_selected_column", 0, &tree_class_get_selected_column),
	JS_CFUNC_DEF("get_pressed_button", 0, &tree_class_get_pressed_button),
	JS_CFUNC_DEF("set_select_mode", 1, &tree_class_set_select_mode),
	JS_CFUNC_DEF("get_select_mode", 0, &tree_class_get_select_mode),
	JS_CFUNC_DEF("deselect_all", 0, &tree_class_deselect_all),
	JS_CFUNC_DEF("set_columns", 1, &tree_class_set_columns),
	JS_CFUNC_DEF("get_columns", 0, &tree_class_get_columns),
	JS_CFUNC_DEF("get_edited", 0, &tree_class_get_edited),
	JS_CFUNC_DEF("get_edited_column", 0, &tree_class_get_edited_column),
	JS_CFUNC_DEF("edit_selected", 1, &tree_class_edit_selected),
	JS_CFUNC_DEF("get_custom_popup_rect", 0, &tree_class_get_custom_popup_rect),
	JS_CFUNC_DEF("get_item_area_rect", 3, &tree_class_get_item_area_rect),
	JS_CFUNC_DEF("get_item_at_position", 1, &tree_class_get_item_at_position),
	JS_CFUNC_DEF("get_column_at_position", 1, &tree_class_get_column_at_position),
	JS_CFUNC_DEF("get_drop_section_at_position", 1, &tree_class_get_drop_section_at_position),
	JS_CFUNC_DEF("get_button_id_at_position", 1, &tree_class_get_button_id_at_position),
	JS_CFUNC_DEF("ensure_cursor_is_visible", 0, &tree_class_ensure_cursor_is_visible),
	JS_CFUNC_DEF("set_column_titles_visible", 1, &tree_class_set_column_titles_visible),
	JS_CFUNC_DEF("are_column_titles_visible", 0, &tree_class_are_column_titles_visible),
	JS_CFUNC_DEF("set_column_title", 2, &tree_class_set_column_title),
	JS_CFUNC_DEF("get_column_title", 1, &tree_class_get_column_title),
	JS_CFUNC_DEF("set_column_title_alignment", 2, &tree_class_set_column_title_alignment),
	JS_CFUNC_DEF("get_column_title_alignment", 1, &tree_class_get_column_title_alignment),
	JS_CFUNC_DEF("set_column_title_direction", 2, &tree_class_set_column_title_direction),
	JS_CFUNC_DEF("get_column_title_direction", 1, &tree_class_get_column_title_direction),
	JS_CFUNC_DEF("set_column_title_language", 2, &tree_class_set_column_title_language),
	JS_CFUNC_DEF("get_column_title_language", 1, &tree_class_get_column_title_language),
	JS_CFUNC_DEF("get_scroll", 0, &tree_class_get_scroll),
	JS_CFUNC_DEF("scroll_to_item", 2, &tree_class_scroll_to_item),
	JS_CFUNC_DEF("set_h_scroll_enabled", 1, &tree_class_set_h_scroll_enabled),
	JS_CFUNC_DEF("is_h_scroll_enabled", 0, &tree_class_is_h_scroll_enabled),
	JS_CFUNC_DEF("set_v_scroll_enabled", 1, &tree_class_set_v_scroll_enabled),
	JS_CFUNC_DEF("is_v_scroll_enabled", 0, &tree_class_is_v_scroll_enabled),
	JS_CFUNC_DEF("set_hide_folding", 1, &tree_class_set_hide_folding),
	JS_CFUNC_DEF("is_folding_hidden", 0, &tree_class_is_folding_hidden),
	JS_CFUNC_DEF("set_enable_recursive_folding", 1, &tree_class_set_enable_recursive_folding),
	JS_CFUNC_DEF("is_recursive_folding_enabled", 0, &tree_class_is_recursive_folding_enabled),
	JS_CFUNC_DEF("set_drop_mode_flags", 1, &tree_class_set_drop_mode_flags),
	JS_CFUNC_DEF("get_drop_mode_flags", 0, &tree_class_get_drop_mode_flags),
	JS_CFUNC_DEF("set_allow_rmb_select", 1, &tree_class_set_allow_rmb_select),
	JS_CFUNC_DEF("get_allow_rmb_select", 0, &tree_class_get_allow_rmb_select),
	JS_CFUNC_DEF("set_allow_reselect", 1, &tree_class_set_allow_reselect),
	JS_CFUNC_DEF("get_allow_reselect", 0, &tree_class_get_allow_reselect),
	JS_CFUNC_DEF("set_allow_search", 1, &tree_class_set_allow_search),
	JS_CFUNC_DEF("get_allow_search", 0, &tree_class_get_allow_search),
};

void define_tree_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "columns"),
        JS_NewCFunction(ctx, tree_class_get_columns, "get_columns", 0),
        JS_NewCFunction(ctx, tree_class_set_columns, "set_columns", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "column_titles_visible"),
        JS_NewCFunction(ctx, tree_class_are_column_titles_visible, "are_column_titles_visible", 0),
        JS_NewCFunction(ctx, tree_class_set_column_titles_visible, "set_column_titles_visible", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "allow_reselect"),
        JS_NewCFunction(ctx, tree_class_get_allow_reselect, "get_allow_reselect", 0),
        JS_NewCFunction(ctx, tree_class_set_allow_reselect, "set_allow_reselect", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "allow_rmb_select"),
        JS_NewCFunction(ctx, tree_class_get_allow_rmb_select, "get_allow_rmb_select", 0),
        JS_NewCFunction(ctx, tree_class_set_allow_rmb_select, "set_allow_rmb_select", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "allow_search"),
        JS_NewCFunction(ctx, tree_class_get_allow_search, "get_allow_search", 0),
        JS_NewCFunction(ctx, tree_class_set_allow_search, "set_allow_search", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hide_folding"),
        JS_NewCFunction(ctx, tree_class_is_folding_hidden, "is_folding_hidden", 0),
        JS_NewCFunction(ctx, tree_class_set_hide_folding, "set_hide_folding", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "enable_recursive_folding"),
        JS_NewCFunction(ctx, tree_class_is_recursive_folding_enabled, "is_recursive_folding_enabled", 0),
        JS_NewCFunction(ctx, tree_class_set_enable_recursive_folding, "set_enable_recursive_folding", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hide_root"),
        JS_NewCFunction(ctx, tree_class_is_root_hidden, "is_root_hidden", 0),
        JS_NewCFunction(ctx, tree_class_set_hide_root, "set_hide_root", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "drop_mode_flags"),
        JS_NewCFunction(ctx, tree_class_get_drop_mode_flags, "get_drop_mode_flags", 0),
        JS_NewCFunction(ctx, tree_class_set_drop_mode_flags, "set_drop_mode_flags", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "select_mode"),
        JS_NewCFunction(ctx, tree_class_get_select_mode, "get_select_mode", 0),
        JS_NewCFunction(ctx, tree_class_set_select_mode, "set_select_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scroll_horizontal_enabled"),
        JS_NewCFunction(ctx, tree_class_is_h_scroll_enabled, "is_h_scroll_enabled", 0),
        JS_NewCFunction(ctx, tree_class_set_h_scroll_enabled, "set_h_scroll_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scroll_vertical_enabled"),
        JS_NewCFunction(ctx, tree_class_is_v_scroll_enabled, "is_v_scroll_enabled", 0),
        JS_NewCFunction(ctx, tree_class_set_v_scroll_enabled, "set_v_scroll_enabled", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue SelectMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, SelectMode_obj, "SELECT_SINGLE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, SelectMode_obj, "SELECT_ROW", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, SelectMode_obj, "SELECT_MULTI", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "SelectMode", SelectMode_obj);
	JSValue DropModeFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, DropModeFlags_obj, "DROP_MODE_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, DropModeFlags_obj, "DROP_MODE_ON_ITEM", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, DropModeFlags_obj, "DROP_MODE_INBETWEEN", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "DropModeFlags", DropModeFlags_obj);
}

static int js_tree_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Tree::__class_id);
	classes["Tree"] = Tree::__class_id;
	class_id_list.insert(Tree::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Tree::__class_id, &tree_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Tree::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Tree::__class_id, proto);

	define_tree_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, tree_class_proto_funcs, _countof(tree_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, tree_class_constructor, "Tree", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Tree", ctor);

	return 0;
}

JSModuleDef *_js_init_tree_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tree_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Tree");
	return m;
}

JSModuleDef *js_init_tree_module(JSContext *ctx) {
	return _js_init_tree_module(ctx, "@godot/classes/tree");
}

void register_tree() {
	Tree::__init_js_class_id();
	js_init_tree_module(ctx);
}