
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/system_font.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void system_font_class_finalizer(JSRuntime *rt, JSValue val) {
	SystemFont *system_font = static_cast<SystemFont *>(JS_GetOpaque(val, SystemFont::__class_id));
	if (system_font)
		SystemFont::free(nullptr, system_font);
}

static JSClassDef system_font_class_def = {
	"SystemFont",
	.finalizer = system_font_class_finalizer
};

static JSValue system_font_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SystemFont *system_font_class;
	JSValue obj = JS_NewObjectClass(ctx, SystemFont::__class_id);
	if (JS_IsException(obj))
		return obj;
	system_font_class = memnew(SystemFont);
	if (!system_font_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, system_font_class);
	return obj;
}
static JSValue system_font_class_set_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_antialiasing, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_antialiasing, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_disable_embedded_bitmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_disable_embedded_bitmaps, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_disable_embedded_bitmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_disable_embedded_bitmaps, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_generate_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_generate_mipmaps, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_generate_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_generate_mipmaps, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_allow_system_fallback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_allow_system_fallback, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_is_allow_system_fallback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::is_allow_system_fallback, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_force_autohinter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_force_autohinter, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_is_force_autohinter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::is_force_autohinter, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_hinting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_hinting, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_hinting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_hinting, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_subpixel_positioning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_subpixel_positioning, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_subpixel_positioning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_subpixel_positioning, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_multichannel_signed_distance_field(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_multichannel_signed_distance_field, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_is_multichannel_signed_distance_field(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::is_multichannel_signed_distance_field, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_msdf_pixel_range, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_msdf_pixel_range, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_msdf_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_msdf_size, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_msdf_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_msdf_size, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_oversampling, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_oversampling, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_get_font_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_font_names, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_font_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_font_names, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_font_italic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_font_italic, SystemFont::__class_id, ctx, this_val, argv);
};
static JSValue system_font_class_set_font_italic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_font_italic, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_set_font_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_font_weight, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_set_font_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_font_stretch, SystemFont::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry system_font_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_antialiasing", 1, &system_font_class_set_antialiasing),
	JS_CFUNC_DEF("get_antialiasing", 0, &system_font_class_get_antialiasing),
	JS_CFUNC_DEF("set_disable_embedded_bitmaps", 1, &system_font_class_set_disable_embedded_bitmaps),
	JS_CFUNC_DEF("get_disable_embedded_bitmaps", 0, &system_font_class_get_disable_embedded_bitmaps),
	JS_CFUNC_DEF("set_generate_mipmaps", 1, &system_font_class_set_generate_mipmaps),
	JS_CFUNC_DEF("get_generate_mipmaps", 0, &system_font_class_get_generate_mipmaps),
	JS_CFUNC_DEF("set_allow_system_fallback", 1, &system_font_class_set_allow_system_fallback),
	JS_CFUNC_DEF("is_allow_system_fallback", 0, &system_font_class_is_allow_system_fallback),
	JS_CFUNC_DEF("set_force_autohinter", 1, &system_font_class_set_force_autohinter),
	JS_CFUNC_DEF("is_force_autohinter", 0, &system_font_class_is_force_autohinter),
	JS_CFUNC_DEF("set_hinting", 1, &system_font_class_set_hinting),
	JS_CFUNC_DEF("get_hinting", 0, &system_font_class_get_hinting),
	JS_CFUNC_DEF("set_subpixel_positioning", 1, &system_font_class_set_subpixel_positioning),
	JS_CFUNC_DEF("get_subpixel_positioning", 0, &system_font_class_get_subpixel_positioning),
	JS_CFUNC_DEF("set_multichannel_signed_distance_field", 1, &system_font_class_set_multichannel_signed_distance_field),
	JS_CFUNC_DEF("is_multichannel_signed_distance_field", 0, &system_font_class_is_multichannel_signed_distance_field),
	JS_CFUNC_DEF("set_msdf_pixel_range", 1, &system_font_class_set_msdf_pixel_range),
	JS_CFUNC_DEF("get_msdf_pixel_range", 0, &system_font_class_get_msdf_pixel_range),
	JS_CFUNC_DEF("set_msdf_size", 1, &system_font_class_set_msdf_size),
	JS_CFUNC_DEF("get_msdf_size", 0, &system_font_class_get_msdf_size),
	JS_CFUNC_DEF("set_oversampling", 1, &system_font_class_set_oversampling),
	JS_CFUNC_DEF("get_oversampling", 0, &system_font_class_get_oversampling),
	JS_CFUNC_DEF("get_font_names", 0, &system_font_class_get_font_names),
	JS_CFUNC_DEF("set_font_names", 1, &system_font_class_set_font_names),
	JS_CFUNC_DEF("get_font_italic", 0, &system_font_class_get_font_italic),
	JS_CFUNC_DEF("set_font_italic", 1, &system_font_class_set_font_italic),
	JS_CFUNC_DEF("set_font_weight", 1, &system_font_class_set_font_weight),
	JS_CFUNC_DEF("set_font_stretch", 1, &system_font_class_set_font_stretch),
};

static int js_system_font_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SystemFont::__class_id);
	classes["SystemFont"] = SystemFont::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SystemFont::__class_id, &system_font_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Font::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SystemFont::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, system_font_class_proto_funcs, _countof(system_font_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, system_font_class_constructor, "SystemFont", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SystemFont", ctor);

	return 0;
}

JSModuleDef *_js_init_system_font_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_system_font_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SystemFont");
	return m;
}

JSModuleDef *js_init_system_font_module(JSContext *ctx) {
	return _js_init_system_font_module(ctx, "godot/classes/system_font");
}

void register_system_font() {
	js_init_system_font_module(ctx);
}