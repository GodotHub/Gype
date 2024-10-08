
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_stream_playback_synchronized.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_playback_synchronized_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamPlaybackSynchronized *audio_stream_playback_synchronized = static_cast<AudioStreamPlaybackSynchronized *>(JS_GetOpaque(val, AudioStreamPlaybackSynchronized::__class_id));
	if (audio_stream_playback_synchronized)
		AudioStreamPlaybackSynchronized::free(nullptr, audio_stream_playback_synchronized);
}

static JSClassDef audio_stream_playback_synchronized_class_def = {
	"AudioStreamPlaybackSynchronized",
	.finalizer = audio_stream_playback_synchronized_class_finalizer
};

static JSValue audio_stream_playback_synchronized_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamPlaybackSynchronized *audio_stream_playback_synchronized_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamPlaybackSynchronized::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_playback_synchronized_class = memnew(AudioStreamPlaybackSynchronized);
	if (!audio_stream_playback_synchronized_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_playback_synchronized_class);
	return obj;
}

static int js_audio_stream_playback_synchronized_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamPlaybackSynchronized::__class_id);
	classes["AudioStreamPlaybackSynchronized"] = AudioStreamPlaybackSynchronized::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaybackSynchronized::__class_id, &audio_stream_playback_synchronized_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlayback::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaybackSynchronized::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_synchronized_class_constructor, "AudioStreamPlaybackSynchronized", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaybackSynchronized", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_synchronized_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_playback_synchronized_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlaybackSynchronized");
	return m;
}

JSModuleDef *js_init_audio_stream_playback_synchronized_module(JSContext *ctx) {
	return _js_init_audio_stream_playback_synchronized_module(ctx, "godot/classes/audio_stream_playback_synchronized");
}

void register_audio_stream_playback_synchronized() {
	js_init_audio_stream_playback_synchronized_module(ctx);
}