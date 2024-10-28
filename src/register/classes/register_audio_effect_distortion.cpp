
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_distortion.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_distortion_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef audio_effect_distortion_class_def = {
	"AudioEffectDistortion",
	.finalizer = audio_effect_distortion_class_finalizer
};

static JSValue audio_effect_distortion_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectDistortion::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioEffectDistortion *audio_effect_distortion_class = memnew(AudioEffectDistortion);
	if (!audio_effect_distortion_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_distortion_class);
	return obj;
}
static JSValue audio_effect_distortion_class_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioEffectDistortion::set_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_distortion_class_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectDistortion::get_mode, ctx, this_val, argc, argv);
};
static JSValue audio_effect_distortion_class_set_pre_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioEffectDistortion::set_pre_gain, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_distortion_class_get_pre_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectDistortion::get_pre_gain, ctx, this_val, argc, argv);
};
static JSValue audio_effect_distortion_class_set_keep_hf_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioEffectDistortion::set_keep_hf_hz, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_distortion_class_get_keep_hf_hz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectDistortion::get_keep_hf_hz, ctx, this_val, argc, argv);
};
static JSValue audio_effect_distortion_class_set_drive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioEffectDistortion::set_drive, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_distortion_class_get_drive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectDistortion::get_drive, ctx, this_val, argc, argv);
};
static JSValue audio_effect_distortion_class_set_post_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioEffectDistortion::set_post_gain, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_distortion_class_get_post_gain(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectDistortion::get_post_gain, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_distortion_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mode", 1, &audio_effect_distortion_class_set_mode),
	JS_CFUNC_DEF("get_mode", 0, &audio_effect_distortion_class_get_mode),
	JS_CFUNC_DEF("set_pre_gain", 1, &audio_effect_distortion_class_set_pre_gain),
	JS_CFUNC_DEF("get_pre_gain", 0, &audio_effect_distortion_class_get_pre_gain),
	JS_CFUNC_DEF("set_keep_hf_hz", 1, &audio_effect_distortion_class_set_keep_hf_hz),
	JS_CFUNC_DEF("get_keep_hf_hz", 0, &audio_effect_distortion_class_get_keep_hf_hz),
	JS_CFUNC_DEF("set_drive", 1, &audio_effect_distortion_class_set_drive),
	JS_CFUNC_DEF("get_drive", 0, &audio_effect_distortion_class_get_drive),
	JS_CFUNC_DEF("set_post_gain", 1, &audio_effect_distortion_class_set_post_gain),
	JS_CFUNC_DEF("get_post_gain", 0, &audio_effect_distortion_class_get_post_gain),
};

void define_audio_effect_distortion_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "mode"),
			JS_NewCFunction(ctx, audio_effect_distortion_class_get_mode, "get_mode", 0),
			JS_NewCFunction(ctx, audio_effect_distortion_class_set_mode, "set_mode", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "pre_gain"),
			JS_NewCFunction(ctx, audio_effect_distortion_class_get_pre_gain, "get_pre_gain", 0),
			JS_NewCFunction(ctx, audio_effect_distortion_class_set_pre_gain, "set_pre_gain", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "keep_hf_hz"),
			JS_NewCFunction(ctx, audio_effect_distortion_class_get_keep_hf_hz, "get_keep_hf_hz", 0),
			JS_NewCFunction(ctx, audio_effect_distortion_class_set_keep_hf_hz, "set_keep_hf_hz", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "drive"),
			JS_NewCFunction(ctx, audio_effect_distortion_class_get_drive, "get_drive", 0),
			JS_NewCFunction(ctx, audio_effect_distortion_class_set_drive, "set_drive", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "post_gain"),
			JS_NewCFunction(ctx, audio_effect_distortion_class_get_post_gain, "get_post_gain", 0),
			JS_NewCFunction(ctx, audio_effect_distortion_class_set_post_gain, "set_post_gain", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Mode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_CLIP", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_ATAN", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_LOFI", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_OVERDRIVE", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_WAVESHAPE", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "Mode", Mode_obj);
}

static int js_audio_effect_distortion_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectDistortion::__class_id);
	classes["AudioEffectDistortion"] = AudioEffectDistortion::__class_id;
	class_id_list.insert(AudioEffectDistortion::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectDistortion::__class_id, &audio_effect_distortion_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectDistortion::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectDistortion::__class_id, proto);

	define_audio_effect_distortion_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_distortion_class_proto_funcs, _countof(audio_effect_distortion_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_distortion_class_constructor, "AudioEffectDistortion", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectDistortion", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_distortion_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_distortion_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectDistortion");
	return m;
}

JSModuleDef *js_init_audio_effect_distortion_module(JSContext *ctx) {
	return _js_init_audio_effect_distortion_module(ctx, "godot/classes/audio_effect_distortion");
}

void register_audio_effect_distortion() {
	AudioEffectDistortion::__init_js_class_id();
	js_init_audio_effect_distortion_module(ctx);
}