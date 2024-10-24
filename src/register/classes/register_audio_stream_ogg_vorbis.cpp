
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ogg_packet_sequence.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_ogg_vorbis_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_ogg_vorbis_class_def = {
	"AudioStreamOggVorbis",
	.finalizer = audio_stream_ogg_vorbis_class_finalizer
};

static JSValue audio_stream_ogg_vorbis_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamOggVorbis::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioStreamOggVorbis *audio_stream_ogg_vorbis_class = memnew(AudioStreamOggVorbis);
	if (!audio_stream_ogg_vorbis_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_ogg_vorbis_class);	
	return obj;
}
static JSValue audio_stream_ogg_vorbis_class_set_packet_sequence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioStreamOggVorbis::set_packet_sequence, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_packet_sequence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_packet_sequence, ctx, this_val, argc, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioStreamOggVorbis::set_loop, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::has_loop, ctx, this_val, argc, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_loop_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioStreamOggVorbis::set_loop_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_loop_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_loop_offset, ctx, this_val, argc, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioStreamOggVorbis::set_bpm, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_bpm, ctx, this_val, argc, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_beat_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioStreamOggVorbis::set_beat_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_beat_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_beat_count, ctx, this_val, argc, argv);
};
static JSValue audio_stream_ogg_vorbis_class_set_bar_beats(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioStreamOggVorbis::set_bar_beats, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_ogg_vorbis_class_get_bar_beats(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamOggVorbis::get_bar_beats, ctx, this_val, argc, argv);
};
static JSValue audio_stream_ogg_vorbis_class_load_from_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&AudioStreamOggVorbis::load_from_buffer, ctx, this_val, argc, argv);
};
static JSValue audio_stream_ogg_vorbis_class_load_from_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&AudioStreamOggVorbis::load_from_file, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_ogg_vorbis_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_packet_sequence", 1, &audio_stream_ogg_vorbis_class_set_packet_sequence),
	JS_CFUNC_DEF("get_packet_sequence", 0, &audio_stream_ogg_vorbis_class_get_packet_sequence),
	JS_CFUNC_DEF("set_loop", 1, &audio_stream_ogg_vorbis_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &audio_stream_ogg_vorbis_class_has_loop),
	JS_CFUNC_DEF("set_loop_offset", 1, &audio_stream_ogg_vorbis_class_set_loop_offset),
	JS_CFUNC_DEF("get_loop_offset", 0, &audio_stream_ogg_vorbis_class_get_loop_offset),
	JS_CFUNC_DEF("set_bpm", 1, &audio_stream_ogg_vorbis_class_set_bpm),
	JS_CFUNC_DEF("get_bpm", 0, &audio_stream_ogg_vorbis_class_get_bpm),
	JS_CFUNC_DEF("set_beat_count", 1, &audio_stream_ogg_vorbis_class_set_beat_count),
	JS_CFUNC_DEF("get_beat_count", 0, &audio_stream_ogg_vorbis_class_get_beat_count),
	JS_CFUNC_DEF("set_bar_beats", 1, &audio_stream_ogg_vorbis_class_set_bar_beats),
	JS_CFUNC_DEF("get_bar_beats", 0, &audio_stream_ogg_vorbis_class_get_bar_beats),
};
static const JSCFunctionListEntry audio_stream_ogg_vorbis_class_static_funcs[] = {
	JS_CFUNC_DEF("load_from_buffer", 1, &audio_stream_ogg_vorbis_class_load_from_buffer),
	JS_CFUNC_DEF("load_from_file", 1, &audio_stream_ogg_vorbis_class_load_from_file),
};

void define_audio_stream_ogg_vorbis_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "packet_sequence"),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_get_packet_sequence, "get_packet_sequence", 0),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_set_packet_sequence, "set_packet_sequence", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bpm"),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_get_bpm, "get_bpm", 0),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_set_bpm, "set_bpm", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "beat_count"),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_get_beat_count, "get_beat_count", 0),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_set_beat_count, "set_beat_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bar_beats"),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_get_bar_beats, "get_bar_beats", 0),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_set_bar_beats, "set_bar_beats", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "loop"),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_has_loop, "has_loop", 0),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_set_loop, "set_loop", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "loop_offset"),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_get_loop_offset, "get_loop_offset", 0),
        JS_NewCFunction(ctx, audio_stream_ogg_vorbis_class_set_loop_offset, "set_loop_offset", 1),
        JS_PROP_GETSET
    );
}

static int js_audio_stream_ogg_vorbis_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStreamOggVorbis::__class_id);
	classes["AudioStreamOggVorbis"] = AudioStreamOggVorbis::__class_id;
	class_id_list.insert(AudioStreamOggVorbis::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamOggVorbis::__class_id, &audio_stream_ogg_vorbis_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamOggVorbis::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamOggVorbis::__class_id, proto);

	define_audio_stream_ogg_vorbis_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_ogg_vorbis_class_proto_funcs, _countof(audio_stream_ogg_vorbis_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_ogg_vorbis_class_constructor, "AudioStreamOggVorbis", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, audio_stream_ogg_vorbis_class_static_funcs, _countof(audio_stream_ogg_vorbis_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamOggVorbis", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_ogg_vorbis_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/audio_stream';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_ogg_vorbis_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamOggVorbis");
	return m;
}

JSModuleDef *js_init_audio_stream_ogg_vorbis_module(JSContext *ctx) {
	return _js_init_audio_stream_ogg_vorbis_module(ctx, "godot/classes/audio_stream_ogg_vorbis");
}

void register_audio_stream_ogg_vorbis() {
	AudioStreamOggVorbis::__init_js_class_id();
	js_init_audio_stream_ogg_vorbis_module(ctx);
}