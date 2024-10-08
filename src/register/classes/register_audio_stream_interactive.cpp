
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_interactive.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_interactive_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioStreamInteractive *audio_stream_interactive = static_cast<AudioStreamInteractive *>(JS_GetOpaque(val, AudioStreamInteractive::__class_id));
	if (audio_stream_interactive)
		AudioStreamInteractive::free(nullptr, audio_stream_interactive);
}

static JSClassDef audio_stream_interactive_class_def = {
	"AudioStreamInteractive",
	.finalizer = audio_stream_interactive_class_finalizer
};

static JSValue audio_stream_interactive_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioStreamInteractive *audio_stream_interactive_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioStreamInteractive::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_stream_interactive_class = memnew(AudioStreamInteractive);
	if (!audio_stream_interactive_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_stream_interactive_class);
	return obj;
}
static JSValue audio_stream_interactive_class_set_clip_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamInteractive::set_clip_count, AudioStreamInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_interactive_class_get_clip_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_clip_count, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_set_initial_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamInteractive::set_initial_clip, AudioStreamInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_interactive_class_get_initial_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_initial_clip, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_set_clip_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamInteractive::set_clip_name, AudioStreamInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_interactive_class_get_clip_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_clip_name, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_set_clip_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamInteractive::set_clip_stream, AudioStreamInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_interactive_class_get_clip_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_clip_stream, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_set_clip_auto_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamInteractive::set_clip_auto_advance, AudioStreamInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_interactive_class_get_clip_auto_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_clip_auto_advance, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_set_clip_auto_advance_next_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamInteractive::set_clip_auto_advance_next_clip, AudioStreamInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_interactive_class_get_clip_auto_advance_next_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_clip_auto_advance_next_clip, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_add_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamInteractive::add_transition, AudioStreamInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_interactive_class_has_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::has_transition, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_erase_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioStreamInteractive::erase_transition, AudioStreamInteractive::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_stream_interactive_class_get_transition_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_transition_list, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_get_transition_from_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_transition_from_time, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_get_transition_to_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_transition_to_time, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_get_transition_fade_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_transition_fade_mode, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_get_transition_fade_beats(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_transition_fade_beats, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_is_transition_using_filler_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::is_transition_using_filler_clip, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_get_transition_filler_clip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::get_transition_filler_clip, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static JSValue audio_stream_interactive_class_is_transition_holding_previous(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioStreamInteractive::is_transition_holding_previous, AudioStreamInteractive::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_stream_interactive_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_clip_count", 1, &audio_stream_interactive_class_set_clip_count),
	JS_CFUNC_DEF("get_clip_count", 0, &audio_stream_interactive_class_get_clip_count),
	JS_CFUNC_DEF("set_initial_clip", 1, &audio_stream_interactive_class_set_initial_clip),
	JS_CFUNC_DEF("get_initial_clip", 0, &audio_stream_interactive_class_get_initial_clip),
	JS_CFUNC_DEF("set_clip_name", 2, &audio_stream_interactive_class_set_clip_name),
	JS_CFUNC_DEF("get_clip_name", 1, &audio_stream_interactive_class_get_clip_name),
	JS_CFUNC_DEF("set_clip_stream", 2, &audio_stream_interactive_class_set_clip_stream),
	JS_CFUNC_DEF("get_clip_stream", 1, &audio_stream_interactive_class_get_clip_stream),
	JS_CFUNC_DEF("set_clip_auto_advance", 2, &audio_stream_interactive_class_set_clip_auto_advance),
	JS_CFUNC_DEF("get_clip_auto_advance", 1, &audio_stream_interactive_class_get_clip_auto_advance),
	JS_CFUNC_DEF("set_clip_auto_advance_next_clip", 2, &audio_stream_interactive_class_set_clip_auto_advance_next_clip),
	JS_CFUNC_DEF("get_clip_auto_advance_next_clip", 1, &audio_stream_interactive_class_get_clip_auto_advance_next_clip),
	JS_CFUNC_DEF("add_transition", 9, &audio_stream_interactive_class_add_transition),
	JS_CFUNC_DEF("has_transition", 2, &audio_stream_interactive_class_has_transition),
	JS_CFUNC_DEF("erase_transition", 2, &audio_stream_interactive_class_erase_transition),
	JS_CFUNC_DEF("get_transition_list", 0, &audio_stream_interactive_class_get_transition_list),
	JS_CFUNC_DEF("get_transition_from_time", 2, &audio_stream_interactive_class_get_transition_from_time),
	JS_CFUNC_DEF("get_transition_to_time", 2, &audio_stream_interactive_class_get_transition_to_time),
	JS_CFUNC_DEF("get_transition_fade_mode", 2, &audio_stream_interactive_class_get_transition_fade_mode),
	JS_CFUNC_DEF("get_transition_fade_beats", 2, &audio_stream_interactive_class_get_transition_fade_beats),
	JS_CFUNC_DEF("is_transition_using_filler_clip", 2, &audio_stream_interactive_class_is_transition_using_filler_clip),
	JS_CFUNC_DEF("get_transition_filler_clip", 2, &audio_stream_interactive_class_get_transition_filler_clip),
	JS_CFUNC_DEF("is_transition_holding_previous", 2, &audio_stream_interactive_class_is_transition_holding_previous),
};

static int js_audio_stream_interactive_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioStreamInteractive::__class_id);
	classes["AudioStreamInteractive"] = AudioStreamInteractive::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamInteractive::__class_id, &audio_stream_interactive_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamInteractive::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_interactive_class_proto_funcs, _countof(audio_stream_interactive_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_interactive_class_constructor, "AudioStreamInteractive", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioStreamInteractive", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_interactive_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_interactive_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamInteractive");
	return m;
}

JSModuleDef *js_init_audio_stream_interactive_module(JSContext *ctx) {
	return _js_init_audio_stream_interactive_module(ctx, "godot/classes/audio_stream_interactive");
}

void register_audio_stream_interactive() {
	js_init_audio_stream_interactive_module(ctx);
}