
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_eq.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_eq_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_eq_class_def = {
	"AudioEffectEQ",
	.finalizer = audio_effect_eq_class_finalizer
};

static JSValue audio_effect_eq_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectEQ::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffectEQ *audio_effect_eq_class;
	if (argc == 1) 
		audio_effect_eq_class = static_cast<AudioEffectEQ *>(Variant(*argv).operator Object *());
	else 
		audio_effect_eq_class = memnew(AudioEffectEQ);
	if (!audio_effect_eq_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_eq_class);
	return obj;
}
static JSValue audio_effect_eq_class_set_band_gain_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectEQ::set_band_gain_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_eq_class_get_band_gain_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectEQ::get_band_gain_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_eq_class_get_band_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectEQ::get_band_count, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_eq_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_band_gain_db", 2, &audio_effect_eq_class_set_band_gain_db),
	JS_CFUNC_DEF("get_band_gain_db", 1, &audio_effect_eq_class_get_band_gain_db),
	JS_CFUNC_DEF("get_band_count", 0, &audio_effect_eq_class_get_band_count),
};

static void define_audio_effect_eq_property(JSContext *ctx, JSValue proto) {
	
}

static void define_audio_effect_eq_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_eq_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffectEQ"] = AudioEffectEQ::__class_id;
	class_id_list.insert(AudioEffectEQ::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectEQ::__class_id, &audio_effect_eq_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectEQ::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectEQ::__class_id, proto);

	define_audio_effect_eq_property(ctx, proto);
	define_audio_effect_eq_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_eq_class_proto_funcs, _countof(audio_effect_eq_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_eq_class_constructor, "AudioEffectEQ", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AudioEffectEQ", ctor);
	constructors[AudioEffectEQ::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_audio_effect_eq_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_eq_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectEQ");
	return m;
}

JSModuleDef *js_init_audio_effect_eq_module(JSContext *ctx) {
	return _js_init_audio_effect_eq_module(ctx, "@godot/classes/audio_effect_eq");
}

void register_audio_effect_eq() {
	AudioEffectEQ::__init_js_class_id();
	js_init_audio_effect_eq_module(ctx);
}