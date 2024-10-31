
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_spectrum_analyzer_instance.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_spectrum_analyzer_instance_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_spectrum_analyzer_instance_class_def = {
	"AudioEffectSpectrumAnalyzerInstance",
	.finalizer = audio_effect_spectrum_analyzer_instance_class_finalizer
};

static JSValue audio_effect_spectrum_analyzer_instance_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectSpectrumAnalyzerInstance::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffectSpectrumAnalyzerInstance *audio_effect_spectrum_analyzer_instance_class;
	if (argc == 1) 
		audio_effect_spectrum_analyzer_instance_class = static_cast<AudioEffectSpectrumAnalyzerInstance *>(Variant(*argv).operator Object *());
	else 
		audio_effect_spectrum_analyzer_instance_class = memnew(AudioEffectSpectrumAnalyzerInstance);
	if (!audio_effect_spectrum_analyzer_instance_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_spectrum_analyzer_instance_class);
	return obj;
}
static JSValue audio_effect_spectrum_analyzer_instance_class_get_magnitude_for_frequency_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectSpectrumAnalyzerInstance::get_magnitude_for_frequency_range, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_spectrum_analyzer_instance_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_magnitude_for_frequency_range", 3, &audio_effect_spectrum_analyzer_instance_class_get_magnitude_for_frequency_range),
};

static void define_audio_effect_spectrum_analyzer_instance_property(JSContext *ctx, JSValue proto) {
	
}

static void define_audio_effect_spectrum_analyzer_instance_enum(JSContext *ctx, JSValue proto) {
	JSValue MagnitudeMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, MagnitudeMode_obj, "MAGNITUDE_AVERAGE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, MagnitudeMode_obj, "MAGNITUDE_MAX", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "MagnitudeMode", MagnitudeMode_obj);
}

static int js_audio_effect_spectrum_analyzer_instance_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffectSpectrumAnalyzerInstance"] = AudioEffectSpectrumAnalyzerInstance::__class_id;
	class_id_list.insert(AudioEffectSpectrumAnalyzerInstance::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectSpectrumAnalyzerInstance::__class_id, &audio_effect_spectrum_analyzer_instance_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectSpectrumAnalyzerInstance::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffectInstance::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectSpectrumAnalyzerInstance::__class_id, proto);

	define_audio_effect_spectrum_analyzer_instance_property(ctx, proto);
	define_audio_effect_spectrum_analyzer_instance_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_spectrum_analyzer_instance_class_proto_funcs, _countof(audio_effect_spectrum_analyzer_instance_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_spectrum_analyzer_instance_class_constructor, "AudioEffectSpectrumAnalyzerInstance", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectSpectrumAnalyzerInstance", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_spectrum_analyzer_instance_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_effect_instance';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_spectrum_analyzer_instance_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectSpectrumAnalyzerInstance");
	return m;
}

JSModuleDef *js_init_audio_effect_spectrum_analyzer_instance_module(JSContext *ctx) {
	return _js_init_audio_effect_spectrum_analyzer_instance_module(ctx, "@godot/classes/audio_effect_spectrum_analyzer_instance");
}

void register_audio_effect_spectrum_analyzer_instance() {
	AudioEffectSpectrumAnalyzerInstance::__init_js_class_id();
	js_init_audio_effect_spectrum_analyzer_instance_module(ctx);
}