
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_state_machine_transition_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_node_state_machine_transition_class_def = {
	"AnimationNodeStateMachineTransition",
	.finalizer = animation_node_state_machine_transition_class_finalizer
};

static JSValue animation_node_state_machine_transition_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNodeStateMachineTransition::__class_id);
	if (JS_IsException(obj))
		return obj;

	AnimationNodeStateMachineTransition *animation_node_state_machine_transition_class;
	if (argc == 1) 
		animation_node_state_machine_transition_class = static_cast<AnimationNodeStateMachineTransition *>(Variant(*argv).operator Object *());
	else 
		animation_node_state_machine_transition_class = memnew(AnimationNodeStateMachineTransition);
	if (!animation_node_state_machine_transition_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_state_machine_transition_class);
	return obj;
}
static JSValue animation_node_state_machine_transition_class_set_switch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_switch_mode, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_get_switch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_switch_mode, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_set_advance_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_advance_mode, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_get_advance_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_advance_mode, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_set_advance_condition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_advance_condition, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_get_advance_condition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_advance_condition, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_set_xfade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_xfade_time, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_get_xfade_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_xfade_time, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_set_xfade_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_xfade_curve, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_get_xfade_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_xfade_curve, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_set_break_loop_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_break_loop_at_end, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_is_loop_broken_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::is_loop_broken_at_end, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_set_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_reset, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_is_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::is_reset, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_set_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_priority, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_get_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_priority, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_set_advance_expression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeStateMachineTransition::set_advance_expression, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_transition_class_get_advance_expression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeStateMachineTransition::get_advance_expression, ctx, this_val, argc, argv);
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
static JSValue animation_node_state_machine_transition_class_get_advance_condition_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationNodeStateMachineTransition *opaque = reinterpret_cast<AnimationNodeStateMachineTransition *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "advance_condition_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "advance_condition_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "advance_condition_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_animation_node_state_machine_transition_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "xfade_time"),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_get_xfade_time, "get_xfade_time", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_set_xfade_time, "set_xfade_time", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "xfade_curve"),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_get_xfade_curve, "get_xfade_curve", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_set_xfade_curve, "set_xfade_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "break_loop_at_end"),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_is_loop_broken_at_end, "is_loop_broken_at_end", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_set_break_loop_at_end, "set_break_loop_at_end", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "reset"),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_is_reset, "is_reset", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_set_reset, "set_reset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "priority"),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_get_priority, "get_priority", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_set_priority, "set_priority", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "switch_mode"),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_get_switch_mode, "get_switch_mode", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_set_switch_mode, "set_switch_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "advance_mode"),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_get_advance_mode, "get_advance_mode", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_set_advance_mode, "set_advance_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "advance_condition"),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_get_advance_condition, "get_advance_condition", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_set_advance_condition, "set_advance_condition", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "advance_expression"),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_get_advance_expression, "get_advance_expression", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_transition_class_set_advance_expression, "set_advance_expression", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "advance_condition_changed"),
		JS_NewCFunction(ctx, animation_node_state_machine_transition_class_get_advance_condition_changed_signal, "get_advance_condition_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_animation_node_state_machine_transition_enum(JSContext *ctx, JSValue proto) {
	JSValue SwitchMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, SwitchMode_obj, "SWITCH_MODE_IMMEDIATE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, SwitchMode_obj, "SWITCH_MODE_SYNC", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, SwitchMode_obj, "SWITCH_MODE_AT_END", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "SwitchMode", SwitchMode_obj);
	JSValue AdvanceMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AdvanceMode_obj, "ADVANCE_MODE_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AdvanceMode_obj, "ADVANCE_MODE_ENABLED", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, AdvanceMode_obj, "ADVANCE_MODE_AUTO", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "AdvanceMode", AdvanceMode_obj);
}

static int js_animation_node_state_machine_transition_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AnimationNodeStateMachineTransition"] = AnimationNodeStateMachineTransition::__class_id;
	class_id_list.insert(AnimationNodeStateMachineTransition::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeStateMachineTransition::__class_id, &animation_node_state_machine_transition_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNodeStateMachineTransition::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeStateMachineTransition::__class_id, proto);

	define_animation_node_state_machine_transition_property(ctx, proto);
	define_animation_node_state_machine_transition_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_state_machine_transition_class_proto_funcs, _countof(animation_node_state_machine_transition_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_state_machine_transition_class_constructor, "AnimationNodeStateMachineTransition", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeStateMachineTransition", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_state_machine_transition_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_state_machine_transition_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeStateMachineTransition");
	return m;
}

JSModuleDef *js_init_animation_node_state_machine_transition_module(JSContext *ctx) {
	return _js_init_animation_node_state_machine_transition_module(ctx, "@godot/classes/animation_node_state_machine_transition");
}

void register_animation_node_state_machine_transition() {
	AnimationNodeStateMachineTransition::__init_js_class_id();
	js_init_animation_node_state_machine_transition_module(ctx);
}