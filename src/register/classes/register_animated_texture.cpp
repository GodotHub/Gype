
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animated_texture.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animated_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimatedTexture *animated_texture = static_cast<AnimatedTexture *>(JS_GetOpaque(val, AnimatedTexture::__class_id));
	if (animated_texture)
		AnimatedTexture::free(nullptr, animated_texture);
}

static JSClassDef animated_texture_class_def = {
	"AnimatedTexture",
	.finalizer = animated_texture_class_finalizer
};

static JSValue animated_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimatedTexture *animated_texture_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimatedTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	animated_texture_class = memnew(AnimatedTexture);
	if (!animated_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animated_texture_class);
	return obj;
}
static JSValue animated_texture_class_set_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedTexture::set_frames, AnimatedTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedTexture::get_frames, AnimatedTexture::__class_id, ctx, this_val, argv);
};
static JSValue animated_texture_class_set_current_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedTexture::set_current_frame, AnimatedTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_current_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedTexture::get_current_frame, AnimatedTexture::__class_id, ctx, this_val, argv);
};
static JSValue animated_texture_class_set_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedTexture::set_pause, AnimatedTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedTexture::get_pause, AnimatedTexture::__class_id, ctx, this_val, argv);
};
static JSValue animated_texture_class_set_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedTexture::set_one_shot, AnimatedTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedTexture::get_one_shot, AnimatedTexture::__class_id, ctx, this_val, argv);
};
static JSValue animated_texture_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedTexture::set_speed_scale, AnimatedTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedTexture::get_speed_scale, AnimatedTexture::__class_id, ctx, this_val, argv);
};
static JSValue animated_texture_class_set_frame_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedTexture::set_frame_texture, AnimatedTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_frame_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedTexture::get_frame_texture, AnimatedTexture::__class_id, ctx, this_val, argv);
};
static JSValue animated_texture_class_set_frame_duration(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedTexture::set_frame_duration, AnimatedTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_texture_class_get_frame_duration(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedTexture::get_frame_duration, AnimatedTexture::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animated_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_frames", 1, &animated_texture_class_set_frames),
	JS_CFUNC_DEF("get_frames", 0, &animated_texture_class_get_frames),
	JS_CFUNC_DEF("set_current_frame", 1, &animated_texture_class_set_current_frame),
	JS_CFUNC_DEF("get_current_frame", 0, &animated_texture_class_get_current_frame),
	JS_CFUNC_DEF("set_pause", 1, &animated_texture_class_set_pause),
	JS_CFUNC_DEF("get_pause", 0, &animated_texture_class_get_pause),
	JS_CFUNC_DEF("set_one_shot", 1, &animated_texture_class_set_one_shot),
	JS_CFUNC_DEF("get_one_shot", 0, &animated_texture_class_get_one_shot),
	JS_CFUNC_DEF("set_speed_scale", 1, &animated_texture_class_set_speed_scale),
	JS_CFUNC_DEF("get_speed_scale", 0, &animated_texture_class_get_speed_scale),
	JS_CFUNC_DEF("set_frame_texture", 2, &animated_texture_class_set_frame_texture),
	JS_CFUNC_DEF("get_frame_texture", 1, &animated_texture_class_get_frame_texture),
	JS_CFUNC_DEF("set_frame_duration", 2, &animated_texture_class_set_frame_duration),
	JS_CFUNC_DEF("get_frame_duration", 1, &animated_texture_class_get_frame_duration),
};

static int js_animated_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimatedTexture::__class_id);
	classes["AnimatedTexture"] = AnimatedTexture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimatedTexture::__class_id, &animated_texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimatedTexture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animated_texture_class_proto_funcs, _countof(animated_texture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animated_texture_class_constructor, "AnimatedTexture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimatedTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_animated_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animated_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimatedTexture");
	return m;
}

JSModuleDef *js_init_animated_texture_module(JSContext *ctx) {
	return _js_init_animated_texture_module(ctx, "godot/classes/animated_texture");
}

void register_animated_texture() {
	js_init_animated_texture_module(ctx);
}