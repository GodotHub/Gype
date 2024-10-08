
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_node_state_machine_transition_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeStateMachineTransition *animation_node_state_machine_transition = static_cast<AnimationNodeStateMachineTransition *>(JS_GetOpaque(val, AnimationNodeStateMachineTransition::__class_id));
	if (animation_node_state_machine_transition)
		AnimationNodeStateMachineTransition::free(nullptr, animation_node_state_machine_transition);
}

static JSClassDef animation_node_state_machine_transition_class_def = {
	"AnimationNodeStateMachineTransition",
	.finalizer = animation_node_state_machine_transition_class_finalizer
};

static JSValue animation_node_state_machine_transition_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeStateMachineTransition *animation_node_state_machine_transition_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeStateMachineTransition::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_state_machine_transition_class = memnew(AnimationNodeStateMachineTransition);
	if (!animation_node_state_machine_transition_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_state_machine_transition_class);
	return obj;
}
static JSValue animation_node_state_machine_transition_class_set_switch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_switch_mode, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_transition_class_get_switch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_switch_mode, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_transition_class_set_advance_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_advance_mode, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_transition_class_get_advance_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_advance_mode, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_transition_class_set_advance_condition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_advance_condition, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_transition_class_get_advance_condition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_advance_condition, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_transition_class_set_xfade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_xfade_time, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_transition_class_get_xfade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_xfade_time, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_transition_class_set_xfade_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_xfade_curve, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_transition_class_get_xfade_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_xfade_curve, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_transition_class_set_break_loop_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_break_loop_at_end, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_transition_class_is_loop_broken_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::is_loop_broken_at_end, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_transition_class_set_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_reset, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_transition_class_is_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::is_reset, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_transition_class_set_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_priority, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_transition_class_get_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_priority, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_transition_class_set_advance_expression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_advance_expression, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_transition_class_get_advance_expression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_advance_expression, AnimationNodeStateMachineTransition::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_node_state_machine_transition_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_switch_mode", 1, &animation_node_state_machine_transition_class_set_switch_mode),
	JS_CFUNC_DEF("get_switch_mode", 0, &animation_node_state_machine_transition_class_get_switch_mode),
	JS_CFUNC_DEF("set_advance_mode", 1, &animation_node_state_machine_transition_class_set_advance_mode),
	JS_CFUNC_DEF("get_advance_mode", 0, &animation_node_state_machine_transition_class_get_advance_mode),
	JS_CFUNC_DEF("set_advance_condition", 1, &animation_node_state_machine_transition_class_set_advance_condition),
	JS_CFUNC_DEF("get_advance_condition", 0, &animation_node_state_machine_transition_class_get_advance_condition),
	JS_CFUNC_DEF("set_xfade_time", 1, &animation_node_state_machine_transition_class_set_xfade_time),
	JS_CFUNC_DEF("get_xfade_time", 0, &animation_node_state_machine_transition_class_get_xfade_time),
	JS_CFUNC_DEF("set_xfade_curve", 1, &animation_node_state_machine_transition_class_set_xfade_curve),
	JS_CFUNC_DEF("get_xfade_curve", 0, &animation_node_state_machine_transition_class_get_xfade_curve),
	JS_CFUNC_DEF("set_break_loop_at_end", 1, &animation_node_state_machine_transition_class_set_break_loop_at_end),
	JS_CFUNC_DEF("is_loop_broken_at_end", 0, &animation_node_state_machine_transition_class_is_loop_broken_at_end),
	JS_CFUNC_DEF("set_reset", 1, &animation_node_state_machine_transition_class_set_reset),
	JS_CFUNC_DEF("is_reset", 0, &animation_node_state_machine_transition_class_is_reset),
	JS_CFUNC_DEF("set_priority", 1, &animation_node_state_machine_transition_class_set_priority),
	JS_CFUNC_DEF("get_priority", 0, &animation_node_state_machine_transition_class_get_priority),
	JS_CFUNC_DEF("set_advance_expression", 1, &animation_node_state_machine_transition_class_set_advance_expression),
	JS_CFUNC_DEF("get_advance_expression", 0, &animation_node_state_machine_transition_class_get_advance_expression),
};

static int js_animation_node_state_machine_transition_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeStateMachineTransition::__class_id);
	classes["AnimationNodeStateMachineTransition"] = AnimationNodeStateMachineTransition::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeStateMachineTransition::__class_id, &animation_node_state_machine_transition_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeStateMachineTransition::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_state_machine_transition_class_proto_funcs, _countof(animation_node_state_machine_transition_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_state_machine_transition_class_constructor, "AnimationNodeStateMachineTransition", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeStateMachineTransition", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_state_machine_transition_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_state_machine_transition_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeStateMachineTransition");
	return m;
}

JSModuleDef *js_init_animation_node_state_machine_transition_module(JSContext *ctx) {
	return _js_init_animation_node_state_machine_transition_module(ctx, "godot/classes/animation_node_state_machine_transition");
}

void register_animation_node_state_machine_transition() {
	js_init_animation_node_state_machine_transition_module(ctx);
}