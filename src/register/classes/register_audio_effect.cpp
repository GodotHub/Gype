
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_class_def = {
	"AudioEffect",
	.finalizer = audio_effect_class_finalizer
};

static JSValue audio_effect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffect::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffect *audio_effect_class;
	if (argc == 1) 
		audio_effect_class = static_cast<AudioEffect *>(Variant(*argv).operator Object *());
	else 
		audio_effect_class = memnew(AudioEffect);
	if (!audio_effect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_class);
	return obj;
}

static void define_audio_effect_property(JSContext *ctx, JSValue proto) {
	
}

static void define_audio_effect_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffect"] = AudioEffect::__class_id;
	class_id_list.insert(AudioEffect::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffect::__class_id, &audio_effect_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffect::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffect::__class_id, proto);

	define_audio_effect_property(ctx, proto);
	define_audio_effect_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_class_constructor, "AudioEffect", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffect", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffect");
	return m;
}

JSModuleDef *js_init_audio_effect_module(JSContext *ctx) {
	return _js_init_audio_effect_module(ctx, "@godot/classes/audio_effect");
}

void register_audio_effect() {
	AudioEffect::__init_js_class_id();
	js_init_audio_effect_module(ctx);
}