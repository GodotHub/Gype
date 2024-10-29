
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/menu_bar.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void menu_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef menu_bar_class_def = {
	"MenuBar",
	.finalizer = menu_bar_class_finalizer
};

static JSValue menu_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MenuBar::__class_id);
	if (JS_IsException(obj))
		return obj;
	MenuBar *menu_bar_class = memnew(MenuBar);
	if (!menu_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, menu_bar_class);	
	return obj;
}
static JSValue menu_bar_class_set_switch_on_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_switch_on_hover, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_is_switch_on_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MenuBar::is_switch_on_hover, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_set_disable_shortcuts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_disable_shortcuts, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_set_prefer_global_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_prefer_global_menu, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_is_prefer_global_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::is_prefer_global_menu, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_is_native_menu(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::is_native_menu, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_get_menu_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::get_menu_count, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_text_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::get_text_direction, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_language, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::get_language, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_set_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_flat, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_is_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::is_flat, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_set_start_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_start_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_get_start_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::get_start_index, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_set_menu_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_menu_title, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_get_menu_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::get_menu_title, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_set_menu_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_menu_tooltip, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_get_menu_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::get_menu_tooltip, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_set_menu_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_menu_disabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_is_menu_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::is_menu_disabled, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_set_menu_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MenuBar::set_menu_hidden, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue menu_bar_class_is_menu_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::is_menu_hidden, ctx, this_val, argc, argv);
};
static JSValue menu_bar_class_get_menu_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MenuBar::get_menu_popup, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry menu_bar_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_switch_on_hover", 1, &menu_bar_class_set_switch_on_hover),
	JS_CFUNC_DEF("is_switch_on_hover", 0, &menu_bar_class_is_switch_on_hover),
	JS_CFUNC_DEF("set_disable_shortcuts", 1, &menu_bar_class_set_disable_shortcuts),
	JS_CFUNC_DEF("set_prefer_global_menu", 1, &menu_bar_class_set_prefer_global_menu),
	JS_CFUNC_DEF("is_prefer_global_menu", 0, &menu_bar_class_is_prefer_global_menu),
	JS_CFUNC_DEF("is_native_menu", 0, &menu_bar_class_is_native_menu),
	JS_CFUNC_DEF("get_menu_count", 0, &menu_bar_class_get_menu_count),
	JS_CFUNC_DEF("set_text_direction", 1, &menu_bar_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &menu_bar_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &menu_bar_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &menu_bar_class_get_language),
	JS_CFUNC_DEF("set_flat", 1, &menu_bar_class_set_flat),
	JS_CFUNC_DEF("is_flat", 0, &menu_bar_class_is_flat),
	JS_CFUNC_DEF("set_start_index", 1, &menu_bar_class_set_start_index),
	JS_CFUNC_DEF("get_start_index", 0, &menu_bar_class_get_start_index),
	JS_CFUNC_DEF("set_menu_title", 2, &menu_bar_class_set_menu_title),
	JS_CFUNC_DEF("get_menu_title", 1, &menu_bar_class_get_menu_title),
	JS_CFUNC_DEF("set_menu_tooltip", 2, &menu_bar_class_set_menu_tooltip),
	JS_CFUNC_DEF("get_menu_tooltip", 1, &menu_bar_class_get_menu_tooltip),
	JS_CFUNC_DEF("set_menu_disabled", 2, &menu_bar_class_set_menu_disabled),
	JS_CFUNC_DEF("is_menu_disabled", 1, &menu_bar_class_is_menu_disabled),
	JS_CFUNC_DEF("set_menu_hidden", 2, &menu_bar_class_set_menu_hidden),
	JS_CFUNC_DEF("is_menu_hidden", 1, &menu_bar_class_is_menu_hidden),
	JS_CFUNC_DEF("get_menu_popup", 1, &menu_bar_class_get_menu_popup),
};

void define_menu_bar_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flat"),
        JS_NewCFunction(ctx, menu_bar_class_is_flat, "is_flat", 0),
        JS_NewCFunction(ctx, menu_bar_class_set_flat, "set_flat", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "start_index"),
        JS_NewCFunction(ctx, menu_bar_class_get_start_index, "get_start_index", 0),
        JS_NewCFunction(ctx, menu_bar_class_set_start_index, "set_start_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "switch_on_hover"),
        JS_NewCFunction(ctx, menu_bar_class_is_switch_on_hover, "is_switch_on_hover", 0),
        JS_NewCFunction(ctx, menu_bar_class_set_switch_on_hover, "set_switch_on_hover", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "prefer_global_menu"),
        JS_NewCFunction(ctx, menu_bar_class_is_prefer_global_menu, "is_prefer_global_menu", 0),
        JS_NewCFunction(ctx, menu_bar_class_set_prefer_global_menu, "set_prefer_global_menu", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "text_direction"),
        JS_NewCFunction(ctx, menu_bar_class_get_text_direction, "get_text_direction", 0),
        JS_NewCFunction(ctx, menu_bar_class_set_text_direction, "set_text_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "language"),
        JS_NewCFunction(ctx, menu_bar_class_get_language, "get_language", 0),
        JS_NewCFunction(ctx, menu_bar_class_set_language, "set_language", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_menu_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MenuBar::__class_id);
	classes["MenuBar"] = MenuBar::__class_id;
	class_id_list.insert(MenuBar::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MenuBar::__class_id, &menu_bar_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MenuBar::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MenuBar::__class_id, proto);

	define_menu_bar_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, menu_bar_class_proto_funcs, _countof(menu_bar_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, menu_bar_class_constructor, "MenuBar", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MenuBar", ctor);

	return 0;
}

JSModuleDef *_js_init_menu_bar_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_menu_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MenuBar");
	return m;
}

JSModuleDef *js_init_menu_bar_module(JSContext *ctx) {
	return _js_init_menu_bar_module(ctx, "@godot/classes/menu_bar");
}

void register_menu_bar() {
	MenuBar::__init_js_class_id();
	js_init_menu_bar_module(ctx);
}