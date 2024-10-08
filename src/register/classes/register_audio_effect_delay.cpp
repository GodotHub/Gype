
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect_delay.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_delay_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectDelay *audio_effect_delay = static_cast<AudioEffectDelay *>(JS_GetOpaque(val, AudioEffectDelay::__class_id));
	if (audio_effect_delay)
		AudioEffectDelay::free(nullptr, audio_effect_delay);
}

static JSClassDef audio_effect_delay_class_def = {
	"AudioEffectDelay",
	.finalizer = audio_effect_delay_class_finalizer
};

static JSValue audio_effect_delay_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectDelay *audio_effect_delay_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectDelay::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_delay_class = memnew(AudioEffectDelay);
	if (!audio_effect_delay_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_delay_class);
	return obj;
}
static JSValue audio_effect_delay_class_set_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_dry, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioEffectDelay::get_dry, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_tap1_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap1_active, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_is_tap1_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::is_tap1_active, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_tap1_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap1_delay_ms, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap1_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap1_delay_ms, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_tap1_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap1_level_db, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap1_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap1_level_db, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_tap1_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap1_pan, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap1_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap1_pan, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_tap2_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap2_active, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_is_tap2_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::is_tap2_active, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_tap2_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap2_delay_ms, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap2_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap2_delay_ms, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_tap2_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap2_level_db, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap2_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap2_level_db, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_tap2_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap2_pan, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap2_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap2_pan, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_feedback_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_feedback_active, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_is_feedback_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::is_feedback_active, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_feedback_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_feedback_delay_ms, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_feedback_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_feedback_delay_ms, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_feedback_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_feedback_level_db, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_feedback_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_feedback_level_db, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_delay_class_set_feedback_lowpass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_feedback_lowpass, AudioEffectDelay::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_feedback_lowpass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_feedback_lowpass, AudioEffectDelay::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_delay_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_dry", 1, &audio_effect_delay_class_set_dry),
	JS_CFUNC_DEF("get_dry", 0, &audio_effect_delay_class_get_dry),
	JS_CFUNC_DEF("set_tap1_active", 1, &audio_effect_delay_class_set_tap1_active),
	JS_CFUNC_DEF("is_tap1_active", 0, &audio_effect_delay_class_is_tap1_active),
	JS_CFUNC_DEF("set_tap1_delay_ms", 1, &audio_effect_delay_class_set_tap1_delay_ms),
	JS_CFUNC_DEF("get_tap1_delay_ms", 0, &audio_effect_delay_class_get_tap1_delay_ms),
	JS_CFUNC_DEF("set_tap1_level_db", 1, &audio_effect_delay_class_set_tap1_level_db),
	JS_CFUNC_DEF("get_tap1_level_db", 0, &audio_effect_delay_class_get_tap1_level_db),
	JS_CFUNC_DEF("set_tap1_pan", 1, &audio_effect_delay_class_set_tap1_pan),
	JS_CFUNC_DEF("get_tap1_pan", 0, &audio_effect_delay_class_get_tap1_pan),
	JS_CFUNC_DEF("set_tap2_active", 1, &audio_effect_delay_class_set_tap2_active),
	JS_CFUNC_DEF("is_tap2_active", 0, &audio_effect_delay_class_is_tap2_active),
	JS_CFUNC_DEF("set_tap2_delay_ms", 1, &audio_effect_delay_class_set_tap2_delay_ms),
	JS_CFUNC_DEF("get_tap2_delay_ms", 0, &audio_effect_delay_class_get_tap2_delay_ms),
	JS_CFUNC_DEF("set_tap2_level_db", 1, &audio_effect_delay_class_set_tap2_level_db),
	JS_CFUNC_DEF("get_tap2_level_db", 0, &audio_effect_delay_class_get_tap2_level_db),
	JS_CFUNC_DEF("set_tap2_pan", 1, &audio_effect_delay_class_set_tap2_pan),
	JS_CFUNC_DEF("get_tap2_pan", 0, &audio_effect_delay_class_get_tap2_pan),
	JS_CFUNC_DEF("set_feedback_active", 1, &audio_effect_delay_class_set_feedback_active),
	JS_CFUNC_DEF("is_feedback_active", 0, &audio_effect_delay_class_is_feedback_active),
	JS_CFUNC_DEF("set_feedback_delay_ms", 1, &audio_effect_delay_class_set_feedback_delay_ms),
	JS_CFUNC_DEF("get_feedback_delay_ms", 0, &audio_effect_delay_class_get_feedback_delay_ms),
	JS_CFUNC_DEF("set_feedback_level_db", 1, &audio_effect_delay_class_set_feedback_level_db),
	JS_CFUNC_DEF("get_feedback_level_db", 0, &audio_effect_delay_class_get_feedback_level_db),
	JS_CFUNC_DEF("set_feedback_lowpass", 1, &audio_effect_delay_class_set_feedback_lowpass),
	JS_CFUNC_DEF("get_feedback_lowpass", 0, &audio_effect_delay_class_get_feedback_lowpass),
};

static int js_audio_effect_delay_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectDelay::__class_id);
	classes["AudioEffectDelay"] = AudioEffectDelay::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectDelay::__class_id, &audio_effect_delay_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectDelay::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_delay_class_proto_funcs, _countof(audio_effect_delay_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_delay_class_constructor, "AudioEffectDelay", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectDelay", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_delay_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_delay_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectDelay");
	return m;
}

JSModuleDef *js_init_audio_effect_delay_module(JSContext *ctx) {
	return _js_init_audio_effect_delay_module(ctx, "godot/classes/audio_effect_delay");
}

void register_audio_effect_delay() {
	js_init_audio_effect_delay_module(ctx);
}