
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_compressor.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_compressor_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectCompressor *audio_effect_compressor = static_cast<AudioEffectCompressor *>(JS_GetOpaque(val, AudioEffectCompressor::__class_id));
	if (audio_effect_compressor)
		AudioEffectCompressor::free(nullptr, audio_effect_compressor);
}

static JSClassDef audio_effect_compressor_class_def = {
	"AudioEffectCompressor",
	.finalizer = audio_effect_compressor_class_finalizer
};

static JSValue audio_effect_compressor_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectCompressor *audio_effect_compressor_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectCompressor::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_compressor_class = memnew(AudioEffectCompressor);
	if (!audio_effect_compressor_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_compressor_class);
	return obj;
}
static JSValue audio_effect_compressor_class_set_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectCompressor::set_threshold, AudioEffectCompressor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_compressor_class_get_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectCompressor::get_threshold, AudioEffectCompressor::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_compressor_class_set_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectCompressor::set_ratio, AudioEffectCompressor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_compressor_class_get_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectCompressor::get_ratio, AudioEffectCompressor::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_compressor_class_set_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectCompressor::set_gain, AudioEffectCompressor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_compressor_class_get_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectCompressor::get_gain, AudioEffectCompressor::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_compressor_class_set_attack_us(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectCompressor::set_attack_us, AudioEffectCompressor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_compressor_class_get_attack_us(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectCompressor::get_attack_us, AudioEffectCompressor::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_compressor_class_set_release_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectCompressor::set_release_ms, AudioEffectCompressor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_compressor_class_get_release_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectCompressor::get_release_ms, AudioEffectCompressor::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_compressor_class_set_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectCompressor::set_mix, AudioEffectCompressor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_compressor_class_get_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectCompressor::get_mix, AudioEffectCompressor::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_compressor_class_set_sidechain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectCompressor::set_sidechain, AudioEffectCompressor::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_compressor_class_get_sidechain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectCompressor::get_sidechain, AudioEffectCompressor::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_compressor_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_threshold", 1, &audio_effect_compressor_class_set_threshold),
	JS_CFUNC_DEF("get_threshold", 0, &audio_effect_compressor_class_get_threshold),
	JS_CFUNC_DEF("set_ratio", 1, &audio_effect_compressor_class_set_ratio),
	JS_CFUNC_DEF("get_ratio", 0, &audio_effect_compressor_class_get_ratio),
	JS_CFUNC_DEF("set_gain", 1, &audio_effect_compressor_class_set_gain),
	JS_CFUNC_DEF("get_gain", 0, &audio_effect_compressor_class_get_gain),
	JS_CFUNC_DEF("set_attack_us", 1, &audio_effect_compressor_class_set_attack_us),
	JS_CFUNC_DEF("get_attack_us", 0, &audio_effect_compressor_class_get_attack_us),
	JS_CFUNC_DEF("set_release_ms", 1, &audio_effect_compressor_class_set_release_ms),
	JS_CFUNC_DEF("get_release_ms", 0, &audio_effect_compressor_class_get_release_ms),
	JS_CFUNC_DEF("set_mix", 1, &audio_effect_compressor_class_set_mix),
	JS_CFUNC_DEF("get_mix", 0, &audio_effect_compressor_class_get_mix),
	JS_CFUNC_DEF("set_sidechain", 1, &audio_effect_compressor_class_set_sidechain),
	JS_CFUNC_DEF("get_sidechain", 0, &audio_effect_compressor_class_get_sidechain),
};

static int js_audio_effect_compressor_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectCompressor::__class_id);
	classes["AudioEffectCompressor"] = AudioEffectCompressor::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectCompressor::__class_id, &audio_effect_compressor_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectCompressor::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_compressor_class_proto_funcs, _countof(audio_effect_compressor_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_compressor_class_constructor, "AudioEffectCompressor", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectCompressor", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_compressor_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_compressor_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectCompressor");
	return m;
}

JSModuleDef *js_init_audio_effect_compressor_module(JSContext *ctx) {
	return _js_init_audio_effect_compressor_module(ctx, "godot/classes/audio_effect_compressor");
}

void register_audio_effect_compressor() {
	js_init_audio_effect_compressor_module(ctx);
}