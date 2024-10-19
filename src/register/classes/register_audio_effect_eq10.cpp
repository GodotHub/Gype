
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_eq.hpp>
#include <godot_cpp/classes/audio_effect_eq10.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_eq10_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_eq10_class_def = {
	"AudioEffectEQ10",
	.finalizer = audio_effect_eq10_class_finalizer
};

static JSValue audio_effect_eq10_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectEQ10::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioEffectEQ10 *audio_effect_eq10_class = memnew(AudioEffectEQ10);
	if (!audio_effect_eq10_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_eq10_class);	
	return obj;
}

void define_audio_effect_eq10_property(JSContext *ctx, JSValue obj) {
}

static int js_audio_effect_eq10_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioEffectEQ10::__class_id);
	classes["AudioEffectEQ10"] = AudioEffectEQ10::__class_id;
	class_id_list.insert(AudioEffectEQ10::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectEQ10::__class_id, &audio_effect_eq10_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectEQ10::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffectEQ::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectEQ10::__class_id, proto);

	define_audio_effect_eq10_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_eq10_class_constructor, "AudioEffectEQ10", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectEQ10", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_eq10_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_effect_eq';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_eq10_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectEQ10");
	return m;
}

JSModuleDef *js_init_audio_effect_eq10_module(JSContext *ctx) {
	return _js_init_audio_effect_eq10_module(ctx, "godot/classes/audio_effect_eq10");
}

void register_audio_effect_eq10() {
	AudioEffectEQ10::__init_js_class_id();
	js_init_audio_effect_eq10_module(ctx);
}