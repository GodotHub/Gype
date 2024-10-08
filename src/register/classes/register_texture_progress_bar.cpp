
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture_progress_bar.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void texture_progress_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	TextureProgressBar *texture_progress_bar = static_cast<TextureProgressBar *>(JS_GetOpaque(val, TextureProgressBar::__class_id));
	if (texture_progress_bar)
		TextureProgressBar::free(nullptr, texture_progress_bar);
}

static JSClassDef texture_progress_bar_class_def = {
	"TextureProgressBar",
	.finalizer = texture_progress_bar_class_finalizer
};

static JSValue texture_progress_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextureProgressBar *texture_progress_bar_class;
	JSValue obj = JS_NewObjectClass(ctx, TextureProgressBar::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture_progress_bar_class = memnew(TextureProgressBar);
	if (!texture_progress_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture_progress_bar_class);
	return obj;
}
static JSValue texture_progress_bar_class_set_under_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_under_texture, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_under_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureProgressBar::get_under_texture, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_progress_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_progress_texture, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_progress_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureProgressBar::get_progress_texture, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_over_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_over_texture, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_over_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureProgressBar::get_over_texture, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_fill_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_fill_mode, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_fill_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextureProgressBar::get_fill_mode, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_tint_under(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_tint_under, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_tint_under(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureProgressBar::get_tint_under, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_tint_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_tint_progress, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_tint_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureProgressBar::get_tint_progress, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_tint_over(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_tint_over, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_tint_over(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureProgressBar::get_tint_over, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_texture_progress_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_texture_progress_offset, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_texture_progress_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureProgressBar::get_texture_progress_offset, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_radial_initial_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_radial_initial_angle, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_radial_initial_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextureProgressBar::get_radial_initial_angle, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_radial_center_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_radial_center_offset, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_radial_center_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextureProgressBar::get_radial_center_offset, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_fill_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_fill_degrees, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_fill_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextureProgressBar::get_fill_degrees, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_stretch_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_stretch_margin, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_stretch_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureProgressBar::get_stretch_margin, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue texture_progress_bar_class_set_nine_patch_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureProgressBar::set_nine_patch_stretch, TextureProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_nine_patch_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureProgressBar::get_nine_patch_stretch, TextureProgressBar::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry texture_progress_bar_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_under_texture", 1, &texture_progress_bar_class_set_under_texture),
	JS_CFUNC_DEF("get_under_texture", 0, &texture_progress_bar_class_get_under_texture),
	JS_CFUNC_DEF("set_progress_texture", 1, &texture_progress_bar_class_set_progress_texture),
	JS_CFUNC_DEF("get_progress_texture", 0, &texture_progress_bar_class_get_progress_texture),
	JS_CFUNC_DEF("set_over_texture", 1, &texture_progress_bar_class_set_over_texture),
	JS_CFUNC_DEF("get_over_texture", 0, &texture_progress_bar_class_get_over_texture),
	JS_CFUNC_DEF("set_fill_mode", 1, &texture_progress_bar_class_set_fill_mode),
	JS_CFUNC_DEF("get_fill_mode", 0, &texture_progress_bar_class_get_fill_mode),
	JS_CFUNC_DEF("set_tint_under", 1, &texture_progress_bar_class_set_tint_under),
	JS_CFUNC_DEF("get_tint_under", 0, &texture_progress_bar_class_get_tint_under),
	JS_CFUNC_DEF("set_tint_progress", 1, &texture_progress_bar_class_set_tint_progress),
	JS_CFUNC_DEF("get_tint_progress", 0, &texture_progress_bar_class_get_tint_progress),
	JS_CFUNC_DEF("set_tint_over", 1, &texture_progress_bar_class_set_tint_over),
	JS_CFUNC_DEF("get_tint_over", 0, &texture_progress_bar_class_get_tint_over),
	JS_CFUNC_DEF("set_texture_progress_offset", 1, &texture_progress_bar_class_set_texture_progress_offset),
	JS_CFUNC_DEF("get_texture_progress_offset", 0, &texture_progress_bar_class_get_texture_progress_offset),
	JS_CFUNC_DEF("set_radial_initial_angle", 1, &texture_progress_bar_class_set_radial_initial_angle),
	JS_CFUNC_DEF("get_radial_initial_angle", 0, &texture_progress_bar_class_get_radial_initial_angle),
	JS_CFUNC_DEF("set_radial_center_offset", 1, &texture_progress_bar_class_set_radial_center_offset),
	JS_CFUNC_DEF("get_radial_center_offset", 0, &texture_progress_bar_class_get_radial_center_offset),
	JS_CFUNC_DEF("set_fill_degrees", 1, &texture_progress_bar_class_set_fill_degrees),
	JS_CFUNC_DEF("get_fill_degrees", 0, &texture_progress_bar_class_get_fill_degrees),
	JS_CFUNC_DEF("set_stretch_margin", 2, &texture_progress_bar_class_set_stretch_margin),
	JS_CFUNC_DEF("get_stretch_margin", 1, &texture_progress_bar_class_get_stretch_margin),
	JS_CFUNC_DEF("set_nine_patch_stretch", 1, &texture_progress_bar_class_set_nine_patch_stretch),
	JS_CFUNC_DEF("get_nine_patch_stretch", 0, &texture_progress_bar_class_get_nine_patch_stretch),
};

static int js_texture_progress_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextureProgressBar::__class_id);
	classes["TextureProgressBar"] = TextureProgressBar::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextureProgressBar::__class_id, &texture_progress_bar_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureProgressBar::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture_progress_bar_class_proto_funcs, _countof(texture_progress_bar_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, texture_progress_bar_class_constructor, "TextureProgressBar", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextureProgressBar", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_progress_bar_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture_progress_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextureProgressBar");
	return m;
}

JSModuleDef *js_init_texture_progress_bar_module(JSContext *ctx) {
	return _js_init_texture_progress_bar_module(ctx, "godot/classes/texture_progress_bar");
}

void register_texture_progress_bar() {
	js_init_texture_progress_bar_module(ctx);
}