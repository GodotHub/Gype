
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_reverb.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_reverb_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_reverb_class_def = {
	"AudioEffectReverb",
	.finalizer = audio_effect_reverb_class_finalizer
};

static JSValue audio_effect_reverb_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectReverb::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffectReverb *audio_effect_reverb_class;
	if (argc == 1) 
		audio_effect_reverb_class = static_cast<AudioEffectReverb *>(Variant(*argv).operator Object *());
	else 
		audio_effect_reverb_class = memnew(AudioEffectReverb);
	if (!audio_effect_reverb_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_reverb_class);
	return obj;
}
static JSValue audio_effect_reverb_class_set_predelay_msec(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectReverb::set_predelay_msec, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_get_predelay_msec(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectReverb::get_predelay_msec, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_set_predelay_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectReverb::set_predelay_feedback, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_get_predelay_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectReverb::get_predelay_feedback, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_set_room_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectReverb::set_room_size, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_get_room_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectReverb::get_room_size, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_set_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectReverb::set_damping, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_get_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectReverb::get_damping, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_set_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectReverb::set_spread, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_get_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectReverb::get_spread, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_set_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectReverb::set_dry, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_get_dry(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectReverb::get_dry, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_set_wet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectReverb::set_wet, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_get_wet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectReverb::get_wet, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_set_hpf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectReverb::set_hpf, ctx, this_val, argc, argv);
};
static JSValue audio_effect_reverb_class_get_hpf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectReverb::get_hpf, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_reverb_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_predelay_msec", 1, &audio_effect_reverb_class_set_predelay_msec),
	JS_CFUNC_DEF("get_predelay_msec", 0, &audio_effect_reverb_class_get_predelay_msec),
	JS_CFUNC_DEF("set_predelay_feedback", 1, &audio_effect_reverb_class_set_predelay_feedback),
	JS_CFUNC_DEF("get_predelay_feedback", 0, &audio_effect_reverb_class_get_predelay_feedback),
	JS_CFUNC_DEF("set_room_size", 1, &audio_effect_reverb_class_set_room_size),
	JS_CFUNC_DEF("get_room_size", 0, &audio_effect_reverb_class_get_room_size),
	JS_CFUNC_DEF("set_damping", 1, &audio_effect_reverb_class_set_damping),
	JS_CFUNC_DEF("get_damping", 0, &audio_effect_reverb_class_get_damping),
	JS_CFUNC_DEF("set_spread", 1, &audio_effect_reverb_class_set_spread),
	JS_CFUNC_DEF("get_spread", 0, &audio_effect_reverb_class_get_spread),
	JS_CFUNC_DEF("set_dry", 1, &audio_effect_reverb_class_set_dry),
	JS_CFUNC_DEF("get_dry", 0, &audio_effect_reverb_class_get_dry),
	JS_CFUNC_DEF("set_wet", 1, &audio_effect_reverb_class_set_wet),
	JS_CFUNC_DEF("get_wet", 0, &audio_effect_reverb_class_get_wet),
	JS_CFUNC_DEF("set_hpf", 1, &audio_effect_reverb_class_set_hpf),
	JS_CFUNC_DEF("get_hpf", 0, &audio_effect_reverb_class_get_hpf),
};

static void define_audio_effect_reverb_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "predelay_msec"),
        JS_NewCFunction(ctx, audio_effect_reverb_class_get_predelay_msec, "get_predelay_msec", 0),
        JS_NewCFunction(ctx, audio_effect_reverb_class_set_predelay_msec, "set_predelay_msec", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "predelay_feedback"),
        JS_NewCFunction(ctx, audio_effect_reverb_class_get_predelay_feedback, "get_predelay_feedback", 0),
        JS_NewCFunction(ctx, audio_effect_reverb_class_set_predelay_feedback, "set_predelay_feedback", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "room_size"),
        JS_NewCFunction(ctx, audio_effect_reverb_class_get_room_size, "get_room_size", 0),
        JS_NewCFunction(ctx, audio_effect_reverb_class_set_room_size, "set_room_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "damping"),
        JS_NewCFunction(ctx, audio_effect_reverb_class_get_damping, "get_damping", 0),
        JS_NewCFunction(ctx, audio_effect_reverb_class_set_damping, "set_damping", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "spread"),
        JS_NewCFunction(ctx, audio_effect_reverb_class_get_spread, "get_spread", 0),
        JS_NewCFunction(ctx, audio_effect_reverb_class_set_spread, "set_spread", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "hipass"),
        JS_NewCFunction(ctx, audio_effect_reverb_class_get_hpf, "get_hpf", 0),
        JS_NewCFunction(ctx, audio_effect_reverb_class_set_hpf, "set_hpf", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "dry"),
        JS_NewCFunction(ctx, audio_effect_reverb_class_get_dry, "get_dry", 0),
        JS_NewCFunction(ctx, audio_effect_reverb_class_set_dry, "set_dry", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "wet"),
        JS_NewCFunction(ctx, audio_effect_reverb_class_get_wet, "get_wet", 0),
        JS_NewCFunction(ctx, audio_effect_reverb_class_set_wet, "set_wet", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_effect_reverb_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_reverb_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffectReverb"] = AudioEffectReverb::__class_id;
	class_id_list.insert(AudioEffectReverb::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectReverb::__class_id, &audio_effect_reverb_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectReverb::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectReverb::__class_id, proto);

	define_audio_effect_reverb_property(ctx, proto);
	define_audio_effect_reverb_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_reverb_class_proto_funcs, _countof(audio_effect_reverb_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_reverb_class_constructor, "AudioEffectReverb", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AudioEffectReverb", ctor);
	constructors[AudioEffectReverb::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_audio_effect_reverb_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_reverb_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectReverb");
	return m;
}

JSModuleDef *js_init_audio_effect_reverb_module(JSContext *ctx) {
	return _js_init_audio_effect_reverb_module(ctx, "@godot/classes/audio_effect_reverb");
}

void register_audio_effect_reverb() {
	AudioEffectReverb::__init_js_class_id();
	js_init_audio_effect_reverb_module(ctx);
}