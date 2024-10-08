
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation_node_transition.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_node_transition_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeTransition *animation_node_transition = static_cast<AnimationNodeTransition *>(JS_GetOpaque(val, AnimationNodeTransition::__class_id));
	if (animation_node_transition)
		AnimationNodeTransition::free(nullptr, animation_node_transition);
}

static JSClassDef animation_node_transition_class_def = {
	"AnimationNodeTransition",
	.finalizer = animation_node_transition_class_finalizer
};

static JSValue animation_node_transition_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeTransition *animation_node_transition_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeTransition::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_transition_class = memnew(AnimationNodeTransition);
	if (!animation_node_transition_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_transition_class);
	return obj;
}
static JSValue animation_node_transition_class_set_input_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeTransition::set_input_count, AnimationNodeTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_transition_class_set_input_as_auto_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeTransition::set_input_as_auto_advance, AnimationNodeTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_transition_class_is_input_set_as_auto_advance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeTransition::is_input_set_as_auto_advance, AnimationNodeTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_transition_class_set_input_break_loop_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeTransition::set_input_break_loop_at_end, AnimationNodeTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_transition_class_is_input_loop_broken_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeTransition::is_input_loop_broken_at_end, AnimationNodeTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_transition_class_set_input_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeTransition::set_input_reset, AnimationNodeTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_transition_class_is_input_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeTransition::is_input_reset, AnimationNodeTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_transition_class_set_xfade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeTransition::set_xfade_time, AnimationNodeTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_transition_class_get_xfade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeTransition::get_xfade_time, AnimationNodeTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_transition_class_set_xfade_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeTransition::set_xfade_curve, AnimationNodeTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_transition_class_get_xfade_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeTransition::get_xfade_curve, AnimationNodeTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_transition_class_set_allow_transition_to_self(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeTransition::set_allow_transition_to_self, AnimationNodeTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_transition_class_is_allow_transition_to_self(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeTransition::is_allow_transition_to_self, AnimationNodeTransition::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_node_transition_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_input_count", 1, &animation_node_transition_class_set_input_count),
	JS_CFUNC_DEF("set_input_as_auto_advance", 2, &animation_node_transition_class_set_input_as_auto_advance),
	JS_CFUNC_DEF("is_input_set_as_auto_advance", 1, &animation_node_transition_class_is_input_set_as_auto_advance),
	JS_CFUNC_DEF("set_input_break_loop_at_end", 2, &animation_node_transition_class_set_input_break_loop_at_end),
	JS_CFUNC_DEF("is_input_loop_broken_at_end", 1, &animation_node_transition_class_is_input_loop_broken_at_end),
	JS_CFUNC_DEF("set_input_reset", 2, &animation_node_transition_class_set_input_reset),
	JS_CFUNC_DEF("is_input_reset", 1, &animation_node_transition_class_is_input_reset),
	JS_CFUNC_DEF("set_xfade_time", 1, &animation_node_transition_class_set_xfade_time),
	JS_CFUNC_DEF("get_xfade_time", 0, &animation_node_transition_class_get_xfade_time),
	JS_CFUNC_DEF("set_xfade_curve", 1, &animation_node_transition_class_set_xfade_curve),
	JS_CFUNC_DEF("get_xfade_curve", 0, &animation_node_transition_class_get_xfade_curve),
	JS_CFUNC_DEF("set_allow_transition_to_self", 1, &animation_node_transition_class_set_allow_transition_to_self),
	JS_CFUNC_DEF("is_allow_transition_to_self", 0, &animation_node_transition_class_is_allow_transition_to_self),
};

static int js_animation_node_transition_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeTransition::__class_id);
	classes["AnimationNodeTransition"] = AnimationNodeTransition::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeTransition::__class_id, &animation_node_transition_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNodeSync::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeTransition::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_transition_class_proto_funcs, _countof(animation_node_transition_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_transition_class_constructor, "AnimationNodeTransition", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeTransition", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_transition_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_transition_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeTransition");
	return m;
}

JSModuleDef *js_init_animation_node_transition_module(JSContext *ctx) {
	return _js_init_animation_node_transition_module(ctx, "godot/classes/animation_node_transition");
}

void register_animation_node_transition() {
	js_init_animation_node_transition_module(ctx);
}