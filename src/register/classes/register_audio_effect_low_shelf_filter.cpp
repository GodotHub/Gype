
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_filter.hpp>
#include <godot_cpp/classes/audio_effect_low_shelf_filter.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_low_shelf_filter_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_low_shelf_filter_class_def = {
	"AudioEffectLowShelfFilter",
	.finalizer = audio_effect_low_shelf_filter_class_finalizer
};

static JSValue audio_effect_low_shelf_filter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectLowShelfFilter::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioEffectLowShelfFilter *audio_effect_low_shelf_filter_class;
	if (argc == 1) {
		Variant vobj = *argv;
		audio_effect_low_shelf_filter_class = static_cast<AudioEffectLowShelfFilter *>(static_cast<Object *>(vobj));
	} else {
		audio_effect_low_shelf_filter_class = memnew(AudioEffectLowShelfFilter);
	}
	if (!audio_effect_low_shelf_filter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_low_shelf_filter_class);	
	return obj;
}

void define_audio_effect_low_shelf_filter_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_low_shelf_filter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioEffectLowShelfFilter::__class_id);
	classes["AudioEffectLowShelfFilter"] = AudioEffectLowShelfFilter::__class_id;
	class_id_list.insert(AudioEffectLowShelfFilter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectLowShelfFilter::__class_id, &audio_effect_low_shelf_filter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectLowShelfFilter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffectFilter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectLowShelfFilter::__class_id, proto);

	define_audio_effect_low_shelf_filter_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_low_shelf_filter_class_constructor, "AudioEffectLowShelfFilter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectLowShelfFilter", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_low_shelf_filter_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_effect_filter';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_low_shelf_filter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectLowShelfFilter");
	return m;
}

JSModuleDef *js_init_audio_effect_low_shelf_filter_module(JSContext *ctx) {
	return _js_init_audio_effect_low_shelf_filter_module(ctx, "@godot/classes/audio_effect_low_shelf_filter");
}

void register_audio_effect_low_shelf_filter() {
	AudioEffectLowShelfFilter::__init_js_class_id();
	js_init_audio_effect_low_shelf_filter_module(ctx);
}