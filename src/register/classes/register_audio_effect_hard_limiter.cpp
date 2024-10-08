
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_hard_limiter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_hard_limiter_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectHardLimiter *audio_effect_hard_limiter = static_cast<AudioEffectHardLimiter *>(JS_GetOpaque(val, AudioEffectHardLimiter::__class_id));
	if (audio_effect_hard_limiter)
		AudioEffectHardLimiter::free(nullptr, audio_effect_hard_limiter);
}

static JSClassDef audio_effect_hard_limiter_class_def = {
	"AudioEffectHardLimiter",
	.finalizer = audio_effect_hard_limiter_class_finalizer
};

static JSValue audio_effect_hard_limiter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectHardLimiter *audio_effect_hard_limiter_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectHardLimiter::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_hard_limiter_class = memnew(AudioEffectHardLimiter);
	if (!audio_effect_hard_limiter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_hard_limiter_class);
	return obj;
}
static JSValue audio_effect_hard_limiter_class_set_ceiling_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectHardLimiter::set_ceiling_db, AudioEffectHardLimiter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_hard_limiter_class_get_ceiling_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectHardLimiter::get_ceiling_db, AudioEffectHardLimiter::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_hard_limiter_class_set_pre_gain_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectHardLimiter::set_pre_gain_db, AudioEffectHardLimiter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_hard_limiter_class_get_pre_gain_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectHardLimiter::get_pre_gain_db, AudioEffectHardLimiter::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_hard_limiter_class_set_release(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioEffectHardLimiter::set_release, AudioEffectHardLimiter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_hard_limiter_class_get_release(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectHardLimiter::get_release, AudioEffectHardLimiter::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_hard_limiter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_ceiling_db", 1, &audio_effect_hard_limiter_class_set_ceiling_db),
	JS_CFUNC_DEF("get_ceiling_db", 0, &audio_effect_hard_limiter_class_get_ceiling_db),
	JS_CFUNC_DEF("set_pre_gain_db", 1, &audio_effect_hard_limiter_class_set_pre_gain_db),
	JS_CFUNC_DEF("get_pre_gain_db", 0, &audio_effect_hard_limiter_class_get_pre_gain_db),
	JS_CFUNC_DEF("set_release", 1, &audio_effect_hard_limiter_class_set_release),
	JS_CFUNC_DEF("get_release", 0, &audio_effect_hard_limiter_class_get_release),
};

static int js_audio_effect_hard_limiter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectHardLimiter::__class_id);
	classes["AudioEffectHardLimiter"] = AudioEffectHardLimiter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectHardLimiter::__class_id, &audio_effect_hard_limiter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectHardLimiter::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_hard_limiter_class_proto_funcs, _countof(audio_effect_hard_limiter_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_hard_limiter_class_constructor, "AudioEffectHardLimiter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectHardLimiter", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_hard_limiter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_hard_limiter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectHardLimiter");
	return m;
}

JSModuleDef *js_init_audio_effect_hard_limiter_module(JSContext *ctx) {
	return _js_init_audio_effect_hard_limiter_module(ctx, "godot/classes/audio_effect_hard_limiter");
}

void register_audio_effect_hard_limiter() {
	js_init_audio_effect_hard_limiter_module(ctx);
}