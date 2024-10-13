
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_phaser.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_phaser_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectPhaser *audio_effect_phaser = static_cast<AudioEffectPhaser *>(JS_GetOpaque(val, AudioEffectPhaser::__class_id));
	if (audio_effect_phaser)
		AudioEffectPhaser::free(nullptr, audio_effect_phaser);
}

static JSClassDef audio_effect_phaser_class_def = {
	"AudioEffectPhaser",
	.finalizer = audio_effect_phaser_class_finalizer
};

static JSValue audio_effect_phaser_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectPhaser *audio_effect_phaser_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectPhaser::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_phaser_class = memnew(AudioEffectPhaser);
	if (!audio_effect_phaser_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_phaser_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue audio_effect_phaser_class_set_range_min_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectPhaser::set_range_min_hz, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_phaser_class_get_range_min_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectPhaser::get_range_min_hz, ctx, this_val, argc, argv);
};
static JSValue audio_effect_phaser_class_set_range_max_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectPhaser::set_range_max_hz, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_phaser_class_get_range_max_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectPhaser::get_range_max_hz, ctx, this_val, argc, argv);
};
static JSValue audio_effect_phaser_class_set_rate_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectPhaser::set_rate_hz, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_phaser_class_get_rate_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectPhaser::get_rate_hz, ctx, this_val, argc, argv);
};
static JSValue audio_effect_phaser_class_set_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectPhaser::set_feedback, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_phaser_class_get_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectPhaser::get_feedback, ctx, this_val, argc, argv);
};
static JSValue audio_effect_phaser_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectPhaser::set_depth, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_phaser_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectPhaser::get_depth, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_phaser_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_range_min_hz", 1, &audio_effect_phaser_class_set_range_min_hz),
	JS_CFUNC_DEF("get_range_min_hz", 0, &audio_effect_phaser_class_get_range_min_hz),
	JS_CFUNC_DEF("set_range_max_hz", 1, &audio_effect_phaser_class_set_range_max_hz),
	JS_CFUNC_DEF("get_range_max_hz", 0, &audio_effect_phaser_class_get_range_max_hz),
	JS_CFUNC_DEF("set_rate_hz", 1, &audio_effect_phaser_class_set_rate_hz),
	JS_CFUNC_DEF("get_rate_hz", 0, &audio_effect_phaser_class_get_rate_hz),
	JS_CFUNC_DEF("set_feedback", 1, &audio_effect_phaser_class_set_feedback),
	JS_CFUNC_DEF("get_feedback", 0, &audio_effect_phaser_class_get_feedback),
	JS_CFUNC_DEF("set_depth", 1, &audio_effect_phaser_class_set_depth),
	JS_CFUNC_DEF("get_depth", 0, &audio_effect_phaser_class_get_depth),
};

void define_audio_effect_phaser_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "range_min_hz"),
        JS_NewCFunction(ctx, audio_effect_phaser_class_get_range_min_hz, "get_range_min_hz", 0),
        JS_NewCFunction(ctx, audio_effect_phaser_class_set_range_min_hz, "set_range_min_hz", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "range_max_hz"),
        JS_NewCFunction(ctx, audio_effect_phaser_class_get_range_max_hz, "get_range_max_hz", 0),
        JS_NewCFunction(ctx, audio_effect_phaser_class_set_range_max_hz, "set_range_max_hz", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rate_hz"),
        JS_NewCFunction(ctx, audio_effect_phaser_class_get_rate_hz, "get_rate_hz", 0),
        JS_NewCFunction(ctx, audio_effect_phaser_class_set_rate_hz, "set_rate_hz", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "feedback"),
        JS_NewCFunction(ctx, audio_effect_phaser_class_get_feedback, "get_feedback", 0),
        JS_NewCFunction(ctx, audio_effect_phaser_class_set_feedback, "set_feedback", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "depth"),
        JS_NewCFunction(ctx, audio_effect_phaser_class_get_depth, "get_depth", 0),
        JS_NewCFunction(ctx, audio_effect_phaser_class_set_depth, "set_depth", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_audio_effect_phaser_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioEffectPhaser::__class_id);
	classes["AudioEffectPhaser"] = AudioEffectPhaser::__class_id;
	class_id_list.insert(AudioEffectPhaser::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectPhaser::__class_id, &audio_effect_phaser_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectPhaser::__class_id, proto);
	define_audio_effect_phaser_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_phaser_class_proto_funcs, _countof(audio_effect_phaser_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_phaser_class_constructor, "AudioEffectPhaser", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectPhaser", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_phaser_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_phaser_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectPhaser");
	return m;
}

JSModuleDef *js_init_audio_effect_phaser_module(JSContext *ctx) {
	return _js_init_audio_effect_phaser_module(ctx, "godot/classes/audio_effect_phaser");
}

void register_audio_effect_phaser() {
	AudioEffectPhaser::__init_js_class_id();
	js_init_audio_effect_phaser_module(ctx);
}