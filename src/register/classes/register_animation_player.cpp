
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/classes/animation_player.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_player_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationPlayer *animation_player = static_cast<AnimationPlayer *>(JS_GetOpaque(val, AnimationPlayer::__class_id));
	if (animation_player)
		AnimationPlayer::free(nullptr, animation_player);
}

static JSClassDef animation_player_class_def = {
	"AnimationPlayer",
	.finalizer = animation_player_class_finalizer
};

static JSValue animation_player_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationPlayer *animation_player_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationPlayer::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_player_class = memnew(AnimationPlayer);
	if (!animation_player_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_player_class);
	return obj;
}
static JSValue animation_player_class_animation_set_next(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::animation_set_next, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_animation_get_next(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::animation_get_next, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_blend_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_blend_time, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_blend_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_blend_time, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_default_blend_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_default_blend_time, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_default_blend_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_default_blend_time, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_auto_capture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_auto_capture, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_is_auto_capture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::is_auto_capture, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_auto_capture_duration(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_auto_capture_duration, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_auto_capture_duration(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_auto_capture_duration, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_auto_capture_transition_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_auto_capture_transition_type, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_auto_capture_transition_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_auto_capture_transition_type, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_auto_capture_ease_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_auto_capture_ease_type, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_auto_capture_ease_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_auto_capture_ease_type, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::play, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_play_backwards(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::play_backwards, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_play_with_capture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::play_with_capture, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::pause, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::stop, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::is_playing, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_current_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_current_animation, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_current_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_current_animation, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_assigned_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_assigned_animation, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_assigned_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_assigned_animation, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_queue(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::queue, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_queue(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AnimationPlayer::get_queue, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_clear_queue(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::clear_queue, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_speed_scale, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_speed_scale, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_get_playing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_playing_speed, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_autoplay, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_autoplay, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_movie_quit_on_finish_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_movie_quit_on_finish_enabled, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_is_movie_quit_on_finish_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::is_movie_quit_on_finish_enabled, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_get_current_animation_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_current_animation_position, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_get_current_animation_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_current_animation_length, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_seek(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::seek, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_set_process_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_process_callback, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_process_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_process_callback, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_method_call_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_method_call_mode, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_method_call_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_method_call_mode, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static JSValue animation_player_class_set_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationPlayer::set_root, AnimationPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_player_class_get_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationPlayer::get_root, AnimationPlayer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_player_class_proto_funcs[] = {
	JS_CFUNC_DEF("animation_set_next", 2, &animation_player_class_animation_set_next),
	JS_CFUNC_DEF("animation_get_next", 1, &animation_player_class_animation_get_next),
	JS_CFUNC_DEF("set_blend_time", 3, &animation_player_class_set_blend_time),
	JS_CFUNC_DEF("get_blend_time", 2, &animation_player_class_get_blend_time),
	JS_CFUNC_DEF("set_default_blend_time", 1, &animation_player_class_set_default_blend_time),
	JS_CFUNC_DEF("get_default_blend_time", 0, &animation_player_class_get_default_blend_time),
	JS_CFUNC_DEF("set_auto_capture", 1, &animation_player_class_set_auto_capture),
	JS_CFUNC_DEF("is_auto_capture", 0, &animation_player_class_is_auto_capture),
	JS_CFUNC_DEF("set_auto_capture_duration", 1, &animation_player_class_set_auto_capture_duration),
	JS_CFUNC_DEF("get_auto_capture_duration", 0, &animation_player_class_get_auto_capture_duration),
	JS_CFUNC_DEF("set_auto_capture_transition_type", 1, &animation_player_class_set_auto_capture_transition_type),
	JS_CFUNC_DEF("get_auto_capture_transition_type", 0, &animation_player_class_get_auto_capture_transition_type),
	JS_CFUNC_DEF("set_auto_capture_ease_type", 1, &animation_player_class_set_auto_capture_ease_type),
	JS_CFUNC_DEF("get_auto_capture_ease_type", 0, &animation_player_class_get_auto_capture_ease_type),
	JS_CFUNC_DEF("play", 4, &animation_player_class_play),
	JS_CFUNC_DEF("play_backwards", 2, &animation_player_class_play_backwards),
	JS_CFUNC_DEF("play_with_capture", 7, &animation_player_class_play_with_capture),
	JS_CFUNC_DEF("pause", 0, &animation_player_class_pause),
	JS_CFUNC_DEF("stop", 1, &animation_player_class_stop),
	JS_CFUNC_DEF("is_playing", 0, &animation_player_class_is_playing),
	JS_CFUNC_DEF("set_current_animation", 1, &animation_player_class_set_current_animation),
	JS_CFUNC_DEF("get_current_animation", 0, &animation_player_class_get_current_animation),
	JS_CFUNC_DEF("set_assigned_animation", 1, &animation_player_class_set_assigned_animation),
	JS_CFUNC_DEF("get_assigned_animation", 0, &animation_player_class_get_assigned_animation),
	JS_CFUNC_DEF("queue", 1, &animation_player_class_queue),
	JS_CFUNC_DEF("get_queue", 0, &animation_player_class_get_queue),
	JS_CFUNC_DEF("clear_queue", 0, &animation_player_class_clear_queue),
	JS_CFUNC_DEF("set_speed_scale", 1, &animation_player_class_set_speed_scale),
	JS_CFUNC_DEF("get_speed_scale", 0, &animation_player_class_get_speed_scale),
	JS_CFUNC_DEF("get_playing_speed", 0, &animation_player_class_get_playing_speed),
	JS_CFUNC_DEF("set_autoplay", 1, &animation_player_class_set_autoplay),
	JS_CFUNC_DEF("get_autoplay", 0, &animation_player_class_get_autoplay),
	JS_CFUNC_DEF("set_movie_quit_on_finish_enabled", 1, &animation_player_class_set_movie_quit_on_finish_enabled),
	JS_CFUNC_DEF("is_movie_quit_on_finish_enabled", 0, &animation_player_class_is_movie_quit_on_finish_enabled),
	JS_CFUNC_DEF("get_current_animation_position", 0, &animation_player_class_get_current_animation_position),
	JS_CFUNC_DEF("get_current_animation_length", 0, &animation_player_class_get_current_animation_length),
	JS_CFUNC_DEF("seek", 3, &animation_player_class_seek),
	JS_CFUNC_DEF("set_process_callback", 1, &animation_player_class_set_process_callback),
	JS_CFUNC_DEF("get_process_callback", 0, &animation_player_class_get_process_callback),
	JS_CFUNC_DEF("set_method_call_mode", 1, &animation_player_class_set_method_call_mode),
	JS_CFUNC_DEF("get_method_call_mode", 0, &animation_player_class_get_method_call_mode),
	JS_CFUNC_DEF("set_root", 1, &animation_player_class_set_root),
	JS_CFUNC_DEF("get_root", 0, &animation_player_class_get_root),
};

static int js_animation_player_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationPlayer::__class_id);
	classes["AnimationPlayer"] = AnimationPlayer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationPlayer::__class_id, &animation_player_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationMixer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationPlayer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_player_class_proto_funcs, _countof(animation_player_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_player_class_constructor, "AnimationPlayer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationPlayer", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_player_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_player_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationPlayer");
	return m;
}

JSModuleDef *js_init_animation_player_module(JSContext *ctx) {
	return _js_init_animation_player_module(ctx, "godot/classes/animation_player");
}

void register_animation_player() {
	js_init_animation_player_module(ctx);
}