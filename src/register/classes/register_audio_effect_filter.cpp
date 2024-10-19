
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_filter.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_filter_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_filter_class_def = {
	"AudioEffectFilter",
	.finalizer = audio_effect_filter_class_finalizer
};

static JSValue audio_effect_filter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectFilter::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioEffectFilter *audio_effect_filter_class = memnew(AudioEffectFilter);
	if (!audio_effect_filter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_filter_class);	
	return obj;
}
static JSValue audio_effect_filter_class_set_cutoff(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectFilter::set_cutoff, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_filter_class_get_cutoff(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectFilter::get_cutoff, ctx, this_val, argc, argv);
};
static JSValue audio_effect_filter_class_set_resonance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectFilter::set_resonance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_filter_class_get_resonance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectFilter::get_resonance, ctx, this_val, argc, argv);
};
static JSValue audio_effect_filter_class_set_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectFilter::set_gain, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_filter_class_get_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectFilter::get_gain, ctx, this_val, argc, argv);
};
static JSValue audio_effect_filter_class_set_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectFilter::set_db, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_filter_class_get_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectFilter::get_db, ctx, this_val, argc, argv);
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

void define_audio_effect_filter_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cutoff_hz"),
        JS_NewCFunction(ctx, audio_effect_filter_class_get_cutoff, "get_cutoff", 0),
        JS_NewCFunction(ctx, audio_effect_filter_class_set_cutoff, "set_cutoff", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "resonance"),
        JS_NewCFunction(ctx, audio_effect_filter_class_get_resonance, "get_resonance", 0),
        JS_NewCFunction(ctx, audio_effect_filter_class_set_resonance, "set_resonance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gain"),
        JS_NewCFunction(ctx, audio_effect_filter_class_get_gain, "get_gain", 0),
        JS_NewCFunction(ctx, audio_effect_filter_class_set_gain, "set_gain", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "db"),
        JS_NewCFunction(ctx, audio_effect_filter_class_get_db, "get_db", 0),
        JS_NewCFunction(ctx, audio_effect_filter_class_set_db, "set_db", 1),
        JS_PROP_GETSET
    );
}

static int js_audio_effect_filter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioEffectFilter::__class_id);
	classes["AudioEffectFilter"] = AudioEffectFilter::__class_id;
	class_id_list.insert(AudioEffectFilter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectFilter::__class_id, &audio_effect_filter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectFilter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectFilter::__class_id, proto);

	define_audio_effect_filter_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_filter_class_proto_funcs, _countof(audio_effect_filter_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_filter_class_constructor, "AudioEffectFilter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectFilter", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_filter_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AudioEffectFilter::__init_js_class_id();
	js_init_audio_effect_filter_module(ctx);
}