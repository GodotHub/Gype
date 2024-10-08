
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_synchronized.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_synchronized_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamSynchronized *audio_stream_synchronized = static_cast<AudioStreamSynchronized *>(JS_GetOpaque(val, AudioStreamSynchronized::__class_id));
	if (audio_stream_synchronized)
		AudioStreamSynchronized::free(nullptr, audio_stream_synchronized);
}

static JSClassDef audio_stream_synchronized_class_def = {
	"AudioStreamSynchronized",
	.finalizer = audio_stream_synchronized_class_finalizer
};

static JSValue audio_stream_synchronized_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamSynchronized *audio_stream_synchronized_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamSynchronized::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_synchronized_class = memnew(AudioStreamSynchronized);
	if (!audio_stream_synchronized_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_synchronized_class);
	return obj;
}
static JSValue audio_stream_synchronized_class_set_stream_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamSynchronized::set_stream_count, AudioStreamSynchronized::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_synchronized_class_get_stream_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamSynchronized::get_stream_count, AudioStreamSynchronized::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_synchronized_class_set_sync_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamSynchronized::set_sync_stream, AudioStreamSynchronized::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_synchronized_class_get_sync_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamSynchronized::get_sync_stream, AudioStreamSynchronized::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_synchronized_class_set_sync_stream_volume(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamSynchronized::set_sync_stream_volume, AudioStreamSynchronized::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_synchronized_class_get_sync_stream_volume(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamSynchronized::get_sync_stream_volume, AudioStreamSynchronized::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_synchronized_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream_count", 1, &audio_stream_synchronized_class_set_stream_count),
	JS_CFUNC_DEF("get_stream_count", 0, &audio_stream_synchronized_class_get_stream_count),
	JS_CFUNC_DEF("set_sync_stream", 2, &audio_stream_synchronized_class_set_sync_stream),
	JS_CFUNC_DEF("get_sync_stream", 1, &audio_stream_synchronized_class_get_sync_stream),
	JS_CFUNC_DEF("set_sync_stream_volume", 2, &audio_stream_synchronized_class_set_sync_stream_volume),
	JS_CFUNC_DEF("get_sync_stream_volume", 1, &audio_stream_synchronized_class_get_sync_stream_volume),
};

static int js_audio_stream_synchronized_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamSynchronized::__class_id);
	classes["AudioStreamSynchronized"] = AudioStreamSynchronized::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamSynchronized::__class_id, &audio_stream_synchronized_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamSynchronized::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_synchronized_class_proto_funcs, _countof(audio_stream_synchronized_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_synchronized_class_constructor, "AudioStreamSynchronized", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamSynchronized", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_synchronized_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_synchronized_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamSynchronized");
	return m;
}

JSModuleDef *js_init_audio_stream_synchronized_module(JSContext *ctx) {
	return _js_init_audio_stream_synchronized_module(ctx, "godot/classes/audio_stream_synchronized");
}

void register_audio_stream_synchronized() {
	js_init_audio_stream_synchronized_module(ctx);
}