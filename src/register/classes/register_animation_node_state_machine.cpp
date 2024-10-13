
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_state_machine.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue animation_node_state_machine_class_add_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::add_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_replace_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::replace_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_remove_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::remove_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_rename_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::rename_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_has_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::has_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_get_node_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_node_name, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_set_node_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_node_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_node_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_node_position, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_has_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::has_transition, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_add_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::add_transition, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_transition, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_get_transition_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_transition_from, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_get_transition_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_transition_to, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_get_transition_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_transition_count, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_remove_transition_by_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::remove_transition_by_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_remove_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::remove_transition, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_set_graph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_graph_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_graph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_graph_offset, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_set_state_machine_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_state_machine_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_get_state_machine_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::get_state_machine_type, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_set_allow_transition_to_self(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_allow_transition_to_self, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_is_allow_transition_to_self(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::is_allow_transition_to_self, ctx, this_val, argc, argv);
};
static JSValue animation_node_state_machine_class_set_reset_ends(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeStateMachine::set_reset_ends, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_state_machine_class_are_ends_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeStateMachine::are_ends_reset, ctx, this_val, argc, argv);
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

void define_animation_node_state_machine_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "state_machine_type"),
        JS_NewCFunction(ctx, animation_node_state_machine_class_get_state_machine_type, "get_state_machine_type", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_class_set_state_machine_type, "set_state_machine_type", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "allow_transition_to_self"),
        JS_NewCFunction(ctx, animation_node_state_machine_class_is_allow_transition_to_self, "is_allow_transition_to_self", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_class_set_allow_transition_to_self, "set_allow_transition_to_self", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "reset_ends"),
        JS_NewCFunction(ctx, animation_node_state_machine_class_are_ends_reset, "are_ends_reset", 0),
        JS_NewCFunction(ctx, animation_node_state_machine_class_set_reset_ends, "set_reset_ends", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_animation_node_state_machine_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationNodeStateMachine::__class_id);
	classes["AnimationNodeStateMachine"] = AnimationNodeStateMachine::__class_id;
	class_id_list.insert(AnimationNodeStateMachine::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeStateMachine::__class_id, &animation_node_state_machine_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationRootNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeStateMachine::__class_id, proto);
	define_animation_node_state_machine_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_state_machine_class_proto_funcs, _countof(animation_node_state_machine_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_state_machine_class_constructor, "AnimationNodeStateMachine", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeStateMachine", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_state_machine_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/animation_root_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AnimationNodeStateMachine::__init_js_class_id();
	js_init_animation_node_state_machine_module(ctx);
}