
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation_node_state_machine.hpp>
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_node_state_machine_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeStateMachine *animation_node_state_machine = static_cast<AnimationNodeStateMachine *>(JS_GetOpaque(val, AnimationNodeStateMachine::__class_id));
	if (animation_node_state_machine)
		AnimationNodeStateMachine::free(nullptr, animation_node_state_machine);
}

static JSClassDef animation_node_state_machine_class_def = {
	"AnimationNodeStateMachine",
	.finalizer = animation_node_state_machine_class_finalizer
};

static JSValue animation_node_state_machine_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeStateMachine *animation_node_state_machine_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeStateMachine::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_state_machine_class = memnew(AnimationNodeStateMachine);
	if (!animation_node_state_machine_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_state_machine_class);
	return obj;
}
static JSValue animation_node_state_machine_class_add_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::add_node, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_replace_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::replace_node, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_node, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_remove_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::remove_node, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_rename_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::rename_node, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_has_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::has_node, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_get_node_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_node_name, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_set_node_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_node_position, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_node_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_node_position, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_has_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::has_transition, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_add_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::add_transition, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_transition, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_get_transition_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_transition_from, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_get_transition_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_transition_to, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_get_transition_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_transition_count, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_remove_transition_by_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::remove_transition_by_index, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_remove_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::remove_transition, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_set_graph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_graph_offset, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_graph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_graph_offset, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_set_state_machine_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_state_machine_type, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_state_machine_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_state_machine_type, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_set_allow_transition_to_self(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_allow_transition_to_self, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_is_allow_transition_to_self(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::is_allow_transition_to_self, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_state_machine_class_set_reset_ends(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_reset_ends, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_are_ends_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::are_ends_reset, AnimationNodeStateMachine::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_node_state_machine_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_node", 3, &animation_node_state_machine_class_add_node),
	JS_CFUNC_DEF("replace_node", 2, &animation_node_state_machine_class_replace_node),
	JS_CFUNC_DEF("get_node", 1, &animation_node_state_machine_class_get_node),
	JS_CFUNC_DEF("remove_node", 1, &animation_node_state_machine_class_remove_node),
	JS_CFUNC_DEF("rename_node", 2, &animation_node_state_machine_class_rename_node),
	JS_CFUNC_DEF("has_node", 1, &animation_node_state_machine_class_has_node),
	JS_CFUNC_DEF("get_node_name", 1, &animation_node_state_machine_class_get_node_name),
	JS_CFUNC_DEF("set_node_position", 2, &animation_node_state_machine_class_set_node_position),
	JS_CFUNC_DEF("get_node_position", 1, &animation_node_state_machine_class_get_node_position),
	JS_CFUNC_DEF("has_transition", 2, &animation_node_state_machine_class_has_transition),
	JS_CFUNC_DEF("add_transition", 3, &animation_node_state_machine_class_add_transition),
	JS_CFUNC_DEF("get_transition", 1, &animation_node_state_machine_class_get_transition),
	JS_CFUNC_DEF("get_transition_from", 1, &animation_node_state_machine_class_get_transition_from),
	JS_CFUNC_DEF("get_transition_to", 1, &animation_node_state_machine_class_get_transition_to),
	JS_CFUNC_DEF("get_transition_count", 0, &animation_node_state_machine_class_get_transition_count),
	JS_CFUNC_DEF("remove_transition_by_index", 1, &animation_node_state_machine_class_remove_transition_by_index),
	JS_CFUNC_DEF("remove_transition", 2, &animation_node_state_machine_class_remove_transition),
	JS_CFUNC_DEF("set_graph_offset", 1, &animation_node_state_machine_class_set_graph_offset),
	JS_CFUNC_DEF("get_graph_offset", 0, &animation_node_state_machine_class_get_graph_offset),
	JS_CFUNC_DEF("set_state_machine_type", 1, &animation_node_state_machine_class_set_state_machine_type),
	JS_CFUNC_DEF("get_state_machine_type", 0, &animation_node_state_machine_class_get_state_machine_type),
	JS_CFUNC_DEF("set_allow_transition_to_self", 1, &animation_node_state_machine_class_set_allow_transition_to_self),
	JS_CFUNC_DEF("is_allow_transition_to_self", 0, &animation_node_state_machine_class_is_allow_transition_to_self),
	JS_CFUNC_DEF("set_reset_ends", 1, &animation_node_state_machine_class_set_reset_ends),
	JS_CFUNC_DEF("are_ends_reset", 0, &animation_node_state_machine_class_are_ends_reset),
};

static int js_animation_node_state_machine_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeStateMachine::__class_id);
	classes["AnimationNodeStateMachine"] = AnimationNodeStateMachine::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeStateMachine::__class_id, &animation_node_state_machine_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationRootNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeStateMachine::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_state_machine_class_proto_funcs, _countof(animation_node_state_machine_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_state_machine_class_constructor, "AnimationNodeStateMachine", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeStateMachine", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_state_machine_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_state_machine_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeStateMachine");
	return m;
}

JSModuleDef *js_init_animation_node_state_machine_module(JSContext *ctx) {
	return _js_init_animation_node_state_machine_module(ctx, "godot/classes/animation_node_state_machine");
}

void register_animation_node_state_machine() {
	js_init_animation_node_state_machine_module(ctx);
}