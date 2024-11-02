
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/audio_sample_playback.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_sample_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_sample_playback_class_def = {
	"AudioSamplePlayback",
	.finalizer = audio_sample_playback_class_finalizer
};

static JSValue audio_sample_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioSamplePlayback::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioSamplePlayback *audio_sample_playback_class;
	if (argc == 1) 
		audio_sample_playback_class = static_cast<AudioSamplePlayback *>(Variant(*argv).operator Object *());
	else 
		audio_sample_playback_class = memnew(AudioSamplePlayback);
	if (!audio_sample_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_sample_playback_class);
	return obj;
}

static void define_audio_sample_playback_property(JSContext *ctx, JSValue proto) {
	
}

static void define_audio_sample_playback_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_sample_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioSamplePlayback"] = AudioSamplePlayback::__class_id;
	class_id_list.insert(AudioSamplePlayback::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioSamplePlayback::__class_id, &audio_sample_playback_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioSamplePlayback::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioSamplePlayback::__class_id, proto);

	define_audio_sample_playback_property(ctx, proto);
	define_audio_sample_playback_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_sample_playback_class_constructor, "AudioSamplePlayback", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioSamplePlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_sample_playback_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_sample_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioSamplePlayback");
	return m;
}

JSModuleDef *js_init_audio_sample_playback_module(JSContext *ctx) {
	return _js_init_audio_sample_playback_module(ctx, "@godot/classes/audio_sample_playback");
}

void register_audio_sample_playback() {
	AudioSamplePlayback::__init_js_class_id();
	js_init_audio_sample_playback_module(ctx);
}