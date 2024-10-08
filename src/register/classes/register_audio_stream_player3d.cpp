
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/audio_stream_player3d.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_player3d_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamPlayer3D *audio_stream_player3d = static_cast<AudioStreamPlayer3D *>(JS_GetOpaque(val, AudioStreamPlayer3D::__class_id));
	if (audio_stream_player3d)
		AudioStreamPlayer3D::free(nullptr, audio_stream_player3d);
}

static JSClassDef audio_stream_player3d_class_def = {
	"AudioStreamPlayer3D",
	.finalizer = audio_stream_player3d_class_finalizer
};

static JSValue audio_stream_player3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamPlayer3D *audio_stream_player3d_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamPlayer3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_player3d_class = memnew(AudioStreamPlayer3D);
	if (!audio_stream_player3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_player3d_class);
	return obj;
}
static JSValue audio_stream_player3d_class_set_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_stream, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_stream, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_volume_db, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_volume_db, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_unit_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_unit_size, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_unit_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_unit_size, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_max_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_max_db, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_max_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_max_db, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_pitch_scale, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_pitch_scale, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::play, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_seek(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::seek, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::stop, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::is_playing, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_get_playback_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStreamPlayer3D::get_playback_position, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_bus, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_bus, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_autoplay, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_is_autoplay_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::is_autoplay_enabled, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_max_distance, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_max_distance, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_area_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_area_mask, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_area_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_area_mask, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_emission_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_emission_angle, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_emission_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_emission_angle, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_emission_angle_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_emission_angle_enabled, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_is_emission_angle_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::is_emission_angle_enabled, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_emission_angle_filter_attenuation_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_emission_angle_filter_attenuation_db, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_emission_angle_filter_attenuation_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_emission_angle_filter_attenuation_db, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_attenuation_filter_cutoff_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_attenuation_filter_cutoff_hz, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_attenuation_filter_cutoff_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_attenuation_filter_cutoff_hz, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_attenuation_filter_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_attenuation_filter_db, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_attenuation_filter_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_attenuation_filter_db, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_attenuation_model(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_attenuation_model, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_attenuation_model(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_attenuation_model, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_doppler_tracking(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_doppler_tracking, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_doppler_tracking(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_doppler_tracking, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_stream_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_stream_paused, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_stream_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_stream_paused, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_max_polyphony, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_max_polyphony, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_panning_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_panning_strength, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_panning_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_panning_strength, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_has_stream_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStreamPlayer3D::has_stream_playback, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_get_stream_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStreamPlayer3D::get_stream_playback, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_player3d_class_set_playback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlayer3D::set_playback_type, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_player3d_class_get_playback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayer3D::get_playback_type, AudioStreamPlayer3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_player3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream", 1, &audio_stream_player3d_class_set_stream),
	JS_CFUNC_DEF("get_stream", 0, &audio_stream_player3d_class_get_stream),
	JS_CFUNC_DEF("set_volume_db", 1, &audio_stream_player3d_class_set_volume_db),
	JS_CFUNC_DEF("get_volume_db", 0, &audio_stream_player3d_class_get_volume_db),
	JS_CFUNC_DEF("set_unit_size", 1, &audio_stream_player3d_class_set_unit_size),
	JS_CFUNC_DEF("get_unit_size", 0, &audio_stream_player3d_class_get_unit_size),
	JS_CFUNC_DEF("set_max_db", 1, &audio_stream_player3d_class_set_max_db),
	JS_CFUNC_DEF("get_max_db", 0, &audio_stream_player3d_class_get_max_db),
	JS_CFUNC_DEF("set_pitch_scale", 1, &audio_stream_player3d_class_set_pitch_scale),
	JS_CFUNC_DEF("get_pitch_scale", 0, &audio_stream_player3d_class_get_pitch_scale),
	JS_CFUNC_DEF("play", 1, &audio_stream_player3d_class_play),
	JS_CFUNC_DEF("seek", 1, &audio_stream_player3d_class_seek),
	JS_CFUNC_DEF("stop", 0, &audio_stream_player3d_class_stop),
	JS_CFUNC_DEF("is_playing", 0, &audio_stream_player3d_class_is_playing),
	JS_CFUNC_DEF("get_playback_position", 0, &audio_stream_player3d_class_get_playback_position),
	JS_CFUNC_DEF("set_bus", 1, &audio_stream_player3d_class_set_bus),
	JS_CFUNC_DEF("get_bus", 0, &audio_stream_player3d_class_get_bus),
	JS_CFUNC_DEF("set_autoplay", 1, &audio_stream_player3d_class_set_autoplay),
	JS_CFUNC_DEF("is_autoplay_enabled", 0, &audio_stream_player3d_class_is_autoplay_enabled),
	JS_CFUNC_DEF("set_max_distance", 1, &audio_stream_player3d_class_set_max_distance),
	JS_CFUNC_DEF("get_max_distance", 0, &audio_stream_player3d_class_get_max_distance),
	JS_CFUNC_DEF("set_area_mask", 1, &audio_stream_player3d_class_set_area_mask),
	JS_CFUNC_DEF("get_area_mask", 0, &audio_stream_player3d_class_get_area_mask),
	JS_CFUNC_DEF("set_emission_angle", 1, &audio_stream_player3d_class_set_emission_angle),
	JS_CFUNC_DEF("get_emission_angle", 0, &audio_stream_player3d_class_get_emission_angle),
	JS_CFUNC_DEF("set_emission_angle_enabled", 1, &audio_stream_player3d_class_set_emission_angle_enabled),
	JS_CFUNC_DEF("is_emission_angle_enabled", 0, &audio_stream_player3d_class_is_emission_angle_enabled),
	JS_CFUNC_DEF("set_emission_angle_filter_attenuation_db", 1, &audio_stream_player3d_class_set_emission_angle_filter_attenuation_db),
	JS_CFUNC_DEF("get_emission_angle_filter_attenuation_db", 0, &audio_stream_player3d_class_get_emission_angle_filter_attenuation_db),
	JS_CFUNC_DEF("set_attenuation_filter_cutoff_hz", 1, &audio_stream_player3d_class_set_attenuation_filter_cutoff_hz),
	JS_CFUNC_DEF("get_attenuation_filter_cutoff_hz", 0, &audio_stream_player3d_class_get_attenuation_filter_cutoff_hz),
	JS_CFUNC_DEF("set_attenuation_filter_db", 1, &audio_stream_player3d_class_set_attenuation_filter_db),
	JS_CFUNC_DEF("get_attenuation_filter_db", 0, &audio_stream_player3d_class_get_attenuation_filter_db),
	JS_CFUNC_DEF("set_attenuation_model", 1, &audio_stream_player3d_class_set_attenuation_model),
	JS_CFUNC_DEF("get_attenuation_model", 0, &audio_stream_player3d_class_get_attenuation_model),
	JS_CFUNC_DEF("set_doppler_tracking", 1, &audio_stream_player3d_class_set_doppler_tracking),
	JS_CFUNC_DEF("get_doppler_tracking", 0, &audio_stream_player3d_class_get_doppler_tracking),
	JS_CFUNC_DEF("set_stream_paused", 1, &audio_stream_player3d_class_set_stream_paused),
	JS_CFUNC_DEF("get_stream_paused", 0, &audio_stream_player3d_class_get_stream_paused),
	JS_CFUNC_DEF("set_max_polyphony", 1, &audio_stream_player3d_class_set_max_polyphony),
	JS_CFUNC_DEF("get_max_polyphony", 0, &audio_stream_player3d_class_get_max_polyphony),
	JS_CFUNC_DEF("set_panning_strength", 1, &audio_stream_player3d_class_set_panning_strength),
	JS_CFUNC_DEF("get_panning_strength", 0, &audio_stream_player3d_class_get_panning_strength),
	JS_CFUNC_DEF("has_stream_playback", 0, &audio_stream_player3d_class_has_stream_playback),
	JS_CFUNC_DEF("get_stream_playback", 0, &audio_stream_player3d_class_get_stream_playback),
	JS_CFUNC_DEF("set_playback_type", 1, &audio_stream_player3d_class_set_playback_type),
	JS_CFUNC_DEF("get_playback_type", 0, &audio_stream_player3d_class_get_playback_type),
};

static int js_audio_stream_player3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamPlayer3D::__class_id);
	classes["AudioStreamPlayer3D"] = AudioStreamPlayer3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlayer3D::__class_id, &audio_stream_player3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlayer3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_player3d_class_proto_funcs, _countof(audio_stream_player3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_player3d_class_constructor, "AudioStreamPlayer3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamPlayer3D", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_player3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_player3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlayer3D");
	return m;
}

JSModuleDef *js_init_audio_stream_player3d_module(JSContext *ctx) {
	return _js_init_audio_stream_player3d_module(ctx, "godot/classes/audio_stream_player3d");
}

void register_audio_stream_player3d() {
	js_init_audio_stream_player3d_module(ctx);
}