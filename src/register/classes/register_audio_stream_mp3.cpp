
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_mp3.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_mp3_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamMP3 *audio_stream_mp3 = static_cast<AudioStreamMP3 *>(JS_GetOpaque(val, AudioStreamMP3::__class_id));
	if (audio_stream_mp3)
		AudioStreamMP3::free(nullptr, audio_stream_mp3);
}

static JSClassDef audio_stream_mp3_class_def = {
	"AudioStreamMP3",
	.finalizer = audio_stream_mp3_class_finalizer
};

static JSValue audio_stream_mp3_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamMP3 *audio_stream_mp3_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamMP3::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_mp3_class = memnew(AudioStreamMP3);
	if (!audio_stream_mp3_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_mp3_class);
	return obj;
}
static JSValue audio_stream_mp3_class_set_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamMP3::set_data, AudioStreamMP3::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_mp3_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamMP3::get_data, AudioStreamMP3::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_mp3_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamMP3::set_loop, AudioStreamMP3::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_mp3_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamMP3::has_loop, AudioStreamMP3::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_mp3_class_set_loop_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamMP3::set_loop_offset, AudioStreamMP3::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_mp3_class_get_loop_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamMP3::get_loop_offset, AudioStreamMP3::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_mp3_class_set_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamMP3::set_bpm, AudioStreamMP3::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_mp3_class_get_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamMP3::get_bpm, AudioStreamMP3::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_mp3_class_set_beat_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamMP3::set_beat_count, AudioStreamMP3::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_mp3_class_get_beat_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamMP3::get_beat_count, AudioStreamMP3::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_mp3_class_set_bar_beats(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamMP3::set_bar_beats, AudioStreamMP3::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_mp3_class_get_bar_beats(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamMP3::get_bar_beats, AudioStreamMP3::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_mp3_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_data", 1, &audio_stream_mp3_class_set_data),
	JS_CFUNC_DEF("get_data", 0, &audio_stream_mp3_class_get_data),
	JS_CFUNC_DEF("set_loop", 1, &audio_stream_mp3_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &audio_stream_mp3_class_has_loop),
	JS_CFUNC_DEF("set_loop_offset", 1, &audio_stream_mp3_class_set_loop_offset),
	JS_CFUNC_DEF("get_loop_offset", 0, &audio_stream_mp3_class_get_loop_offset),
	JS_CFUNC_DEF("set_bpm", 1, &audio_stream_mp3_class_set_bpm),
	JS_CFUNC_DEF("get_bpm", 0, &audio_stream_mp3_class_get_bpm),
	JS_CFUNC_DEF("set_beat_count", 1, &audio_stream_mp3_class_set_beat_count),
	JS_CFUNC_DEF("get_beat_count", 0, &audio_stream_mp3_class_get_beat_count),
	JS_CFUNC_DEF("set_bar_beats", 1, &audio_stream_mp3_class_set_bar_beats),
	JS_CFUNC_DEF("get_bar_beats", 0, &audio_stream_mp3_class_get_bar_beats),
};

static int js_audio_stream_mp3_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamMP3::__class_id);
	classes["AudioStreamMP3"] = AudioStreamMP3::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamMP3::__class_id, &audio_stream_mp3_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamMP3::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_mp3_class_proto_funcs, _countof(audio_stream_mp3_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_mp3_class_constructor, "AudioStreamMP3", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamMP3", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_mp3_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_mp3_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamMP3");
	return m;
}

JSModuleDef *js_init_audio_stream_mp3_module(JSContext *ctx) {
	return _js_init_audio_stream_mp3_module(ctx, "godot/classes/audio_stream_mp3");
}

void register_audio_stream_mp3() {
	js_init_audio_stream_mp3_module(ctx);
}