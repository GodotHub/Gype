
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect_eq.hpp>
#include <godot_cpp/classes/audio_effect_eq6.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_eq6_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectEQ6 *audio_effect_eq6 = static_cast<AudioEffectEQ6 *>(JS_GetOpaque(val, AudioEffectEQ6::__class_id));
	if (audio_effect_eq6)
		AudioEffectEQ6::free(nullptr, audio_effect_eq6);
}

static JSClassDef audio_effect_eq6_class_def = {
	"AudioEffectEQ6",
	.finalizer = audio_effect_eq6_class_finalizer
};

static JSValue audio_effect_eq6_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectEQ6 *audio_effect_eq6_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectEQ6::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_eq6_class = memnew(AudioEffectEQ6);
	if (!audio_effect_eq6_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_eq6_class);
	return obj;
}

static int js_audio_effect_eq6_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectEQ6::__class_id);
	classes["AudioEffectEQ6"] = AudioEffectEQ6::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectEQ6::__class_id, &audio_effect_eq6_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffectEQ::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectEQ6::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_eq6_class_constructor, "AudioEffectEQ6", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectEQ6", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_eq6_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_eq6_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectEQ6");
	return m;
}

JSModuleDef *js_init_audio_effect_eq6_module(JSContext *ctx) {
	return _js_init_audio_effect_eq6_module(ctx, "godot/classes/audio_effect_eq6");
}

void register_audio_effect_eq6() {
	js_init_audio_effect_eq6_module(ctx);
}