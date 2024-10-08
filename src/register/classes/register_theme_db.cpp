
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/theme_db.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void theme_db_class_finalizer(JSRuntime *rt, JSValue val) {
	ThemeDB *theme_db = static_cast<ThemeDB *>(JS_GetOpaque(val, ThemeDB::__class_id));
	if (theme_db)
		ThemeDB::free(nullptr, theme_db);
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
	return call_builtin_method_ret(&ThemeDB::get_default_theme, ThemeDB::__class_id, ctx, this_val, argv);
};
static JSValue theme_db_class_get_project_theme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ThemeDB::get_project_theme, ThemeDB::__class_id, ctx, this_val, argv);
};
static JSValue theme_db_class_set_fallback_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ThemeDB::set_fallback_base_scale, ThemeDB::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ThemeDB::get_fallback_base_scale, ThemeDB::__class_id, ctx, this_val, argv);
};
static JSValue theme_db_class_set_fallback_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ThemeDB::set_fallback_font, ThemeDB::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ThemeDB::get_fallback_font, ThemeDB::__class_id, ctx, this_val, argv);
};
static JSValue theme_db_class_set_fallback_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ThemeDB::set_fallback_font_size, ThemeDB::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ThemeDB::get_fallback_font_size, ThemeDB::__class_id, ctx, this_val, argv);
};
static JSValue theme_db_class_set_fallback_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ThemeDB::set_fallback_icon, ThemeDB::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ThemeDB::get_fallback_icon, ThemeDB::__class_id, ctx, this_val, argv);
};
static JSValue theme_db_class_set_fallback_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ThemeDB::set_fallback_stylebox, ThemeDB::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_db_class_get_fallback_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ThemeDB::get_fallback_stylebox, ThemeDB::__class_id, ctx, this_val, argv);
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

static int js_theme_db_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ThemeDB::__class_id);
	classes["ThemeDB"] = ThemeDB::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ThemeDB::__class_id, &theme_db_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ThemeDB::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, theme_db_class_proto_funcs, _countof(theme_db_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, theme_db_class_constructor, "ThemeDB", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ThemeDB", ctor);

	return 0;
}

JSModuleDef *_js_init_theme_db_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_theme_db_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ThemeDB");
	return m;
}

JSModuleDef *js_init_theme_db_module(JSContext *ctx) {
	return _js_init_theme_db_module(ctx, "godot/classes/theme_db");
}

void register_theme_db() {
	js_init_theme_db_module(ctx);
}