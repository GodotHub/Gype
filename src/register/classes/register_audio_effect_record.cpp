
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_stream_wav.hpp>
#include <godot_cpp/classes/audio_effect_record.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_effect_record_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioEffectRecord *audio_effect_record = static_cast<AudioEffectRecord *>(JS_GetOpaque(val, AudioEffectRecord::__class_id));
	if (audio_effect_record)
		AudioEffectRecord::free(nullptr, audio_effect_record);
}

static JSClassDef audio_effect_record_class_def = {
	"AudioEffectRecord",
	.finalizer = audio_effect_record_class_finalizer
};

static JSValue audio_effect_record_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioEffectRecord *audio_effect_record_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioEffectRecord::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_effect_record_class = memnew(AudioEffectRecord);
	if (!audio_effect_record_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_effect_record_class);
	return obj;
}
static JSValue audio_effect_record_class_set_recording_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectRecord::set_recording_active, AudioEffectRecord::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_record_class_is_recording_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectRecord::is_recording_active, AudioEffectRecord::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_record_class_set_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioEffectRecord::set_format, AudioEffectRecord::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_record_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectRecord::get_format, AudioEffectRecord::__class_id, ctx, this_val, argv);
};
static JSValue audio_effect_record_class_get_recording(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioEffectRecord::get_recording, AudioEffectRecord::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_effect_record_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_recording_active", 1, &audio_effect_record_class_set_recording_active),
	JS_CFUNC_DEF("is_recording_active", 0, &audio_effect_record_class_is_recording_active),
	JS_CFUNC_DEF("set_format", 1, &audio_effect_record_class_set_format),
	JS_CFUNC_DEF("get_format", 0, &audio_effect_record_class_get_format),
	JS_CFUNC_DEF("get_recording", 0, &audio_effect_record_class_get_recording),
};

static int js_audio_effect_record_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioEffectRecord::__class_id);
	classes["AudioEffectRecord"] = AudioEffectRecord::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectRecord::__class_id, &audio_effect_record_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectRecord::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_record_class_proto_funcs, _countof(audio_effect_record_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_record_class_constructor, "AudioEffectRecord", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioEffectRecord", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_record_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_record_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectRecord");
	return m;
}

JSModuleDef *js_init_audio_effect_record_module(JSContext *ctx) {
	return _js_init_audio_effect_record_module(ctx, "godot/classes/audio_effect_record");
}

void register_audio_effect_record() {
	js_init_audio_effect_record_module(ctx);
}