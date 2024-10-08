
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_filter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_filter_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectFilter *audio_effect_filter = static_cast<AudioEffectFilter *>(JS_GetOpaque(val, AudioEffectFilter::__class_id));
	if (audio_effect_filter)
		AudioEffectFilter::free(nullptr, audio_effect_filter);
}

static JSClassDef audio_effect_filter_class_def = {
	"AudioEffectFilter",
	.finalizer = audio_effect_filter_class_finalizer
};

static JSValue audio_effect_filter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectFilter *audio_effect_filter_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectFilter::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_filter_class = memnew(AudioEffectFilter);
	if (!audio_effect_filter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_filter_class);
	return obj;
}
static JSValue audio_effect_filter_class_set_cutoff(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectFilter::set_cutoff, AudioEffectFilter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_filter_class_get_cutoff(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectFilter::get_cutoff, AudioEffectFilter::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_filter_class_set_resonance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectFilter::set_resonance, AudioEffectFilter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_filter_class_get_resonance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectFilter::get_resonance, AudioEffectFilter::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_filter_class_set_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectFilter::set_gain, AudioEffectFilter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_filter_class_get_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectFilter::get_gain, AudioEffectFilter::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_filter_class_set_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectFilter::set_db, AudioEffectFilter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_filter_class_get_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectFilter::get_db, AudioEffectFilter::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_filter_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_cutoff", 1, &audio_effect_filter_class_set_cutoff),
	JS_CFUNC_DEF("get_cutoff", 0, &audio_effect_filter_class_get_cutoff),
	JS_CFUNC_DEF("set_resonance", 1, &audio_effect_filter_class_set_resonance),
	JS_CFUNC_DEF("get_resonance", 0, &audio_effect_filter_class_get_resonance),
	JS_CFUNC_DEF("set_gain", 1, &audio_effect_filter_class_set_gain),
	JS_CFUNC_DEF("get_gain", 0, &audio_effect_filter_class_get_gain),
	JS_CFUNC_DEF("set_db", 1, &audio_effect_filter_class_set_db),
	JS_CFUNC_DEF("get_db", 0, &audio_effect_filter_class_get_db),
};

static int js_audio_effect_filter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectFilter::__class_id);
	classes["AudioEffectFilter"] = AudioEffectFilter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectFilter::__class_id, &audio_effect_filter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectFilter::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_filter_class_proto_funcs, _countof(audio_effect_filter_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_filter_class_constructor, "AudioEffectFilter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectFilter", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_filter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_filter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectFilter");
	return m;
}

JSModuleDef *js_init_audio_effect_filter_module(JSContext *ctx) {
	return _js_init_audio_effect_filter_module(ctx, "godot/classes/audio_effect_filter");
}

void register_audio_effect_filter() {
	js_init_audio_effect_filter_module(ctx);
}