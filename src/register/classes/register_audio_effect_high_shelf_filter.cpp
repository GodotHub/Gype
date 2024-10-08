
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_effect_filter.hpp>
#include <godot_cpp/classes/audio_effect_high_shelf_filter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_high_shelf_filter_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectHighShelfFilter *audio_effect_high_shelf_filter = static_cast<AudioEffectHighShelfFilter *>(JS_GetOpaque(val, AudioEffectHighShelfFilter::__class_id));
	if (audio_effect_high_shelf_filter)
		AudioEffectHighShelfFilter::free(nullptr, audio_effect_high_shelf_filter);
}

static JSClassDef audio_effect_high_shelf_filter_class_def = {
	"AudioEffectHighShelfFilter",
	.finalizer = audio_effect_high_shelf_filter_class_finalizer
};

static JSValue audio_effect_high_shelf_filter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectHighShelfFilter *audio_effect_high_shelf_filter_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectHighShelfFilter::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_high_shelf_filter_class = memnew(AudioEffectHighShelfFilter);
	if (!audio_effect_high_shelf_filter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_high_shelf_filter_class);
	return obj;
}

static int js_audio_effect_high_shelf_filter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectHighShelfFilter::__class_id);
	classes["AudioEffectHighShelfFilter"] = AudioEffectHighShelfFilter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectHighShelfFilter::__class_id, &audio_effect_high_shelf_filter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffectFilter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectHighShelfFilter::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_high_shelf_filter_class_constructor, "AudioEffectHighShelfFilter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectHighShelfFilter", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_high_shelf_filter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_high_shelf_filter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectHighShelfFilter");
	return m;
}

JSModuleDef *js_init_audio_effect_high_shelf_filter_module(JSContext *ctx) {
	return _js_init_audio_effect_high_shelf_filter_module(ctx, "godot/classes/audio_effect_high_shelf_filter");
}

void register_audio_effect_high_shelf_filter() {
	js_init_audio_effect_high_shelf_filter_module(ctx);
}