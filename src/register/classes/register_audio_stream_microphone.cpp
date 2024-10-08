
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_stream_microphone.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_microphone_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamMicrophone *audio_stream_microphone = static_cast<AudioStreamMicrophone *>(JS_GetOpaque(val, AudioStreamMicrophone::__class_id));
	if (audio_stream_microphone)
		AudioStreamMicrophone::free(nullptr, audio_stream_microphone);
}

static JSClassDef audio_stream_microphone_class_def = {
	"AudioStreamMicrophone",
	.finalizer = audio_stream_microphone_class_finalizer
};

static JSValue audio_stream_microphone_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamMicrophone *audio_stream_microphone_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamMicrophone::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_microphone_class = memnew(AudioStreamMicrophone);
	if (!audio_stream_microphone_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_microphone_class);
	return obj;
}

static int js_audio_stream_microphone_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamMicrophone::__class_id);
	classes["AudioStreamMicrophone"] = AudioStreamMicrophone::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamMicrophone::__class_id, &audio_stream_microphone_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamMicrophone::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_microphone_class_constructor, "AudioStreamMicrophone", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamMicrophone", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_microphone_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_microphone_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamMicrophone");
	return m;
}

JSModuleDef *js_init_audio_stream_microphone_module(JSContext *ctx) {
	return _js_init_audio_stream_microphone_module(ctx, "godot/classes/audio_stream_microphone");
}

void register_audio_stream_microphone() {
	js_init_audio_stream_microphone_module(ctx);
}