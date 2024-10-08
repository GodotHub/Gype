
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_pitch_shift.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_pitch_shift_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectPitchShift *audio_effect_pitch_shift = static_cast<AudioEffectPitchShift *>(JS_GetOpaque(val, AudioEffectPitchShift::__class_id));
	if (audio_effect_pitch_shift)
		AudioEffectPitchShift::free(nullptr, audio_effect_pitch_shift);
}

static JSClassDef audio_effect_pitch_shift_class_def = {
	"AudioEffectPitchShift",
	.finalizer = audio_effect_pitch_shift_class_finalizer
};

static JSValue audio_effect_pitch_shift_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectPitchShift *audio_effect_pitch_shift_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectPitchShift::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_pitch_shift_class = memnew(AudioEffectPitchShift);
	if (!audio_effect_pitch_shift_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_pitch_shift_class);
	return obj;
}
static JSValue audio_effect_pitch_shift_class_set_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectPitchShift::set_pitch_scale, AudioEffectPitchShift::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_pitch_shift_class_get_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectPitchShift::get_pitch_scale, AudioEffectPitchShift::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_pitch_shift_class_set_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectPitchShift::set_oversampling, AudioEffectPitchShift::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_pitch_shift_class_get_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectPitchShift::get_oversampling, AudioEffectPitchShift::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_pitch_shift_class_set_fft_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectPitchShift::set_fft_size, AudioEffectPitchShift::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_pitch_shift_class_get_fft_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectPitchShift::get_fft_size, AudioEffectPitchShift::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_pitch_shift_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pitch_scale", 1, &audio_effect_pitch_shift_class_set_pitch_scale),
	JS_CFUNC_DEF("get_pitch_scale", 0, &audio_effect_pitch_shift_class_get_pitch_scale),
	JS_CFUNC_DEF("set_oversampling", 1, &audio_effect_pitch_shift_class_set_oversampling),
	JS_CFUNC_DEF("get_oversampling", 0, &audio_effect_pitch_shift_class_get_oversampling),
	JS_CFUNC_DEF("set_fft_size", 1, &audio_effect_pitch_shift_class_set_fft_size),
	JS_CFUNC_DEF("get_fft_size", 0, &audio_effect_pitch_shift_class_get_fft_size),
};

static int js_audio_effect_pitch_shift_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectPitchShift::__class_id);
	classes["AudioEffectPitchShift"] = AudioEffectPitchShift::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectPitchShift::__class_id, &audio_effect_pitch_shift_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectPitchShift::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_pitch_shift_class_proto_funcs, _countof(audio_effect_pitch_shift_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_pitch_shift_class_constructor, "AudioEffectPitchShift", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectPitchShift", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_pitch_shift_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_pitch_shift_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectPitchShift");
	return m;
}

JSModuleDef *js_init_audio_effect_pitch_shift_module(JSContext *ctx) {
	return _js_init_audio_effect_pitch_shift_module(ctx, "godot/classes/audio_effect_pitch_shift");
}

void register_audio_effect_pitch_shift() {
	js_init_audio_effect_pitch_shift_module(ctx);
}