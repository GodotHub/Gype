
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_eq21.hpp>
#include <godot_cpp/classes/audio_effect_eq.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_eq21_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectEQ21 *audio_effect_eq21 = static_cast<AudioEffectEQ21 *>(JS_GetOpaque(val, AudioEffectEQ21::__class_id));
	if (audio_effect_eq21)
		memdelete(audio_effect_eq21);
}

static JSClassDef audio_effect_eq21_class_def = {
	"AudioEffectEQ21",
	.finalizer = audio_effect_eq21_class_finalizer
};

static JSValue audio_effect_eq21_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectEQ21::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffectEQ21 *audio_effect_eq21_class;
	if (argc == 1) 
		audio_effect_eq21_class = static_cast<AudioEffectEQ21 *>(Variant(*argv).operator Object *());
	else 
		audio_effect_eq21_class = memnew(AudioEffectEQ21);
	if (!audio_effect_eq21_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_eq21_class);
	return obj;
}

static void define_audio_effect_eq21_property(JSContext *ctx, JSValue proto) {
	
}

static void define_audio_effect_eq21_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_eq21_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffectEQ21"] = AudioEffectEQ21::__class_id;
	class_id_list.insert(AudioEffectEQ21::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectEQ21::__class_id, &audio_effect_eq21_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectEQ21::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffectEQ::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectEQ21::__class_id, proto);

	define_audio_effect_eq21_property(ctx, proto);
	define_audio_effect_eq21_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_eq21_class_constructor, "AudioEffectEQ21", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AudioEffectEQ21", ctor);
	constructors[AudioEffectEQ21::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_audio_effect_eq21_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/audio_effect_eq';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_eq21_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectEQ21");
	return m;
}

JSModuleDef *js_init_audio_effect_eq21_module(JSContext *ctx) {
	return _js_init_audio_effect_eq21_module(ctx, "@godot/classes/audio_effect_eq21");
}

void register_audio_effect_eq21() {
	AudioEffectEQ21::__init_js_class_id();
	js_init_audio_effect_eq21_module(ctx);
}