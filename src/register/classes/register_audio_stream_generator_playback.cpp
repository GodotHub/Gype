
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_stream_generator_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_generator_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamGeneratorPlayback *audio_stream_generator_playback = static_cast<AudioStreamGeneratorPlayback *>(JS_GetOpaque(val, AudioStreamGeneratorPlayback::__class_id));
	if (audio_stream_generator_playback)
		AudioStreamGeneratorPlayback::free(nullptr, audio_stream_generator_playback);
}

static JSClassDef audio_stream_generator_playback_class_def = {
	"AudioStreamGeneratorPlayback",
	.finalizer = audio_stream_generator_playback_class_finalizer
};

static JSValue audio_stream_generator_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamGeneratorPlayback *audio_stream_generator_playback_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamGeneratorPlayback::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_generator_playback_class = memnew(AudioStreamGeneratorPlayback);
	if (!audio_stream_generator_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_generator_playback_class);
	return obj;
}
static JSValue audio_stream_generator_playback_class_push_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStreamGeneratorPlayback::push_frame, AudioStreamGeneratorPlayback::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_generator_playback_class_can_push_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamGeneratorPlayback::can_push_buffer, AudioStreamGeneratorPlayback::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_generator_playback_class_push_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStreamGeneratorPlayback::push_buffer, AudioStreamGeneratorPlayback::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_generator_playback_class_get_frames_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamGeneratorPlayback::get_frames_available, AudioStreamGeneratorPlayback::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_generator_playback_class_get_skips(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamGeneratorPlayback::get_skips, AudioStreamGeneratorPlayback::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_generator_playback_class_clear_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamGeneratorPlayback::clear_buffer, AudioStreamGeneratorPlayback::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry audio_stream_generator_playback_class_proto_funcs[] = {
	JS_CFUNC_DEF("push_frame", 1, &audio_stream_generator_playback_class_push_frame),
	JS_CFUNC_DEF("can_push_buffer", 1, &audio_stream_generator_playback_class_can_push_buffer),
	JS_CFUNC_DEF("push_buffer", 1, &audio_stream_generator_playback_class_push_buffer),
	JS_CFUNC_DEF("get_frames_available", 0, &audio_stream_generator_playback_class_get_frames_available),
	JS_CFUNC_DEF("get_skips", 0, &audio_stream_generator_playback_class_get_skips),
	JS_CFUNC_DEF("clear_buffer", 0, &audio_stream_generator_playback_class_clear_buffer),
};

static int js_audio_stream_generator_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamGeneratorPlayback::__class_id);
	classes["AudioStreamGeneratorPlayback"] = AudioStreamGeneratorPlayback::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamGeneratorPlayback::__class_id, &audio_stream_generator_playback_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlaybackResampled::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamGeneratorPlayback::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_generator_playback_class_proto_funcs, _countof(audio_stream_generator_playback_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_generator_playback_class_constructor, "AudioStreamGeneratorPlayback", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamGeneratorPlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_generator_playback_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_generator_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamGeneratorPlayback");
	return m;
}

JSModuleDef *js_init_audio_stream_generator_playback_module(JSContext *ctx) {
	return _js_init_audio_stream_generator_playback_module(ctx, "godot/classes/audio_stream_generator_playback");
}

void register_audio_stream_generator_playback() {
	js_init_audio_stream_generator_playback_module(ctx);
}