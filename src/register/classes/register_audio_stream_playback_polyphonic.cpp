
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_playback_polyphonic.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_playback_polyphonic_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_playback_polyphonic_class_def = {
	"AudioStreamPlaybackPolyphonic",
	.finalizer = audio_stream_playback_polyphonic_class_finalizer
};

static JSValue audio_stream_playback_polyphonic_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamPlaybackPolyphonic::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioStreamPlaybackPolyphonic *audio_stream_playback_polyphonic_class;
	if (argc == 1) 
		audio_stream_playback_polyphonic_class = static_cast<AudioStreamPlaybackPolyphonic *>(Variant(*argv).operator Object *());
	else 
		audio_stream_playback_polyphonic_class = memnew(AudioStreamPlaybackPolyphonic);
	if (!audio_stream_playback_polyphonic_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_playback_polyphonic_class);
	return obj;
}
static JSValue audio_stream_playback_polyphonic_class_play_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AudioStreamPlaybackPolyphonic::play_stream, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playback_polyphonic_class_set_stream_volume(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlaybackPolyphonic::set_stream_volume, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playback_polyphonic_class_set_stream_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlaybackPolyphonic::set_stream_pitch_scale, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playback_polyphonic_class_is_stream_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlaybackPolyphonic::is_stream_playing, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playback_polyphonic_class_stop_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlaybackPolyphonic::stop_stream, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_playback_polyphonic_class_proto_funcs[] = {
	JS_CFUNC_DEF("play_stream", 6, &audio_stream_playback_polyphonic_class_play_stream),
	JS_CFUNC_DEF("set_stream_volume", 2, &audio_stream_playback_polyphonic_class_set_stream_volume),
	JS_CFUNC_DEF("set_stream_pitch_scale", 2, &audio_stream_playback_polyphonic_class_set_stream_pitch_scale),
	JS_CFUNC_DEF("is_stream_playing", 1, &audio_stream_playback_polyphonic_class_is_stream_playing),
	JS_CFUNC_DEF("stop_stream", 1, &audio_stream_playback_polyphonic_class_stop_stream),
};

static void define_audio_stream_playback_polyphonic_property(JSContext *ctx, JSValue proto) {
	
}

static void define_audio_stream_playback_polyphonic_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_playback_polyphonic_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioStreamPlaybackPolyphonic"] = AudioStreamPlaybackPolyphonic::__class_id;
	class_id_list.insert(AudioStreamPlaybackPolyphonic::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaybackPolyphonic::__class_id, &audio_stream_playback_polyphonic_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamPlaybackPolyphonic::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlayback::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaybackPolyphonic::__class_id, proto);

	define_audio_stream_playback_polyphonic_property(ctx, proto);
	define_audio_stream_playback_polyphonic_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_playback_polyphonic_class_proto_funcs, _countof(audio_stream_playback_polyphonic_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_polyphonic_class_constructor, "AudioStreamPlaybackPolyphonic", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaybackPolyphonic", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_polyphonic_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_stream_playback';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_playback_polyphonic_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlaybackPolyphonic");
	return m;
}

JSModuleDef *js_init_audio_stream_playback_polyphonic_module(JSContext *ctx) {
	return _js_init_audio_stream_playback_polyphonic_module(ctx, "@godot/classes/audio_stream_playback_polyphonic");
}

void register_audio_stream_playback_polyphonic() {
	AudioStreamPlaybackPolyphonic::__init_js_class_id();
	js_init_audio_stream_playback_polyphonic_module(ctx);
}