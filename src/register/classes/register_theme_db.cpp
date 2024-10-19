
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/theme_db.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue theme_db_instance;

static void js_theme_db_singleton();

static void theme_db_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef theme_db_class_def = {
	"ThemeDB",
	.finalizer = theme_db_class_finalizer
};

static JSValue theme_db_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ThemeDB *theme_db_class;
	JSValue obj = JS_NewObjectClass(ctx, ThemeDB::__class_id);
	if (JS_IsException(obj))
		return obj;
	theme_db_class = ThemeDB::get_singleton();
	if (!theme_db_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, theme_db_class);
	return obj;
}
static JSValue theme_db_class_get_default_theme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
	return call_builtin_method_ret(&ThemeDB::get_default_theme, ctx, this_val, argc, argv);
};
static JSValue theme_db_class_get_project_theme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
	return call_builtin_method_ret(&ThemeDB::get_project_theme, ctx, this_val, argc, argv);
};
static JSValue theme_db_class_set_fallback_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
    call_builtin_method_no_ret(&ThemeDB::set_fallback_base_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
	return call_builtin_method_ret(&ThemeDB::get_fallback_base_scale, ctx, this_val, argc, argv);
};
static JSValue theme_db_class_set_fallback_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
    call_builtin_method_no_ret(&ThemeDB::set_fallback_font, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
	return call_builtin_method_ret(&ThemeDB::get_fallback_font, ctx, this_val, argc, argv);
};
static JSValue theme_db_class_set_fallback_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
    call_builtin_method_no_ret(&ThemeDB::set_fallback_font_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
	return call_builtin_method_ret(&ThemeDB::get_fallback_font_size, ctx, this_val, argc, argv);
};
static JSValue theme_db_class_set_fallback_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
    call_builtin_method_no_ret(&ThemeDB::set_fallback_icon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
	return call_builtin_method_ret(&ThemeDB::get_fallback_icon, ctx, this_val, argc, argv);
};
static JSValue theme_db_class_set_fallback_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
    call_builtin_method_no_ret(&ThemeDB::set_fallback_stylebox, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_theme_db_singleton();
	return call_builtin_method_ret(&ThemeDB::get_fallback_stylebox, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry theme_db_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_default_theme", 0, &theme_db_class_get_default_theme),
	JS_CFUNC_DEF("get_project_theme", 0, &theme_db_class_get_project_theme),
	JS_CFUNC_DEF("set_fallback_base_scale", 1, &theme_db_class_set_fallback_base_scale),
	JS_CFUNC_DEF("get_fallback_base_scale", 0, &theme_db_class_get_fallback_base_scale),
	JS_CFUNC_DEF("set_fallback_font", 1, &theme_db_class_set_fallback_font),
	JS_CFUNC_DEF("get_fallback_font", 0, &theme_db_class_get_fallback_font),
	JS_CFUNC_DEF("set_fallback_font_size", 1, &theme_db_class_set_fallback_font_size),
	JS_CFUNC_DEF("get_fallback_font_size", 0, &theme_db_class_get_fallback_font_size),
	JS_CFUNC_DEF("set_fallback_icon", 1, &theme_db_class_set_fallback_icon),
	JS_CFUNC_DEF("get_fallback_icon", 0, &theme_db_class_get_fallback_icon),
	JS_CFUNC_DEF("set_fallback_stylebox", 1, &theme_db_class_set_fallback_stylebox),
	JS_CFUNC_DEF("get_fallback_stylebox", 0, &theme_db_class_get_fallback_stylebox),
};

static int js_theme_db_class_init(JSContext *ctx) {
	JS_NewClassID(&ThemeDB::__class_id);
	classes["ThemeDB"] = ThemeDB::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ThemeDB::__class_id, &theme_db_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ThemeDB::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, theme_db_class_proto_funcs, _countof(theme_db_class_proto_funcs));
	return 0;
}

static void js_theme_db_singleton() {
	if (JS_IsUninitialized(theme_db_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		theme_db_instance = theme_db_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "ThemeDB", theme_db_instance);
	}
}


void register_theme_db() {
	js_theme_db_class_init(ctx);
}