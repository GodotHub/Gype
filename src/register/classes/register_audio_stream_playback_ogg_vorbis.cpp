
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream_playback_ogg_vorbis.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_playback_ogg_vorbis_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamPlaybackOggVorbis *audio_stream_playback_ogg_vorbis = static_cast<AudioStreamPlaybackOggVorbis *>(JS_GetOpaque(val, AudioStreamPlaybackOggVorbis::__class_id));
	if (audio_stream_playback_ogg_vorbis)
		AudioStreamPlaybackOggVorbis::free(nullptr, audio_stream_playback_ogg_vorbis);
}

static JSClassDef audio_stream_playback_ogg_vorbis_class_def = {
	"AudioStreamPlaybackOggVorbis",
	.finalizer = audio_stream_playback_ogg_vorbis_class_finalizer
};

static JSValue audio_stream_playback_ogg_vorbis_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamPlaybackOggVorbis *audio_stream_playback_ogg_vorbis_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamPlaybackOggVorbis::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_playback_ogg_vorbis_class = memnew(AudioStreamPlaybackOggVorbis);
	if (!audio_stream_playback_ogg_vorbis_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_playback_ogg_vorbis_class);
	return obj;
}

static int js_audio_stream_playback_ogg_vorbis_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamPlaybackOggVorbis::__class_id);
	classes["AudioStreamPlaybackOggVorbis"] = AudioStreamPlaybackOggVorbis::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaybackOggVorbis::__class_id, &audio_stream_playback_ogg_vorbis_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlaybackResampled::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaybackOggVorbis::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_ogg_vorbis_class_constructor, "AudioStreamPlaybackOggVorbis", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaybackOggVorbis", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_ogg_vorbis_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_playback_ogg_vorbis_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlaybackOggVorbis");
	return m;
}

JSModuleDef *js_init_audio_stream_playback_ogg_vorbis_module(JSContext *ctx) {
	return _js_init_audio_stream_playback_ogg_vorbis_module(ctx, "godot/classes/audio_stream_playback_ogg_vorbis");
}

void register_audio_stream_playback_ogg_vorbis() {
	js_init_audio_stream_playback_ogg_vorbis_module(ctx);
}