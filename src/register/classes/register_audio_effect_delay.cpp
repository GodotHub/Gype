
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_delay.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue audio_effect_delay_class_set_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_dry, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioEffectDelay::get_dry, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_tap1_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap1_active, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_is_tap1_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::is_tap1_active, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_tap1_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap1_delay_ms, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap1_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap1_delay_ms, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_tap1_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap1_level_db, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap1_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap1_level_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_tap1_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap1_pan, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap1_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap1_pan, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_tap2_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap2_active, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_is_tap2_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::is_tap2_active, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_tap2_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap2_delay_ms, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap2_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap2_delay_ms, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_tap2_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap2_level_db, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap2_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap2_level_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_tap2_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_tap2_pan, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_tap2_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_tap2_pan, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_feedback_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_feedback_active, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_is_feedback_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::is_feedback_active, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_feedback_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_feedback_delay_ms, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_feedback_delay_ms(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_feedback_delay_ms, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_feedback_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_feedback_level_db, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_feedback_level_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_feedback_level_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_delay_class_set_feedback_lowpass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectDelay::set_feedback_lowpass, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_delay_class_get_feedback_lowpass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectDelay::get_feedback_lowpass, ctx, this_val, argc, argv);
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

void define_audio_effect_delay_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "dry"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_dry, "get_dry", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_dry, "set_dry", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tap1_active"),
        JS_NewCFunction(ctx, audio_effect_delay_class_is_tap1_active, "is_tap1_active", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_tap1_active, "set_tap1_active", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tap1_delay_ms"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_tap1_delay_ms, "get_tap1_delay_ms", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_tap1_delay_ms, "set_tap1_delay_ms", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tap1_level_db"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_tap1_level_db, "get_tap1_level_db", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_tap1_level_db, "set_tap1_level_db", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tap1_pan"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_tap1_pan, "get_tap1_pan", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_tap1_pan, "set_tap1_pan", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tap2_active"),
        JS_NewCFunction(ctx, audio_effect_delay_class_is_tap2_active, "is_tap2_active", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_tap2_active, "set_tap2_active", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tap2_delay_ms"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_tap2_delay_ms, "get_tap2_delay_ms", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_tap2_delay_ms, "set_tap2_delay_ms", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tap2_level_db"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_tap2_level_db, "get_tap2_level_db", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_tap2_level_db, "set_tap2_level_db", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tap2_pan"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_tap2_pan, "get_tap2_pan", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_tap2_pan, "set_tap2_pan", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "feedback_active"),
        JS_NewCFunction(ctx, audio_effect_delay_class_is_feedback_active, "is_feedback_active", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_feedback_active, "set_feedback_active", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "feedback_delay_ms"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_feedback_delay_ms, "get_feedback_delay_ms", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_feedback_delay_ms, "set_feedback_delay_ms", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "feedback_level_db"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_feedback_level_db, "get_feedback_level_db", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_feedback_level_db, "set_feedback_level_db", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "feedback_lowpass"),
        JS_NewCFunction(ctx, audio_effect_delay_class_get_feedback_lowpass, "get_feedback_lowpass", 0),
        JS_NewCFunction(ctx, audio_effect_delay_class_set_feedback_lowpass, "set_feedback_lowpass", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_audio_effect_delay_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioEffectDelay::__class_id);
	classes["AudioEffectDelay"] = AudioEffectDelay::__class_id;
	class_id_list.insert(AudioEffectDelay::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectDelay::__class_id, &audio_effect_delay_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectDelay::__class_id, proto);
	define_audio_effect_delay_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_delay_class_proto_funcs, _countof(audio_effect_delay_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_delay_class_constructor, "AudioEffectDelay", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectDelay", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_delay_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AudioEffectDelay::__init_js_class_id();
	js_init_audio_effect_delay_module(ctx);
}