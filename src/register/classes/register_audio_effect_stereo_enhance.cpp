
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_stereo_enhance.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_stereo_enhance_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectStereoEnhance *audio_effect_stereo_enhance = static_cast<AudioEffectStereoEnhance *>(JS_GetOpaque(val, AudioEffectStereoEnhance::__class_id));
	if (audio_effect_stereo_enhance)
		AudioEffectStereoEnhance::free(nullptr, audio_effect_stereo_enhance);
}

static JSClassDef audio_effect_stereo_enhance_class_def = {
	"AudioEffectStereoEnhance",
	.finalizer = audio_effect_stereo_enhance_class_finalizer
};

static JSValue audio_effect_stereo_enhance_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectStereoEnhance *audio_effect_stereo_enhance_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectStereoEnhance::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_stereo_enhance_class = memnew(AudioEffectStereoEnhance);
	if (!audio_effect_stereo_enhance_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_stereo_enhance_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue audio_effect_stereo_enhance_class_set_pan_pullout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectStereoEnhance::set_pan_pullout, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_stereo_enhance_class_get_pan_pullout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectStereoEnhance::get_pan_pullout, ctx, this_val, argc, argv);
};
static JSValue audio_effect_stereo_enhance_class_set_time_pullout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectStereoEnhance::set_time_pullout, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_stereo_enhance_class_get_time_pullout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectStereoEnhance::get_time_pullout, ctx, this_val, argc, argv);
};
static JSValue audio_effect_stereo_enhance_class_set_surround(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectStereoEnhance::set_surround, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_stereo_enhance_class_get_surround(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectStereoEnhance::get_surround, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_stereo_enhance_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pan_pullout", 1, &audio_effect_stereo_enhance_class_set_pan_pullout),
	JS_CFUNC_DEF("get_pan_pullout", 0, &audio_effect_stereo_enhance_class_get_pan_pullout),
	JS_CFUNC_DEF("set_time_pullout", 1, &audio_effect_stereo_enhance_class_set_time_pullout),
	JS_CFUNC_DEF("get_time_pullout", 0, &audio_effect_stereo_enhance_class_get_time_pullout),
	JS_CFUNC_DEF("set_surround", 1, &audio_effect_stereo_enhance_class_set_surround),
	JS_CFUNC_DEF("get_surround", 0, &audio_effect_stereo_enhance_class_get_surround),
};

void define_audio_effect_stereo_enhance_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "pan_pullout"),
        JS_NewCFunction(ctx, audio_effect_stereo_enhance_class_get_pan_pullout, "get_pan_pullout", 0),
        JS_NewCFunction(ctx, audio_effect_stereo_enhance_class_set_pan_pullout, "set_pan_pullout", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "time_pullout_ms"),
        JS_NewCFunction(ctx, audio_effect_stereo_enhance_class_get_time_pullout, "get_time_pullout", 0),
        JS_NewCFunction(ctx, audio_effect_stereo_enhance_class_set_time_pullout, "set_time_pullout", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "surround"),
        JS_NewCFunction(ctx, audio_effect_stereo_enhance_class_get_surround, "get_surround", 0),
        JS_NewCFunction(ctx, audio_effect_stereo_enhance_class_set_surround, "set_surround", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_audio_effect_stereo_enhance_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioEffectStereoEnhance::__class_id);
	classes["AudioEffectStereoEnhance"] = AudioEffectStereoEnhance::__class_id;
	class_id_list.insert(AudioEffectStereoEnhance::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectStereoEnhance::__class_id, &audio_effect_stereo_enhance_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectStereoEnhance::__class_id, proto);
	define_audio_effect_stereo_enhance_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_stereo_enhance_class_proto_funcs, _countof(audio_effect_stereo_enhance_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_stereo_enhance_class_constructor, "AudioEffectStereoEnhance", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectStereoEnhance", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_stereo_enhance_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_stereo_enhance_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectStereoEnhance");
	return m;
}

JSModuleDef *js_init_audio_effect_stereo_enhance_module(JSContext *ctx) {
	return _js_init_audio_effect_stereo_enhance_module(ctx, "godot/classes/audio_effect_stereo_enhance");
}

void register_audio_effect_stereo_enhance() {
	AudioEffectStereoEnhance::__init_js_class_id();
	js_init_audio_effect_stereo_enhance_module(ctx);
}