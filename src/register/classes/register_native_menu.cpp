
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/native_menu.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue native_menu_instance;

static void js_native_menu_singleton();

static void native_menu_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef native_menu_class_def = {
	"NativeMenu",
	.finalizer = native_menu_class_finalizer
};

static JSValue native_menu_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NativeMenu *native_menu_class;
	JSValue obj = JS_NewObjectClass(ctx, NativeMenu::__class_id);
	if (JS_IsException(obj))
		return obj;
	native_menu_class = NativeMenu::get_singleton();
	if (!native_menu_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, native_menu_class);
	return obj;
}
static JSValue native_menu_class_has_feature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::has_feature, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_has_system_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::has_system_menu, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_system_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_system_menu, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_system_menu_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_system_menu_name, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_create_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::create_menu, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_has_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::has_menu, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_free_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::free_menu, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_size, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::popup, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_interface_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_interface_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_popup_open_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_popup_open_callback, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_get_popup_open_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_popup_open_callback, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_set_popup_close_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_popup_close_callback, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_get_popup_close_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_popup_close_callback, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_set_minimum_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_minimum_width, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_get_minimum_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_minimum_width, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_is_opened(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::is_opened, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_add_submenu_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::add_submenu_item, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_add_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::add_item, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_add_check_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::add_check_item, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_add_icon_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::add_icon_item, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_add_icon_check_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::add_icon_check_item, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_add_radio_check_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::add_radio_check_item, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_add_icon_radio_check_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::add_icon_radio_check_item, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_add_multistate_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::add_multistate_item, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_add_separator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_method_ret(&NativeMenu::add_separator, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_find_item_index_with_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::find_item_index_with_text, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_find_item_index_with_tag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::find_item_index_with_tag, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_find_item_index_with_submenu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::find_item_index_with_submenu, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_is_item_checked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::is_item_checked, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_is_item_checkable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::is_item_checkable, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_is_item_radio_checkable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::is_item_radio_checkable, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_callback, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_key_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_key_callback, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_tag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_tag, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_text, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_submenu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_submenu, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_accelerator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_accelerator, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_is_item_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::is_item_disabled, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_is_item_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::is_item_hidden, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_tooltip, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_state, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_max_states(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_max_states, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_icon, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_get_item_indentation_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_indentation_level, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_set_item_checked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_checked, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_checkable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_checkable, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_radio_checkable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_radio_checkable, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_callback, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_hover_callbacks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_hover_callbacks, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_key_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_key_callback, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_tag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_tag, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_text, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_submenu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_submenu, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_accelerator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_accelerator, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_disabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_hidden, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_tooltip, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_state, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_max_states(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_max_states, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_icon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_set_item_indentation_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::set_item_indentation_level, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_get_item_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::get_item_count, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_is_system_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
	return call_builtin_const_method_ret(&NativeMenu::is_system_menu, ctx, this_val, argc, argv);
};
static JSValue native_menu_class_remove_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::remove_item, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue native_menu_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_native_menu_singleton();
    call_builtin_method_no_ret(&NativeMenu::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry native_menu_class_proto_funcs[] = {
	JS_CFUNC_DEF("has_feature", 1, &native_menu_class_has_feature),
	JS_CFUNC_DEF("has_system_menu", 1, &native_menu_class_has_system_menu),
	JS_CFUNC_DEF("get_system_menu", 1, &native_menu_class_get_system_menu),
	JS_CFUNC_DEF("get_system_menu_name", 1, &native_menu_class_get_system_menu_name),
	JS_CFUNC_DEF("create_menu", 0, &native_menu_class_create_menu),
	JS_CFUNC_DEF("has_menu", 1, &native_menu_class_has_menu),
	JS_CFUNC_DEF("free_menu", 1, &native_menu_class_free_menu),
	JS_CFUNC_DEF("get_size", 1, &native_menu_class_get_size),
	JS_CFUNC_DEF("popup", 2, &native_menu_class_popup),
	JS_CFUNC_DEF("set_interface_direction", 2, &native_menu_class_set_interface_direction),
	JS_CFUNC_DEF("set_popup_open_callback", 2, &native_menu_class_set_popup_open_callback),
	JS_CFUNC_DEF("get_popup_open_callback", 1, &native_menu_class_get_popup_open_callback),
	JS_CFUNC_DEF("set_popup_close_callback", 2, &native_menu_class_set_popup_close_callback),
	JS_CFUNC_DEF("get_popup_close_callback", 1, &native_menu_class_get_popup_close_callback),
	JS_CFUNC_DEF("set_minimum_width", 2, &native_menu_class_set_minimum_width),
	JS_CFUNC_DEF("get_minimum_width", 1, &native_menu_class_get_minimum_width),
	JS_CFUNC_DEF("is_opened", 1, &native_menu_class_is_opened),
	JS_CFUNC_DEF("add_submenu_item", 5, &native_menu_class_add_submenu_item),
	JS_CFUNC_DEF("add_item", 7, &native_menu_class_add_item),
	JS_CFUNC_DEF("add_check_item", 7, &native_menu_class_add_check_item),
	JS_CFUNC_DEF("add_icon_item", 8, &native_menu_class_add_icon_item),
	JS_CFUNC_DEF("add_icon_check_item", 8, &native_menu_class_add_icon_check_item),
	JS_CFUNC_DEF("add_radio_check_item", 7, &native_menu_class_add_radio_check_item),
	JS_CFUNC_DEF("add_icon_radio_check_item", 8, &native_menu_class_add_icon_radio_check_item),
	JS_CFUNC_DEF("add_multistate_item", 9, &native_menu_class_add_multistate_item),
	JS_CFUNC_DEF("add_separator", 2, &native_menu_class_add_separator),
	JS_CFUNC_DEF("find_item_index_with_text", 2, &native_menu_class_find_item_index_with_text),
	JS_CFUNC_DEF("find_item_index_with_tag", 2, &native_menu_class_find_item_index_with_tag),
	JS_CFUNC_DEF("find_item_index_with_submenu", 2, &native_menu_class_find_item_index_with_submenu),
	JS_CFUNC_DEF("is_item_checked", 2, &native_menu_class_is_item_checked),
	JS_CFUNC_DEF("is_item_checkable", 2, &native_menu_class_is_item_checkable),
	JS_CFUNC_DEF("is_item_radio_checkable", 2, &native_menu_class_is_item_radio_checkable),
	JS_CFUNC_DEF("get_item_callback", 2, &native_menu_class_get_item_callback),
	JS_CFUNC_DEF("get_item_key_callback", 2, &native_menu_class_get_item_key_callback),
	JS_CFUNC_DEF("get_item_tag", 2, &native_menu_class_get_item_tag),
	JS_CFUNC_DEF("get_item_text", 2, &native_menu_class_get_item_text),
	JS_CFUNC_DEF("get_item_submenu", 2, &native_menu_class_get_item_submenu),
	JS_CFUNC_DEF("get_item_accelerator", 2, &native_menu_class_get_item_accelerator),
	JS_CFUNC_DEF("is_item_disabled", 2, &native_menu_class_is_item_disabled),
	JS_CFUNC_DEF("is_item_hidden", 2, &native_menu_class_is_item_hidden),
	JS_CFUNC_DEF("get_item_tooltip", 2, &native_menu_class_get_item_tooltip),
	JS_CFUNC_DEF("get_item_state", 2, &native_menu_class_get_item_state),
	JS_CFUNC_DEF("get_item_max_states", 2, &native_menu_class_get_item_max_states),
	JS_CFUNC_DEF("get_item_icon", 2, &native_menu_class_get_item_icon),
	JS_CFUNC_DEF("get_item_indentation_level", 2, &native_menu_class_get_item_indentation_level),
	JS_CFUNC_DEF("set_item_checked", 3, &native_menu_class_set_item_checked),
	JS_CFUNC_DEF("set_item_checkable", 3, &native_menu_class_set_item_checkable),
	JS_CFUNC_DEF("set_item_radio_checkable", 3, &native_menu_class_set_item_radio_checkable),
	JS_CFUNC_DEF("set_item_callback", 3, &native_menu_class_set_item_callback),
	JS_CFUNC_DEF("set_item_hover_callbacks", 3, &native_menu_class_set_item_hover_callbacks),
	JS_CFUNC_DEF("set_item_key_callback", 3, &native_menu_class_set_item_key_callback),
	JS_CFUNC_DEF("set_item_tag", 3, &native_menu_class_set_item_tag),
	JS_CFUNC_DEF("set_item_text", 3, &native_menu_class_set_item_text),
	JS_CFUNC_DEF("set_item_submenu", 3, &native_menu_class_set_item_submenu),
	JS_CFUNC_DEF("set_item_accelerator", 3, &native_menu_class_set_item_accelerator),
	JS_CFUNC_DEF("set_item_disabled", 3, &native_menu_class_set_item_disabled),
	JS_CFUNC_DEF("set_item_hidden", 3, &native_menu_class_set_item_hidden),
	JS_CFUNC_DEF("set_item_tooltip", 3, &native_menu_class_set_item_tooltip),
	JS_CFUNC_DEF("set_item_state", 3, &native_menu_class_set_item_state),
	JS_CFUNC_DEF("set_item_max_states", 3, &native_menu_class_set_item_max_states),
	JS_CFUNC_DEF("set_item_icon", 3, &native_menu_class_set_item_icon),
	JS_CFUNC_DEF("set_item_indentation_level", 3, &native_menu_class_set_item_indentation_level),
	JS_CFUNC_DEF("get_item_count", 1, &native_menu_class_get_item_count),
	JS_CFUNC_DEF("is_system_menu", 1, &native_menu_class_is_system_menu),
	JS_CFUNC_DEF("remove_item", 2, &native_menu_class_remove_item),
	JS_CFUNC_DEF("clear", 1, &native_menu_class_clear),
};

static int js_native_menu_class_init(JSContext *ctx) {
	JS_NewClassID(&NativeMenu::__class_id);
	classes["NativeMenu"] = NativeMenu::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NativeMenu::__class_id, &native_menu_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NativeMenu::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, native_menu_class_proto_funcs, _countof(native_menu_class_proto_funcs));
	return 0;
}

static void js_native_menu_singleton() {
	if (JS_IsUninitialized(native_menu_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		native_menu_instance = native_menu_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "NativeMenu", native_menu_instance);
	}
}


void register_native_menu() {
	js_native_menu_class_init(ctx);
}