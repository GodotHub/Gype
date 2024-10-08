
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/style_box_flat.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void style_box_flat_class_finalizer(JSRuntime *rt, JSValue val) {
	StyleBoxFlat *style_box_flat = static_cast<StyleBoxFlat *>(JS_GetOpaque(val, StyleBoxFlat::__class_id));
	if (style_box_flat)
		StyleBoxFlat::free(nullptr, style_box_flat);
}

static JSClassDef style_box_flat_class_def = {
	"StyleBoxFlat",
	.finalizer = style_box_flat_class_finalizer
};

static JSValue style_box_flat_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StyleBoxFlat *style_box_flat_class;
	JSValue obj = JS_NewObjectClass(ctx, StyleBoxFlat::__class_id);
	if (JS_IsException(obj))
		return obj;
	style_box_flat_class = memnew(StyleBoxFlat);
	if (!style_box_flat_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, style_box_flat_class);
	return obj;
}
static JSValue style_box_flat_class_set_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_bg_color, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_bg_color, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_border_color, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_border_color, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_border_width_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_border_width_all, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_border_width_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_border_width_min, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_border_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_border_width, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_border_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_border_width, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_border_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_border_blend, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_border_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_border_blend, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_corner_radius_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_corner_radius_all, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_set_corner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_corner_radius, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_corner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_corner_radius, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_expand_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_expand_margin, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_set_expand_margin_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_expand_margin_all, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_expand_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_expand_margin, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_draw_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_draw_center, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_is_draw_center_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::is_draw_center_enabled, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_skew, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_skew, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_shadow_color, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_shadow_color, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_shadow_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_shadow_size, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_shadow_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_shadow_size, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_shadow_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_shadow_offset, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_shadow_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_shadow_offset, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_anti_aliased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_anti_aliased, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_is_anti_aliased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::is_anti_aliased, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_aa_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_aa_size, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_aa_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_aa_size, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static JSValue style_box_flat_class_set_corner_detail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxFlat::set_corner_detail, StyleBoxFlat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_flat_class_get_corner_detail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxFlat::get_corner_detail, StyleBoxFlat::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry style_box_flat_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_bg_color", 1, &style_box_flat_class_set_bg_color),
	JS_CFUNC_DEF("get_bg_color", 0, &style_box_flat_class_get_bg_color),
	JS_CFUNC_DEF("set_border_color", 1, &style_box_flat_class_set_border_color),
	JS_CFUNC_DEF("get_border_color", 0, &style_box_flat_class_get_border_color),
	JS_CFUNC_DEF("set_border_width_all", 1, &style_box_flat_class_set_border_width_all),
	JS_CFUNC_DEF("get_border_width_min", 0, &style_box_flat_class_get_border_width_min),
	JS_CFUNC_DEF("set_border_width", 2, &style_box_flat_class_set_border_width),
	JS_CFUNC_DEF("get_border_width", 1, &style_box_flat_class_get_border_width),
	JS_CFUNC_DEF("set_border_blend", 1, &style_box_flat_class_set_border_blend),
	JS_CFUNC_DEF("get_border_blend", 0, &style_box_flat_class_get_border_blend),
	JS_CFUNC_DEF("set_corner_radius_all", 1, &style_box_flat_class_set_corner_radius_all),
	JS_CFUNC_DEF("set_corner_radius", 2, &style_box_flat_class_set_corner_radius),
	JS_CFUNC_DEF("get_corner_radius", 1, &style_box_flat_class_get_corner_radius),
	JS_CFUNC_DEF("set_expand_margin", 2, &style_box_flat_class_set_expand_margin),
	JS_CFUNC_DEF("set_expand_margin_all", 1, &style_box_flat_class_set_expand_margin_all),
	JS_CFUNC_DEF("get_expand_margin", 1, &style_box_flat_class_get_expand_margin),
	JS_CFUNC_DEF("set_draw_center", 1, &style_box_flat_class_set_draw_center),
	JS_CFUNC_DEF("is_draw_center_enabled", 0, &style_box_flat_class_is_draw_center_enabled),
	JS_CFUNC_DEF("set_skew", 1, &style_box_flat_class_set_skew),
	JS_CFUNC_DEF("get_skew", 0, &style_box_flat_class_get_skew),
	JS_CFUNC_DEF("set_shadow_color", 1, &style_box_flat_class_set_shadow_color),
	JS_CFUNC_DEF("get_shadow_color", 0, &style_box_flat_class_get_shadow_color),
	JS_CFUNC_DEF("set_shadow_size", 1, &style_box_flat_class_set_shadow_size),
	JS_CFUNC_DEF("get_shadow_size", 0, &style_box_flat_class_get_shadow_size),
	JS_CFUNC_DEF("set_shadow_offset", 1, &style_box_flat_class_set_shadow_offset),
	JS_CFUNC_DEF("get_shadow_offset", 0, &style_box_flat_class_get_shadow_offset),
	JS_CFUNC_DEF("set_anti_aliased", 1, &style_box_flat_class_set_anti_aliased),
	JS_CFUNC_DEF("is_anti_aliased", 0, &style_box_flat_class_is_anti_aliased),
	JS_CFUNC_DEF("set_aa_size", 1, &style_box_flat_class_set_aa_size),
	JS_CFUNC_DEF("get_aa_size", 0, &style_box_flat_class_get_aa_size),
	JS_CFUNC_DEF("set_corner_detail", 1, &style_box_flat_class_set_corner_detail),
	JS_CFUNC_DEF("get_corner_detail", 0, &style_box_flat_class_get_corner_detail),
};

static int js_style_box_flat_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StyleBoxFlat::__class_id);
	classes["StyleBoxFlat"] = StyleBoxFlat::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StyleBoxFlat::__class_id, &style_box_flat_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, StyleBox::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StyleBoxFlat::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, style_box_flat_class_proto_funcs, _countof(style_box_flat_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, style_box_flat_class_constructor, "StyleBoxFlat", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StyleBoxFlat", ctor);

	return 0;
}

JSModuleDef *_js_init_style_box_flat_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_style_box_flat_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StyleBoxFlat");
	return m;
}

JSModuleDef *js_init_style_box_flat_module(JSContext *ctx) {
	return _js_init_style_box_flat_module(ctx, "godot/classes/style_box_flat");
}

void register_style_box_flat() {
	js_init_style_box_flat_module(ctx);
}