
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/style_box_texture.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void style_box_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	StyleBoxTexture *style_box_texture = static_cast<StyleBoxTexture *>(JS_GetOpaque(val, StyleBoxTexture::__class_id));
	if (style_box_texture)
		StyleBoxTexture::free(nullptr, style_box_texture);
}

static JSClassDef style_box_texture_class_def = {
	"StyleBoxTexture",
	.finalizer = style_box_texture_class_finalizer
};

static JSValue style_box_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StyleBoxTexture *style_box_texture_class;
	JSValue obj = JS_NewObjectClass(ctx, StyleBoxTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	style_box_texture_class = memnew(StyleBoxTexture);
	if (!style_box_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, style_box_texture_class);
	return obj;
}
static JSValue style_box_texture_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_texture, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_texture, StyleBoxTexture::__class_id, ctx, this_val, argv);
};
static JSValue style_box_texture_class_set_texture_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_texture_margin, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_set_texture_margin_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_texture_margin_all, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_texture_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_texture_margin, StyleBoxTexture::__class_id, ctx, this_val, argv);
};
static JSValue style_box_texture_class_set_expand_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_expand_margin, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_set_expand_margin_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_expand_margin_all, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_expand_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_expand_margin, StyleBoxTexture::__class_id, ctx, this_val, argv);
};
static JSValue style_box_texture_class_set_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_region_rect, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_region_rect, StyleBoxTexture::__class_id, ctx, this_val, argv);
};
static JSValue style_box_texture_class_set_draw_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_draw_center, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_is_draw_center_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::is_draw_center_enabled, StyleBoxTexture::__class_id, ctx, this_val, argv);
};
static JSValue style_box_texture_class_set_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_modulate, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_modulate, StyleBoxTexture::__class_id, ctx, this_val, argv);
};
static JSValue style_box_texture_class_set_h_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_h_axis_stretch_mode, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_h_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_h_axis_stretch_mode, StyleBoxTexture::__class_id, ctx, this_val, argv);
};
static JSValue style_box_texture_class_set_v_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_v_axis_stretch_mode, StyleBoxTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_v_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_v_axis_stretch_mode, StyleBoxTexture::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry style_box_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &style_box_texture_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &style_box_texture_class_get_texture),
	JS_CFUNC_DEF("set_texture_margin", 2, &style_box_texture_class_set_texture_margin),
	JS_CFUNC_DEF("set_texture_margin_all", 1, &style_box_texture_class_set_texture_margin_all),
	JS_CFUNC_DEF("get_texture_margin", 1, &style_box_texture_class_get_texture_margin),
	JS_CFUNC_DEF("set_expand_margin", 2, &style_box_texture_class_set_expand_margin),
	JS_CFUNC_DEF("set_expand_margin_all", 1, &style_box_texture_class_set_expand_margin_all),
	JS_CFUNC_DEF("get_expand_margin", 1, &style_box_texture_class_get_expand_margin),
	JS_CFUNC_DEF("set_region_rect", 1, &style_box_texture_class_set_region_rect),
	JS_CFUNC_DEF("get_region_rect", 0, &style_box_texture_class_get_region_rect),
	JS_CFUNC_DEF("set_draw_center", 1, &style_box_texture_class_set_draw_center),
	JS_CFUNC_DEF("is_draw_center_enabled", 0, &style_box_texture_class_is_draw_center_enabled),
	JS_CFUNC_DEF("set_modulate", 1, &style_box_texture_class_set_modulate),
	JS_CFUNC_DEF("get_modulate", 0, &style_box_texture_class_get_modulate),
	JS_CFUNC_DEF("set_h_axis_stretch_mode", 1, &style_box_texture_class_set_h_axis_stretch_mode),
	JS_CFUNC_DEF("get_h_axis_stretch_mode", 0, &style_box_texture_class_get_h_axis_stretch_mode),
	JS_CFUNC_DEF("set_v_axis_stretch_mode", 1, &style_box_texture_class_set_v_axis_stretch_mode),
	JS_CFUNC_DEF("get_v_axis_stretch_mode", 0, &style_box_texture_class_get_v_axis_stretch_mode),
};

static int js_style_box_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StyleBoxTexture::__class_id);
	classes["StyleBoxTexture"] = StyleBoxTexture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StyleBoxTexture::__class_id, &style_box_texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, StyleBox::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StyleBoxTexture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, style_box_texture_class_proto_funcs, _countof(style_box_texture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, style_box_texture_class_constructor, "StyleBoxTexture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StyleBoxTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_style_box_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_style_box_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StyleBoxTexture");
	return m;
}

JSModuleDef *js_init_style_box_texture_module(JSContext *ctx) {
	return _js_init_style_box_texture_module(ctx, "godot/classes/style_box_texture");
}

void register_style_box_texture() {
	js_init_style_box_texture_module(ctx);
}