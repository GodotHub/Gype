
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_interactive.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_playback_interactive_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamPlaybackInteractive *audio_stream_playback_interactive = static_cast<AudioStreamPlaybackInteractive *>(JS_GetOpaque(val, AudioStreamPlaybackInteractive::__class_id));
	if (audio_stream_playback_interactive)
		AudioStreamPlaybackInteractive::free(nullptr, audio_stream_playback_interactive);
}

static JSClassDef audio_stream_playback_interactive_class_def = {
	"AudioStreamPlaybackInteractive",
	.finalizer = audio_stream_playback_interactive_class_finalizer
};

static JSValue audio_stream_playback_interactive_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamPlaybackInteractive *audio_stream_playback_interactive_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamPlaybackInteractive::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_playback_interactive_class = memnew(AudioStreamPlaybackInteractive);
	if (!audio_stream_playback_interactive_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_playback_interactive_class);
	return obj;
}
static JSValue audio_stream_playback_interactive_class_switch_to_clip_by_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlaybackInteractive::switch_to_clip_by_name, AudioStreamPlaybackInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_playback_interactive_class_switch_to_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlaybackInteractive::switch_to_clip, AudioStreamPlaybackInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry audio_stream_playback_interactive_class_proto_funcs[] = {
	JS_CFUNC_DEF("switch_to_clip_by_name", 1, &audio_stream_playback_interactive_class_switch_to_clip_by_name),
	JS_CFUNC_DEF("switch_to_clip", 1, &audio_stream_playback_interactive_class_switch_to_clip),
};

static int js_audio_stream_playback_interactive_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamPlaybackInteractive::__class_id);
	classes["AudioStreamPlaybackInteractive"] = AudioStreamPlaybackInteractive::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaybackInteractive::__class_id, &audio_stream_playback_interactive_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlayback::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaybackInteractive::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_playback_interactive_class_proto_funcs, _countof(audio_stream_playback_interactive_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_interactive_class_constructor, "AudioStreamPlaybackInteractive", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaybackInteractive", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_interactive_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_playback_interactive_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlaybackInteractive");
	return m;
}

JSModuleDef *js_init_audio_stream_playback_interactive_module(JSContext *ctx) {
	return _js_init_audio_stream_playback_interactive_module(ctx, "godot/classes/audio_stream_playback_interactive");
}

void register_audio_stream_playback_interactive() {
	js_init_audio_stream_playback_interactive_module(ctx);
}