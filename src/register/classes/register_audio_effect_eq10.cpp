
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect_eq10.hpp>
#include <godot_cpp/classes/audio_effect_eq.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_eq10_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectEQ10 *audio_effect_eq10 = static_cast<AudioEffectEQ10 *>(JS_GetOpaque(val, AudioEffectEQ10::__class_id));
	if (audio_effect_eq10)
		AudioEffectEQ10::free(nullptr, audio_effect_eq10);
}

static JSClassDef audio_effect_eq10_class_def = {
	"AudioEffectEQ10",
	.finalizer = audio_effect_eq10_class_finalizer
};

static JSValue audio_effect_eq10_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectEQ10 *audio_effect_eq10_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectEQ10::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_eq10_class = memnew(AudioEffectEQ10);
	if (!audio_effect_eq10_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_eq10_class);
	return obj;
}

static int js_audio_effect_eq10_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectEQ10::__class_id);
	classes["AudioEffectEQ10"] = AudioEffectEQ10::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectEQ10::__class_id, &audio_effect_eq10_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffectEQ::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectEQ10::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_eq10_class_constructor, "AudioEffectEQ10", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectEQ10", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_eq10_module(JSContext *ctx, const char *module_name) {
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
	js_init_audio_effect_eq10_module(ctx);
}