
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_instance_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectInstance *audio_effect_instance = static_cast<AudioEffectInstance *>(JS_GetOpaque(val, AudioEffectInstance::__class_id));
	if (audio_effect_instance)
		AudioEffectInstance::free(nullptr, audio_effect_instance);
}

static JSClassDef audio_effect_instance_class_def = {
	"AudioEffectInstance",
	.finalizer = audio_effect_instance_class_finalizer
};

static JSValue audio_effect_instance_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectInstance *audio_effect_instance_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectInstance::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_instance_class = memnew(AudioEffectInstance);
	if (!audio_effect_instance_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_instance_class);
	return obj;
}

static int js_audio_effect_instance_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectInstance::__class_id);
	classes["AudioEffectInstance"] = AudioEffectInstance::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectInstance::__class_id, &audio_effect_instance_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectInstance::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_instance_class_constructor, "AudioEffectInstance", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectInstance", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_instance_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_instance_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectInstance");
	return m;
}

JSModuleDef *js_init_audio_effect_instance_module(JSContext *ctx) {
	return _js_init_audio_effect_instance_module(ctx, "godot/classes/audio_effect_instance");
}

void register_audio_effect_instance() {
	js_init_audio_effect_instance_module(ctx);
}