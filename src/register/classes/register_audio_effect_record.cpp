
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_record.hpp>
#include <godot_cpp/classes/audio_stream_wav.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_record_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_record_class_def = {
	"AudioEffectRecord",
	.finalizer = audio_effect_record_class_finalizer
};

static JSValue audio_effect_record_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectRecord::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioEffectRecord *audio_effect_record_class = memnew(AudioEffectRecord);
	if (!audio_effect_record_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_record_class);	
	return obj;
}
static JSValue audio_effect_record_class_set_recording_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioEffectRecord::set_recording_active, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_record_class_is_recording_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectRecord::is_recording_active, ctx, this_val, argc, argv);
};
static JSValue audio_effect_record_class_set_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioEffectRecord::set_format, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_effect_record_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectRecord::get_format, ctx, this_val, argc, argv);
};
static JSValue audio_effect_record_class_get_recording(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectRecord::get_recording, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_record_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_recording_active", 1, &audio_effect_record_class_set_recording_active),
	JS_CFUNC_DEF("is_recording_active", 0, &audio_effect_record_class_is_recording_active),
	JS_CFUNC_DEF("set_format", 1, &audio_effect_record_class_set_format),
	JS_CFUNC_DEF("get_format", 0, &audio_effect_record_class_get_format),
	JS_CFUNC_DEF("get_recording", 0, &audio_effect_record_class_get_recording),
};

void define_audio_effect_record_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "format"),
        JS_NewCFunction(ctx, audio_effect_record_class_get_format, "get_format", 0),
        JS_NewCFunction(ctx, audio_effect_record_class_set_format, "set_format", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_record_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioEffectRecord::__class_id);
	classes["AudioEffectRecord"] = AudioEffectRecord::__class_id;
	class_id_list.insert(AudioEffectRecord::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectRecord::__class_id, &audio_effect_record_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectRecord::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectRecord::__class_id, proto);

	define_audio_effect_record_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_record_class_proto_funcs, _countof(audio_effect_record_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_record_class_constructor, "AudioEffectRecord", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectRecord", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_record_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AudioEffectRecord::__init_js_class_id();
	js_init_audio_effect_record_module(ctx);
}