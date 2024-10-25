
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_generator_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_generator_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_generator_playback_class_def = {
	"AudioStreamGeneratorPlayback",
	.finalizer = audio_stream_generator_playback_class_finalizer
};

static JSValue audio_stream_generator_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamGeneratorPlayback::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioStreamGeneratorPlayback *audio_stream_generator_playback_class = memnew(AudioStreamGeneratorPlayback);
	if (!audio_stream_generator_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_generator_playback_class);	
	return obj;
}
static JSValue audio_stream_generator_playback_class_push_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AudioStreamGeneratorPlayback::push_frame, ctx, this_val, argc, argv);
};
static JSValue audio_stream_generator_playback_class_can_push_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamGeneratorPlayback::can_push_buffer, ctx, this_val, argc, argv);
};
static JSValue audio_stream_generator_playback_class_push_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AudioStreamGeneratorPlayback::push_buffer, ctx, this_val, argc, argv);
};
static JSValue audio_stream_generator_playback_class_get_frames_available(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamGeneratorPlayback::get_frames_available, ctx, this_val, argc, argv);
};
static JSValue audio_stream_generator_playback_class_get_skips(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamGeneratorPlayback::get_skips, ctx, this_val, argc, argv);
};
static JSValue audio_stream_generator_playback_class_clear_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioStreamGeneratorPlayback::clear_buffer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry audio_stream_generator_playback_class_proto_funcs[] = {
	JS_CFUNC_DEF("push_frame", 1, &audio_stream_generator_playback_class_push_frame),
	JS_CFUNC_DEF("can_push_buffer", 1, &audio_stream_generator_playback_class_can_push_buffer),
	JS_CFUNC_DEF("push_buffer", 1, &audio_stream_generator_playback_class_push_buffer),
	JS_CFUNC_DEF("get_frames_available", 0, &audio_stream_generator_playback_class_get_frames_available),
	JS_CFUNC_DEF("get_skips", 0, &audio_stream_generator_playback_class_get_skips),
	JS_CFUNC_DEF("clear_buffer", 0, &audio_stream_generator_playback_class_clear_buffer),
};

void define_audio_stream_generator_playback_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_generator_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStreamGeneratorPlayback::__class_id);
	classes["AudioStreamGeneratorPlayback"] = AudioStreamGeneratorPlayback::__class_id;
	class_id_list.insert(AudioStreamGeneratorPlayback::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamGeneratorPlayback::__class_id, &audio_stream_generator_playback_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamGeneratorPlayback::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStreamPlaybackResampled::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamGeneratorPlayback::__class_id, proto);

	define_audio_stream_generator_playback_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_generator_playback_class_proto_funcs, _countof(audio_stream_generator_playback_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_generator_playback_class_constructor, "AudioStreamGeneratorPlayback", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamGeneratorPlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_generator_playback_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_stream_playback_resampled';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_generator_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamGeneratorPlayback");
	return m;
}

JSModuleDef *js_init_audio_stream_generator_playback_module(JSContext *ctx) {
	return _js_init_audio_stream_generator_playback_module(ctx, "godot/classes/audio_stream_generator_playback");
}

void register_audio_stream_generator_playback() {
	AudioStreamGeneratorPlayback::__init_js_class_id();
	js_init_audio_stream_generator_playback_module(ctx);
}