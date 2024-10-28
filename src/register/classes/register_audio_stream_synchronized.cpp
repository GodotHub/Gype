
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_synchronized.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_synchronized_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef audio_stream_synchronized_class_def = {
	"AudioStreamSynchronized",
	.finalizer = audio_stream_synchronized_class_finalizer
};

static JSValue audio_stream_synchronized_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamSynchronized::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioStreamSynchronized *audio_stream_synchronized_class = memnew(AudioStreamSynchronized);
	if (!audio_stream_synchronized_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_synchronized_class);
	return obj;
}
static JSValue audio_stream_synchronized_class_set_stream_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamSynchronized::set_stream_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_synchronized_class_get_stream_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamSynchronized::get_stream_count, ctx, this_val, argc, argv);
};
static JSValue audio_stream_synchronized_class_set_sync_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamSynchronized::set_sync_stream, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_synchronized_class_get_sync_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamSynchronized::get_sync_stream, ctx, this_val, argc, argv);
};
static JSValue audio_stream_synchronized_class_set_sync_stream_volume(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamSynchronized::set_sync_stream_volume, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_synchronized_class_get_sync_stream_volume(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamSynchronized::get_sync_stream_volume, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_synchronized_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream_count", 1, &audio_stream_synchronized_class_set_stream_count),
	JS_CFUNC_DEF("get_stream_count", 0, &audio_stream_synchronized_class_get_stream_count),
	JS_CFUNC_DEF("set_sync_stream", 2, &audio_stream_synchronized_class_set_sync_stream),
	JS_CFUNC_DEF("get_sync_stream", 1, &audio_stream_synchronized_class_get_sync_stream),
	JS_CFUNC_DEF("set_sync_stream_volume", 2, &audio_stream_synchronized_class_set_sync_stream_volume),
	JS_CFUNC_DEF("get_sync_stream_volume", 1, &audio_stream_synchronized_class_get_sync_stream_volume),
};

void define_audio_stream_synchronized_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "stream_count"),
			JS_NewCFunction(ctx, audio_stream_synchronized_class_get_stream_count, "get_stream_count", 0),
			JS_NewCFunction(ctx, audio_stream_synchronized_class_set_stream_count, "set_stream_count", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_synchronized_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamSynchronized::__class_id);
	classes["AudioStreamSynchronized"] = AudioStreamSynchronized::__class_id;
	class_id_list.insert(AudioStreamSynchronized::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamSynchronized::__class_id, &audio_stream_synchronized_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamSynchronized::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamSynchronized::__class_id, proto);

	define_audio_stream_synchronized_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_synchronized_class_proto_funcs, _countof(audio_stream_synchronized_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_synchronized_class_constructor, "AudioStreamSynchronized", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamSynchronized", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_synchronized_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_stream';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AudioStreamSynchronized::__init_js_class_id();
	js_init_audio_stream_synchronized_module(ctx);
}