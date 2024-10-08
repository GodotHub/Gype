
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/menu_button.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void menu_button_class_finalizer(JSRuntime *rt, JSValue val) {
	MenuButton *menu_button = static_cast<MenuButton *>(JS_GetOpaque(val, MenuButton::__class_id));
	if (menu_button)
		MenuButton::free(nullptr, menu_button);
}

static JSClassDef menu_button_class_def = {
	"MenuButton",
	.finalizer = menu_button_class_finalizer
};

static JSValue menu_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MenuButton *menu_button_class;
	JSValue obj = JS_NewObjectClass(ctx, MenuButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	menu_button_class = memnew(MenuButton);
	if (!menu_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, menu_button_class);
	return obj;
}
static JSValue menu_button_class_get_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MenuButton::get_popup, MenuButton::__class_id, ctx, this_val, argv);
};
static JSValue menu_button_class_show_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MenuButton::show_popup, MenuButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue menu_button_class_set_switch_on_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MenuButton::set_switch_on_hover, MenuButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue menu_button_class_is_switch_on_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&MenuButton::is_switch_on_hover, MenuButton::__class_id, ctx, this_val, argv);
};
static JSValue menu_button_class_set_disable_shortcuts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MenuButton::set_disable_shortcuts, MenuButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue menu_button_class_set_item_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&MenuButton::set_item_count, MenuButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue menu_button_class_get_item_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MenuButton::get_item_count, MenuButton::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry menu_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_popup", 0, &menu_button_class_get_popup),
	JS_CFUNC_DEF("show_popup", 0, &menu_button_class_show_popup),
	JS_CFUNC_DEF("set_switch_on_hover", 1, &menu_button_class_set_switch_on_hover),
	JS_CFUNC_DEF("is_switch_on_hover", 0, &menu_button_class_is_switch_on_hover),
	JS_CFUNC_DEF("set_disable_shortcuts", 1, &menu_button_class_set_disable_shortcuts),
	JS_CFUNC_DEF("set_item_count", 1, &menu_button_class_set_item_count),
	JS_CFUNC_DEF("get_item_count", 0, &menu_button_class_get_item_count),
};

static int js_menu_button_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MenuButton::__class_id);
	classes["MenuButton"] = MenuButton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MenuButton::__class_id, &menu_button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Button::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MenuButton::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, menu_button_class_proto_funcs, _countof(menu_button_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, menu_button_class_constructor, "MenuButton", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MenuButton", ctor);

	return 0;
}

JSModuleDef *_js_init_menu_button_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_menu_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MenuButton");
	return m;
}

JSModuleDef *js_init_menu_button_module(JSContext *ctx) {
	return _js_init_menu_button_module(ctx, "godot/classes/menu_button");
}

void register_menu_button() {
	js_init_menu_button_module(ctx);
}