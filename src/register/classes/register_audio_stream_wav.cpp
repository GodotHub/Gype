
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_wav.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_wav_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamWAV *audio_stream_wav = static_cast<AudioStreamWAV *>(JS_GetOpaque(val, AudioStreamWAV::__class_id));
	if (audio_stream_wav)
		AudioStreamWAV::free(nullptr, audio_stream_wav);
}

static JSClassDef audio_stream_wav_class_def = {
	"AudioStreamWAV",
	.finalizer = audio_stream_wav_class_finalizer
};

static JSValue audio_stream_wav_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamWAV *audio_stream_wav_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamWAV::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_wav_class = memnew(AudioStreamWAV);
	if (!audio_stream_wav_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_wav_class);
	return obj;
}
static JSValue audio_stream_wav_class_set_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamWAV::set_data, AudioStreamWAV::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_wav_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamWAV::get_data, AudioStreamWAV::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_wav_class_set_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamWAV::set_format, AudioStreamWAV::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_wav_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamWAV::get_format, AudioStreamWAV::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_wav_class_set_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamWAV::set_loop_mode, AudioStreamWAV::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_wav_class_get_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamWAV::get_loop_mode, AudioStreamWAV::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_wav_class_set_loop_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamWAV::set_loop_begin, AudioStreamWAV::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_wav_class_get_loop_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamWAV::get_loop_begin, AudioStreamWAV::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_wav_class_set_loop_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamWAV::set_loop_end, AudioStreamWAV::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_wav_class_get_loop_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamWAV::get_loop_end, AudioStreamWAV::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_wav_class_set_mix_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamWAV::set_mix_rate, AudioStreamWAV::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_wav_class_get_mix_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamWAV::get_mix_rate, AudioStreamWAV::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_wav_class_set_stereo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamWAV::set_stereo, AudioStreamWAV::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_wav_class_is_stereo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamWAV::is_stereo, AudioStreamWAV::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_wav_class_save_to_wav(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStreamWAV::save_to_wav, AudioStreamWAV::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_wav_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_data", 1, &audio_stream_wav_class_set_data),
	JS_CFUNC_DEF("get_data", 0, &audio_stream_wav_class_get_data),
	JS_CFUNC_DEF("set_format", 1, &audio_stream_wav_class_set_format),
	JS_CFUNC_DEF("get_format", 0, &audio_stream_wav_class_get_format),
	JS_CFUNC_DEF("set_loop_mode", 1, &audio_stream_wav_class_set_loop_mode),
	JS_CFUNC_DEF("get_loop_mode", 0, &audio_stream_wav_class_get_loop_mode),
	JS_CFUNC_DEF("set_loop_begin", 1, &audio_stream_wav_class_set_loop_begin),
	JS_CFUNC_DEF("get_loop_begin", 0, &audio_stream_wav_class_get_loop_begin),
	JS_CFUNC_DEF("set_loop_end", 1, &audio_stream_wav_class_set_loop_end),
	JS_CFUNC_DEF("get_loop_end", 0, &audio_stream_wav_class_get_loop_end),
	JS_CFUNC_DEF("set_mix_rate", 1, &audio_stream_wav_class_set_mix_rate),
	JS_CFUNC_DEF("get_mix_rate", 0, &audio_stream_wav_class_get_mix_rate),
	JS_CFUNC_DEF("set_stereo", 1, &audio_stream_wav_class_set_stereo),
	JS_CFUNC_DEF("is_stereo", 0, &audio_stream_wav_class_is_stereo),
	JS_CFUNC_DEF("save_to_wav", 1, &audio_stream_wav_class_save_to_wav),
};

static int js_audio_stream_wav_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamWAV::__class_id);
	classes["AudioStreamWAV"] = AudioStreamWAV::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamWAV::__class_id, &audio_stream_wav_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamWAV::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_wav_class_proto_funcs, _countof(audio_stream_wav_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_wav_class_constructor, "AudioStreamWAV", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamWAV", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_wav_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_wav_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamWAV");
	return m;
}

JSModuleDef *js_init_audio_stream_wav_module(JSContext *ctx) {
	return _js_init_audio_stream_wav_module(ctx, "godot/classes/audio_stream_wav");
}

void register_audio_stream_wav() {
	js_init_audio_stream_wav_module(ctx);
}