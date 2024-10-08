
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_stream_playlist.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_playlist_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamPlaylist *audio_stream_playlist = static_cast<AudioStreamPlaylist *>(JS_GetOpaque(val, AudioStreamPlaylist::__class_id));
	if (audio_stream_playlist)
		AudioStreamPlaylist::free(nullptr, audio_stream_playlist);
}

static JSClassDef audio_stream_playlist_class_def = {
	"AudioStreamPlaylist",
	.finalizer = audio_stream_playlist_class_finalizer
};

static JSValue audio_stream_playlist_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamPlaylist *audio_stream_playlist_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamPlaylist::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_playlist_class = memnew(AudioStreamPlaylist);
	if (!audio_stream_playlist_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_playlist_class);
	return obj;
}
static JSValue audio_stream_playlist_class_set_stream_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlaylist::set_stream_count, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_playlist_class_get_stream_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_stream_count, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_playlist_class_get_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_bpm, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_playlist_class_set_list_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlaylist::set_list_stream, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_playlist_class_get_list_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_list_stream, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_playlist_class_set_shuffle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlaylist::set_shuffle, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_playlist_class_get_shuffle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_shuffle, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_playlist_class_set_fade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlaylist::set_fade_time, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_playlist_class_get_fade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_fade_time, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_playlist_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlaylist::set_loop, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_playlist_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlaylist::has_loop, AudioStreamPlaylist::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_playlist_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream_count", 1, &audio_stream_playlist_class_set_stream_count),
	JS_CFUNC_DEF("get_stream_count", 0, &audio_stream_playlist_class_get_stream_count),
	JS_CFUNC_DEF("get_bpm", 0, &audio_stream_playlist_class_get_bpm),
	JS_CFUNC_DEF("set_list_stream", 2, &audio_stream_playlist_class_set_list_stream),
	JS_CFUNC_DEF("get_list_stream", 1, &audio_stream_playlist_class_get_list_stream),
	JS_CFUNC_DEF("set_shuffle", 1, &audio_stream_playlist_class_set_shuffle),
	JS_CFUNC_DEF("get_shuffle", 0, &audio_stream_playlist_class_get_shuffle),
	JS_CFUNC_DEF("set_fade_time", 1, &audio_stream_playlist_class_set_fade_time),
	JS_CFUNC_DEF("get_fade_time", 0, &audio_stream_playlist_class_get_fade_time),
	JS_CFUNC_DEF("set_loop", 1, &audio_stream_playlist_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &audio_stream_playlist_class_has_loop),
};

static int js_audio_stream_playlist_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamPlaylist::__class_id);
	classes["AudioStreamPlaylist"] = AudioStreamPlaylist::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaylist::__class_id, &audio_stream_playlist_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaylist::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_playlist_class_proto_funcs, _countof(audio_stream_playlist_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playlist_class_constructor, "AudioStreamPlaylist", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaylist", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playlist_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_playlist_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlaylist");
	return m;
}

JSModuleDef *js_init_audio_stream_playlist_module(JSContext *ctx) {
	return _js_init_audio_stream_playlist_module(ctx, "godot/classes/audio_stream_playlist");
}

void register_audio_stream_playlist() {
	js_init_audio_stream_playlist_module(ctx);
}