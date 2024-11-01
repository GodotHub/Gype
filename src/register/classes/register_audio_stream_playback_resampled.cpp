
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_playback_resampled_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_playback_resampled_class_def = {
	"AudioStreamPlaybackResampled",
	.finalizer = audio_stream_playback_resampled_class_finalizer
};

static JSValue audio_stream_playback_resampled_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamPlaybackResampled::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioStreamPlaybackResampled *audio_stream_playback_resampled_class;
	if (argc == 1) 
		audio_stream_playback_resampled_class = static_cast<AudioStreamPlaybackResampled *>(Variant(*argv).operator Object *());
	else 
		audio_stream_playback_resampled_class = memnew(AudioStreamPlaybackResampled);
	if (!audio_stream_playback_resampled_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_playback_resampled_class);
	return obj;
}
static JSValue audio_stream_playback_resampled_class_begin_resample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlaybackResampled::begin_resample, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_playback_resampled_class_proto_funcs[] = {
	JS_CFUNC_DEF("begin_resample", 0, &audio_stream_playback_resampled_class_begin_resample),
};

static void define_audio_stream_playback_resampled_property(JSContext *ctx, JSValue proto) {
	
}

static void define_audio_stream_playback_resampled_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_playback_resampled_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioStreamPlaybackResampled"] = AudioStreamPlaybackResampled::__class_id;
	class_id_list.insert(AudioStreamPlaybackResampled::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaybackResampled::__class_id, &audio_stream_playback_resampled_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamPlaybackResampled::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlayback::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaybackResampled::__class_id, proto);

	define_audio_stream_playback_resampled_property(ctx, proto);
	define_audio_stream_playback_resampled_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_playback_resampled_class_proto_funcs, _countof(audio_stream_playback_resampled_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_resampled_class_constructor, "AudioStreamPlaybackResampled", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaybackResampled", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_resampled_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_stream_playback';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_playback_resampled_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlaybackResampled");
	return m;
}

JSModuleDef *js_init_audio_stream_playback_resampled_module(JSContext *ctx) {
	return _js_init_audio_stream_playback_resampled_module(ctx, "@godot/classes/audio_stream_playback_resampled");
}

void register_audio_stream_playback_resampled() {
	AudioStreamPlaybackResampled::__init_js_class_id();
	js_init_audio_stream_playback_resampled_module(ctx);
}