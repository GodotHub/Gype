
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_playlist.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_playback_playlist_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_playback_playlist_class_def = {
	"AudioStreamPlaybackPlaylist",
	.finalizer = audio_stream_playback_playlist_class_finalizer
};

static JSValue audio_stream_playback_playlist_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamPlaybackPlaylist::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioStreamPlaybackPlaylist *audio_stream_playback_playlist_class = memnew(AudioStreamPlaybackPlaylist);
	if (!audio_stream_playback_playlist_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_playback_playlist_class);	
	return obj;
}

void define_audio_stream_playback_playlist_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_playback_playlist_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStreamPlaybackPlaylist::__class_id);
	classes["AudioStreamPlaybackPlaylist"] = AudioStreamPlaybackPlaylist::__class_id;
	class_id_list.insert(AudioStreamPlaybackPlaylist::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaybackPlaylist::__class_id, &audio_stream_playback_playlist_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamPlaybackPlaylist::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlayback::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaybackPlaylist::__class_id, proto);

	define_audio_stream_playback_playlist_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_playlist_class_constructor, "AudioStreamPlaybackPlaylist", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaybackPlaylist", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_playlist_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_stream_playback';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AudioStreamPlaybackPlaylist::__init_js_class_id();
	js_init_audio_stream_playback_playlist_module(ctx);
}