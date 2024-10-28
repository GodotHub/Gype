
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_randomizer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void audio_stream_randomizer_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef audio_stream_randomizer_class_def = {
	"AudioStreamRandomizer",
	.finalizer = audio_stream_randomizer_class_finalizer
};

static JSValue audio_stream_randomizer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamRandomizer::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioStreamRandomizer *audio_stream_randomizer_class = memnew(AudioStreamRandomizer);
	if (!audio_stream_randomizer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_randomizer_class);
	return obj;
}
static JSValue audio_stream_randomizer_class_add_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamRandomizer::add_stream, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_move_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamRandomizer::move_stream, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_remove_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamRandomizer::remove_stream, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_set_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_stream, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_stream, ctx, this_val, argc, argv);
};
static JSValue audio_stream_randomizer_class_set_stream_probability_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_stream_probability_weight, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_stream_probability_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_stream_probability_weight, ctx, this_val, argc, argv);
};
static JSValue audio_stream_randomizer_class_set_streams_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_streams_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_streams_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_streams_count, ctx, this_val, argc, argv);
};
static JSValue audio_stream_randomizer_class_set_random_pitch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_random_pitch, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_random_pitch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_random_pitch, ctx, this_val, argc, argv);
};
static JSValue audio_stream_randomizer_class_set_random_volume_offset_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_random_volume_offset_db, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_random_volume_offset_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_random_volume_offset_db, ctx, this_val, argc, argv);
};
static JSValue audio_stream_randomizer_class_set_playback_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&AudioStreamRandomizer::set_playback_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_randomizer_class_get_playback_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamRandomizer::get_playback_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_randomizer_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_stream", 3, &audio_stream_randomizer_class_add_stream),
	JS_CFUNC_DEF("move_stream", 2, &audio_stream_randomizer_class_move_stream),
	JS_CFUNC_DEF("remove_stream", 1, &audio_stream_randomizer_class_remove_stream),
	JS_CFUNC_DEF("set_stream", 2, &audio_stream_randomizer_class_set_stream),
	JS_CFUNC_DEF("get_stream", 1, &audio_stream_randomizer_class_get_stream),
	JS_CFUNC_DEF("set_stream_probability_weight", 2, &audio_stream_randomizer_class_set_stream_probability_weight),
	JS_CFUNC_DEF("get_stream_probability_weight", 1, &audio_stream_randomizer_class_get_stream_probability_weight),
	JS_CFUNC_DEF("set_streams_count", 1, &audio_stream_randomizer_class_set_streams_count),
	JS_CFUNC_DEF("get_streams_count", 0, &audio_stream_randomizer_class_get_streams_count),
	JS_CFUNC_DEF("set_random_pitch", 1, &audio_stream_randomizer_class_set_random_pitch),
	JS_CFUNC_DEF("get_random_pitch", 0, &audio_stream_randomizer_class_get_random_pitch),
	JS_CFUNC_DEF("set_random_volume_offset_db", 1, &audio_stream_randomizer_class_set_random_volume_offset_db),
	JS_CFUNC_DEF("get_random_volume_offset_db", 0, &audio_stream_randomizer_class_get_random_volume_offset_db),
	JS_CFUNC_DEF("set_playback_mode", 1, &audio_stream_randomizer_class_set_playback_mode),
	JS_CFUNC_DEF("get_playback_mode", 0, &audio_stream_randomizer_class_get_playback_mode),
};

void define_audio_stream_randomizer_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "playback_mode"),
			JS_NewCFunction(ctx, audio_stream_randomizer_class_get_playback_mode, "get_playback_mode", 0),
			JS_NewCFunction(ctx, audio_stream_randomizer_class_set_playback_mode, "set_playback_mode", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "random_pitch"),
			JS_NewCFunction(ctx, audio_stream_randomizer_class_get_random_pitch, "get_random_pitch", 0),
			JS_NewCFunction(ctx, audio_stream_randomizer_class_set_random_pitch, "set_random_pitch", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "random_volume_offset_db"),
			JS_NewCFunction(ctx, audio_stream_randomizer_class_get_random_volume_offset_db, "get_random_volume_offset_db", 0),
			JS_NewCFunction(ctx, audio_stream_randomizer_class_set_random_volume_offset_db, "set_random_volume_offset_db", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "streams_count"),
			JS_NewCFunction(ctx, audio_stream_randomizer_class_get_streams_count, "get_streams_count", 0),
			JS_NewCFunction(ctx, audio_stream_randomizer_class_set_streams_count, "set_streams_count", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue PlaybackMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, PlaybackMode_obj, "PLAYBACK_RANDOM_NO_REPEATS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, PlaybackMode_obj, "PLAYBACK_RANDOM", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, PlaybackMode_obj, "PLAYBACK_SEQUENTIAL", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "PlaybackMode", PlaybackMode_obj);
}

static int js_audio_stream_randomizer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamRandomizer::__class_id);
	classes["AudioStreamRandomizer"] = AudioStreamRandomizer::__class_id;
	class_id_list.insert(AudioStreamRandomizer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamRandomizer::__class_id, &audio_stream_randomizer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamRandomizer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamRandomizer::__class_id, proto);

	define_audio_stream_randomizer_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_randomizer_class_proto_funcs, _countof(audio_stream_randomizer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_randomizer_class_constructor, "AudioStreamRandomizer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamRandomizer", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_randomizer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_stream';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_randomizer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamRandomizer");
	return m;
}

JSModuleDef *js_init_audio_stream_randomizer_module(JSContext *ctx) {
	return _js_init_audio_stream_randomizer_module(ctx, "godot/classes/audio_stream_randomizer");
}

void register_audio_stream_randomizer() {
	AudioStreamRandomizer::__init_js_class_id();
	js_init_audio_stream_randomizer_module(ctx);
}