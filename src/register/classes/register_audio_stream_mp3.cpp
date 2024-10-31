
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_mp3.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_mp3_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_mp3_class_def = {
	"AudioStreamMP3",
	.finalizer = audio_stream_mp3_class_finalizer
};

static JSValue audio_stream_mp3_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamMP3::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioStreamMP3 *audio_stream_mp3_class;
	if (argc == 1) 
		audio_stream_mp3_class = static_cast<AudioStreamMP3 *>(static_cast<Object *>(Variant(*argv)));
	else 
		audio_stream_mp3_class = memnew(AudioStreamMP3);
	if (!audio_stream_mp3_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_mp3_class);	
	return obj;
}
static JSValue audio_stream_mp3_class_set_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamMP3::set_data, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamMP3::get_data, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamMP3::set_loop, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamMP3::has_loop, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_set_loop_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamMP3::set_loop_offset, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_get_loop_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamMP3::get_loop_offset, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_set_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamMP3::set_bpm, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_get_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamMP3::get_bpm, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_set_beat_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamMP3::set_beat_count, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_get_beat_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamMP3::get_beat_count, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_set_bar_beats(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamMP3::set_bar_beats, ctx, this_val, argc, argv);
};
static JSValue audio_stream_mp3_class_get_bar_beats(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamMP3::get_bar_beats, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_mp3_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_data", 1, &audio_stream_mp3_class_set_data),
	JS_CFUNC_DEF("get_data", 0, &audio_stream_mp3_class_get_data),
	JS_CFUNC_DEF("set_loop", 1, &audio_stream_mp3_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &audio_stream_mp3_class_has_loop),
	JS_CFUNC_DEF("set_loop_offset", 1, &audio_stream_mp3_class_set_loop_offset),
	JS_CFUNC_DEF("get_loop_offset", 0, &audio_stream_mp3_class_get_loop_offset),
	JS_CFUNC_DEF("set_bpm", 1, &audio_stream_mp3_class_set_bpm),
	JS_CFUNC_DEF("get_bpm", 0, &audio_stream_mp3_class_get_bpm),
	JS_CFUNC_DEF("set_beat_count", 1, &audio_stream_mp3_class_set_beat_count),
	JS_CFUNC_DEF("get_beat_count", 0, &audio_stream_mp3_class_get_beat_count),
	JS_CFUNC_DEF("set_bar_beats", 1, &audio_stream_mp3_class_set_bar_beats),
	JS_CFUNC_DEF("get_bar_beats", 0, &audio_stream_mp3_class_get_bar_beats),
};

static void define_audio_stream_mp3_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "data"),
        JS_NewCFunction(ctx, audio_stream_mp3_class_get_data, "get_data", 0),
        JS_NewCFunction(ctx, audio_stream_mp3_class_set_data, "set_data", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bpm"),
        JS_NewCFunction(ctx, audio_stream_mp3_class_get_bpm, "get_bpm", 0),
        JS_NewCFunction(ctx, audio_stream_mp3_class_set_bpm, "set_bpm", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "beat_count"),
        JS_NewCFunction(ctx, audio_stream_mp3_class_get_beat_count, "get_beat_count", 0),
        JS_NewCFunction(ctx, audio_stream_mp3_class_set_beat_count, "set_beat_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bar_beats"),
        JS_NewCFunction(ctx, audio_stream_mp3_class_get_bar_beats, "get_bar_beats", 0),
        JS_NewCFunction(ctx, audio_stream_mp3_class_set_bar_beats, "set_bar_beats", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "loop"),
        JS_NewCFunction(ctx, audio_stream_mp3_class_has_loop, "has_loop", 0),
        JS_NewCFunction(ctx, audio_stream_mp3_class_set_loop, "set_loop", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "loop_offset"),
        JS_NewCFunction(ctx, audio_stream_mp3_class_get_loop_offset, "get_loop_offset", 0),
        JS_NewCFunction(ctx, audio_stream_mp3_class_set_loop_offset, "set_loop_offset", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_stream_mp3_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_mp3_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStreamMP3::__class_id);
	classes["AudioStreamMP3"] = AudioStreamMP3::__class_id;
	class_id_list.insert(AudioStreamMP3::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamMP3::__class_id, &audio_stream_mp3_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamMP3::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamMP3::__class_id, proto);

	define_audio_stream_mp3_property(ctx, proto);
	define_audio_stream_mp3_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_mp3_class_proto_funcs, _countof(audio_stream_mp3_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_mp3_class_constructor, "AudioStreamMP3", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamMP3", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_mp3_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_stream';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_mp3_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamMP3");
	return m;
}

JSModuleDef *js_init_audio_stream_mp3_module(JSContext *ctx) {
	return _js_init_audio_stream_mp3_module(ctx, "@godot/classes/audio_stream_mp3");
}

void register_audio_stream_mp3() {
	AudioStreamMP3::__init_js_class_id();
	js_init_audio_stream_mp3_module(ctx);
}