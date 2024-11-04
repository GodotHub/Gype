
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/classes/animated_sprite3d.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animated_sprite3d_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimatedSprite3D *animated_sprite3d = static_cast<AnimatedSprite3D *>(JS_GetOpaque(val, AnimatedSprite3D::__class_id));
	if (animated_sprite3d)
		memdelete(animated_sprite3d);
}

static JSClassDef animated_sprite3d_class_def = {
	"AnimatedSprite3D",
	.finalizer = animated_sprite3d_class_finalizer
};

static JSValue animated_sprite3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimatedSprite3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	AnimatedSprite3D *animated_sprite3d_class;
	if (argc == 1) 
		animated_sprite3d_class = static_cast<AnimatedSprite3D *>(Variant(*argv).operator Object *());
	else 
		animated_sprite3d_class = memnew(AnimatedSprite3D);
	if (!animated_sprite3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animated_sprite3d_class);
	return obj;
}
static JSValue animated_sprite3d_class_set_sprite_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::set_sprite_frames, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_get_sprite_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_sprite_frames, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_set_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::set_animation, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_animation, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_set_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::set_autoplay, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_get_autoplay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_autoplay, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_is_playing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedSprite3D::is_playing, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_play(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::play, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_play_backwards(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::play_backwards, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_pause(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::pause, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::stop, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::set_frame, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_frame, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_set_frame_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::set_frame_progress, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_get_frame_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_frame_progress, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_set_frame_and_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::set_frame_and_progress, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimatedSprite3D::set_speed_scale, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_speed_scale, ctx, this_val, argc, argv);
};
static JSValue animated_sprite3d_class_get_playing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimatedSprite3D::get_playing_speed, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animated_sprite3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sprite_frames", 1, &animated_sprite3d_class_set_sprite_frames),
	JS_CFUNC_DEF("get_sprite_frames", 0, &animated_sprite3d_class_get_sprite_frames),
	JS_CFUNC_DEF("set_animation", 1, &animated_sprite3d_class_set_animation),
	JS_CFUNC_DEF("get_animation", 0, &animated_sprite3d_class_get_animation),
	JS_CFUNC_DEF("set_autoplay", 1, &animated_sprite3d_class_set_autoplay),
	JS_CFUNC_DEF("get_autoplay", 0, &animated_sprite3d_class_get_autoplay),
	JS_CFUNC_DEF("is_playing", 0, &animated_sprite3d_class_is_playing),
	JS_CFUNC_DEF("play", 3, &animated_sprite3d_class_play),
	JS_CFUNC_DEF("play_backwards", 1, &animated_sprite3d_class_play_backwards),
	JS_CFUNC_DEF("pause", 0, &animated_sprite3d_class_pause),
	JS_CFUNC_DEF("stop", 0, &animated_sprite3d_class_stop),
	JS_CFUNC_DEF("set_frame", 1, &animated_sprite3d_class_set_frame),
	JS_CFUNC_DEF("get_frame", 0, &animated_sprite3d_class_get_frame),
	JS_CFUNC_DEF("set_frame_progress", 1, &animated_sprite3d_class_set_frame_progress),
	JS_CFUNC_DEF("get_frame_progress", 0, &animated_sprite3d_class_get_frame_progress),
	JS_CFUNC_DEF("set_frame_and_progress", 2, &animated_sprite3d_class_set_frame_and_progress),
	JS_CFUNC_DEF("set_speed_scale", 1, &animated_sprite3d_class_set_speed_scale),
	JS_CFUNC_DEF("get_speed_scale", 0, &animated_sprite3d_class_get_speed_scale),
	JS_CFUNC_DEF("get_playing_speed", 0, &animated_sprite3d_class_get_playing_speed),
};
static JSValue animated_sprite3d_class_get_sprite_frames_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimatedSprite3D *opaque = reinterpret_cast<AnimatedSprite3D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "sprite_frames_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "sprite_frames_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "sprite_frames_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animated_sprite3d_class_get_animation_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimatedSprite3D *opaque = reinterpret_cast<AnimatedSprite3D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animated_sprite3d_class_get_frame_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimatedSprite3D *opaque = reinterpret_cast<AnimatedSprite3D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "frame_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "frame_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "frame_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animated_sprite3d_class_get_animation_looped_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimatedSprite3D *opaque = reinterpret_cast<AnimatedSprite3D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_looped_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_looped").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_looped_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animated_sprite3d_class_get_animation_finished_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimatedSprite3D *opaque = reinterpret_cast<AnimatedSprite3D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_finished_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_finished").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_finished_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_animated_sprite3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "sprite_frames"),
        JS_NewCFunction(ctx, animated_sprite3d_class_get_sprite_frames, "get_sprite_frames", 0),
        JS_NewCFunction(ctx, animated_sprite3d_class_set_sprite_frames, "set_sprite_frames", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "animation"),
        JS_NewCFunction(ctx, animated_sprite3d_class_get_animation, "get_animation", 0),
        JS_NewCFunction(ctx, animated_sprite3d_class_set_animation, "set_animation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "autoplay"),
        JS_NewCFunction(ctx, animated_sprite3d_class_get_autoplay, "get_autoplay", 0),
        JS_NewCFunction(ctx, animated_sprite3d_class_set_autoplay, "set_autoplay", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "frame"),
        JS_NewCFunction(ctx, animated_sprite3d_class_get_frame, "get_frame", 0),
        JS_NewCFunction(ctx, animated_sprite3d_class_set_frame, "set_frame", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "frame_progress"),
        JS_NewCFunction(ctx, animated_sprite3d_class_get_frame_progress, "get_frame_progress", 0),
        JS_NewCFunction(ctx, animated_sprite3d_class_set_frame_progress, "set_frame_progress", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "speed_scale"),
        JS_NewCFunction(ctx, animated_sprite3d_class_get_speed_scale, "get_speed_scale", 0),
        JS_NewCFunction(ctx, animated_sprite3d_class_set_speed_scale, "set_speed_scale", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "sprite_frames_changed"),
		JS_NewCFunction(ctx, animated_sprite3d_class_get_sprite_frames_changed_signal, "get_sprite_frames_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_changed"),
		JS_NewCFunction(ctx, animated_sprite3d_class_get_animation_changed_signal, "get_animation_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "frame_changed"),
		JS_NewCFunction(ctx, animated_sprite3d_class_get_frame_changed_signal, "get_frame_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_looped"),
		JS_NewCFunction(ctx, animated_sprite3d_class_get_animation_looped_signal, "get_animation_looped_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_finished"),
		JS_NewCFunction(ctx, animated_sprite3d_class_get_animation_finished_signal, "get_animation_finished_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_animated_sprite3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_animated_sprite3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AnimatedSprite3D"] = AnimatedSprite3D::__class_id;
	class_id_list.insert(AnimatedSprite3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimatedSprite3D::__class_id, &animated_sprite3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimatedSprite3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SpriteBase3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimatedSprite3D::__class_id, proto);

	define_animated_sprite3d_property(ctx, proto);
	define_animated_sprite3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animated_sprite3d_class_proto_funcs, _countof(animated_sprite3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animated_sprite3d_class_constructor, "AnimatedSprite3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AnimatedSprite3D", ctor);
	constructors[AnimatedSprite3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_animated_sprite3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/sprite_base3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animated_sprite3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimatedSprite3D");
	return m;
}

JSModuleDef *js_init_animated_sprite3d_module(JSContext *ctx) {
	return _js_init_animated_sprite3d_module(ctx, "@godot/classes/animated_sprite3d");
}

void register_animated_sprite3d() {
	AnimatedSprite3D::__init_js_class_id();
	js_init_animated_sprite3d_module(ctx);
}