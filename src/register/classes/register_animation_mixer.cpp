
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_mixer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_mixer_class_def = {
	"AnimationMixer",
	.finalizer = animation_mixer_class_finalizer
};

static JSValue animation_mixer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationMixer::__class_id);
	if (JS_IsException(obj))
		return obj;

	AnimationMixer *animation_mixer_class;
	if (argc == 1) 
		animation_mixer_class = static_cast<AnimationMixer *>(Variant(*argv).operator Object *());
	else 
		animation_mixer_class = memnew(AnimationMixer);
	if (!animation_mixer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_mixer_class);
	return obj;
}
static JSValue animation_mixer_class_add_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AnimationMixer::add_animation_library, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_remove_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::remove_animation_library, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_rename_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::rename_animation_library, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_has_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::has_animation_library, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_animation_library, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_animation_library_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_animation_library_list, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_has_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::has_animation, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_animation, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_animation_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_animation_list, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::set_active, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::is_active, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_set_deterministic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::set_deterministic, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_is_deterministic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::is_deterministic, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_set_root_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::set_root_node, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_root_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_root_node, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_set_callback_mode_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::set_callback_mode_process, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_callback_mode_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_callback_mode_process, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_set_callback_mode_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::set_callback_mode_method, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_callback_mode_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_callback_mode_method, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_set_callback_mode_discrete(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::set_callback_mode_discrete, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_callback_mode_discrete(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_callback_mode_discrete, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_set_audio_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::set_audio_max_polyphony, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_audio_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_audio_max_polyphony, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_set_root_motion_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::set_root_motion_track, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_root_motion_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_track, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_root_motion_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_position, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_root_motion_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_rotation, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_root_motion_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_scale, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_root_motion_position_accumulator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_position_accumulator, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_root_motion_rotation_accumulator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_rotation_accumulator, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_get_root_motion_scale_accumulator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_scale_accumulator, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_clear_caches(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::clear_caches, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::advance, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_capture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::capture, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_set_reset_on_save_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationMixer::set_reset_on_save_enabled, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_is_reset_on_save_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::is_reset_on_save_enabled, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_find_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::find_animation, ctx, this_val, argc, argv);
};
static JSValue animation_mixer_class_find_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationMixer::find_animation_library, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animation_mixer_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_animation_library", 2, &animation_mixer_class_add_animation_library),
	JS_CFUNC_DEF("remove_animation_library", 1, &animation_mixer_class_remove_animation_library),
	JS_CFUNC_DEF("rename_animation_library", 2, &animation_mixer_class_rename_animation_library),
	JS_CFUNC_DEF("has_animation_library", 1, &animation_mixer_class_has_animation_library),
	JS_CFUNC_DEF("get_animation_library", 1, &animation_mixer_class_get_animation_library),
	JS_CFUNC_DEF("get_animation_library_list", 0, &animation_mixer_class_get_animation_library_list),
	JS_CFUNC_DEF("has_animation", 1, &animation_mixer_class_has_animation),
	JS_CFUNC_DEF("get_animation", 1, &animation_mixer_class_get_animation),
	JS_CFUNC_DEF("get_animation_list", 0, &animation_mixer_class_get_animation_list),
	JS_CFUNC_DEF("set_active", 1, &animation_mixer_class_set_active),
	JS_CFUNC_DEF("is_active", 0, &animation_mixer_class_is_active),
	JS_CFUNC_DEF("set_deterministic", 1, &animation_mixer_class_set_deterministic),
	JS_CFUNC_DEF("is_deterministic", 0, &animation_mixer_class_is_deterministic),
	JS_CFUNC_DEF("set_root_node", 1, &animation_mixer_class_set_root_node),
	JS_CFUNC_DEF("get_root_node", 0, &animation_mixer_class_get_root_node),
	JS_CFUNC_DEF("set_callback_mode_process", 1, &animation_mixer_class_set_callback_mode_process),
	JS_CFUNC_DEF("get_callback_mode_process", 0, &animation_mixer_class_get_callback_mode_process),
	JS_CFUNC_DEF("set_callback_mode_method", 1, &animation_mixer_class_set_callback_mode_method),
	JS_CFUNC_DEF("get_callback_mode_method", 0, &animation_mixer_class_get_callback_mode_method),
	JS_CFUNC_DEF("set_callback_mode_discrete", 1, &animation_mixer_class_set_callback_mode_discrete),
	JS_CFUNC_DEF("get_callback_mode_discrete", 0, &animation_mixer_class_get_callback_mode_discrete),
	JS_CFUNC_DEF("set_audio_max_polyphony", 1, &animation_mixer_class_set_audio_max_polyphony),
	JS_CFUNC_DEF("get_audio_max_polyphony", 0, &animation_mixer_class_get_audio_max_polyphony),
	JS_CFUNC_DEF("set_root_motion_track", 1, &animation_mixer_class_set_root_motion_track),
	JS_CFUNC_DEF("get_root_motion_track", 0, &animation_mixer_class_get_root_motion_track),
	JS_CFUNC_DEF("get_root_motion_position", 0, &animation_mixer_class_get_root_motion_position),
	JS_CFUNC_DEF("get_root_motion_rotation", 0, &animation_mixer_class_get_root_motion_rotation),
	JS_CFUNC_DEF("get_root_motion_scale", 0, &animation_mixer_class_get_root_motion_scale),
	JS_CFUNC_DEF("get_root_motion_position_accumulator", 0, &animation_mixer_class_get_root_motion_position_accumulator),
	JS_CFUNC_DEF("get_root_motion_rotation_accumulator", 0, &animation_mixer_class_get_root_motion_rotation_accumulator),
	JS_CFUNC_DEF("get_root_motion_scale_accumulator", 0, &animation_mixer_class_get_root_motion_scale_accumulator),
	JS_CFUNC_DEF("clear_caches", 0, &animation_mixer_class_clear_caches),
	JS_CFUNC_DEF("advance", 1, &animation_mixer_class_advance),
	JS_CFUNC_DEF("capture", 4, &animation_mixer_class_capture),
	JS_CFUNC_DEF("set_reset_on_save_enabled", 1, &animation_mixer_class_set_reset_on_save_enabled),
	JS_CFUNC_DEF("is_reset_on_save_enabled", 0, &animation_mixer_class_is_reset_on_save_enabled),
	JS_CFUNC_DEF("find_animation", 1, &animation_mixer_class_find_animation),
	JS_CFUNC_DEF("find_animation_library", 1, &animation_mixer_class_find_animation_library),
};
static JSValue animation_mixer_class_get_animation_list_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationMixer *opaque = reinterpret_cast<AnimationMixer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_list_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_list_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_list_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_mixer_class_get_animation_libraries_updated_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationMixer *opaque = reinterpret_cast<AnimationMixer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_libraries_updated_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_libraries_updated").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_libraries_updated_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_mixer_class_get_animation_finished_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationMixer *opaque = reinterpret_cast<AnimationMixer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_finished_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_finished").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_finished_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_mixer_class_get_animation_started_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationMixer *opaque = reinterpret_cast<AnimationMixer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_started_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_started").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_started_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_mixer_class_get_caches_cleared_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationMixer *opaque = reinterpret_cast<AnimationMixer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "caches_cleared_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "caches_cleared").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "caches_cleared_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_mixer_class_get_mixer_applied_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationMixer *opaque = reinterpret_cast<AnimationMixer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "mixer_applied_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "mixer_applied").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "mixer_applied_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_mixer_class_get_mixer_updated_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationMixer *opaque = reinterpret_cast<AnimationMixer *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "mixer_updated_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "mixer_updated").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "mixer_updated_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_animation_mixer_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "active"),
        JS_NewCFunction(ctx, animation_mixer_class_is_active, "is_active", 0),
        JS_NewCFunction(ctx, animation_mixer_class_set_active, "set_active", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "deterministic"),
        JS_NewCFunction(ctx, animation_mixer_class_is_deterministic, "is_deterministic", 0),
        JS_NewCFunction(ctx, animation_mixer_class_set_deterministic, "set_deterministic", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "reset_on_save"),
        JS_NewCFunction(ctx, animation_mixer_class_is_reset_on_save_enabled, "is_reset_on_save_enabled", 0),
        JS_NewCFunction(ctx, animation_mixer_class_set_reset_on_save_enabled, "set_reset_on_save_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "root_node"),
        JS_NewCFunction(ctx, animation_mixer_class_get_root_node, "get_root_node", 0),
        JS_NewCFunction(ctx, animation_mixer_class_set_root_node, "set_root_node", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "root_motion_track"),
        JS_NewCFunction(ctx, animation_mixer_class_get_root_motion_track, "get_root_motion_track", 0),
        JS_NewCFunction(ctx, animation_mixer_class_set_root_motion_track, "set_root_motion_track", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "audio_max_polyphony"),
        JS_NewCFunction(ctx, animation_mixer_class_get_audio_max_polyphony, "get_audio_max_polyphony", 0),
        JS_NewCFunction(ctx, animation_mixer_class_set_audio_max_polyphony, "set_audio_max_polyphony", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "callback_mode_process"),
        JS_NewCFunction(ctx, animation_mixer_class_get_callback_mode_process, "get_callback_mode_process", 0),
        JS_NewCFunction(ctx, animation_mixer_class_set_callback_mode_process, "set_callback_mode_process", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "callback_mode_method"),
        JS_NewCFunction(ctx, animation_mixer_class_get_callback_mode_method, "get_callback_mode_method", 0),
        JS_NewCFunction(ctx, animation_mixer_class_set_callback_mode_method, "set_callback_mode_method", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "callback_mode_discrete"),
        JS_NewCFunction(ctx, animation_mixer_class_get_callback_mode_discrete, "get_callback_mode_discrete", 0),
        JS_NewCFunction(ctx, animation_mixer_class_set_callback_mode_discrete, "set_callback_mode_discrete", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_list_changed"),
		JS_NewCFunction(ctx, animation_mixer_class_get_animation_list_changed_signal, "get_animation_list_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_libraries_updated"),
		JS_NewCFunction(ctx, animation_mixer_class_get_animation_libraries_updated_signal, "get_animation_libraries_updated_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_finished"),
		JS_NewCFunction(ctx, animation_mixer_class_get_animation_finished_signal, "get_animation_finished_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_started"),
		JS_NewCFunction(ctx, animation_mixer_class_get_animation_started_signal, "get_animation_started_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "caches_cleared"),
		JS_NewCFunction(ctx, animation_mixer_class_get_caches_cleared_signal, "get_caches_cleared_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "mixer_applied"),
		JS_NewCFunction(ctx, animation_mixer_class_get_mixer_applied_signal, "get_mixer_applied_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "mixer_updated"),
		JS_NewCFunction(ctx, animation_mixer_class_get_mixer_updated_signal, "get_mixer_updated_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_animation_mixer_enum(JSContext *ctx, JSValue proto) {
	JSValue AnimationCallbackModeProcess_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AnimationCallbackModeProcess_obj, "ANIMATION_CALLBACK_MODE_PROCESS_PHYSICS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AnimationCallbackModeProcess_obj, "ANIMATION_CALLBACK_MODE_PROCESS_IDLE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, AnimationCallbackModeProcess_obj, "ANIMATION_CALLBACK_MODE_PROCESS_MANUAL", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "AnimationCallbackModeProcess", AnimationCallbackModeProcess_obj);
	JSValue AnimationCallbackModeMethod_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AnimationCallbackModeMethod_obj, "ANIMATION_CALLBACK_MODE_METHOD_DEFERRED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AnimationCallbackModeMethod_obj, "ANIMATION_CALLBACK_MODE_METHOD_IMMEDIATE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "AnimationCallbackModeMethod", AnimationCallbackModeMethod_obj);
	JSValue AnimationCallbackModeDiscrete_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AnimationCallbackModeDiscrete_obj, "ANIMATION_CALLBACK_MODE_DISCRETE_DOMINANT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AnimationCallbackModeDiscrete_obj, "ANIMATION_CALLBACK_MODE_DISCRETE_RECESSIVE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, AnimationCallbackModeDiscrete_obj, "ANIMATION_CALLBACK_MODE_DISCRETE_FORCE_CONTINUOUS", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "AnimationCallbackModeDiscrete", AnimationCallbackModeDiscrete_obj);
}

static int js_animation_mixer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AnimationMixer"] = AnimationMixer::__class_id;
	class_id_list.insert(AnimationMixer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationMixer::__class_id, &animation_mixer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationMixer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationMixer::__class_id, proto);

	define_animation_mixer_property(ctx, proto);
	define_animation_mixer_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_mixer_class_proto_funcs, _countof(animation_mixer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animation_mixer_class_constructor, "AnimationMixer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationMixer", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_mixer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_mixer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationMixer");
	return m;
}

JSModuleDef *js_init_animation_mixer_module(JSContext *ctx) {
	return _js_init_animation_mixer_module(ctx, "@godot/classes/animation_mixer");
}

void register_animation_mixer() {
	AnimationMixer::__init_js_class_id();
	js_init_animation_mixer_module(ctx);
}