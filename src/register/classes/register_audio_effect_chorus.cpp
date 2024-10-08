
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_chorus.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_chorus_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectChorus *audio_effect_chorus = static_cast<AudioEffectChorus *>(JS_GetOpaque(val, AudioEffectChorus::__class_id));
	if (audio_effect_chorus)
		AudioEffectChorus::free(nullptr, audio_effect_chorus);
}

static JSClassDef audio_effect_chorus_class_def = {
	"AudioEffectChorus",
	.finalizer = audio_effect_chorus_class_finalizer
};

static JSValue audio_effect_chorus_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectChorus *audio_effect_chorus_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectChorus::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_chorus_class = memnew(AudioEffectChorus);
	if (!audio_effect_chorus_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_chorus_class);
	return obj;
}
static JSValue audio_effect_chorus_class_set_voice_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectChorus::set_voice_count, AudioEffectChorus::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_chorus_class_get_voice_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectChorus::get_voice_count, AudioEffectChorus::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_chorus_class_set_voice_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectChorus::set_voice_delay_ms, AudioEffectChorus::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_chorus_class_get_voice_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectChorus::get_voice_delay_ms, AudioEffectChorus::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_chorus_class_set_voice_rate_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectChorus::set_voice_rate_hz, AudioEffectChorus::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_chorus_class_get_voice_rate_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectChorus::get_voice_rate_hz, AudioEffectChorus::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_chorus_class_set_voice_depth_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectChorus::set_voice_depth_ms, AudioEffectChorus::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_chorus_class_get_voice_depth_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectChorus::get_voice_depth_ms, AudioEffectChorus::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_chorus_class_set_voice_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectChorus::set_voice_level_db, AudioEffectChorus::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_chorus_class_get_voice_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectChorus::get_voice_level_db, AudioEffectChorus::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_chorus_class_set_voice_cutoff_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectChorus::set_voice_cutoff_hz, AudioEffectChorus::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_chorus_class_get_voice_cutoff_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectChorus::get_voice_cutoff_hz, AudioEffectChorus::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_chorus_class_set_voice_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectChorus::set_voice_pan, AudioEffectChorus::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_chorus_class_get_voice_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectChorus::get_voice_pan, AudioEffectChorus::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_chorus_class_set_wet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectChorus::set_wet, AudioEffectChorus::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_chorus_class_get_wet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectChorus::get_wet, AudioEffectChorus::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_chorus_class_set_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectChorus::set_dry, AudioEffectChorus::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_chorus_class_get_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectChorus::get_dry, AudioEffectChorus::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_chorus_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_voice_count", 1, &audio_effect_chorus_class_set_voice_count),
	JS_CFUNC_DEF("get_voice_count", 0, &audio_effect_chorus_class_get_voice_count),
	JS_CFUNC_DEF("set_voice_delay_ms", 2, &audio_effect_chorus_class_set_voice_delay_ms),
	JS_CFUNC_DEF("get_voice_delay_ms", 1, &audio_effect_chorus_class_get_voice_delay_ms),
	JS_CFUNC_DEF("set_voice_rate_hz", 2, &audio_effect_chorus_class_set_voice_rate_hz),
	JS_CFUNC_DEF("get_voice_rate_hz", 1, &audio_effect_chorus_class_get_voice_rate_hz),
	JS_CFUNC_DEF("set_voice_depth_ms", 2, &audio_effect_chorus_class_set_voice_depth_ms),
	JS_CFUNC_DEF("get_voice_depth_ms", 1, &audio_effect_chorus_class_get_voice_depth_ms),
	JS_CFUNC_DEF("set_voice_level_db", 2, &audio_effect_chorus_class_set_voice_level_db),
	JS_CFUNC_DEF("get_voice_level_db", 1, &audio_effect_chorus_class_get_voice_level_db),
	JS_CFUNC_DEF("set_voice_cutoff_hz", 2, &audio_effect_chorus_class_set_voice_cutoff_hz),
	JS_CFUNC_DEF("get_voice_cutoff_hz", 1, &audio_effect_chorus_class_get_voice_cutoff_hz),
	JS_CFUNC_DEF("set_voice_pan", 2, &audio_effect_chorus_class_set_voice_pan),
	JS_CFUNC_DEF("get_voice_pan", 1, &audio_effect_chorus_class_get_voice_pan),
	JS_CFUNC_DEF("set_wet", 1, &audio_effect_chorus_class_set_wet),
	JS_CFUNC_DEF("get_wet", 0, &audio_effect_chorus_class_get_wet),
	JS_CFUNC_DEF("set_dry", 1, &audio_effect_chorus_class_set_dry),
	JS_CFUNC_DEF("get_dry", 0, &audio_effect_chorus_class_get_dry),
};

static int js_audio_effect_chorus_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectChorus::__class_id);
	classes["AudioEffectChorus"] = AudioEffectChorus::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectChorus::__class_id, &audio_effect_chorus_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectChorus::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_chorus_class_proto_funcs, _countof(audio_effect_chorus_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_chorus_class_constructor, "AudioEffectChorus", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectChorus", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_chorus_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_chorus_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectChorus");
	return m;
}

JSModuleDef *js_init_audio_effect_chorus_module(JSContext *ctx) {
	return _js_init_audio_effect_chorus_module(ctx, "godot/classes/audio_effect_chorus");
}

void register_audio_effect_chorus() {
	js_init_audio_effect_chorus_module(ctx);
}