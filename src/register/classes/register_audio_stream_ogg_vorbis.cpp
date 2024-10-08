
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/ogg_packet_sequence.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_ogg_vorbis_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamOggVorbis *audio_stream_ogg_vorbis = static_cast<AudioStreamOggVorbis *>(JS_GetOpaque(val, AudioStreamOggVorbis::__class_id));
	if (audio_stream_ogg_vorbis)
		AudioStreamOggVorbis::free(nullptr, audio_stream_ogg_vorbis);
}

static JSClassDef audio_stream_ogg_vorbis_class_def = {
	"AudioStreamOggVorbis",
	.finalizer = audio_stream_ogg_vorbis_class_finalizer
};

static JSValue audio_stream_ogg_vorbis_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamOggVorbis *audio_stream_ogg_vorbis_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamOggVorbis::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_ogg_vorbis_class = memnew(AudioStreamOggVorbis);
	if (!audio_stream_ogg_vorbis_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_ogg_vorbis_class);
	return obj;
}
static JSValue audio_stream_ogg_vorbis_class_set_packet_sequence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamOggVorbis::set_packet_sequence, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_packet_sequence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_packet_sequence, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamOggVorbis::set_loop, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::has_loop, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_loop_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamOggVorbis::set_loop_offset, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_loop_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_loop_offset, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamOggVorbis::set_bpm, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_bpm, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_beat_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamOggVorbis::set_beat_count, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_beat_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_beat_count, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_bar_beats(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamOggVorbis::set_bar_beats, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_bar_beats(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_bar_beats, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_ogg_vorbis_class_load_from_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&AudioStreamOggVorbis::load_from_buffer, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_ogg_vorbis_class_load_from_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&AudioStreamOggVorbis::load_from_file, AudioStreamOggVorbis::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_ogg_vorbis_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_packet_sequence", 1, &audio_stream_ogg_vorbis_class_set_packet_sequence),
	JS_CFUNC_DEF("get_packet_sequence", 0, &audio_stream_ogg_vorbis_class_get_packet_sequence),
	JS_CFUNC_DEF("set_loop", 1, &audio_stream_ogg_vorbis_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &audio_stream_ogg_vorbis_class_has_loop),
	JS_CFUNC_DEF("set_loop_offset", 1, &audio_stream_ogg_vorbis_class_set_loop_offset),
	JS_CFUNC_DEF("get_loop_offset", 0, &audio_stream_ogg_vorbis_class_get_loop_offset),
	JS_CFUNC_DEF("set_bpm", 1, &audio_stream_ogg_vorbis_class_set_bpm),
	JS_CFUNC_DEF("get_bpm", 0, &audio_stream_ogg_vorbis_class_get_bpm),
	JS_CFUNC_DEF("set_beat_count", 1, &audio_stream_ogg_vorbis_class_set_beat_count),
	JS_CFUNC_DEF("get_beat_count", 0, &audio_stream_ogg_vorbis_class_get_beat_count),
	JS_CFUNC_DEF("set_bar_beats", 1, &audio_stream_ogg_vorbis_class_set_bar_beats),
	JS_CFUNC_DEF("get_bar_beats", 0, &audio_stream_ogg_vorbis_class_get_bar_beats),
};
static const JSCFunctionListEntry audio_stream_ogg_vorbis_class_static_funcs[] = {
	JS_CFUNC_DEF("load_from_buffer", 1, &audio_stream_ogg_vorbis_class_load_from_buffer),
	JS_CFUNC_DEF("load_from_file", 1, &audio_stream_ogg_vorbis_class_load_from_file),
};

static int js_audio_stream_ogg_vorbis_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamOggVorbis::__class_id);
	classes["AudioStreamOggVorbis"] = AudioStreamOggVorbis::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamOggVorbis::__class_id, &audio_stream_ogg_vorbis_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamOggVorbis::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_ogg_vorbis_class_proto_funcs, _countof(audio_stream_ogg_vorbis_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_ogg_vorbis_class_constructor, "AudioStreamOggVorbis", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, audio_stream_ogg_vorbis_class_static_funcs, _countof(audio_stream_ogg_vorbis_class_static_funcs));

	JS_SetModuleExport(ctx, m, "AudioStreamOggVorbis", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_ogg_vorbis_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_ogg_vorbis_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamOggVorbis");
	return m;
}

JSModuleDef *js_init_audio_stream_ogg_vorbis_module(JSContext *ctx) {
	return _js_init_audio_stream_ogg_vorbis_module(ctx, "godot/classes/audio_stream_ogg_vorbis");
}

void register_audio_stream_ogg_vorbis() {
	js_init_audio_stream_ogg_vorbis_module(ctx);
}