
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/audio_stream_polyphonic.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_polyphonic_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamPolyphonic *audio_stream_polyphonic = static_cast<AudioStreamPolyphonic *>(JS_GetOpaque(val, AudioStreamPolyphonic::__class_id));
	if (audio_stream_polyphonic)
		AudioStreamPolyphonic::free(nullptr, audio_stream_polyphonic);
}

static JSClassDef audio_stream_polyphonic_class_def = {
	"AudioStreamPolyphonic",
	.finalizer = audio_stream_polyphonic_class_finalizer
};

static JSValue audio_stream_polyphonic_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamPolyphonic *audio_stream_polyphonic_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamPolyphonic::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_polyphonic_class = memnew(AudioStreamPolyphonic);
	if (!audio_stream_polyphonic_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_polyphonic_class);
	return obj;
}
static JSValue audio_stream_polyphonic_class_set_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AudioStreamPolyphonic::set_polyphony, AudioStreamPolyphonic::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_polyphonic_class_get_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamPolyphonic::get_polyphony, AudioStreamPolyphonic::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_polyphonic_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_polyphony", 1, &audio_stream_polyphonic_class_set_polyphony),
	JS_CFUNC_DEF("get_polyphony", 0, &audio_stream_polyphonic_class_get_polyphony),
};

static int js_audio_stream_polyphonic_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamPolyphonic::__class_id);
	classes["AudioStreamPolyphonic"] = AudioStreamPolyphonic::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPolyphonic::__class_id, &audio_stream_polyphonic_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPolyphonic::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_polyphonic_class_proto_funcs, _countof(audio_stream_polyphonic_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_polyphonic_class_constructor, "AudioStreamPolyphonic", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamPolyphonic", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_polyphonic_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_polyphonic_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPolyphonic");
	return m;
}

JSModuleDef *js_init_audio_stream_polyphonic_module(JSContext *ctx) {
	return _js_init_audio_stream_polyphonic_module(ctx, "godot/classes/audio_stream_polyphonic");
}

void register_audio_stream_polyphonic() {
	js_init_audio_stream_polyphonic_module(ctx);
}