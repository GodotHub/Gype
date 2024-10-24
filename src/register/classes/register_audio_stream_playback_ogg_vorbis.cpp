
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_playback_ogg_vorbis.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_playback_ogg_vorbis_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_playback_ogg_vorbis_class_def = {
	"AudioStreamPlaybackOggVorbis",
	.finalizer = audio_stream_playback_ogg_vorbis_class_finalizer
};

static JSValue audio_stream_playback_ogg_vorbis_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamPlaybackOggVorbis::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioStreamPlaybackOggVorbis *audio_stream_playback_ogg_vorbis_class = memnew(AudioStreamPlaybackOggVorbis);
	if (!audio_stream_playback_ogg_vorbis_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_playback_ogg_vorbis_class);	
	return obj;
}

void define_audio_stream_playback_ogg_vorbis_property(JSContext *ctx, JSValue obj) {
}

static int js_audio_stream_playback_ogg_vorbis_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStreamPlaybackOggVorbis::__class_id);
	classes["AudioStreamPlaybackOggVorbis"] = AudioStreamPlaybackOggVorbis::__class_id;
	class_id_list.insert(AudioStreamPlaybackOggVorbis::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaybackOggVorbis::__class_id, &audio_stream_playback_ogg_vorbis_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamPlaybackOggVorbis::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlaybackResampled::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaybackOggVorbis::__class_id, proto);

	define_audio_stream_playback_ogg_vorbis_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_ogg_vorbis_class_constructor, "AudioStreamPlaybackOggVorbis", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaybackOggVorbis", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_ogg_vorbis_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_stream_playback_resampled';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AudioStreamPlaybackOggVorbis::__init_js_class_id();
	js_init_audio_stream_playback_ogg_vorbis_module(ctx);
}