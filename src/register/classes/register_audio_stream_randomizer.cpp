
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_randomizer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_randomizer_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamRandomizer *audio_stream_randomizer = static_cast<AudioStreamRandomizer *>(JS_GetOpaque(val, AudioStreamRandomizer::__class_id));
	if (audio_stream_randomizer)
		AudioStreamRandomizer::free(nullptr, audio_stream_randomizer);
}

static JSClassDef audio_stream_randomizer_class_def = {
	"AudioStreamRandomizer",
	.finalizer = audio_stream_randomizer_class_finalizer
};

static JSValue audio_stream_randomizer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamRandomizer *audio_stream_randomizer_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamRandomizer::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_randomizer_class = memnew(AudioStreamRandomizer);
	if (!audio_stream_randomizer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_randomizer_class);
	return obj;
}
static JSValue audio_stream_randomizer_class_add_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamRandomizer::add_stream, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_move_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamRandomizer::move_stream, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_remove_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamRandomizer::remove_stream, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_set_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_stream, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_stream, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_randomizer_class_set_stream_probability_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_stream_probability_weight, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_stream_probability_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_stream_probability_weight, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_randomizer_class_set_streams_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_streams_count, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_streams_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_streams_count, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_randomizer_class_set_random_pitch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_random_pitch, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_random_pitch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_random_pitch, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_randomizer_class_set_random_volume_offset_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_random_volume_offset_db, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_random_volume_offset_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_random_volume_offset_db, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_randomizer_class_set_playback_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_playback_mode, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_playback_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_playback_mode, AudioStreamRandomizer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_randomizer_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_stream", 3, &audio_stream_randomizer_class_add_stream),
	JS_CFUNC_DEF("move_stream", 2, &audio_stream_randomizer_class_move_stream),
	JS_CFUNC_DEF("remove_stream", 1, &audio_stream_randomizer_class_remove_stream),
	JS_CFUNC_DEF("set_stream", 2, &audio_stream_randomizer_class_set_stream),
	JS_CFUNC_DEF("get_stream", 1, &audio_stream_randomizer_class_get_stream),
	JS_CFUNC_DEF("set_stream_probability_weight", 2, &audio_stream_randomizer_class_set_stream_probability_weight),
	JS_CFUNC_DEF("get_stream_probability_weight", 1, &audio_stream_randomizer_class_get_stream_probability_weight),
	JS_CFUNC_DEF("set_streams_count", 1, &audio_stream_randomizer_class_set_streams_count),
	JS_CFUNC_DEF("get_streams_count", 0, &audio_stream_randomizer_class_get_streams_count),
	JS_CFUNC_DEF("set_random_pitch", 1, &audio_stream_randomizer_class_set_random_pitch),
	JS_CFUNC_DEF("get_random_pitch", 0, &audio_stream_randomizer_class_get_random_pitch),
	JS_CFUNC_DEF("set_random_volume_offset_db", 1, &audio_stream_randomizer_class_set_random_volume_offset_db),
	JS_CFUNC_DEF("get_random_volume_offset_db", 0, &audio_stream_randomizer_class_get_random_volume_offset_db),
	JS_CFUNC_DEF("set_playback_mode", 1, &audio_stream_randomizer_class_set_playback_mode),
	JS_CFUNC_DEF("get_playback_mode", 0, &audio_stream_randomizer_class_get_playback_mode),
};

static int js_audio_stream_randomizer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamRandomizer::__class_id);
	classes["AudioStreamRandomizer"] = AudioStreamRandomizer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamRandomizer::__class_id, &audio_stream_randomizer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamRandomizer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_randomizer_class_proto_funcs, _countof(audio_stream_randomizer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_randomizer_class_constructor, "AudioStreamRandomizer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamRandomizer", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_randomizer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_randomizer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamRandomizer");
	return m;
}

JSModuleDef *js_init_audio_stream_randomizer_module(JSContext *ctx) {
	return _js_init_audio_stream_randomizer_module(ctx, "godot/classes/audio_stream_randomizer");
}

void register_audio_stream_randomizer() {
	js_init_audio_stream_randomizer_module(ctx);
}