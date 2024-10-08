
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_generator.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_generator_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamGenerator *audio_stream_generator = static_cast<AudioStreamGenerator *>(JS_GetOpaque(val, AudioStreamGenerator::__class_id));
	if (audio_stream_generator)
		AudioStreamGenerator::free(nullptr, audio_stream_generator);
}

static JSClassDef audio_stream_generator_class_def = {
	"AudioStreamGenerator",
	.finalizer = audio_stream_generator_class_finalizer
};

static JSValue audio_stream_generator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamGenerator *audio_stream_generator_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamGenerator::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_generator_class = memnew(AudioStreamGenerator);
	if (!audio_stream_generator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_generator_class);
	return obj;
}
static JSValue audio_stream_generator_class_set_mix_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamGenerator::set_mix_rate, AudioStreamGenerator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_generator_class_get_mix_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamGenerator::get_mix_rate, AudioStreamGenerator::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_generator_class_set_buffer_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamGenerator::set_buffer_length, AudioStreamGenerator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_generator_class_get_buffer_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamGenerator::get_buffer_length, AudioStreamGenerator::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_generator_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mix_rate", 1, &audio_stream_generator_class_set_mix_rate),
	JS_CFUNC_DEF("get_mix_rate", 0, &audio_stream_generator_class_get_mix_rate),
	JS_CFUNC_DEF("set_buffer_length", 1, &audio_stream_generator_class_set_buffer_length),
	JS_CFUNC_DEF("get_buffer_length", 0, &audio_stream_generator_class_get_buffer_length),
};

static int js_audio_stream_generator_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamGenerator::__class_id);
	classes["AudioStreamGenerator"] = AudioStreamGenerator::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamGenerator::__class_id, &audio_stream_generator_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamGenerator::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_generator_class_proto_funcs, _countof(audio_stream_generator_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_generator_class_constructor, "AudioStreamGenerator", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamGenerator", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_generator_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_generator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamGenerator");
	return m;
}

JSModuleDef *js_init_audio_stream_generator_module(JSContext *ctx) {
	return _js_init_audio_stream_generator_module(ctx, "godot/classes/audio_stream_generator");
}

void register_audio_stream_generator() {
	js_init_audio_stream_generator_module(ctx);
}