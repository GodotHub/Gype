
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/classes/animated_sprite2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animated_sprite2d_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimatedSprite2D *animated_sprite2d = static_cast<AnimatedSprite2D *>(JS_GetOpaque(val, AnimatedSprite2D::__class_id));
	if (animated_sprite2d)
		memdelete(animated_sprite2d);
}

static JSClassDef animated_sprite2d_class_def = {
	"AnimatedSprite2D",
	.finalizer = animated_sprite2d_class_finalizer
};

static JSValue animated_sprite2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimatedSprite2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	AnimatedSprite2D *animated_sprite2d_class = memnew(AnimatedSprite2D);
	if (!animated_sprite2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animated_sprite2d_class);	
	return obj;
}
static JSValue animated_sprite2d_class_set_sprite_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_sprite_frames, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_sprite_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_sprite_frames, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_set_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_animation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_animation, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_set_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_autoplay, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_autoplay, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::is_playing, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::play, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_play_backwards(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::play_backwards, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::pause, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::stop, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_set_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_centered, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_is_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::is_centered, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_offset, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_flip_h, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::is_flipped_h, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_flip_v, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::is_flipped_v, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_frame, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_frame, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_set_frame_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_frame_progress, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_frame_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_frame_progress, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_set_frame_and_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_frame_and_progress, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatedSprite2D::set_speed_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animated_sprite2d_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_speed_scale, ctx, this_val, argc, argv);
};
static JSValue animated_sprite2d_class_get_playing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatedSprite2D::get_playing_speed, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animated_sprite2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sprite_frames", 1, &animated_sprite2d_class_set_sprite_frames),
	JS_CFUNC_DEF("get_sprite_frames", 0, &animated_sprite2d_class_get_sprite_frames),
	JS_CFUNC_DEF("set_animation", 1, &animated_sprite2d_class_set_animation),
	JS_CFUNC_DEF("get_animation", 0, &animated_sprite2d_class_get_animation),
	JS_CFUNC_DEF("set_autoplay", 1, &animated_sprite2d_class_set_autoplay),
	JS_CFUNC_DEF("get_autoplay", 0, &animated_sprite2d_class_get_autoplay),
	JS_CFUNC_DEF("is_playing", 0, &animated_sprite2d_class_is_playing),
	JS_CFUNC_DEF("play", 3, &animated_sprite2d_class_play),
	JS_CFUNC_DEF("play_backwards", 1, &animated_sprite2d_class_play_backwards),
	JS_CFUNC_DEF("pause", 0, &animated_sprite2d_class_pause),
	JS_CFUNC_DEF("stop", 0, &animated_sprite2d_class_stop),
	JS_CFUNC_DEF("set_centered", 1, &animated_sprite2d_class_set_centered),
	JS_CFUNC_DEF("is_centered", 0, &animated_sprite2d_class_is_centered),
	JS_CFUNC_DEF("set_offset", 1, &animated_sprite2d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &animated_sprite2d_class_get_offset),
	JS_CFUNC_DEF("set_flip_h", 1, &animated_sprite2d_class_set_flip_h),
	JS_CFUNC_DEF("is_flipped_h", 0, &animated_sprite2d_class_is_flipped_h),
	JS_CFUNC_DEF("set_flip_v", 1, &animated_sprite2d_class_set_flip_v),
	JS_CFUNC_DEF("is_flipped_v", 0, &animated_sprite2d_class_is_flipped_v),
	JS_CFUNC_DEF("set_frame", 1, &animated_sprite2d_class_set_frame),
	JS_CFUNC_DEF("get_frame", 0, &animated_sprite2d_class_get_frame),
	JS_CFUNC_DEF("set_frame_progress", 1, &animated_sprite2d_class_set_frame_progress),
	JS_CFUNC_DEF("get_frame_progress", 0, &animated_sprite2d_class_get_frame_progress),
	JS_CFUNC_DEF("set_frame_and_progress", 2, &animated_sprite2d_class_set_frame_and_progress),
	JS_CFUNC_DEF("set_speed_scale", 1, &animated_sprite2d_class_set_speed_scale),
	JS_CFUNC_DEF("get_speed_scale", 0, &animated_sprite2d_class_get_speed_scale),
	JS_CFUNC_DEF("get_playing_speed", 0, &animated_sprite2d_class_get_playing_speed),
};

void define_animated_sprite2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sprite_frames"),
        JS_NewCFunction(ctx, animated_sprite2d_class_get_sprite_frames, "get_sprite_frames", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_sprite_frames, "set_sprite_frames", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "animation"),
        JS_NewCFunction(ctx, animated_sprite2d_class_get_animation, "get_animation", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_animation, "set_animation", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "autoplay"),
        JS_NewCFunction(ctx, animated_sprite2d_class_get_autoplay, "get_autoplay", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_autoplay, "set_autoplay", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "frame"),
        JS_NewCFunction(ctx, animated_sprite2d_class_get_frame, "get_frame", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_frame, "set_frame", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "frame_progress"),
        JS_NewCFunction(ctx, animated_sprite2d_class_get_frame_progress, "get_frame_progress", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_frame_progress, "set_frame_progress", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "speed_scale"),
        JS_NewCFunction(ctx, animated_sprite2d_class_get_speed_scale, "get_speed_scale", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_speed_scale, "set_speed_scale", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "centered"),
        JS_NewCFunction(ctx, animated_sprite2d_class_is_centered, "is_centered", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_centered, "set_centered", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, animated_sprite2d_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_offset, "set_offset", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flip_h"),
        JS_NewCFunction(ctx, animated_sprite2d_class_is_flipped_h, "is_flipped_h", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_flip_h, "set_flip_h", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flip_v"),
        JS_NewCFunction(ctx, animated_sprite2d_class_is_flipped_v, "is_flipped_v", 0),
        JS_NewCFunction(ctx, animated_sprite2d_class_set_flip_v, "set_flip_v", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_animated_sprite2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimatedSprite2D::__class_id);
	classes["AnimatedSprite2D"] = AnimatedSprite2D::__class_id;
	class_id_list.insert(AnimatedSprite2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimatedSprite2D::__class_id, &animated_sprite2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimatedSprite2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimatedSprite2D::__class_id, proto);

	define_animated_sprite2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animated_sprite2d_class_proto_funcs, _countof(animated_sprite2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animated_sprite2d_class_constructor, "AnimatedSprite2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimatedSprite2D", ctor);

	return 0;
}

JSModuleDef *_js_init_animated_sprite2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animated_sprite2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimatedSprite2D");
	return m;
}

JSModuleDef *js_init_animated_sprite2d_module(JSContext *ctx) {
	return _js_init_animated_sprite2d_module(ctx, "godot/classes/animated_sprite2d");
}

void register_animated_sprite2d() {
	AnimatedSprite2D::__init_js_class_id();
	js_init_animated_sprite2d_module(ctx);
}