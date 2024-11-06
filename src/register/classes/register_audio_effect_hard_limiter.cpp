
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_hard_limiter.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_hard_limiter_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectHardLimiter *audio_effect_hard_limiter = static_cast<AudioEffectHardLimiter *>(JS_GetOpaque(val, AudioEffectHardLimiter::__class_id));
	if (audio_effect_hard_limiter)
		memdelete(audio_effect_hard_limiter);
}

static JSClassDef audio_effect_hard_limiter_class_def = {
	"AudioEffectHardLimiter",
	.finalizer = audio_effect_hard_limiter_class_finalizer
};

static JSValue audio_effect_hard_limiter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectHardLimiter::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffectHardLimiter *audio_effect_hard_limiter_class;
	if (argc == 1) 
		audio_effect_hard_limiter_class = static_cast<AudioEffectHardLimiter *>(Variant(*argv).operator Object *());
	else 
		audio_effect_hard_limiter_class = memnew(AudioEffectHardLimiter);
	if (!audio_effect_hard_limiter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_hard_limiter_class);
	return obj;
}
static JSValue audio_effect_hard_limiter_class_set_ceiling_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectHardLimiter::set_ceiling_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_hard_limiter_class_get_ceiling_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectHardLimiter::get_ceiling_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_hard_limiter_class_set_pre_gain_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectHardLimiter::set_pre_gain_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_hard_limiter_class_get_pre_gain_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectHardLimiter::get_pre_gain_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_hard_limiter_class_set_release(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectHardLimiter::set_release, ctx, this_val, argc, argv);
};
static JSValue audio_effect_hard_limiter_class_get_release(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectHardLimiter::get_release, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_hard_limiter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_ceiling_db", 1, &audio_effect_hard_limiter_class_set_ceiling_db),
	JS_CFUNC_DEF("get_ceiling_db", 0, &audio_effect_hard_limiter_class_get_ceiling_db),
	JS_CFUNC_DEF("set_pre_gain_db", 1, &audio_effect_hard_limiter_class_set_pre_gain_db),
	JS_CFUNC_DEF("get_pre_gain_db", 0, &audio_effect_hard_limiter_class_get_pre_gain_db),
	JS_CFUNC_DEF("set_release", 1, &audio_effect_hard_limiter_class_set_release),
	JS_CFUNC_DEF("get_release", 0, &audio_effect_hard_limiter_class_get_release),
};

static void define_audio_effect_hard_limiter_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pre_gain_db"),
        JS_NewCFunction(ctx, audio_effect_hard_limiter_class_get_pre_gain_db, "get_pre_gain_db", 0),
        JS_NewCFunction(ctx, audio_effect_hard_limiter_class_set_pre_gain_db, "set_pre_gain_db", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ceiling_db"),
        JS_NewCFunction(ctx, audio_effect_hard_limiter_class_get_ceiling_db, "get_ceiling_db", 0),
        JS_NewCFunction(ctx, audio_effect_hard_limiter_class_set_ceiling_db, "set_ceiling_db", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "release"),
        JS_NewCFunction(ctx, audio_effect_hard_limiter_class_get_release, "get_release", 0),
        JS_NewCFunction(ctx, audio_effect_hard_limiter_class_set_release, "set_release", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_effect_hard_limiter_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_hard_limiter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffectHardLimiter"] = AudioEffectHardLimiter::__class_id;
	class_id_list.insert(AudioEffectHardLimiter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectHardLimiter::__class_id, &audio_effect_hard_limiter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectHardLimiter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectHardLimiter::__class_id, proto);

	define_audio_effect_hard_limiter_property(ctx, proto);
	define_audio_effect_hard_limiter_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_hard_limiter_class_proto_funcs, _countof(audio_effect_hard_limiter_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_hard_limiter_class_constructor, "AudioEffectHardLimiter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AudioEffectHardLimiter", ctor);
	constructors[AudioEffectHardLimiter::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_audio_effect_hard_limiter_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_hard_limiter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectHardLimiter");
	return m;
}

JSModuleDef *js_init_audio_effect_hard_limiter_module(JSContext *ctx) {
	return _js_init_audio_effect_hard_limiter_module(ctx, "@godot/classes/audio_effect_hard_limiter");
}

void register_audio_effect_hard_limiter() {
	AudioEffectHardLimiter::__init_js_class_id();
	js_init_audio_effect_hard_limiter_module(ctx);
}