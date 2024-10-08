
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/animated_sprite3d.hpp>
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animated_sprite3d_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimatedSprite3D *animated_sprite3d = static_cast<AnimatedSprite3D *>(JS_GetOpaque(val, AnimatedSprite3D::__class_id));
	if (animated_sprite3d)
		AnimatedSprite3D::free(nullptr, animated_sprite3d);
}

static JSClassDef animated_sprite3d_class_def = {
	"AnimatedSprite3D",
	.finalizer = animated_sprite3d_class_finalizer
};

static JSValue animated_sprite3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimatedSprite3D *animated_sprite3d_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimatedSprite3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	animated_sprite3d_class = memnew(AnimatedSprite3D);
	if (!animated_sprite3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animated_sprite3d_class);
	return obj;
}
static JSValue animated_sprite3d_class_set_sprite_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::set_sprite_frames, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_get_sprite_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_sprite_frames, AnimatedSprite3D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite3d_class_set_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::set_animation, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_animation, AnimatedSprite3D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite3d_class_set_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::set_autoplay, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_get_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_autoplay, AnimatedSprite3D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite3d_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite3D::is_playing, AnimatedSprite3D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite3d_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::play, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_play_backwards(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::play_backwards, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::pause, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::stop, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::set_frame, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_frame, AnimatedSprite3D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite3d_class_set_frame_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::set_frame_progress, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_get_frame_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_frame_progress, AnimatedSprite3D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite3d_class_set_frame_and_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::set_frame_and_progress, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite3D::set_speed_scale, AnimatedSprite3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite3d_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_speed_scale, AnimatedSprite3D::__class_id, ctx, this_val, argv);
};
static JSValue animated_sprite3d_class_get_playing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_playing_speed, AnimatedSprite3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animated_sprite3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sprite_frames", 1, &animated_sprite3d_class_set_sprite_frames),
	JS_CFUNC_DEF("get_sprite_frames", 0, &animated_sprite3d_class_get_sprite_frames),
	JS_CFUNC_DEF("set_animation", 1, &animated_sprite3d_class_set_animation),
	JS_CFUNC_DEF("get_animation", 0, &animated_sprite3d_class_get_animation),
	JS_CFUNC_DEF("set_autoplay", 1, &animated_sprite3d_class_set_autoplay),
	JS_CFUNC_DEF("get_autoplay", 0, &animated_sprite3d_class_get_autoplay),
	JS_CFUNC_DEF("is_playing", 0, &animated_sprite3d_class_is_playing),
	JS_CFUNC_DEF("play", 3, &animated_sprite3d_class_play),
	JS_CFUNC_DEF("play_backwards", 1, &animated_sprite3d_class_play_backwards),
	JS_CFUNC_DEF("pause", 0, &animated_sprite3d_class_pause),
	JS_CFUNC_DEF("stop", 0, &animated_sprite3d_class_stop),
	JS_CFUNC_DEF("set_frame", 1, &animated_sprite3d_class_set_frame),
	JS_CFUNC_DEF("get_frame", 0, &animated_sprite3d_class_get_frame),
	JS_CFUNC_DEF("set_frame_progress", 1, &animated_sprite3d_class_set_frame_progress),
	JS_CFUNC_DEF("get_frame_progress", 0, &animated_sprite3d_class_get_frame_progress),
	JS_CFUNC_DEF("set_frame_and_progress", 2, &animated_sprite3d_class_set_frame_and_progress),
	JS_CFUNC_DEF("set_speed_scale", 1, &animated_sprite3d_class_set_speed_scale),
	JS_CFUNC_DEF("get_speed_scale", 0, &animated_sprite3d_class_get_speed_scale),
	JS_CFUNC_DEF("get_playing_speed", 0, &animated_sprite3d_class_get_playing_speed),
};

static int js_animated_sprite3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimatedSprite3D::__class_id);
	classes["AnimatedSprite3D"] = AnimatedSprite3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimatedSprite3D::__class_id, &animated_sprite3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SpriteBase3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimatedSprite3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animated_sprite3d_class_proto_funcs, _countof(animated_sprite3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animated_sprite3d_class_constructor, "AnimatedSprite3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimatedSprite3D", ctor);

	return 0;
}

JSModuleDef *_js_init_animated_sprite3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animated_sprite3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimatedSprite3D");
	return m;
}

JSModuleDef *js_init_animated_sprite3d_module(JSContext *ctx) {
	return _js_init_animated_sprite3d_module(ctx, "godot/classes/animated_sprite3d");
}

void register_animated_sprite3d() {
	js_init_animated_sprite3d_module(ctx);
}