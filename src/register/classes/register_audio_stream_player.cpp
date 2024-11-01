
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_player.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_player_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_player_class_def = {
	"AudioStreamPlayer",
	.finalizer = audio_stream_player_class_finalizer
};

static JSValue audio_stream_player_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamPlayer::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioStreamPlayer *audio_stream_player_class;
	if (argc == 1) 
		audio_stream_player_class = static_cast<AudioStreamPlayer *>(Variant(*argv).operator Object *());
	else 
		audio_stream_player_class = memnew(AudioStreamPlayer);
	if (!audio_stream_player_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_player_class);
	return obj;
}
static JSValue audio_stream_player_class_set_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::set_stream, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_stream, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_set_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::set_volume_db, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_volume_db, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_set_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::set_pitch_scale, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_pitch_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_pitch_scale, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::play, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_seek(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::seek, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::stop, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::is_playing, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_playback_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AudioStreamPlayer::get_playback_position, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_set_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::set_bus, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_bus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_bus, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_set_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::set_autoplay, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_is_autoplay_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::is_autoplay_enabled, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_set_mix_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::set_mix_target, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_mix_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_mix_target, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_set_stream_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::set_stream_paused, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_stream_paused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_stream_paused, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_set_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::set_max_polyphony, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_max_polyphony, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_has_stream_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AudioStreamPlayer::has_stream_playback, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_stream_playback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AudioStreamPlayer::get_stream_playback, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_set_playback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlayer::set_playback_type, ctx, this_val, argc, argv);
};
static JSValue audio_stream_player_class_get_playback_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlayer::get_playback_type, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_player_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream", 1, &audio_stream_player_class_set_stream),
	JS_CFUNC_DEF("get_stream", 0, &audio_stream_player_class_get_stream),
	JS_CFUNC_DEF("set_volume_db", 1, &audio_stream_player_class_set_volume_db),
	JS_CFUNC_DEF("get_volume_db", 0, &audio_stream_player_class_get_volume_db),
	JS_CFUNC_DEF("set_pitch_scale", 1, &audio_stream_player_class_set_pitch_scale),
	JS_CFUNC_DEF("get_pitch_scale", 0, &audio_stream_player_class_get_pitch_scale),
	JS_CFUNC_DEF("play", 1, &audio_stream_player_class_play),
	JS_CFUNC_DEF("seek", 1, &audio_stream_player_class_seek),
	JS_CFUNC_DEF("stop", 0, &audio_stream_player_class_stop),
	JS_CFUNC_DEF("is_playing", 0, &audio_stream_player_class_is_playing),
	JS_CFUNC_DEF("get_playback_position", 0, &audio_stream_player_class_get_playback_position),
	JS_CFUNC_DEF("set_bus", 1, &audio_stream_player_class_set_bus),
	JS_CFUNC_DEF("get_bus", 0, &audio_stream_player_class_get_bus),
	JS_CFUNC_DEF("set_autoplay", 1, &audio_stream_player_class_set_autoplay),
	JS_CFUNC_DEF("is_autoplay_enabled", 0, &audio_stream_player_class_is_autoplay_enabled),
	JS_CFUNC_DEF("set_mix_target", 1, &audio_stream_player_class_set_mix_target),
	JS_CFUNC_DEF("get_mix_target", 0, &audio_stream_player_class_get_mix_target),
	JS_CFUNC_DEF("set_stream_paused", 1, &audio_stream_player_class_set_stream_paused),
	JS_CFUNC_DEF("get_stream_paused", 0, &audio_stream_player_class_get_stream_paused),
	JS_CFUNC_DEF("set_max_polyphony", 1, &audio_stream_player_class_set_max_polyphony),
	JS_CFUNC_DEF("get_max_polyphony", 0, &audio_stream_player_class_get_max_polyphony),
	JS_CFUNC_DEF("has_stream_playback", 0, &audio_stream_player_class_has_stream_playback),
	JS_CFUNC_DEF("get_stream_playback", 0, &audio_stream_player_class_get_stream_playback),
	JS_CFUNC_DEF("set_playback_type", 1, &audio_stream_player_class_set_playback_type),
	JS_CFUNC_DEF("get_playback_type", 0, &audio_stream_player_class_get_playback_type),
};
static JSValue audio_stream_player_class_get_finished_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AudioStreamPlayer *opaque = reinterpret_cast<AudioStreamPlayer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "finished_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "finished").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "finished_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_audio_stream_player_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream"),
        JS_NewCFunction(ctx, audio_stream_player_class_get_stream, "get_stream", 0),
        JS_NewCFunction(ctx, audio_stream_player_class_set_stream, "set_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "volume_db"),
        JS_NewCFunction(ctx, audio_stream_player_class_get_volume_db, "get_volume_db", 0),
        JS_NewCFunction(ctx, audio_stream_player_class_set_volume_db, "set_volume_db", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pitch_scale"),
        JS_NewCFunction(ctx, audio_stream_player_class_get_pitch_scale, "get_pitch_scale", 0),
        JS_NewCFunction(ctx, audio_stream_player_class_set_pitch_scale, "set_pitch_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "playing"),
        JS_NewCFunction(ctx, audio_stream_player_class_is_playing, "is_playing", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "autoplay"),
        JS_NewCFunction(ctx, audio_stream_player_class_is_autoplay_enabled, "is_autoplay_enabled", 0),
        JS_NewCFunction(ctx, audio_stream_player_class_set_autoplay, "set_autoplay", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_paused"),
        JS_NewCFunction(ctx, audio_stream_player_class_get_stream_paused, "get_stream_paused", 0),
        JS_NewCFunction(ctx, audio_stream_player_class_set_stream_paused, "set_stream_paused", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mix_target"),
        JS_NewCFunction(ctx, audio_stream_player_class_get_mix_target, "get_mix_target", 0),
        JS_NewCFunction(ctx, audio_stream_player_class_set_mix_target, "set_mix_target", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_polyphony"),
        JS_NewCFunction(ctx, audio_stream_player_class_get_max_polyphony, "get_max_polyphony", 0),
        JS_NewCFunction(ctx, audio_stream_player_class_set_max_polyphony, "set_max_polyphony", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bus"),
        JS_NewCFunction(ctx, audio_stream_player_class_get_bus, "get_bus", 0),
        JS_NewCFunction(ctx, audio_stream_player_class_set_bus, "set_bus", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "playback_type"),
        JS_NewCFunction(ctx, audio_stream_player_class_get_playback_type, "get_playback_type", 0),
        JS_NewCFunction(ctx, audio_stream_player_class_set_playback_type, "set_playback_type", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "finished"),
		JS_NewCFunction(ctx, audio_stream_player_class_get_finished_signal, "get_finished_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_audio_stream_player_enum(JSContext *ctx, JSValue proto) {
	JSValue MixTarget_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, MixTarget_obj, "MIX_TARGET_STEREO", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, MixTarget_obj, "MIX_TARGET_SURROUND", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, MixTarget_obj, "MIX_TARGET_CENTER", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "MixTarget", MixTarget_obj);
}

static int js_audio_stream_player_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioStreamPlayer"] = AudioStreamPlayer::__class_id;
	class_id_list.insert(AudioStreamPlayer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlayer::__class_id, &audio_stream_player_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamPlayer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlayer::__class_id, proto);

	define_audio_stream_player_property(ctx, proto);
	define_audio_stream_player_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_player_class_proto_funcs, _countof(audio_stream_player_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_player_class_constructor, "AudioStreamPlayer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamPlayer", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_player_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_player_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlayer");
	return m;
}

JSModuleDef *js_init_audio_stream_player_module(JSContext *ctx) {
	return _js_init_audio_stream_player_module(ctx, "@godot/classes/audio_stream_player");
}

void register_audio_stream_player() {
	AudioStreamPlayer::__init_js_class_id();
	js_init_audio_stream_player_module(ctx);
}