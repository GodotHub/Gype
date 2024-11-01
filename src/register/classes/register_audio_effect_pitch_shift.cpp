
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_pitch_shift.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_pitch_shift_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_pitch_shift_class_def = {
	"AudioEffectPitchShift",
	.finalizer = audio_effect_pitch_shift_class_finalizer
};

static JSValue audio_effect_pitch_shift_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectPitchShift::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffectPitchShift *audio_effect_pitch_shift_class;
	if (argc == 1) 
		audio_effect_pitch_shift_class = static_cast<AudioEffectPitchShift *>(Variant(*argv).operator Object *());
	else 
		audio_effect_pitch_shift_class = memnew(AudioEffectPitchShift);
	if (!audio_effect_pitch_shift_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_pitch_shift_class);
	return obj;
}
static JSValue audio_effect_pitch_shift_class_set_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectPitchShift::set_pitch_scale, ctx, this_val, argc, argv);
};
static JSValue audio_effect_pitch_shift_class_get_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectPitchShift::get_pitch_scale, ctx, this_val, argc, argv);
};
static JSValue audio_effect_pitch_shift_class_set_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectPitchShift::set_oversampling, ctx, this_val, argc, argv);
};
static JSValue audio_effect_pitch_shift_class_get_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectPitchShift::get_oversampling, ctx, this_val, argc, argv);
};
static JSValue audio_effect_pitch_shift_class_set_fft_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectPitchShift::set_fft_size, ctx, this_val, argc, argv);
};
static JSValue audio_effect_pitch_shift_class_get_fft_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectPitchShift::get_fft_size, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_pitch_shift_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pitch_scale", 1, &audio_effect_pitch_shift_class_set_pitch_scale),
	JS_CFUNC_DEF("get_pitch_scale", 0, &audio_effect_pitch_shift_class_get_pitch_scale),
	JS_CFUNC_DEF("set_oversampling", 1, &audio_effect_pitch_shift_class_set_oversampling),
	JS_CFUNC_DEF("get_oversampling", 0, &audio_effect_pitch_shift_class_get_oversampling),
	JS_CFUNC_DEF("set_fft_size", 1, &audio_effect_pitch_shift_class_set_fft_size),
	JS_CFUNC_DEF("get_fft_size", 0, &audio_effect_pitch_shift_class_get_fft_size),
};

static void define_audio_effect_pitch_shift_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pitch_scale"),
        JS_NewCFunction(ctx, audio_effect_pitch_shift_class_get_pitch_scale, "get_pitch_scale", 0),
        JS_NewCFunction(ctx, audio_effect_pitch_shift_class_set_pitch_scale, "set_pitch_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "oversampling"),
        JS_NewCFunction(ctx, audio_effect_pitch_shift_class_get_oversampling, "get_oversampling", 0),
        JS_NewCFunction(ctx, audio_effect_pitch_shift_class_set_oversampling, "set_oversampling", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fft_size"),
        JS_NewCFunction(ctx, audio_effect_pitch_shift_class_get_fft_size, "get_fft_size", 0),
        JS_NewCFunction(ctx, audio_effect_pitch_shift_class_set_fft_size, "set_fft_size", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_effect_pitch_shift_enum(JSContext *ctx, JSValue proto) {
	JSValue FFTSize_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, FFTSize_obj, "FFT_SIZE_256", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, FFTSize_obj, "FFT_SIZE_512", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, FFTSize_obj, "FFT_SIZE_1024", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, FFTSize_obj, "FFT_SIZE_2048", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, FFTSize_obj, "FFT_SIZE_4096", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, FFTSize_obj, "FFT_SIZE_MAX", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, proto, "FFTSize", FFTSize_obj);
}

static int js_audio_effect_pitch_shift_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffectPitchShift"] = AudioEffectPitchShift::__class_id;
	class_id_list.insert(AudioEffectPitchShift::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectPitchShift::__class_id, &audio_effect_pitch_shift_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectPitchShift::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectPitchShift::__class_id, proto);

	define_audio_effect_pitch_shift_property(ctx, proto);
	define_audio_effect_pitch_shift_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_pitch_shift_class_proto_funcs, _countof(audio_effect_pitch_shift_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_pitch_shift_class_constructor, "AudioEffectPitchShift", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectPitchShift", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_pitch_shift_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_pitch_shift_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectPitchShift");
	return m;
}

JSModuleDef *js_init_audio_effect_pitch_shift_module(JSContext *ctx) {
	return _js_init_audio_effect_pitch_shift_module(ctx, "@godot/classes/audio_effect_pitch_shift");
}

void register_audio_effect_pitch_shift() {
	AudioEffectPitchShift::__init_js_class_id();
	js_init_audio_effect_pitch_shift_module(ctx);
}