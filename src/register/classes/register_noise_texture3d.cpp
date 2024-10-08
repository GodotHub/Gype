
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/noise_texture3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void noise_texture3d_class_finalizer(JSRuntime *rt, JSValue val) {
	NoiseTexture3D *noise_texture3d = static_cast<NoiseTexture3D *>(JS_GetOpaque(val, NoiseTexture3D::__class_id));
	if (noise_texture3d)
		NoiseTexture3D::free(nullptr, noise_texture3d);
}

static JSClassDef noise_texture3d_class_def = {
	"NoiseTexture3D",
	.finalizer = noise_texture3d_class_finalizer
};

static JSValue noise_texture3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NoiseTexture3D *noise_texture3d_class;
	JSValue obj = JS_NewObjectClass(ctx, NoiseTexture3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	noise_texture3d_class = memnew(NoiseTexture3D);
	if (!noise_texture3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, noise_texture3d_class);
	return obj;
}
static JSValue noise_texture3d_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture3D::set_width, NoiseTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture3d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture3D::set_height, NoiseTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture3d_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture3D::set_depth, NoiseTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture3d_class_set_invert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture3D::set_invert, NoiseTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture3d_class_get_invert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NoiseTexture3D::get_invert, NoiseTexture3D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture3d_class_set_seamless(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture3D::set_seamless, NoiseTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture3d_class_get_seamless(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NoiseTexture3D::get_seamless, NoiseTexture3D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture3d_class_set_seamless_blend_skirt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture3D::set_seamless_blend_skirt, NoiseTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture3d_class_get_seamless_blend_skirt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NoiseTexture3D::get_seamless_blend_skirt, NoiseTexture3D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture3d_class_set_normalize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture3D::set_normalize, NoiseTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture3d_class_is_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NoiseTexture3D::is_normalized, NoiseTexture3D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture3d_class_set_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture3D::set_color_ramp, NoiseTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture3d_class_get_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NoiseTexture3D::get_color_ramp, NoiseTexture3D::__class_id, ctx, this_val, argv);
};
static JSValue noise_texture3d_class_set_noise(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NoiseTexture3D::set_noise, NoiseTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue noise_texture3d_class_get_noise(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&NoiseTexture3D::get_noise, NoiseTexture3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry noise_texture3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_width", 1, &noise_texture3d_class_set_width),
	JS_CFUNC_DEF("set_height", 1, &noise_texture3d_class_set_height),
	JS_CFUNC_DEF("set_depth", 1, &noise_texture3d_class_set_depth),
	JS_CFUNC_DEF("set_invert", 1, &noise_texture3d_class_set_invert),
	JS_CFUNC_DEF("get_invert", 0, &noise_texture3d_class_get_invert),
	JS_CFUNC_DEF("set_seamless", 1, &noise_texture3d_class_set_seamless),
	JS_CFUNC_DEF("get_seamless", 0, &noise_texture3d_class_get_seamless),
	JS_CFUNC_DEF("set_seamless_blend_skirt", 1, &noise_texture3d_class_set_seamless_blend_skirt),
	JS_CFUNC_DEF("get_seamless_blend_skirt", 0, &noise_texture3d_class_get_seamless_blend_skirt),
	JS_CFUNC_DEF("set_normalize", 1, &noise_texture3d_class_set_normalize),
	JS_CFUNC_DEF("is_normalized", 0, &noise_texture3d_class_is_normalized),
	JS_CFUNC_DEF("set_color_ramp", 1, &noise_texture3d_class_set_color_ramp),
	JS_CFUNC_DEF("get_color_ramp", 0, &noise_texture3d_class_get_color_ramp),
	JS_CFUNC_DEF("set_noise", 1, &noise_texture3d_class_set_noise),
	JS_CFUNC_DEF("get_noise", 0, &noise_texture3d_class_get_noise),
};

static int js_noise_texture3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NoiseTexture3D::__class_id);
	classes["NoiseTexture3D"] = NoiseTexture3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NoiseTexture3D::__class_id, &noise_texture3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NoiseTexture3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, noise_texture3d_class_proto_funcs, _countof(noise_texture3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, noise_texture3d_class_constructor, "NoiseTexture3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NoiseTexture3D", ctor);

	return 0;
}

JSModuleDef *_js_init_noise_texture3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_noise_texture3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NoiseTexture3D");
	return m;
}

JSModuleDef *js_init_noise_texture3d_module(JSContext *ctx) {
	return _js_init_noise_texture3d_module(ctx, "godot/classes/noise_texture3d");
}

void register_noise_texture3d() {
	js_init_noise_texture3d_module(ctx);
}