
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/animation_mixer.hpp>
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_mixer_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationMixer *animation_mixer = static_cast<AnimationMixer *>(JS_GetOpaque(val, AnimationMixer::__class_id));
	if (animation_mixer)
		AnimationMixer::free(nullptr, animation_mixer);
}

static JSClassDef animation_mixer_class_def = {
	"AnimationMixer",
	.finalizer = animation_mixer_class_finalizer
};

static JSValue animation_mixer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationMixer *animation_mixer_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationMixer::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_mixer_class = memnew(AnimationMixer);
	if (!animation_mixer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_mixer_class);
	return obj;
}
static JSValue animation_mixer_class_add_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AnimationMixer::add_animation_library, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_remove_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::remove_animation_library, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_rename_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::rename_animation_library, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_has_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::has_animation_library, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_animation_library, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_animation_library_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_animation_library_list, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_has_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::has_animation, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_animation, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_animation_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_animation_list, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::set_active, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::is_active, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_set_deterministic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::set_deterministic, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_is_deterministic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::is_deterministic, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_set_root_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::set_root_node, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_get_root_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_root_node, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_set_callback_mode_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::set_callback_mode_process, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_get_callback_mode_process(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_callback_mode_process, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_set_callback_mode_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::set_callback_mode_method, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_get_callback_mode_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_callback_mode_method, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_set_callback_mode_discrete(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::set_callback_mode_discrete, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_get_callback_mode_discrete(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_callback_mode_discrete, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_set_audio_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::set_audio_max_polyphony, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_get_audio_max_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_audio_max_polyphony, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_set_root_motion_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::set_root_motion_track, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_get_root_motion_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_track, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_root_motion_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_position, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_root_motion_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_rotation, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_root_motion_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_scale, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_root_motion_position_accumulator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_position_accumulator, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_root_motion_rotation_accumulator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_rotation_accumulator, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_get_root_motion_scale_accumulator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::get_root_motion_scale_accumulator, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_clear_caches(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::clear_caches, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::advance, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_capture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::capture, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_set_reset_on_save_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationMixer::set_reset_on_save_enabled, AnimationMixer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_mixer_class_is_reset_on_save_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::is_reset_on_save_enabled, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_find_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::find_animation, AnimationMixer::__class_id, ctx, this_val, argv);
};
static JSValue animation_mixer_class_find_animation_library(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationMixer::find_animation_library, AnimationMixer::__class_id, ctx, this_val, argv);
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

static int js_animation_mixer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationMixer::__class_id);
	classes["AnimationMixer"] = AnimationMixer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationMixer::__class_id, &animation_mixer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationMixer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_mixer_class_proto_funcs, _countof(animation_mixer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_mixer_class_constructor, "AnimationMixer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationMixer", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_mixer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_mixer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationMixer");
	return m;
}

JSModuleDef *js_init_animation_mixer_module(JSContext *ctx) {
	return _js_init_animation_mixer_module(ctx, "godot/classes/animation_mixer");
}

void register_animation_mixer() {
	js_init_animation_mixer_module(ctx);
}