
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/audio_sample.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_sample_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioSample *audio_sample = static_cast<AudioSample *>(JS_GetOpaque(val, AudioSample::__class_id));
	if (audio_sample)
		memdelete(audio_sample);
}

static JSClassDef audio_sample_class_def = {
	"AudioSample",
	.finalizer = audio_sample_class_finalizer
};

static JSValue audio_sample_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioSample::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioSample *audio_sample_class = memnew(AudioSample);
	if (!audio_sample_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_sample_class);	
	return obj;
}

void define_audio_sample_property(JSContext *ctx, JSValue obj) {
}

static int js_audio_sample_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioSample::__class_id);
	classes["AudioSample"] = AudioSample::__class_id;
	class_id_list.insert(AudioSample::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioSample::__class_id, &audio_sample_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioSample::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioSample::__class_id, proto);

	define_audio_sample_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_sample_class_constructor, "AudioSample", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioSample", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_sample_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AudioSample::__init_js_class_id();
	js_init_audio_sample_module(ctx);
}