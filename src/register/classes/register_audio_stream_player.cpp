
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_player.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_player_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamPlayer *audio_stream_player = static_cast<AudioStreamPlayer *>(JS_GetOpaque(val, AudioStreamPlayer::__class_id));
	if (audio_stream_player)
		AudioStreamPlayer::free(nullptr, audio_stream_player);
}

static JSClassDef audio_stream_player_class_def = {
	"AudioStreamPlayer",
	.finalizer = audio_stream_player_class_finalizer
};

static JSValue audio_stream_player_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamPlayer *audio_stream_player_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamPlayer::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_player_class = memnew(AudioStreamPlayer);
	if (!audio_stream_player_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_player_class);
	return obj;
}
static JSValue audio_stream_player_class_set_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::set_stream, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_get_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_stream, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_set_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::set_volume_db, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_get_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_volume_db, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_set_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::set_pitch_scale, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_get_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_pitch_scale, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::play, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_seek(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::seek, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::stop, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::is_playing, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_get_playback_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStreamPlayer::get_playback_position, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_set_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::set_bus, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_get_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_bus, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_set_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::set_autoplay, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_is_autoplay_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::is_autoplay_enabled, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_set_mix_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::set_mix_target, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_get_mix_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_mix_target, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_set_stream_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::set_stream_paused, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_get_stream_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_stream_paused, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_set_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::set_max_polyphony, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_get_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_max_polyphony, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_has_stream_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStreamPlayer::has_stream_playback, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_get_stream_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStreamPlayer::get_stream_playback, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player_class_set_playback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayer::set_playback_type, AudioStreamPlayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player_class_get_playback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_playback_type, AudioStreamPlayer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_player_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream", 1, &audio_stream_player_class_set_stream),
	JS_CFUNC_DEF("get_stream", 0, &audio_stream_player_class_get_stream),
	JS_CFUNC_DEF("set_volume_db", 1, &audio_stream_player_class_set_volume_db),
	JS_CFUNC_DEF("get_volume_db", 0, &audio_stream_player_class_get_volume_db),
	JS_CFUNC_DEF("set_pitch_scale", 1, &audio_stream_player_class_set_pitch_scale),
	JS_CFUNC_DEF("get_pitch_scale", 0, &audio_stream_player_class_get_pitch_scale),
	JS_CFUNC_DEF("play", 1, &audio_stream_player_class_play),
	JS_CFUNC_DEF("seek", 1, &audio_stream_player_class_seek),
	JS_CFUNC_DEF("stop", 0, &audio_stream_player_class_stop),
	JS_CFUNC_DEF("is_playing", 0, &audio_stream_player_class_is_playing),
	JS_CFUNC_DEF("get_playback_position", 0, &audio_stream_player_class_get_playback_position),
	JS_CFUNC_DEF("set_bus", 1, &audio_stream_player_class_set_bus),
	JS_CFUNC_DEF("get_bus", 0, &audio_stream_player_class_get_bus),
	JS_CFUNC_DEF("set_autoplay", 1, &audio_stream_player_class_set_autoplay),
	JS_CFUNC_DEF("is_autoplay_enabled", 0, &audio_stream_player_class_is_autoplay_enabled),
	JS_CFUNC_DEF("set_mix_target", 1, &audio_stream_player_class_set_mix_target),
	JS_CFUNC_DEF("get_mix_target", 0, &audio_stream_player_class_get_mix_target),
	JS_CFUNC_DEF("set_stream_paused", 1, &audio_stream_player_class_set_stream_paused),
	JS_CFUNC_DEF("get_stream_paused", 0, &audio_stream_player_class_get_stream_paused),
	JS_CFUNC_DEF("set_max_polyphony", 1, &audio_stream_player_class_set_max_polyphony),
	JS_CFUNC_DEF("get_max_polyphony", 0, &audio_stream_player_class_get_max_polyphony),
	JS_CFUNC_DEF("has_stream_playback", 0, &audio_stream_player_class_has_stream_playback),
	JS_CFUNC_DEF("get_stream_playback", 0, &audio_stream_player_class_get_stream_playback),
	JS_CFUNC_DEF("set_playback_type", 1, &audio_stream_player_class_set_playback_type),
	JS_CFUNC_DEF("get_playback_type", 0, &audio_stream_player_class_get_playback_type),
};

static int js_audio_stream_player_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamPlayer::__class_id);
	classes["AudioStreamPlayer"] = AudioStreamPlayer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlayer::__class_id, &audio_stream_player_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlayer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_player_class_proto_funcs, _countof(audio_stream_player_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_player_class_constructor, "AudioStreamPlayer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamPlayer", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_player_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_player_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlayer");
	return m;
}

JSModuleDef *js_init_audio_stream_player_module(JSContext *ctx) {
	return _js_init_audio_stream_player_module(ctx, "godot/classes/audio_stream_player");
}

void register_audio_stream_player() {
	js_init_audio_stream_player_module(ctx);
}