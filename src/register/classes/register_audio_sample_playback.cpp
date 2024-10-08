
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_sample_playback.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_sample_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioSamplePlayback *audio_sample_playback = static_cast<AudioSamplePlayback *>(JS_GetOpaque(val, AudioSamplePlayback::__class_id));
	if (audio_sample_playback)
		AudioSamplePlayback::free(nullptr, audio_sample_playback);
}

static JSClassDef audio_sample_playback_class_def = {
	"AudioSamplePlayback",
	.finalizer = audio_sample_playback_class_finalizer
};

static JSValue audio_sample_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioSamplePlayback *audio_sample_playback_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioSamplePlayback::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_sample_playback_class = memnew(AudioSamplePlayback);
	if (!audio_sample_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_sample_playback_class);
	return obj;
}

static int js_audio_sample_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioSamplePlayback::__class_id);
	classes["AudioSamplePlayback"] = AudioSamplePlayback::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioSamplePlayback::__class_id, &audio_sample_playback_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioSamplePlayback::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_sample_playback_class_constructor, "AudioSamplePlayback", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioSamplePlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_sample_playback_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_sample_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioSamplePlayback");
	return m;
}

JSModuleDef *js_init_audio_sample_playback_module(JSContext *ctx) {
	return _js_init_audio_sample_playback_module(ctx, "godot/classes/audio_sample_playback");
}

void register_audio_sample_playback() {
	js_init_audio_sample_playback_module(ctx);
}