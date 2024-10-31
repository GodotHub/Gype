
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_sample.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_class_def = {
	"AudioStream",
	.finalizer = audio_stream_class_finalizer
};

static JSValue audio_stream_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStream::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioStream *audio_stream_class;
	if (argc == 1) 
		audio_stream_class = static_cast<AudioStream *>(static_cast<Object *>(Variant(*argv)));
	else 
		audio_stream_class = memnew(AudioStream);
	if (!audio_stream_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_class);	
	return obj;
}
static JSValue audio_stream_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStream::get_length, ctx, this_val, argc, argv);
};
static JSValue audio_stream_class_is_monophonic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStream::is_monophonic, ctx, this_val, argc, argv);
};
static JSValue audio_stream_class_instantiate_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AudioStream::instantiate_playback, ctx, this_val, argc, argv);
};
static JSValue audio_stream_class_can_be_sampled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStream::can_be_sampled, ctx, this_val, argc, argv);
};
static JSValue audio_stream_class_generate_sample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStream::generate_sample, ctx, this_val, argc, argv);
};
static JSValue audio_stream_class_is_meta_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStream::is_meta_stream, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_length", 0, &audio_stream_class_get_length),
	JS_CFUNC_DEF("is_monophonic", 0, &audio_stream_class_is_monophonic),
	JS_CFUNC_DEF("instantiate_playback", 0, &audio_stream_class_instantiate_playback),
	JS_CFUNC_DEF("can_be_sampled", 0, &audio_stream_class_can_be_sampled),
	JS_CFUNC_DEF("generate_sample", 0, &audio_stream_class_generate_sample),
	JS_CFUNC_DEF("is_meta_stream", 0, &audio_stream_class_is_meta_stream),
};
static JSValue audio_stream_class_get_parameter_list_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AudioStream *opaque = reinterpret_cast<AudioStream *>(JS_GetOpaque(this_val, AudioStream::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "parameter_list_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "parameter_list_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "parameter_list_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_audio_stream_property(JSContext *ctx, JSValue proto) {
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "parameter_list_changed"),
		JS_NewCFunction(ctx, audio_stream_class_get_parameter_list_changed_signal, "get_parameter_list_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_audio_stream_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStream::__class_id);
	classes["AudioStream"] = AudioStream::__class_id;
	class_id_list.insert(AudioStream::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStream::__class_id, &audio_stream_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStream::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStream::__class_id, proto);

	define_audio_stream_property(ctx, proto);
	define_audio_stream_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_class_proto_funcs, _countof(audio_stream_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_class_constructor, "AudioStream", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStream", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStream");
	return m;
}

JSModuleDef *js_init_audio_stream_module(JSContext *ctx) {
	return _js_init_audio_stream_module(ctx, "@godot/classes/audio_stream");
}

void register_audio_stream() {
	AudioStream::__init_js_class_id();
	js_init_audio_stream_module(ctx);
}