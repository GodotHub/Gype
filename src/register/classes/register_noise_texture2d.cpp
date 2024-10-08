
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/noise_texture2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void noise_texture2d_class_finalizer(JSRuntime *rt, JSValue val) {
	NoiseTexture2D *noise_texture2d = static_cast<NoiseTexture2D *>(JS_GetOpaque(val, NoiseTexture2D::__class_id));
	if (noise_texture2d)
		NoiseTexture2D::free(nullptr, noise_texture2d);
}

static JSClassDef noise_texture2d_class_def = {
	"NoiseTexture2D",
	.finalizer = noise_texture2d_class_finalizer
};

static JSValue noise_texture2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NoiseTexture2D *noise_texture2d_class;
	JSValue obj = JS_NewObjectClass(ctx, NoiseTexture2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	noise_texture2d_class = memnew(NoiseTexture2D);
	if (!noise_texture2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, noise_texture2d_class);
	return obj;
}
static JSValue noise_texture2d_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_width, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_height, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_set_invert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_invert, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_get_invert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NoiseTexture2D::get_invert, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture2d_class_set_in_3d_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_in_3d_space, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_is_in_3d_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NoiseTexture2D::is_in_3d_space, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture2d_class_set_generate_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_generate_mipmaps, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_is_generating_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NoiseTexture2D::is_generating_mipmaps, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture2d_class_set_seamless(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_seamless, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_get_seamless(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NoiseTexture2D::get_seamless, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture2d_class_set_seamless_blend_skirt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_seamless_blend_skirt, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_get_seamless_blend_skirt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NoiseTexture2D::get_seamless_blend_skirt, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture2d_class_set_as_normal_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_as_normal_map, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_is_normal_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NoiseTexture2D::is_normal_map, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture2d_class_set_bump_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_bump_strength, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_get_bump_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NoiseTexture2D::get_bump_strength, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture2d_class_set_normalize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_normalize, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_is_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NoiseTexture2D::is_normalized, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture2d_class_set_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_color_ramp, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_get_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NoiseTexture2D::get_color_ramp, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture2d_class_set_noise(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture2D::set_noise, NoiseTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture2d_class_get_noise(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NoiseTexture2D::get_noise, NoiseTexture2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry noise_texture2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_width", 1, &noise_texture2d_class_set_width),
	JS_CFUNC_DEF("set_height", 1, &noise_texture2d_class_set_height),
	JS_CFUNC_DEF("set_invert", 1, &noise_texture2d_class_set_invert),
	JS_CFUNC_DEF("get_invert", 0, &noise_texture2d_class_get_invert),
	JS_CFUNC_DEF("set_in_3d_space", 1, &noise_texture2d_class_set_in_3d_space),
	JS_CFUNC_DEF("is_in_3d_space", 0, &noise_texture2d_class_is_in_3d_space),
	JS_CFUNC_DEF("set_generate_mipmaps", 1, &noise_texture2d_class_set_generate_mipmaps),
	JS_CFUNC_DEF("is_generating_mipmaps", 0, &noise_texture2d_class_is_generating_mipmaps),
	JS_CFUNC_DEF("set_seamless", 1, &noise_texture2d_class_set_seamless),
	JS_CFUNC_DEF("get_seamless", 0, &noise_texture2d_class_get_seamless),
	JS_CFUNC_DEF("set_seamless_blend_skirt", 1, &noise_texture2d_class_set_seamless_blend_skirt),
	JS_CFUNC_DEF("get_seamless_blend_skirt", 0, &noise_texture2d_class_get_seamless_blend_skirt),
	JS_CFUNC_DEF("set_as_normal_map", 1, &noise_texture2d_class_set_as_normal_map),
	JS_CFUNC_DEF("is_normal_map", 0, &noise_texture2d_class_is_normal_map),
	JS_CFUNC_DEF("set_bump_strength", 1, &noise_texture2d_class_set_bump_strength),
	JS_CFUNC_DEF("get_bump_strength", 0, &noise_texture2d_class_get_bump_strength),
	JS_CFUNC_DEF("set_normalize", 1, &noise_texture2d_class_set_normalize),
	JS_CFUNC_DEF("is_normalized", 0, &noise_texture2d_class_is_normalized),
	JS_CFUNC_DEF("set_color_ramp", 1, &noise_texture2d_class_set_color_ramp),
	JS_CFUNC_DEF("get_color_ramp", 0, &noise_texture2d_class_get_color_ramp),
	JS_CFUNC_DEF("set_noise", 1, &noise_texture2d_class_set_noise),
	JS_CFUNC_DEF("get_noise", 0, &noise_texture2d_class_get_noise),
};

static int js_noise_texture2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NoiseTexture2D::__class_id);
	classes["NoiseTexture2D"] = NoiseTexture2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NoiseTexture2D::__class_id, &noise_texture2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NoiseTexture2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, noise_texture2d_class_proto_funcs, _countof(noise_texture2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, noise_texture2d_class_constructor, "NoiseTexture2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NoiseTexture2D", ctor);

	return 0;
}

JSModuleDef *_js_init_noise_texture2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_noise_texture2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NoiseTexture2D");
	return m;
}

JSModuleDef *js_init_noise_texture2d_module(JSContext *ctx) {
	return _js_init_noise_texture2d_module(ctx, "godot/classes/noise_texture2d");
}

void register_noise_texture2d() {
	js_init_noise_texture2d_module(ctx);
}