
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect_eq.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_eq_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectEQ *audio_effect_eq = static_cast<AudioEffectEQ *>(JS_GetOpaque(val, AudioEffectEQ::__class_id));
	if (audio_effect_eq)
		AudioEffectEQ::free(nullptr, audio_effect_eq);
}

static JSClassDef audio_effect_eq_class_def = {
	"AudioEffectEQ",
	.finalizer = audio_effect_eq_class_finalizer
};

static JSValue audio_effect_eq_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectEQ *audio_effect_eq_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectEQ::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_eq_class = memnew(AudioEffectEQ);
	if (!audio_effect_eq_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_eq_class);
	return obj;
}
static JSValue audio_effect_eq_class_set_band_gain_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectEQ::set_band_gain_db, AudioEffectEQ::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_eq_class_get_band_gain_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectEQ::get_band_gain_db, AudioEffectEQ::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_eq_class_get_band_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectEQ::get_band_count, AudioEffectEQ::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_eq_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_band_gain_db", 2, &audio_effect_eq_class_set_band_gain_db),
	JS_CFUNC_DEF("get_band_gain_db", 1, &audio_effect_eq_class_get_band_gain_db),
	JS_CFUNC_DEF("get_band_count", 0, &audio_effect_eq_class_get_band_count),
};

static int js_audio_effect_eq_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectEQ::__class_id);
	classes["AudioEffectEQ"] = AudioEffectEQ::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectEQ::__class_id, &audio_effect_eq_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectEQ::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_eq_class_proto_funcs, _countof(audio_effect_eq_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_eq_class_constructor, "AudioEffectEQ", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectEQ", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_eq_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_eq_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectEQ");
	return m;
}

JSModuleDef *js_init_audio_effect_eq_module(JSContext *ctx) {
	return _js_init_audio_effect_eq_module(ctx, "godot/classes/audio_effect_eq");
}

void register_audio_effect_eq() {
	js_init_audio_effect_eq_module(ctx);
}