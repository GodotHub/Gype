
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/tree.hpp>
#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void tree_class_finalizer(JSRuntime *rt, JSValue val) {
	Tree *tree = static_cast<Tree *>(JS_GetOpaque(val, Tree::__class_id));
	if (tree)
		Tree::free(nullptr, tree);
}

static JSClassDef tree_class_def = {
	"Tree",
	.finalizer = tree_class_finalizer
};

static JSValue tree_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Tree *tree_class;
	JSValue obj = JS_NewObjectClass(ctx, Tree::__class_id);
	if (JS_IsException(obj))
		return obj;
	tree_class = memnew(Tree);
	if (!tree_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tree_class);
	return obj;
}
static JSValue tree_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::clear, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_create_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tree::create_item, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_root, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_column_custom_minimum_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_column_custom_minimum_width, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_column_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_column_expand, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_column_expand_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_column_expand_ratio, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_column_clip_content(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_column_clip_content, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_column_expanding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::is_column_expanding, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_is_column_clipping_content(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::is_column_clipping_content, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_column_expand_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_column_expand_ratio, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_column_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_column_width, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_hide_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_hide_root, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_root_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::is_root_hidden, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_next_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tree::get_next_selected, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_selected, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_selected, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_selected_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_selected_column, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_pressed_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_pressed_button, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_select_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_select_mode, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_select_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_select_mode, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_deselect_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::deselect_all, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_columns, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_columns(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_columns, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_edited(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_edited, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_edited_column(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_edited_column, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_edit_selected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Tree::edit_selected, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_custom_popup_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_custom_popup_rect, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_item_area_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_item_area_rect, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_item_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_item_at_position, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_column_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_column_at_position, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_drop_section_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_drop_section_at_position, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_button_id_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_button_id_at_position, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_ensure_cursor_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::ensure_cursor_is_visible, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_column_titles_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_column_titles_visible, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_are_column_titles_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::are_column_titles_visible, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_column_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_column_title, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_column_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_column_title, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_column_title_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_column_title_alignment, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_column_title_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_column_title_alignment, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_column_title_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_column_title_direction, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_column_title_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_column_title_direction, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_column_title_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_column_title_language, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_column_title_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_column_title_language, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_get_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_scroll, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_scroll_to_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::scroll_to_item, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_set_h_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_h_scroll_enabled, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_h_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::is_h_scroll_enabled, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_v_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_v_scroll_enabled, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_v_scroll_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::is_v_scroll_enabled, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_hide_folding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_hide_folding, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_folding_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::is_folding_hidden, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_enable_recursive_folding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_enable_recursive_folding, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_is_recursive_folding_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::is_recursive_folding_enabled, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_drop_mode_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_drop_mode_flags, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_drop_mode_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_drop_mode_flags, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_allow_rmb_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_allow_rmb_select, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_allow_rmb_select(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_allow_rmb_select, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_allow_reselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_allow_reselect, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_allow_reselect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_allow_reselect, Tree::__class_id, ctx, this_val, argv);
};
static JSValue tree_class_set_allow_search(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Tree::set_allow_search, Tree::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue tree_class_get_allow_search(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Tree::get_allow_search, Tree::__class_id, ctx, this_val, argv);
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

static int js_tree_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Tree::__class_id);
	classes["Tree"] = Tree::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Tree::__class_id, &tree_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Tree::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, tree_class_proto_funcs, _countof(tree_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, tree_class_constructor, "Tree", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Tree", ctor);

	return 0;
}

JSModuleDef *_js_init_tree_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tree_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Tree");
	return m;
}

JSModuleDef *js_init_tree_module(JSContext *ctx) {
	return _js_init_tree_module(ctx, "godot/classes/tree");
}

void register_tree() {
	js_init_tree_module(ctx);
}