
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_spectrum_analyzer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_spectrum_analyzer_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectSpectrumAnalyzer *audio_effect_spectrum_analyzer = static_cast<AudioEffectSpectrumAnalyzer *>(JS_GetOpaque(val, AudioEffectSpectrumAnalyzer::__class_id));
	if (audio_effect_spectrum_analyzer)
		AudioEffectSpectrumAnalyzer::free(nullptr, audio_effect_spectrum_analyzer);
}

static JSClassDef audio_effect_spectrum_analyzer_class_def = {
	"AudioEffectSpectrumAnalyzer",
	.finalizer = audio_effect_spectrum_analyzer_class_finalizer
};

static JSValue audio_effect_spectrum_analyzer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectSpectrumAnalyzer *audio_effect_spectrum_analyzer_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectSpectrumAnalyzer::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_spectrum_analyzer_class = memnew(AudioEffectSpectrumAnalyzer);
	if (!audio_effect_spectrum_analyzer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_spectrum_analyzer_class);
	return obj;
}
static JSValue audio_effect_spectrum_analyzer_class_set_buffer_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectSpectrumAnalyzer::set_buffer_length, AudioEffectSpectrumAnalyzer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_spectrum_analyzer_class_get_buffer_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectSpectrumAnalyzer::get_buffer_length, AudioEffectSpectrumAnalyzer::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_spectrum_analyzer_class_set_tap_back_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectSpectrumAnalyzer::set_tap_back_pos, AudioEffectSpectrumAnalyzer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_spectrum_analyzer_class_get_tap_back_pos(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectSpectrumAnalyzer::get_tap_back_pos, AudioEffectSpectrumAnalyzer::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_spectrum_analyzer_class_set_fft_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectSpectrumAnalyzer::set_fft_size, AudioEffectSpectrumAnalyzer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_spectrum_analyzer_class_get_fft_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectSpectrumAnalyzer::get_fft_size, AudioEffectSpectrumAnalyzer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_spectrum_analyzer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_buffer_length", 1, &audio_effect_spectrum_analyzer_class_set_buffer_length),
	JS_CFUNC_DEF("get_buffer_length", 0, &audio_effect_spectrum_analyzer_class_get_buffer_length),
	JS_CFUNC_DEF("set_tap_back_pos", 1, &audio_effect_spectrum_analyzer_class_set_tap_back_pos),
	JS_CFUNC_DEF("get_tap_back_pos", 0, &audio_effect_spectrum_analyzer_class_get_tap_back_pos),
	JS_CFUNC_DEF("set_fft_size", 1, &audio_effect_spectrum_analyzer_class_set_fft_size),
	JS_CFUNC_DEF("get_fft_size", 0, &audio_effect_spectrum_analyzer_class_get_fft_size),
};

static int js_audio_effect_spectrum_analyzer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectSpectrumAnalyzer::__class_id);
	classes["AudioEffectSpectrumAnalyzer"] = AudioEffectSpectrumAnalyzer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectSpectrumAnalyzer::__class_id, &audio_effect_spectrum_analyzer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectSpectrumAnalyzer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_spectrum_analyzer_class_proto_funcs, _countof(audio_effect_spectrum_analyzer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_spectrum_analyzer_class_constructor, "AudioEffectSpectrumAnalyzer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectSpectrumAnalyzer", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_spectrum_analyzer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_spectrum_analyzer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectSpectrumAnalyzer");
	return m;
}

JSModuleDef *js_init_audio_effect_spectrum_analyzer_module(JSContext *ctx) {
	return _js_init_audio_effect_spectrum_analyzer_module(ctx, "godot/classes/audio_effect_spectrum_analyzer");
}

void register_audio_effect_spectrum_analyzer() {
	js_init_audio_effect_spectrum_analyzer_module(ctx);
}