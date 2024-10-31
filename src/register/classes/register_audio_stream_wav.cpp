
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_wav.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_wav_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_wav_class_def = {
	"AudioStreamWAV",
	.finalizer = audio_stream_wav_class_finalizer
};

static JSValue audio_stream_wav_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamWAV::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioStreamWAV *audio_stream_wav_class;
	if (argc == 1) 
		audio_stream_wav_class = static_cast<AudioStreamWAV *>(static_cast<Object *>(Variant(*argv)));
	else 
		audio_stream_wav_class = memnew(AudioStreamWAV);
	if (!audio_stream_wav_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_wav_class);	
	return obj;
}
static JSValue audio_stream_wav_class_set_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamWAV::set_data, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamWAV::get_data, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_set_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamWAV::set_format, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamWAV::get_format, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_set_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamWAV::set_loop_mode, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_get_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamWAV::get_loop_mode, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_set_loop_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamWAV::set_loop_begin, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_get_loop_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamWAV::get_loop_begin, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_set_loop_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamWAV::set_loop_end, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_get_loop_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamWAV::get_loop_end, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_set_mix_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamWAV::set_mix_rate, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_get_mix_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamWAV::get_mix_rate, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_set_stereo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamWAV::set_stereo, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_is_stereo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamWAV::is_stereo, ctx, this_val, argc, argv);
};
static JSValue audio_stream_wav_class_save_to_wav(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AudioStreamWAV::save_to_wav, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_wav_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_data", 1, &audio_stream_wav_class_set_data),
	JS_CFUNC_DEF("get_data", 0, &audio_stream_wav_class_get_data),
	JS_CFUNC_DEF("set_format", 1, &audio_stream_wav_class_set_format),
	JS_CFUNC_DEF("get_format", 0, &audio_stream_wav_class_get_format),
	JS_CFUNC_DEF("set_loop_mode", 1, &audio_stream_wav_class_set_loop_mode),
	JS_CFUNC_DEF("get_loop_mode", 0, &audio_stream_wav_class_get_loop_mode),
	JS_CFUNC_DEF("set_loop_begin", 1, &audio_stream_wav_class_set_loop_begin),
	JS_CFUNC_DEF("get_loop_begin", 0, &audio_stream_wav_class_get_loop_begin),
	JS_CFUNC_DEF("set_loop_end", 1, &audio_stream_wav_class_set_loop_end),
	JS_CFUNC_DEF("get_loop_end", 0, &audio_stream_wav_class_get_loop_end),
	JS_CFUNC_DEF("set_mix_rate", 1, &audio_stream_wav_class_set_mix_rate),
	JS_CFUNC_DEF("get_mix_rate", 0, &audio_stream_wav_class_get_mix_rate),
	JS_CFUNC_DEF("set_stereo", 1, &audio_stream_wav_class_set_stereo),
	JS_CFUNC_DEF("is_stereo", 0, &audio_stream_wav_class_is_stereo),
	JS_CFUNC_DEF("save_to_wav", 1, &audio_stream_wav_class_save_to_wav),
};

static void define_audio_stream_wav_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "data"),
        JS_NewCFunction(ctx, audio_stream_wav_class_get_data, "get_data", 0),
        JS_NewCFunction(ctx, audio_stream_wav_class_set_data, "set_data", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "format"),
        JS_NewCFunction(ctx, audio_stream_wav_class_get_format, "get_format", 0),
        JS_NewCFunction(ctx, audio_stream_wav_class_set_format, "set_format", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "loop_mode"),
        JS_NewCFunction(ctx, audio_stream_wav_class_get_loop_mode, "get_loop_mode", 0),
        JS_NewCFunction(ctx, audio_stream_wav_class_set_loop_mode, "set_loop_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "loop_begin"),
        JS_NewCFunction(ctx, audio_stream_wav_class_get_loop_begin, "get_loop_begin", 0),
        JS_NewCFunction(ctx, audio_stream_wav_class_set_loop_begin, "set_loop_begin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "loop_end"),
        JS_NewCFunction(ctx, audio_stream_wav_class_get_loop_end, "get_loop_end", 0),
        JS_NewCFunction(ctx, audio_stream_wav_class_set_loop_end, "set_loop_end", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mix_rate"),
        JS_NewCFunction(ctx, audio_stream_wav_class_get_mix_rate, "get_mix_rate", 0),
        JS_NewCFunction(ctx, audio_stream_wav_class_set_mix_rate, "set_mix_rate", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stereo"),
        JS_NewCFunction(ctx, audio_stream_wav_class_is_stereo, "is_stereo", 0),
        JS_NewCFunction(ctx, audio_stream_wav_class_set_stereo, "set_stereo", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_stream_wav_enum(JSContext *ctx, JSValue proto) {
	JSValue Format_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Format_obj, "FORMAT_8_BITS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Format_obj, "FORMAT_16_BITS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Format_obj, "FORMAT_IMA_ADPCM", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Format_obj, "FORMAT_QOA", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "Format", Format_obj);
	JSValue LoopMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, LoopMode_obj, "LOOP_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, LoopMode_obj, "LOOP_FORWARD", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, LoopMode_obj, "LOOP_PINGPONG", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, LoopMode_obj, "LOOP_BACKWARD", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "LoopMode", LoopMode_obj);
}

static int js_audio_stream_wav_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStreamWAV::__class_id);
	classes["AudioStreamWAV"] = AudioStreamWAV::__class_id;
	class_id_list.insert(AudioStreamWAV::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamWAV::__class_id, &audio_stream_wav_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamWAV::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamWAV::__class_id, proto);

	define_audio_stream_wav_property(ctx, proto);
	define_audio_stream_wav_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_wav_class_proto_funcs, _countof(audio_stream_wav_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_wav_class_constructor, "AudioStreamWAV", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamWAV", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_wav_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_stream';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_wav_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamWAV");
	return m;
}

JSModuleDef *js_init_audio_stream_wav_module(JSContext *ctx) {
	return _js_init_audio_stream_wav_module(ctx, "@godot/classes/audio_stream_wav");
}

void register_audio_stream_wav() {
	AudioStreamWAV::__init_js_class_id();
	js_init_audio_stream_wav_module(ctx);
}