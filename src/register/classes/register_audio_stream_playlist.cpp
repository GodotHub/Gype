
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream_playlist.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_playlist_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_playlist_class_def = {
	"AudioStreamPlaylist",
	.finalizer = audio_stream_playlist_class_finalizer
};

static JSValue audio_stream_playlist_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamPlaylist::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioStreamPlaylist *audio_stream_playlist_class;
	if (argc == 1) 
		audio_stream_playlist_class = static_cast<AudioStreamPlaylist *>(static_cast<Object *>(Variant(*argv)));
	else 
		audio_stream_playlist_class = memnew(AudioStreamPlaylist);
	if (!audio_stream_playlist_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_playlist_class);	
	return obj;
}
static JSValue audio_stream_playlist_class_set_stream_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlaylist::set_stream_count, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_get_stream_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_stream_count, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_get_bpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_bpm, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_set_list_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlaylist::set_list_stream, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_get_list_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_list_stream, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_set_shuffle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlaylist::set_shuffle, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_get_shuffle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_shuffle, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_set_fade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlaylist::set_fade_time, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_get_fade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlaylist::get_fade_time, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPlaylist::set_loop, ctx, this_val, argc, argv);
};
static JSValue audio_stream_playlist_class_has_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPlaylist::has_loop, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_playlist_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream_count", 1, &audio_stream_playlist_class_set_stream_count),
	JS_CFUNC_DEF("get_stream_count", 0, &audio_stream_playlist_class_get_stream_count),
	JS_CFUNC_DEF("get_bpm", 0, &audio_stream_playlist_class_get_bpm),
	JS_CFUNC_DEF("set_list_stream", 2, &audio_stream_playlist_class_set_list_stream),
	JS_CFUNC_DEF("get_list_stream", 1, &audio_stream_playlist_class_get_list_stream),
	JS_CFUNC_DEF("set_shuffle", 1, &audio_stream_playlist_class_set_shuffle),
	JS_CFUNC_DEF("get_shuffle", 0, &audio_stream_playlist_class_get_shuffle),
	JS_CFUNC_DEF("set_fade_time", 1, &audio_stream_playlist_class_set_fade_time),
	JS_CFUNC_DEF("get_fade_time", 0, &audio_stream_playlist_class_get_fade_time),
	JS_CFUNC_DEF("set_loop", 1, &audio_stream_playlist_class_set_loop),
	JS_CFUNC_DEF("has_loop", 0, &audio_stream_playlist_class_has_loop),
};

static void define_audio_stream_playlist_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shuffle"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_shuffle, "get_shuffle", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_shuffle, "set_shuffle", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "loop"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_has_loop, "has_loop", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_loop, "set_loop", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fade_time"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_fade_time, "get_fade_time", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_fade_time, "set_fade_time", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_count"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_stream_count, "get_stream_count", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_stream_count, "set_stream_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_0"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_1"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_2"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_3"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_4"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_5"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_6"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_7"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_8"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_9"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_10"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_11"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_12"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_13"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_14"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_15"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_16"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_17"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_18"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_19"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_20"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_21"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_22"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_23"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_24"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_25"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_26"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_27"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_28"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_29"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_30"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_31"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_32"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_33"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_34"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_35"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_36"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_37"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_38"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_39"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_40"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_41"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_42"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_43"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_44"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_45"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_46"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_47"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_48"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_49"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_50"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_51"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_52"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_53"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_54"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_55"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_56"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_57"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_58"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_59"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_60"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_61"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_62"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_63"),
        JS_NewCFunction(ctx, audio_stream_playlist_class_get_list_stream, "get_list_stream", 0),
        JS_NewCFunction(ctx, audio_stream_playlist_class_set_list_stream, "set_list_stream", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_stream_playlist_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_playlist_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioStreamPlaylist::__class_id);
	classes["AudioStreamPlaylist"] = AudioStreamPlaylist::__class_id;
	class_id_list.insert(AudioStreamPlaylist::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPlaylist::__class_id, &audio_stream_playlist_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamPlaylist::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPlaylist::__class_id, proto);

	define_audio_stream_playlist_property(ctx, proto);
	define_audio_stream_playlist_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_playlist_class_proto_funcs, _countof(audio_stream_playlist_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_playlist_class_constructor, "AudioStreamPlaylist", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioStreamPlaylist", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_stream_playlist_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_stream';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_playlist_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPlaylist");
	return m;
}

JSModuleDef *js_init_audio_stream_playlist_module(JSContext *ctx) {
	return _js_init_audio_stream_playlist_module(ctx, "@godot/classes/audio_stream_playlist");
}

void register_audio_stream_playlist() {
	AudioStreamPlaylist::__init_js_class_id();
	js_init_audio_stream_playlist_module(ctx);
}