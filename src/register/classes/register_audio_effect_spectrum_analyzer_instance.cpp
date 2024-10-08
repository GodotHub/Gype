
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/audio_effect_spectrum_analyzer_instance.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_spectrum_analyzer_instance_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectSpectrumAnalyzerInstance *audio_effect_spectrum_analyzer_instance = static_cast<AudioEffectSpectrumAnalyzerInstance *>(JS_GetOpaque(val, AudioEffectSpectrumAnalyzerInstance::__class_id));
	if (audio_effect_spectrum_analyzer_instance)
		AudioEffectSpectrumAnalyzerInstance::free(nullptr, audio_effect_spectrum_analyzer_instance);
}

static JSClassDef audio_effect_spectrum_analyzer_instance_class_def = {
	"AudioEffectSpectrumAnalyzerInstance",
	.finalizer = audio_effect_spectrum_analyzer_instance_class_finalizer
};

static JSValue audio_effect_spectrum_analyzer_instance_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectSpectrumAnalyzerInstance *audio_effect_spectrum_analyzer_instance_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectSpectrumAnalyzerInstance::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_spectrum_analyzer_instance_class = memnew(AudioEffectSpectrumAnalyzerInstance);
	if (!audio_effect_spectrum_analyzer_instance_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_spectrum_analyzer_instance_class);
	return obj;
}
static JSValue audio_effect_spectrum_analyzer_instance_class_get_magnitude_for_frequency_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectSpectrumAnalyzerInstance::get_magnitude_for_frequency_range, AudioEffectSpectrumAnalyzerInstance::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_spectrum_analyzer_instance_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_magnitude_for_frequency_range", 3, &audio_effect_spectrum_analyzer_instance_class_get_magnitude_for_frequency_range),
};

static int js_audio_effect_spectrum_analyzer_instance_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectSpectrumAnalyzerInstance::__class_id);
	classes["AudioEffectSpectrumAnalyzerInstance"] = AudioEffectSpectrumAnalyzerInstance::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectSpectrumAnalyzerInstance::__class_id, &audio_effect_spectrum_analyzer_instance_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffectInstance::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectSpectrumAnalyzerInstance::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_spectrum_analyzer_instance_class_proto_funcs, _countof(audio_effect_spectrum_analyzer_instance_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_spectrum_analyzer_instance_class_constructor, "AudioEffectSpectrumAnalyzerInstance", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectSpectrumAnalyzerInstance", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_spectrum_analyzer_instance_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_spectrum_analyzer_instance_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectSpectrumAnalyzerInstance");
	return m;
}

JSModuleDef *js_init_audio_effect_spectrum_analyzer_instance_module(JSContext *ctx) {
	return _js_init_audio_effect_spectrum_analyzer_instance_module(ctx, "godot/classes/audio_effect_spectrum_analyzer_instance");
}

void register_audio_effect_spectrum_analyzer_instance() {
	js_init_audio_effect_spectrum_analyzer_instance_module(ctx);
}