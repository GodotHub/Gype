
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/audio_sample.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_sample_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioSample *audio_sample = static_cast<AudioSample *>(JS_GetOpaque(val, AudioSample::__class_id));
	if (audio_sample)
		AudioSample::free(nullptr, audio_sample);
}

static JSClassDef audio_sample_class_def = {
	"AudioSample",
	.finalizer = audio_sample_class_finalizer
};

static JSValue audio_sample_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioSample *audio_sample_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioSample::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_sample_class = memnew(AudioSample);
	if (!audio_sample_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_sample_class);
	return obj;
}

static int js_audio_sample_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioSample::__class_id);
	classes["AudioSample"] = AudioSample::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioSample::__class_id, &audio_sample_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioSample::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_sample_class_constructor, "AudioSample", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioSample", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_sample_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_sample_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioSample");
	return m;
}

JSModuleDef *js_init_audio_sample_module(JSContext *ctx) {
	return _js_init_audio_sample_module(ctx, "godot/classes/audio_sample");
}

void register_audio_sample() {
	js_init_audio_sample_module(ctx);
}