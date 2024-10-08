
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/animated_sprite2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animated_sprite2d_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimatedSprite2D *animated_sprite2d = static_cast<AnimatedSprite2D *>(JS_GetOpaque(val, AnimatedSprite2D::__class_id));
	if (animated_sprite2d)
		AnimatedSprite2D::free(nullptr, animated_sprite2d);
}

static JSClassDef animated_sprite2d_class_def = {
	"AnimatedSprite2D",
	.finalizer = animated_sprite2d_class_finalizer
};

static JSValue animated_sprite2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimatedSprite2D *animated_sprite2d_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimatedSprite2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	animated_sprite2d_class = memnew(AnimatedSprite2D);
	if (!animated_sprite2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animated_sprite2d_class);
	return obj;
}
static JSValue animated_sprite2d_class_set_sprite_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_sprite_frames, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_sprite_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_sprite_frames, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_set_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_animation, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_animation, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_set_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_autoplay, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_autoplay, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::is_playing, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::play, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_play_backwards(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::play_backwards, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::pause, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::stop, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_set_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_centered, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_is_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::is_centered, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_offset, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_offset, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_flip_h, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::is_flipped_h, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_flip_v, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::is_flipped_v, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_frame, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_frame, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_set_frame_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_frame_progress, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_frame_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_frame_progress, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_set_frame_and_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_frame_and_progress, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimatedSprite2D::set_speed_scale, AnimatedSprite2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_speed_scale, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite2d_class_get_playing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_playing_speed, AnimatedSprite2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animated_sprite2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sprite_frames", 1, &animated_sprite2d_class_set_sprite_frames),
	JS_CFUNC_DEF("get_sprite_frames", 0, &animated_sprite2d_class_get_sprite_frames),
	JS_CFUNC_DEF("set_animation", 1, &animated_sprite2d_class_set_animation),
	JS_CFUNC_DEF("get_animation", 0, &animated_sprite2d_class_get_animation),
	JS_CFUNC_DEF("set_autoplay", 1, &animated_sprite2d_class_set_autoplay),
	JS_CFUNC_DEF("get_autoplay", 0, &animated_sprite2d_class_get_autoplay),
	JS_CFUNC_DEF("is_playing", 0, &animated_sprite2d_class_is_playing),
	JS_CFUNC_DEF("play", 3, &animated_sprite2d_class_play),
	JS_CFUNC_DEF("play_backwards", 1, &animated_sprite2d_class_play_backwards),
	JS_CFUNC_DEF("pause", 0, &animated_sprite2d_class_pause),
	JS_CFUNC_DEF("stop", 0, &animated_sprite2d_class_stop),
	JS_CFUNC_DEF("set_centered", 1, &animated_sprite2d_class_set_centered),
	JS_CFUNC_DEF("is_centered", 0, &animated_sprite2d_class_is_centered),
	JS_CFUNC_DEF("set_offset", 1, &animated_sprite2d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &animated_sprite2d_class_get_offset),
	JS_CFUNC_DEF("set_flip_h", 1, &animated_sprite2d_class_set_flip_h),
	JS_CFUNC_DEF("is_flipped_h", 0, &animated_sprite2d_class_is_flipped_h),
	JS_CFUNC_DEF("set_flip_v", 1, &animated_sprite2d_class_set_flip_v),
	JS_CFUNC_DEF("is_flipped_v", 0, &animated_sprite2d_class_is_flipped_v),
	JS_CFUNC_DEF("set_frame", 1, &animated_sprite2d_class_set_frame),
	JS_CFUNC_DEF("get_frame", 0, &animated_sprite2d_class_get_frame),
	JS_CFUNC_DEF("set_frame_progress", 1, &animated_sprite2d_class_set_frame_progress),
	JS_CFUNC_DEF("get_frame_progress", 0, &animated_sprite2d_class_get_frame_progress),
	JS_CFUNC_DEF("set_frame_and_progress", 2, &animated_sprite2d_class_set_frame_and_progress),
	JS_CFUNC_DEF("set_speed_scale", 1, &animated_sprite2d_class_set_speed_scale),
	JS_CFUNC_DEF("get_speed_scale", 0, &animated_sprite2d_class_get_speed_scale),
	JS_CFUNC_DEF("get_playing_speed", 0, &animated_sprite2d_class_get_playing_speed),
};

static int js_animated_sprite2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimatedSprite2D::__class_id);
	classes["AnimatedSprite2D"] = AnimatedSprite2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimatedSprite2D::__class_id, &animated_sprite2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimatedSprite2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animated_sprite2d_class_proto_funcs, _countof(animated_sprite2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animated_sprite2d_class_constructor, "AnimatedSprite2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimatedSprite2D", ctor);

	return 0;
}

JSModuleDef *_js_init_animated_sprite2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animated_sprite2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimatedSprite2D");
	return m;
}

JSModuleDef *js_init_animated_sprite2d_module(JSContext *ctx) {
	return _js_init_animated_sprite2d_module(ctx, "godot/classes/animated_sprite2d");
}

void register_animated_sprite2d() {
	js_init_animated_sprite2d_module(ctx);
}