
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_limiter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_limiter_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectLimiter *audio_effect_limiter = static_cast<AudioEffectLimiter *>(JS_GetOpaque(val, AudioEffectLimiter::__class_id));
	if (audio_effect_limiter)
		AudioEffectLimiter::free(nullptr, audio_effect_limiter);
}

static JSClassDef audio_effect_limiter_class_def = {
	"AudioEffectLimiter",
	.finalizer = audio_effect_limiter_class_finalizer
};

static JSValue audio_effect_limiter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectLimiter *audio_effect_limiter_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectLimiter::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_limiter_class = memnew(AudioEffectLimiter);
	if (!audio_effect_limiter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_limiter_class);
	return obj;
}
static JSValue audio_effect_limiter_class_set_ceiling_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectLimiter::set_ceiling_db, AudioEffectLimiter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_limiter_class_get_ceiling_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectLimiter::get_ceiling_db, AudioEffectLimiter::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_limiter_class_set_threshold_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectLimiter::set_threshold_db, AudioEffectLimiter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_limiter_class_get_threshold_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectLimiter::get_threshold_db, AudioEffectLimiter::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_limiter_class_set_soft_clip_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectLimiter::set_soft_clip_db, AudioEffectLimiter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_limiter_class_get_soft_clip_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectLimiter::get_soft_clip_db, AudioEffectLimiter::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_limiter_class_set_soft_clip_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectLimiter::set_soft_clip_ratio, AudioEffectLimiter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_limiter_class_get_soft_clip_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectLimiter::get_soft_clip_ratio, AudioEffectLimiter::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_limiter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_ceiling_db", 1, &audio_effect_limiter_class_set_ceiling_db),
	JS_CFUNC_DEF("get_ceiling_db", 0, &audio_effect_limiter_class_get_ceiling_db),
	JS_CFUNC_DEF("set_threshold_db", 1, &audio_effect_limiter_class_set_threshold_db),
	JS_CFUNC_DEF("get_threshold_db", 0, &audio_effect_limiter_class_get_threshold_db),
	JS_CFUNC_DEF("set_soft_clip_db", 1, &audio_effect_limiter_class_set_soft_clip_db),
	JS_CFUNC_DEF("get_soft_clip_db", 0, &audio_effect_limiter_class_get_soft_clip_db),
	JS_CFUNC_DEF("set_soft_clip_ratio", 1, &audio_effect_limiter_class_set_soft_clip_ratio),
	JS_CFUNC_DEF("get_soft_clip_ratio", 0, &audio_effect_limiter_class_get_soft_clip_ratio),
};

static int js_audio_effect_limiter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectLimiter::__class_id);
	classes["AudioEffectLimiter"] = AudioEffectLimiter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectLimiter::__class_id, &audio_effect_limiter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectLimiter::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_limiter_class_proto_funcs, _countof(audio_effect_limiter_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_limiter_class_constructor, "AudioEffectLimiter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectLimiter", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_limiter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_limiter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectLimiter");
	return m;
}

JSModuleDef *js_init_audio_effect_limiter_module(JSContext *ctx) {
	return _js_init_audio_effect_limiter_module(ctx, "godot/classes/audio_effect_limiter");
}

void register_audio_effect_limiter() {
	js_init_audio_effect_limiter_module(ctx);
}