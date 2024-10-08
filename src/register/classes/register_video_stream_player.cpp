
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/classes/video_stream_player.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void video_stream_player_class_finalizer(JSRuntime *rt, JSValue val) {
	VideoStreamPlayer *video_stream_player = static_cast<VideoStreamPlayer *>(JS_GetOpaque(val, VideoStreamPlayer::__class_id));
	if (video_stream_player)
		VideoStreamPlayer::free(nullptr, video_stream_player);
}

static JSClassDef video_stream_player_class_def = {
	"VideoStreamPlayer",
	.finalizer = video_stream_player_class_finalizer
};

static JSValue video_stream_player_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VideoStreamPlayer *video_stream_player_class;
	JSValue obj = JS_NewObjectClass(ctx, VideoStreamPlayer::__class_id);
	if (JS_IsException(obj))
		return obj;
	video_stream_player_class = memnew(VideoStreamPlayer);
	if (!video_stream_player_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, video_stream_player_class);
	return obj;
}
static JSValue video_stream_player_class_set_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_stream, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_get_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_stream, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::play, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::stop, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::is_playing, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_paused, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_is_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::is_paused, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_loop, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::has_loop, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_volume(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_volume, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_get_volume(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_volume, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_volume_db, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_get_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_volume_db, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_audio_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_audio_track, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_get_audio_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_audio_track, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_get_stream_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_stream_name, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_get_stream_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_stream_length, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_stream_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_stream_position, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_get_stream_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_stream_position, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_autoplay, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_has_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::has_autoplay, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_expand, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_has_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::has_expand, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_buffering_msec(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_buffering_msec, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_get_buffering_msec(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_buffering_msec, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_set_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStreamPlayer::set_bus, VideoStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_player_class_get_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_bus, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue video_stream_player_class_get_video_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VideoStreamPlayer::get_video_texture, VideoStreamPlayer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry video_stream_player_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream", 1, &video_stream_player_class_set_stream),
	JS_CFUNC_DEF("get_stream", 0, &video_stream_player_class_get_stream),
	JS_CFUNC_DEF("play", 0, &video_stream_player_class_play),
	JS_CFUNC_DEF("stop", 0, &video_stream_player_class_stop),
	JS_CFUNC_DEF("is_playing", 0, &video_stream_player_class_is_playing),
	JS_CFUNC_DEF("set_paused", 1, &video_stream_player_class_set_paused),
	JS_CFUNC_DEF("is_paused", 0, &video_stream_player_class_is_paused),
	JS_CFUNC_DEF("set_loop", 1, &video_stream_player_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &video_stream_player_class_has_loop),
	JS_CFUNC_DEF("set_volume", 1, &video_stream_player_class_set_volume),
	JS_CFUNC_DEF("get_volume", 0, &video_stream_player_class_get_volume),
	JS_CFUNC_DEF("set_volume_db", 1, &video_stream_player_class_set_volume_db),
	JS_CFUNC_DEF("get_volume_db", 0, &video_stream_player_class_get_volume_db),
	JS_CFUNC_DEF("set_audio_track", 1, &video_stream_player_class_set_audio_track),
	JS_CFUNC_DEF("get_audio_track", 0, &video_stream_player_class_get_audio_track),
	JS_CFUNC_DEF("get_stream_name", 0, &video_stream_player_class_get_stream_name),
	JS_CFUNC_DEF("get_stream_length", 0, &video_stream_player_class_get_stream_length),
	JS_CFUNC_DEF("set_stream_position", 1, &video_stream_player_class_set_stream_position),
	JS_CFUNC_DEF("get_stream_position", 0, &video_stream_player_class_get_stream_position),
	JS_CFUNC_DEF("set_autoplay", 1, &video_stream_player_class_set_autoplay),
	JS_CFUNC_DEF("has_autoplay", 0, &video_stream_player_class_has_autoplay),
	JS_CFUNC_DEF("set_expand", 1, &video_stream_player_class_set_expand),
	JS_CFUNC_DEF("has_expand", 0, &video_stream_player_class_has_expand),
	JS_CFUNC_DEF("set_buffering_msec", 1, &video_stream_player_class_set_buffering_msec),
	JS_CFUNC_DEF("get_buffering_msec", 0, &video_stream_player_class_get_buffering_msec),
	JS_CFUNC_DEF("set_bus", 1, &video_stream_player_class_set_bus),
	JS_CFUNC_DEF("get_bus", 0, &video_stream_player_class_get_bus),
	JS_CFUNC_DEF("get_video_texture", 0, &video_stream_player_class_get_video_texture),
};

static int js_video_stream_player_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VideoStreamPlayer::__class_id);
	classes["VideoStreamPlayer"] = VideoStreamPlayer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VideoStreamPlayer::__class_id, &video_stream_player_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VideoStreamPlayer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, video_stream_player_class_proto_funcs, _countof(video_stream_player_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, video_stream_player_class_constructor, "VideoStreamPlayer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VideoStreamPlayer", ctor);

	return 0;
}

JSModuleDef *_js_init_video_stream_player_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_video_stream_player_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VideoStreamPlayer");
	return m;
}

JSModuleDef *js_init_video_stream_player_module(JSContext *ctx) {
	return _js_init_video_stream_player_module(ctx, "godot/classes/video_stream_player");
}

void register_video_stream_player() {
	js_init_video_stream_player_module(ctx);
}