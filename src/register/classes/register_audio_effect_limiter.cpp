
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_limiter.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_limiter_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectLimiter *audio_effect_limiter = static_cast<AudioEffectLimiter *>(JS_GetOpaque(val, AudioEffectLimiter::__class_id));
	if (audio_effect_limiter)
		memdelete(audio_effect_limiter);
}

static JSClassDef audio_effect_limiter_class_def = {
	"AudioEffectLimiter",
	.finalizer = audio_effect_limiter_class_finalizer
};

static JSValue audio_effect_limiter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectLimiter::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioEffectLimiter *audio_effect_limiter_class = memnew(AudioEffectLimiter);
	if (!audio_effect_limiter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_limiter_class);	
	return obj;
}
static JSValue audio_effect_limiter_class_set_ceiling_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectLimiter::set_ceiling_db, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_limiter_class_get_ceiling_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectLimiter::get_ceiling_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_limiter_class_set_threshold_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectLimiter::set_threshold_db, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_limiter_class_get_threshold_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectLimiter::get_threshold_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_limiter_class_set_soft_clip_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectLimiter::set_soft_clip_db, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_limiter_class_get_soft_clip_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectLimiter::get_soft_clip_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_limiter_class_set_soft_clip_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectLimiter::set_soft_clip_ratio, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_limiter_class_get_soft_clip_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectLimiter::get_soft_clip_ratio, ctx, this_val, argc, argv);
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

void define_audio_effect_limiter_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ceiling_db"),
        JS_NewCFunction(ctx, audio_effect_limiter_class_get_ceiling_db, "get_ceiling_db", 0),
        JS_NewCFunction(ctx, audio_effect_limiter_class_set_ceiling_db, "set_ceiling_db", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "threshold_db"),
        JS_NewCFunction(ctx, audio_effect_limiter_class_get_threshold_db, "get_threshold_db", 0),
        JS_NewCFunction(ctx, audio_effect_limiter_class_set_threshold_db, "set_threshold_db", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "soft_clip_db"),
        JS_NewCFunction(ctx, audio_effect_limiter_class_get_soft_clip_db, "get_soft_clip_db", 0),
        JS_NewCFunction(ctx, audio_effect_limiter_class_set_soft_clip_db, "set_soft_clip_db", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "soft_clip_ratio"),
        JS_NewCFunction(ctx, audio_effect_limiter_class_get_soft_clip_ratio, "get_soft_clip_ratio", 0),
        JS_NewCFunction(ctx, audio_effect_limiter_class_set_soft_clip_ratio, "set_soft_clip_ratio", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_audio_effect_limiter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioEffectLimiter::__class_id);
	classes["AudioEffectLimiter"] = AudioEffectLimiter::__class_id;
	class_id_list.insert(AudioEffectLimiter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectLimiter::__class_id, &audio_effect_limiter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectLimiter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectLimiter::__class_id, proto);

	define_audio_effect_limiter_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_limiter_class_proto_funcs, _countof(audio_effect_limiter_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_limiter_class_constructor, "AudioEffectLimiter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectLimiter", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_limiter_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AudioEffectLimiter::__init_js_class_id();
	js_init_audio_effect_limiter_module(ctx);
}