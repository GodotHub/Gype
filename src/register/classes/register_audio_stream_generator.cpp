
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_generator.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_generator_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_generator_class_def = {
	"AudioStreamGenerator",
	.finalizer = audio_stream_generator_class_finalizer
};

static JSValue audio_stream_generator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamGenerator::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioStreamGenerator *audio_stream_generator_class;
	if (argc == 1) 
		audio_stream_generator_class = static_cast<AudioStreamGenerator *>(static_cast<Object *>(Variant(*argv)));
	else 
		audio_stream_generator_class = memnew(AudioStreamGenerator);
	if (!audio_stream_generator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_generator_class);	
	return obj;
}
static JSValue audio_stream_generator_class_set_mix_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamGenerator::set_mix_rate, ctx, this_val, argc, argv);
};
static JSValue audio_stream_generator_class_get_mix_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamGenerator::get_mix_rate, ctx, this_val, argc, argv);
};
static JSValue audio_stream_generator_class_set_buffer_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamGenerator::set_buffer_length, ctx, this_val, argc, argv);
};
static JSValue audio_stream_generator_class_get_buffer_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamGenerator::get_buffer_length, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_generator_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mix_rate", 1, &audio_stream_generator_class_set_mix_rate),
	JS_CFUNC_DEF("get_mix_rate", 0, &audio_stream_generator_class_get_mix_rate),
	JS_CFUNC_DEF("set_buffer_length", 1, &audio_stream_generator_class_set_buffer_length),
	JS_CFUNC_DEF("get_buffer_length", 0, &audio_stream_generator_class_get_buffer_length),
};

static void define_audio_stream_generator_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mix_rate"),
        JS_NewCFunction(ctx, audio_stream_generator_class_get_mix_rate, "get_mix_rate", 0),
        JS_NewCFunction(ctx, audio_stream_generator_class_set_mix_rate, "set_mix_rate", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "buffer_length"),
        JS_NewCFunction(ctx, audio_stream_generator_class_get_buffer_length, "get_buffer_length", 0),
        JS_NewCFunction(ctx, audio_stream_generator_class_set_buffer_length, "set_buffer_length", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_stream_generator_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_generator_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStreamGenerator::__class_id);
	classes["AudioStreamGenerator"] = AudioStreamGenerator::__class_id;
	class_id_list.insert(AudioStreamGenerator::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamGenerator::__class_id, &audio_stream_generator_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamGenerator::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamGenerator::__class_id, proto);

	define_audio_stream_generator_property(ctx, proto);
	define_audio_stream_generator_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_generator_class_proto_funcs, _countof(audio_stream_generator_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_generator_class_constructor, "AudioStreamGenerator", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamGenerator", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_generator_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_stream';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_generator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamGenerator");
	return m;
}

JSModuleDef *js_init_audio_stream_generator_module(JSContext *ctx) {
	return _js_init_audio_stream_generator_module(ctx, "@godot/classes/audio_stream_generator");
}

void register_audio_stream_generator() {
	AudioStreamGenerator::__init_js_class_id();
	js_init_audio_stream_generator_module(ctx);
}