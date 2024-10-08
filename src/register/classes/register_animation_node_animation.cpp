
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/animation_node_animation.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_animation_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeAnimation *animation_node_animation = static_cast<AnimationNodeAnimation *>(JS_GetOpaque(val, AnimationNodeAnimation::__class_id));
	if (animation_node_animation)
		AnimationNodeAnimation::free(nullptr, animation_node_animation);
}

static JSClassDef animation_node_animation_class_def = {
	"AnimationNodeAnimation",
	.finalizer = animation_node_animation_class_finalizer
};

static JSValue animation_node_animation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeAnimation *animation_node_animation_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeAnimation::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_animation_class = memnew(AnimationNodeAnimation);
	if (!animation_node_animation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_animation_class);
	return obj;
}
static JSValue animation_node_animation_class_set_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeAnimation::set_animation, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_animation_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_animation, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_animation_class_set_play_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeAnimation::set_play_mode, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_animation_class_get_play_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_play_mode, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_animation_class_set_use_custom_timeline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeAnimation::set_use_custom_timeline, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_animation_class_is_using_custom_timeline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeAnimation::is_using_custom_timeline, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_animation_class_set_timeline_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeAnimation::set_timeline_length, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_animation_class_get_timeline_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_timeline_length, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_animation_class_set_stretch_time_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeAnimation::set_stretch_time_scale, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_animation_class_is_stretching_time_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeAnimation::is_stretching_time_scale, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_animation_class_set_start_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeAnimation::set_start_offset, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_animation_class_get_start_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_start_offset, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_animation_class_set_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeAnimation::set_loop_mode, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_animation_class_get_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeAnimation::get_loop_mode, AnimationNodeAnimation::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_node_animation_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_animation", 1, &animation_node_animation_class_set_animation),
	JS_CFUNC_DEF("get_animation", 0, &animation_node_animation_class_get_animation),
	JS_CFUNC_DEF("set_play_mode", 1, &animation_node_animation_class_set_play_mode),
	JS_CFUNC_DEF("get_play_mode", 0, &animation_node_animation_class_get_play_mode),
	JS_CFUNC_DEF("set_use_custom_timeline", 1, &animation_node_animation_class_set_use_custom_timeline),
	JS_CFUNC_DEF("is_using_custom_timeline", 0, &animation_node_animation_class_is_using_custom_timeline),
	JS_CFUNC_DEF("set_timeline_length", 1, &animation_node_animation_class_set_timeline_length),
	JS_CFUNC_DEF("get_timeline_length", 0, &animation_node_animation_class_get_timeline_length),
	JS_CFUNC_DEF("set_stretch_time_scale", 1, &animation_node_animation_class_set_stretch_time_scale),
	JS_CFUNC_DEF("is_stretching_time_scale", 0, &animation_node_animation_class_is_stretching_time_scale),
	JS_CFUNC_DEF("set_start_offset", 1, &animation_node_animation_class_set_start_offset),
	JS_CFUNC_DEF("get_start_offset", 0, &animation_node_animation_class_get_start_offset),
	JS_CFUNC_DEF("set_loop_mode", 1, &animation_node_animation_class_set_loop_mode),
	JS_CFUNC_DEF("get_loop_mode", 0, &animation_node_animation_class_get_loop_mode),
};

static int js_animation_node_animation_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeAnimation::__class_id);
	classes["AnimationNodeAnimation"] = AnimationNodeAnimation::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeAnimation::__class_id, &animation_node_animation_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationRootNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeAnimation::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_animation_class_proto_funcs, _countof(animation_node_animation_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_animation_class_constructor, "AnimationNodeAnimation", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeAnimation", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_animation_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_animation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeAnimation");
	return m;
}

JSModuleDef *js_init_animation_node_animation_module(JSContext *ctx) {
	return _js_init_animation_node_animation_module(ctx, "godot/classes/animation_node_animation");
}

void register_animation_node_animation() {
	js_init_animation_node_animation_module(ctx);
}