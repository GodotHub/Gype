
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_reverb.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_reverb_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectReverb *audio_effect_reverb = static_cast<AudioEffectReverb *>(JS_GetOpaque(val, AudioEffectReverb::__class_id));
	if (audio_effect_reverb)
		AudioEffectReverb::free(nullptr, audio_effect_reverb);
}

static JSClassDef audio_effect_reverb_class_def = {
	"AudioEffectReverb",
	.finalizer = audio_effect_reverb_class_finalizer
};

static JSValue audio_effect_reverb_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectReverb *audio_effect_reverb_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectReverb::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_reverb_class = memnew(AudioEffectReverb);
	if (!audio_effect_reverb_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_reverb_class);
	return obj;
}
static JSValue audio_effect_reverb_class_set_predelay_msec(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectReverb::set_predelay_msec, AudioEffectReverb::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_reverb_class_get_predelay_msec(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectReverb::get_predelay_msec, AudioEffectReverb::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_reverb_class_set_predelay_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectReverb::set_predelay_feedback, AudioEffectReverb::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_reverb_class_get_predelay_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectReverb::get_predelay_feedback, AudioEffectReverb::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_reverb_class_set_room_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectReverb::set_room_size, AudioEffectReverb::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_reverb_class_get_room_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectReverb::get_room_size, AudioEffectReverb::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_reverb_class_set_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectReverb::set_damping, AudioEffectReverb::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_reverb_class_get_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectReverb::get_damping, AudioEffectReverb::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_reverb_class_set_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectReverb::set_spread, AudioEffectReverb::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_reverb_class_get_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectReverb::get_spread, AudioEffectReverb::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_reverb_class_set_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectReverb::set_dry, AudioEffectReverb::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_reverb_class_get_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectReverb::get_dry, AudioEffectReverb::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_reverb_class_set_wet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectReverb::set_wet, AudioEffectReverb::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_reverb_class_get_wet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectReverb::get_wet, AudioEffectReverb::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_reverb_class_set_hpf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectReverb::set_hpf, AudioEffectReverb::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_reverb_class_get_hpf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectReverb::get_hpf, AudioEffectReverb::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_reverb_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_predelay_msec", 1, &audio_effect_reverb_class_set_predelay_msec),
	JS_CFUNC_DEF("get_predelay_msec", 0, &audio_effect_reverb_class_get_predelay_msec),
	JS_CFUNC_DEF("set_predelay_feedback", 1, &audio_effect_reverb_class_set_predelay_feedback),
	JS_CFUNC_DEF("get_predelay_feedback", 0, &audio_effect_reverb_class_get_predelay_feedback),
	JS_CFUNC_DEF("set_room_size", 1, &audio_effect_reverb_class_set_room_size),
	JS_CFUNC_DEF("get_room_size", 0, &audio_effect_reverb_class_get_room_size),
	JS_CFUNC_DEF("set_damping", 1, &audio_effect_reverb_class_set_damping),
	JS_CFUNC_DEF("get_damping", 0, &audio_effect_reverb_class_get_damping),
	JS_CFUNC_DEF("set_spread", 1, &audio_effect_reverb_class_set_spread),
	JS_CFUNC_DEF("get_spread", 0, &audio_effect_reverb_class_get_spread),
	JS_CFUNC_DEF("set_dry", 1, &audio_effect_reverb_class_set_dry),
	JS_CFUNC_DEF("get_dry", 0, &audio_effect_reverb_class_get_dry),
	JS_CFUNC_DEF("set_wet", 1, &audio_effect_reverb_class_set_wet),
	JS_CFUNC_DEF("get_wet", 0, &audio_effect_reverb_class_get_wet),
	JS_CFUNC_DEF("set_hpf", 1, &audio_effect_reverb_class_set_hpf),
	JS_CFUNC_DEF("get_hpf", 0, &audio_effect_reverb_class_get_hpf),
};

static int js_audio_effect_reverb_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectReverb::__class_id);
	classes["AudioEffectReverb"] = AudioEffectReverb::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectReverb::__class_id, &audio_effect_reverb_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectReverb::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_reverb_class_proto_funcs, _countof(audio_effect_reverb_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_reverb_class_constructor, "AudioEffectReverb", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectReverb", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_reverb_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_reverb_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectReverb");
	return m;
}

JSModuleDef *js_init_audio_effect_reverb_module(JSContext *ctx) {
	return _js_init_audio_effect_reverb_module(ctx, "godot/classes/audio_effect_reverb");
}

void register_audio_effect_reverb() {
	js_init_audio_effect_reverb_module(ctx);
}