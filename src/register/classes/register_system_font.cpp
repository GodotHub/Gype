
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/system_font.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void system_font_class_finalizer(JSRuntime *rt, JSValue val) {
	SystemFont *system_font = static_cast<SystemFont *>(JS_GetOpaque(val, SystemFont::__class_id));
	if (system_font)
		memdelete(system_font);
}

static JSClassDef system_font_class_def = {
	"SystemFont",
	.finalizer = system_font_class_finalizer
};

static JSValue system_font_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SystemFont::__class_id);
	if (JS_IsException(obj))
		return obj;
	SystemFont *system_font_class = memnew(SystemFont);
	if (!system_font_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, system_font_class);	
	return obj;
}
static JSValue system_font_class_set_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_antialiasing, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_antialiasing, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_disable_embedded_bitmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_disable_embedded_bitmaps, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_disable_embedded_bitmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_disable_embedded_bitmaps, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_generate_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_generate_mipmaps, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_generate_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_generate_mipmaps, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_allow_system_fallback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_allow_system_fallback, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_is_allow_system_fallback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::is_allow_system_fallback, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_force_autohinter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_force_autohinter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_is_force_autohinter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::is_force_autohinter, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_hinting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_hinting, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_hinting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_hinting, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_subpixel_positioning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_subpixel_positioning, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_subpixel_positioning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_subpixel_positioning, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_multichannel_signed_distance_field(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_multichannel_signed_distance_field, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_is_multichannel_signed_distance_field(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::is_multichannel_signed_distance_field, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_msdf_pixel_range, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_msdf_pixel_range, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_msdf_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_msdf_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_msdf_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_msdf_size, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_oversampling, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_oversampling, ctx, this_val, argc, argv);
};
static JSValue system_font_class_get_font_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_font_names, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_font_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_font_names, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_get_font_italic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SystemFont::get_font_italic, ctx, this_val, argc, argv);
};
static JSValue system_font_class_set_font_italic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_font_italic, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_set_font_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_font_weight, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue system_font_class_set_font_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SystemFont::set_font_stretch, ctx, this_val, argc, argv);
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

void define_system_font_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "font_names"),
        JS_NewCFunction(ctx, system_font_class_get_font_names, "get_font_names", 0),
        JS_NewCFunction(ctx, system_font_class_set_font_names, "set_font_names", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "font_italic"),
        JS_NewCFunction(ctx, system_font_class_get_font_italic, "get_font_italic", 0),
        JS_NewCFunction(ctx, system_font_class_set_font_italic, "set_font_italic", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "font_weight"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, system_font_class_set_font_weight, "set_font_weight", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "font_stretch"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, system_font_class_set_font_stretch, "set_font_stretch", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "antialiasing"),
        JS_NewCFunction(ctx, system_font_class_get_antialiasing, "get_antialiasing", 0),
        JS_NewCFunction(ctx, system_font_class_set_antialiasing, "set_antialiasing", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "generate_mipmaps"),
        JS_NewCFunction(ctx, system_font_class_get_generate_mipmaps, "get_generate_mipmaps", 0),
        JS_NewCFunction(ctx, system_font_class_set_generate_mipmaps, "set_generate_mipmaps", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "disable_embedded_bitmaps"),
        JS_NewCFunction(ctx, system_font_class_get_disable_embedded_bitmaps, "get_disable_embedded_bitmaps", 0),
        JS_NewCFunction(ctx, system_font_class_set_disable_embedded_bitmaps, "set_disable_embedded_bitmaps", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "allow_system_fallback"),
        JS_NewCFunction(ctx, system_font_class_is_allow_system_fallback, "is_allow_system_fallback", 0),
        JS_NewCFunction(ctx, system_font_class_set_allow_system_fallback, "set_allow_system_fallback", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "force_autohinter"),
        JS_NewCFunction(ctx, system_font_class_is_force_autohinter, "is_force_autohinter", 0),
        JS_NewCFunction(ctx, system_font_class_set_force_autohinter, "set_force_autohinter", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hinting"),
        JS_NewCFunction(ctx, system_font_class_get_hinting, "get_hinting", 0),
        JS_NewCFunction(ctx, system_font_class_set_hinting, "set_hinting", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subpixel_positioning"),
        JS_NewCFunction(ctx, system_font_class_get_subpixel_positioning, "get_subpixel_positioning", 0),
        JS_NewCFunction(ctx, system_font_class_set_subpixel_positioning, "set_subpixel_positioning", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "multichannel_signed_distance_field"),
        JS_NewCFunction(ctx, system_font_class_is_multichannel_signed_distance_field, "is_multichannel_signed_distance_field", 0),
        JS_NewCFunction(ctx, system_font_class_set_multichannel_signed_distance_field, "set_multichannel_signed_distance_field", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "msdf_pixel_range"),
        JS_NewCFunction(ctx, system_font_class_get_msdf_pixel_range, "get_msdf_pixel_range", 0),
        JS_NewCFunction(ctx, system_font_class_set_msdf_pixel_range, "set_msdf_pixel_range", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "msdf_size"),
        JS_NewCFunction(ctx, system_font_class_get_msdf_size, "get_msdf_size", 0),
        JS_NewCFunction(ctx, system_font_class_set_msdf_size, "set_msdf_size", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "oversampling"),
        JS_NewCFunction(ctx, system_font_class_get_oversampling, "get_oversampling", 0),
        JS_NewCFunction(ctx, system_font_class_set_oversampling, "set_oversampling", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_system_font_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SystemFont::__class_id);
	classes["SystemFont"] = SystemFont::__class_id;
	class_id_list.insert(SystemFont::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SystemFont::__class_id, &system_font_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SystemFont::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Font::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SystemFont::__class_id, proto);

	define_system_font_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, system_font_class_proto_funcs, _countof(system_font_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, system_font_class_constructor, "SystemFont", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SystemFont", ctor);

	return 0;
}

JSModuleDef *_js_init_system_font_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/font';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	SystemFont::__init_js_class_id();
	js_init_system_font_module(ctx);
}