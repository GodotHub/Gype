
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_panner.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_panner_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectPanner *audio_effect_panner = static_cast<AudioEffectPanner *>(JS_GetOpaque(val, AudioEffectPanner::__class_id));
	if (audio_effect_panner)
		memdelete(audio_effect_panner);
}

static JSClassDef audio_effect_panner_class_def = {
	"AudioEffectPanner",
	.finalizer = audio_effect_panner_class_finalizer
};

static JSValue audio_effect_panner_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectPanner::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffectPanner *audio_effect_panner_class;
	if (argc == 1) 
		audio_effect_panner_class = static_cast<AudioEffectPanner *>(Variant(*argv).operator Object *());
	else 
		audio_effect_panner_class = memnew(AudioEffectPanner);
	if (!audio_effect_panner_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_panner_class);
	return obj;
}
static JSValue audio_effect_panner_class_set_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectPanner::set_pan, ctx, this_val, argc, argv);
};
static JSValue audio_effect_panner_class_get_pan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectPanner::get_pan, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_panner_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pan", 1, &audio_effect_panner_class_set_pan),
	JS_CFUNC_DEF("get_pan", 0, &audio_effect_panner_class_get_pan),
};

static void define_audio_effect_panner_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pan"),
        JS_NewCFunction(ctx, audio_effect_panner_class_get_pan, "get_pan", 0),
        JS_NewCFunction(ctx, audio_effect_panner_class_set_pan, "set_pan", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_effect_panner_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_panner_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffectPanner"] = AudioEffectPanner::__class_id;
	class_id_list.insert(AudioEffectPanner::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectPanner::__class_id, &audio_effect_panner_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectPanner::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectPanner::__class_id, proto);

	define_audio_effect_panner_property(ctx, proto);
	define_audio_effect_panner_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_panner_class_proto_funcs, _countof(audio_effect_panner_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_panner_class_constructor, "AudioEffectPanner", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AudioEffectPanner", ctor);
	constructors[AudioEffectPanner::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_audio_effect_panner_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_panner_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectPanner");
	return m;
}

JSModuleDef *js_init_audio_effect_panner_module(JSContext *ctx) {
	return _js_init_audio_effect_panner_module(ctx, "@godot/classes/audio_effect_panner");
}

void register_audio_effect_panner() {
	AudioEffectPanner::__init_js_class_id();
	js_init_audio_effect_panner_module(ctx);
}