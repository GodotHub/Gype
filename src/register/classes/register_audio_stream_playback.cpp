
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_sample_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamPlayback *audio_stream_playback = static_cast<AudioStreamPlayback *>(JS_GetOpaque(val, AudioStreamPlayback::__class_id));
	if (audio_stream_playback)
		AudioStreamPlayback::free(nullptr, audio_stream_playback);
}

static JSClassDef audio_stream_playback_class_def = {
	"AudioStreamPlayback",
	.finalizer = audio_stream_playback_class_finalizer
};

static JSValue audio_stream_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamPlayback *audio_stream_playback_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamPlayback::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_playback_class = memnew(AudioStreamPlayback);
	if (!audio_stream_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_playback_class);
	return obj;
}
static JSValue audio_stream_playback_class_set_sample_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamPlayback::set_sample_playback, AudioStreamPlayback::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_playback_class_get_sample_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPlayback::get_sample_playback, AudioStreamPlayback::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_playback_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sample_playback", 1, &audio_stream_playback_class_set_sample_playback),
	JS_CFUNC_DEF("get_sample_playback", 0, &audio_stream_playback_class_get_sample_playback),
};

static int js_audio_stream_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamPlayback::__class_id);
	classes["AudioStreamPlayback"] = AudioStreamPlayback::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlayback::__class_id, &audio_stream_playback_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlayback::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_playback_class_proto_funcs, _countof(audio_stream_playback_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playback_class_constructor, "AudioStreamPlayback", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamPlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playback_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlayback");
	return m;
}

JSModuleDef *js_init_audio_stream_playback_module(JSContext *ctx) {
	return _js_init_audio_stream_playback_module(ctx, "godot/classes/audio_stream_playback");
}

void register_audio_stream_playback() {
	js_init_audio_stream_playback_module(ctx);
}