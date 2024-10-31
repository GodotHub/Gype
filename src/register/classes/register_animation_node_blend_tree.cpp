
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/animation_node_blend_tree.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_blend_tree_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_node_blend_tree_class_def = {
	"AnimationNodeBlendTree",
	.finalizer = animation_node_blend_tree_class_finalizer
};

static JSValue animation_node_blend_tree_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNodeBlendTree::__class_id);
	if (JS_IsException(obj))
		return obj;

	AnimationNodeBlendTree *animation_node_blend_tree_class;
	if (argc == 1) 
		animation_node_blend_tree_class = static_cast<AnimationNodeBlendTree *>(Variant(*argv).operator Object *());
	else 
		animation_node_blend_tree_class = memnew(AnimationNodeBlendTree);
	if (!animation_node_blend_tree_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_blend_tree_class);
	return obj;
}
static JSValue animation_node_blend_tree_class_add_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeBlendTree::add_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_get_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendTree::get_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_remove_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeBlendTree::remove_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_rename_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeBlendTree::rename_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_has_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendTree::has_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_connect_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeBlendTree::connect_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_disconnect_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeBlendTree::disconnect_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_set_node_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeBlendTree::set_node_position, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_get_node_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendTree::get_node_position, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_set_graph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNodeBlendTree::set_graph_offset, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_tree_class_get_graph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendTree::get_graph_offset, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animation_node_blend_tree_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_node", 3, &animation_node_blend_tree_class_add_node),
	JS_CFUNC_DEF("get_node", 1, &animation_node_blend_tree_class_get_node),
	JS_CFUNC_DEF("remove_node", 1, &animation_node_blend_tree_class_remove_node),
	JS_CFUNC_DEF("rename_node", 2, &animation_node_blend_tree_class_rename_node),
	JS_CFUNC_DEF("has_node", 1, &animation_node_blend_tree_class_has_node),
	JS_CFUNC_DEF("connect_node", 3, &animation_node_blend_tree_class_connect_node),
	JS_CFUNC_DEF("disconnect_node", 2, &animation_node_blend_tree_class_disconnect_node),
	JS_CFUNC_DEF("set_node_position", 2, &animation_node_blend_tree_class_set_node_position),
	JS_CFUNC_DEF("get_node_position", 1, &animation_node_blend_tree_class_get_node_position),
	JS_CFUNC_DEF("set_graph_offset", 1, &animation_node_blend_tree_class_set_graph_offset),
	JS_CFUNC_DEF("get_graph_offset", 0, &animation_node_blend_tree_class_get_graph_offset),
};
static JSValue animation_node_blend_tree_class_get_node_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationNodeBlendTree *opaque = reinterpret_cast<AnimationNodeBlendTree *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "node_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "node_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "node_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_animation_node_blend_tree_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "graph_offset"),
        JS_NewCFunction(ctx, animation_node_blend_tree_class_get_graph_offset, "get_graph_offset", 0),
        JS_NewCFunction(ctx, animation_node_blend_tree_class_set_graph_offset, "set_graph_offset", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "node_changed"),
		JS_NewCFunction(ctx, animation_node_blend_tree_class_get_node_changed_signal, "get_node_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_animation_node_blend_tree_enum(JSContext *ctx, JSValue proto) {
}

static int js_animation_node_blend_tree_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AnimationNodeBlendTree"] = AnimationNodeBlendTree::__class_id;
	class_id_list.insert(AnimationNodeBlendTree::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeBlendTree::__class_id, &animation_node_blend_tree_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNodeBlendTree::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AnimationRootNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeBlendTree::__class_id, proto);

	define_animation_node_blend_tree_property(ctx, proto);
	define_animation_node_blend_tree_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_blend_tree_class_proto_funcs, _countof(animation_node_blend_tree_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_blend_tree_class_constructor, "AnimationNodeBlendTree", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeBlendTree", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_blend_tree_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/animation_root_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_blend_tree_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeBlendTree");
	return m;
}

JSModuleDef *js_init_animation_node_blend_tree_module(JSContext *ctx) {
	return _js_init_animation_node_blend_tree_module(ctx, "@godot/classes/animation_node_blend_tree");
}

void register_animation_node_blend_tree() {
	AnimationNodeBlendTree::__init_js_class_id();
	js_init_animation_node_blend_tree_module(ctx);
}