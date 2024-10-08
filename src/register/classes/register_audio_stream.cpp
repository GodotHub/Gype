
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_sample.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStream *audio_stream = static_cast<AudioStream *>(JS_GetOpaque(val, AudioStream::__class_id));
	if (audio_stream)
		AudioStream::free(nullptr, audio_stream);
}

static JSClassDef audio_stream_class_def = {
	"AudioStream",
	.finalizer = audio_stream_class_finalizer
};

static JSValue audio_stream_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStream *audio_stream_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStream::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_class = memnew(AudioStream);
	if (!audio_stream_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_class);
	return obj;
}
static JSValue audio_stream_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStream::get_length, AudioStream::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_class_is_monophonic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStream::is_monophonic, AudioStream::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_class_instantiate_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AudioStream::instantiate_playback, AudioStream::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_class_can_be_sampled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStream::can_be_sampled, AudioStream::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_class_generate_sample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStream::generate_sample, AudioStream::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_class_is_meta_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStream::is_meta_stream, AudioStream::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_length", 0, &audio_stream_class_get_length),
	JS_CFUNC_DEF("is_monophonic", 0, &audio_stream_class_is_monophonic),
	JS_CFUNC_DEF("instantiate_playback", 0, &audio_stream_class_instantiate_playback),
	JS_CFUNC_DEF("can_be_sampled", 0, &audio_stream_class_can_be_sampled),
	JS_CFUNC_DEF("generate_sample", 0, &audio_stream_class_generate_sample),
	JS_CFUNC_DEF("is_meta_stream", 0, &audio_stream_class_is_meta_stream),
};

static int js_audio_stream_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStream::__class_id);
	classes["AudioStream"] = AudioStream::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStream::__class_id, &audio_stream_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStream::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_class_proto_funcs, _countof(audio_stream_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_class_constructor, "AudioStream", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStream", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStream");
	return m;
}

JSModuleDef *js_init_audio_stream_module(JSContext *ctx) {
	return _js_init_audio_stream_module(ctx, "godot/classes/audio_stream");
}

void register_audio_stream() {
	js_init_audio_stream_module(ctx);
}