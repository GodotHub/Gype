
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffect *audio_effect = static_cast<AudioEffect *>(JS_GetOpaque(val, AudioEffect::__class_id));
	if (audio_effect)
		AudioEffect::free(nullptr, audio_effect);
}

static JSClassDef audio_effect_class_def = {
	"AudioEffect",
	.finalizer = audio_effect_class_finalizer
};

static JSValue audio_effect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffect *audio_effect_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffect::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_class = memnew(AudioEffect);
	if (!audio_effect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_class);
	return obj;
}

static int js_audio_effect_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffect::__class_id);
	classes["AudioEffect"] = AudioEffect::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffect::__class_id, &audio_effect_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffect::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_class_constructor, "AudioEffect", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffect", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffect");
	return m;
}

JSModuleDef *js_init_audio_effect_module(JSContext *ctx) {
	return _js_init_audio_effect_module(ctx, "godot/classes/audio_effect");
}

void register_audio_effect() {
	js_init_audio_effect_module(ctx);
}