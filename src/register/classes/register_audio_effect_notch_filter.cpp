
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_effect_filter.hpp>
#include <godot_cpp/classes/audio_effect_notch_filter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_notch_filter_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectNotchFilter *audio_effect_notch_filter = static_cast<AudioEffectNotchFilter *>(JS_GetOpaque(val, AudioEffectNotchFilter::__class_id));
	if (audio_effect_notch_filter)
		AudioEffectNotchFilter::free(nullptr, audio_effect_notch_filter);
}

static JSClassDef audio_effect_notch_filter_class_def = {
	"AudioEffectNotchFilter",
	.finalizer = audio_effect_notch_filter_class_finalizer
};

static JSValue audio_effect_notch_filter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectNotchFilter *audio_effect_notch_filter_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectNotchFilter::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_notch_filter_class = memnew(AudioEffectNotchFilter);
	if (!audio_effect_notch_filter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_notch_filter_class);
	return obj;
}

static int js_audio_effect_notch_filter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectNotchFilter::__class_id);
	classes["AudioEffectNotchFilter"] = AudioEffectNotchFilter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectNotchFilter::__class_id, &audio_effect_notch_filter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffectFilter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectNotchFilter::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_notch_filter_class_constructor, "AudioEffectNotchFilter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectNotchFilter", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_notch_filter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_notch_filter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectNotchFilter");
	return m;
}

JSModuleDef *js_init_audio_effect_notch_filter_module(JSContext *ctx) {
	return _js_init_audio_effect_notch_filter_module(ctx, "godot/classes/audio_effect_notch_filter");
}

void register_audio_effect_notch_filter() {
	js_init_audio_effect_notch_filter_module(ctx);
}