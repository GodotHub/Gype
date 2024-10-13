
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_playback_interactive.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue audio_stream_playback_interactive_class_switch_to_clip_by_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlaybackInteractive::switch_to_clip_by_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_playback_interactive_class_switch_to_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPlaybackInteractive::switch_to_clip, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry audio_stream_playback_interactive_class_proto_funcs[] = {
	JS_CFUNC_DEF("switch_to_clip_by_name", 1, &audio_stream_playback_interactive_class_switch_to_clip_by_name),
	JS_CFUNC_DEF("switch_to_clip", 1, &audio_stream_playback_interactive_class_switch_to_clip),
};

void define_audio_stream_playback_interactive_property(JSContext *ctx, JSValue obj) {
}

static int js_audio_stream_playback_interactive_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStreamPlaybackInteractive::__class_id);
	classes["AudioStreamPlaybackInteractive"] = AudioStreamPlaybackInteractive::__class_id;
	class_id_list.insert(AudioStreamPlaybackInteractive::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaybackInteractive::__class_id, &audio_stream_playback_interactive_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlayback::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaybackInteractive::__class_id, proto);
	define_audio_stream_playback_interactive_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_playback_interactive_class_proto_funcs, _countof(audio_stream_playback_interactive_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_interactive_class_constructor, "AudioStreamPlaybackInteractive", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaybackInteractive", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_interactive_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_stream_playback';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AudioStreamPlaybackInteractive::__init_js_class_id();
	js_init_audio_stream_playback_interactive_module(ctx);
}