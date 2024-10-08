
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void theme_class_finalizer(JSRuntime *rt, JSValue val) {
	Theme *theme = static_cast<Theme *>(JS_GetOpaque(val, Theme::__class_id));
	if (theme)
		Theme::free(nullptr, theme);
}

static JSClassDef theme_class_def = {
	"Theme",
	.finalizer = theme_class_finalizer
};

static JSValue theme_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Theme *theme_class;
	JSValue obj = JS_NewObjectClass(ctx, Theme::__class_id);
	if (JS_IsException(obj))
		return obj;
	theme_class = memnew(Theme);
	if (!theme_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, theme_class);
	return obj;
}
static JSValue theme_class_set_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_icon, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_icon, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_icon, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_rename_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::rename_icon, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_clear_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::clear_icon, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_icon_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_icon_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_get_icon_type_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_icon_type_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_stylebox, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_stylebox, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_stylebox, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_rename_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::rename_stylebox, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_clear_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::clear_stylebox, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_stylebox_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_stylebox_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_get_stylebox_type_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_stylebox_type_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_font, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_font, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_font, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_rename_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::rename_font, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_clear_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::clear_font, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_font_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_font_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_get_font_type_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_font_type_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_font_size, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_font_size, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_font_size, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_rename_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::rename_font_size, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_clear_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::clear_font_size, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_font_size_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_font_size_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_get_font_size_type_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_font_size_type_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_color, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_color, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_color, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_rename_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::rename_color, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_clear_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::clear_color, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_color_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_color_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_get_color_type_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_color_type_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_constant, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_constant, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_constant, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_rename_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::rename_constant, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_clear_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::clear_constant, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_constant_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_constant_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_get_constant_type_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_constant_type_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_default_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_default_base_scale, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_default_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_default_base_scale, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_default_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_default_base_scale, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_default_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_default_font, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_default_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_default_font, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_default_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_default_font, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_default_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_default_font_size, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_default_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_default_font_size, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_default_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_default_font_size, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_theme_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_theme_item, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_theme_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_theme_item, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_has_theme_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::has_theme_item, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_rename_theme_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::rename_theme_item, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_clear_theme_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::clear_theme_item, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_theme_item_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_theme_item_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_get_theme_item_type_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_theme_item_type_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_set_type_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::set_type_variation, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_is_type_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::is_type_variation, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_clear_type_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::clear_type_variation, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_type_variation_base(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_type_variation_base, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_get_type_variation_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_type_variation_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_add_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::add_type, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_remove_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::remove_type, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_get_type_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Theme::get_type_list, Theme::__class_id, ctx, this_val, argv);
};
static JSValue theme_class_merge_with(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::merge_with, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue theme_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Theme::clear, Theme::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry theme_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_icon", 3, &theme_class_set_icon),
	JS_CFUNC_DEF("get_icon", 2, &theme_class_get_icon),
	JS_CFUNC_DEF("has_icon", 2, &theme_class_has_icon),
	JS_CFUNC_DEF("rename_icon", 3, &theme_class_rename_icon),
	JS_CFUNC_DEF("clear_icon", 2, &theme_class_clear_icon),
	JS_CFUNC_DEF("get_icon_list", 1, &theme_class_get_icon_list),
	JS_CFUNC_DEF("get_icon_type_list", 0, &theme_class_get_icon_type_list),
	JS_CFUNC_DEF("set_stylebox", 3, &theme_class_set_stylebox),
	JS_CFUNC_DEF("get_stylebox", 2, &theme_class_get_stylebox),
	JS_CFUNC_DEF("has_stylebox", 2, &theme_class_has_stylebox),
	JS_CFUNC_DEF("rename_stylebox", 3, &theme_class_rename_stylebox),
	JS_CFUNC_DEF("clear_stylebox", 2, &theme_class_clear_stylebox),
	JS_CFUNC_DEF("get_stylebox_list", 1, &theme_class_get_stylebox_list),
	JS_CFUNC_DEF("get_stylebox_type_list", 0, &theme_class_get_stylebox_type_list),
	JS_CFUNC_DEF("set_font", 3, &theme_class_set_font),
	JS_CFUNC_DEF("get_font", 2, &theme_class_get_font),
	JS_CFUNC_DEF("has_font", 2, &theme_class_has_font),
	JS_CFUNC_DEF("rename_font", 3, &theme_class_rename_font),
	JS_CFUNC_DEF("clear_font", 2, &theme_class_clear_font),
	JS_CFUNC_DEF("get_font_list", 1, &theme_class_get_font_list),
	JS_CFUNC_DEF("get_font_type_list", 0, &theme_class_get_font_type_list),
	JS_CFUNC_DEF("set_font_size", 3, &theme_class_set_font_size),
	JS_CFUNC_DEF("get_font_size", 2, &theme_class_get_font_size),
	JS_CFUNC_DEF("has_font_size", 2, &theme_class_has_font_size),
	JS_CFUNC_DEF("rename_font_size", 3, &theme_class_rename_font_size),
	JS_CFUNC_DEF("clear_font_size", 2, &theme_class_clear_font_size),
	JS_CFUNC_DEF("get_font_size_list", 1, &theme_class_get_font_size_list),
	JS_CFUNC_DEF("get_font_size_type_list", 0, &theme_class_get_font_size_type_list),
	JS_CFUNC_DEF("set_color", 3, &theme_class_set_color),
	JS_CFUNC_DEF("get_color", 2, &theme_class_get_color),
	JS_CFUNC_DEF("has_color", 2, &theme_class_has_color),
	JS_CFUNC_DEF("rename_color", 3, &theme_class_rename_color),
	JS_CFUNC_DEF("clear_color", 2, &theme_class_clear_color),
	JS_CFUNC_DEF("get_color_list", 1, &theme_class_get_color_list),
	JS_CFUNC_DEF("get_color_type_list", 0, &theme_class_get_color_type_list),
	JS_CFUNC_DEF("set_constant", 3, &theme_class_set_constant),
	JS_CFUNC_DEF("get_constant", 2, &theme_class_get_constant),
	JS_CFUNC_DEF("has_constant", 2, &theme_class_has_constant),
	JS_CFUNC_DEF("rename_constant", 3, &theme_class_rename_constant),
	JS_CFUNC_DEF("clear_constant", 2, &theme_class_clear_constant),
	JS_CFUNC_DEF("get_constant_list", 1, &theme_class_get_constant_list),
	JS_CFUNC_DEF("get_constant_type_list", 0, &theme_class_get_constant_type_list),
	JS_CFUNC_DEF("set_default_base_scale", 1, &theme_class_set_default_base_scale),
	JS_CFUNC_DEF("get_default_base_scale", 0, &theme_class_get_default_base_scale),
	JS_CFUNC_DEF("has_default_base_scale", 0, &theme_class_has_default_base_scale),
	JS_CFUNC_DEF("set_default_font", 1, &theme_class_set_default_font),
	JS_CFUNC_DEF("get_default_font", 0, &theme_class_get_default_font),
	JS_CFUNC_DEF("has_default_font", 0, &theme_class_has_default_font),
	JS_CFUNC_DEF("set_default_font_size", 1, &theme_class_set_default_font_size),
	JS_CFUNC_DEF("get_default_font_size", 0, &theme_class_get_default_font_size),
	JS_CFUNC_DEF("has_default_font_size", 0, &theme_class_has_default_font_size),
	JS_CFUNC_DEF("set_theme_item", 4, &theme_class_set_theme_item),
	JS_CFUNC_DEF("get_theme_item", 3, &theme_class_get_theme_item),
	JS_CFUNC_DEF("has_theme_item", 3, &theme_class_has_theme_item),
	JS_CFUNC_DEF("rename_theme_item", 4, &theme_class_rename_theme_item),
	JS_CFUNC_DEF("clear_theme_item", 3, &theme_class_clear_theme_item),
	JS_CFUNC_DEF("get_theme_item_list", 2, &theme_class_get_theme_item_list),
	JS_CFUNC_DEF("get_theme_item_type_list", 1, &theme_class_get_theme_item_type_list),
	JS_CFUNC_DEF("set_type_variation", 2, &theme_class_set_type_variation),
	JS_CFUNC_DEF("is_type_variation", 2, &theme_class_is_type_variation),
	JS_CFUNC_DEF("clear_type_variation", 1, &theme_class_clear_type_variation),
	JS_CFUNC_DEF("get_type_variation_base", 1, &theme_class_get_type_variation_base),
	JS_CFUNC_DEF("get_type_variation_list", 1, &theme_class_get_type_variation_list),
	JS_CFUNC_DEF("add_type", 1, &theme_class_add_type),
	JS_CFUNC_DEF("remove_type", 1, &theme_class_remove_type),
	JS_CFUNC_DEF("get_type_list", 0, &theme_class_get_type_list),
	JS_CFUNC_DEF("merge_with", 1, &theme_class_merge_with),
	JS_CFUNC_DEF("clear", 0, &theme_class_clear),
};

static int js_theme_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Theme::__class_id);
	classes["Theme"] = Theme::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Theme::__class_id, &theme_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Theme::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, theme_class_proto_funcs, _countof(theme_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, theme_class_constructor, "Theme", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Theme", ctor);

	return 0;
}

JSModuleDef *_js_init_theme_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_theme_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Theme");
	return m;
}

JSModuleDef *js_init_theme_module(JSContext *ctx) {
	return _js_init_theme_module(ctx, "godot/classes/theme");
}

void register_theme() {
	js_init_theme_module(ctx);
}