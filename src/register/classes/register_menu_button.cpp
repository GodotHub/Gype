
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/menu_button.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void menu_button_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef menu_button_class_def = {
	"MenuButton",
	.finalizer = menu_button_class_finalizer
};

static JSValue menu_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MenuButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	MenuButton *menu_button_class = memnew(MenuButton);
	if (!menu_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, menu_button_class);	
	return obj;
}
static JSValue menu_button_class_get_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuButton::get_popup, ctx, this_val, argc, argv);
};
static JSValue menu_button_class_show_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuButton::show_popup, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_button_class_set_switch_on_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuButton::set_switch_on_hover, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_button_class_is_switch_on_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MenuButton::is_switch_on_hover, ctx, this_val, argc, argv);
};
static JSValue menu_button_class_set_disable_shortcuts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuButton::set_disable_shortcuts, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_button_class_set_item_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuButton::set_item_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_button_class_get_item_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuButton::get_item_count, ctx, this_val, argc, argv);
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

void define_menu_button_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "switch_on_hover"),
        JS_NewCFunction(ctx, menu_button_class_is_switch_on_hover, "is_switch_on_hover", 0),
        JS_NewCFunction(ctx, menu_button_class_set_switch_on_hover, "set_switch_on_hover", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "item_count"),
        JS_NewCFunction(ctx, menu_button_class_get_item_count, "get_item_count", 0),
        JS_NewCFunction(ctx, menu_button_class_set_item_count, "set_item_count", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_menu_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MenuButton::__class_id);
	classes["MenuButton"] = MenuButton::__class_id;
	class_id_list.insert(MenuButton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MenuButton::__class_id, &menu_button_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MenuButton::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Button::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MenuButton::__class_id, proto);

	define_menu_button_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, menu_button_class_proto_funcs, _countof(menu_button_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, menu_button_class_constructor, "MenuButton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MenuButton", ctor);

	return 0;
}

JSModuleDef *_js_init_menu_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/button';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	MenuButton::__init_js_class_id();
	js_init_menu_button_module(ctx);
}