
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_playlist.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_playback_playlist_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamPlaybackPlaylist *audio_stream_playback_playlist = static_cast<AudioStreamPlaybackPlaylist *>(JS_GetOpaque(val, AudioStreamPlaybackPlaylist::__class_id));
	if (audio_stream_playback_playlist)
		AudioStreamPlaybackPlaylist::free(nullptr, audio_stream_playback_playlist);
}

static JSClassDef audio_stream_playback_playlist_class_def = {
	"AudioStreamPlaybackPlaylist",
	.finalizer = audio_stream_playback_playlist_class_finalizer
};

static JSValue audio_stream_playback_playlist_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamPlaybackPlaylist *audio_stream_playback_playlist_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamPlaybackPlaylist::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_playback_playlist_class = memnew(AudioStreamPlaybackPlaylist);
	if (!audio_stream_playback_playlist_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_playback_playlist_class);
	return obj;
}

static int js_audio_stream_playback_playlist_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamPlaybackPlaylist::__class_id);
	classes["AudioStreamPlaybackPlaylist"] = AudioStreamPlaybackPlaylist::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaybackPlaylist::__class_id, &audio_stream_playback_playlist_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlayback::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaybackPlaylist::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_playlist_class_constructor, "AudioStreamPlaybackPlaylist", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaybackPlaylist", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_playlist_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_playback_playlist_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlaybackPlaylist");
	return m;
}

JSModuleDef *js_init_audio_stream_playback_playlist_module(JSContext *ctx) {
	return _js_init_audio_stream_playback_playlist_module(ctx, "godot/classes/audio_stream_playback_playlist");
}

void register_audio_stream_playback_playlist() {
	js_init_audio_stream_playback_playlist_module(ctx);
}