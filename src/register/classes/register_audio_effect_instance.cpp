
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_instance_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_instance_class_def = {
	"AudioEffectInstance",
	.finalizer = audio_effect_instance_class_finalizer
};

static JSValue audio_effect_instance_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectInstance::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffectInstance *audio_effect_instance_class;
	if (argc == 1) 
		audio_effect_instance_class = static_cast<AudioEffectInstance *>(Variant(*argv).operator Object *());
	else 
		audio_effect_instance_class = memnew(AudioEffectInstance);
	if (!audio_effect_instance_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_instance_class);
	return obj;
}

static void define_audio_effect_instance_property(JSContext *ctx, JSValue proto) {
	
}

static void define_audio_effect_instance_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_instance_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffectInstance"] = AudioEffectInstance::__class_id;
	class_id_list.insert(AudioEffectInstance::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectInstance::__class_id, &audio_effect_instance_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectInstance::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectInstance::__class_id, proto);

	define_audio_effect_instance_property(ctx, proto);
	define_audio_effect_instance_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_instance_class_constructor, "AudioEffectInstance", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AudioEffectInstance", ctor);
	constructors[AudioEffectInstance::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_audio_effect_instance_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_instance_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectInstance");
	return m;
}

JSModuleDef *js_init_audio_effect_instance_module(JSContext *ctx) {
	return _js_init_audio_effect_instance_module(ctx, "@godot/classes/audio_effect_instance");
}

void register_audio_effect_instance() {
	AudioEffectInstance::__init_js_class_id();
	js_init_audio_effect_instance_module(ctx);
}