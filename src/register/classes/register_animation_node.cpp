
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_node_class_def = {
	"AnimationNode",
	.finalizer = animation_node_class_finalizer
};

static JSValue animation_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNode::__class_id);
	if (JS_IsException(obj))
		return obj;

	AnimationNode *animation_node_class;
	if (argc == 1) 
		animation_node_class = static_cast<AnimationNode *>(Variant(*argv).operator Object *());
	else 
		animation_node_class = memnew(AnimationNode);
	if (!animation_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_class);
	return obj;
}
static JSValue animation_node_class_add_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AnimationNode::add_input, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_remove_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNode::remove_input, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_set_input_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AnimationNode::set_input_name, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_get_input_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNode::get_input_name, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_get_input_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNode::get_input_count, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_find_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNode::find_input, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_set_filter_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNode::set_filter_path, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_is_path_filtered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNode::is_path_filtered, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_set_filter_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNode::set_filter_enabled, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_is_filter_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNode::is_filter_enabled, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_blend_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNode::blend_animation, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_blend_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AnimationNode::blend_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_blend_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AnimationNode::blend_input, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_set_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationNode::set_parameter, ctx, this_val, argc, argv);
};
static JSValue animation_node_class_get_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNode::get_parameter, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animation_node_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_input", 1, &animation_node_class_add_input),
	JS_CFUNC_DEF("remove_input", 1, &animation_node_class_remove_input),
	JS_CFUNC_DEF("set_input_name", 2, &animation_node_class_set_input_name),
	JS_CFUNC_DEF("get_input_name", 1, &animation_node_class_get_input_name),
	JS_CFUNC_DEF("get_input_count", 0, &animation_node_class_get_input_count),
	JS_CFUNC_DEF("find_input", 1, &animation_node_class_find_input),
	JS_CFUNC_DEF("set_filter_path", 2, &animation_node_class_set_filter_path),
	JS_CFUNC_DEF("is_path_filtered", 1, &animation_node_class_is_path_filtered),
	JS_CFUNC_DEF("set_filter_enabled", 1, &animation_node_class_set_filter_enabled),
	JS_CFUNC_DEF("is_filter_enabled", 0, &animation_node_class_is_filter_enabled),
	JS_CFUNC_DEF("blend_animation", 7, &animation_node_class_blend_animation),
	JS_CFUNC_DEF("blend_node", 9, &animation_node_class_blend_node),
	JS_CFUNC_DEF("blend_input", 8, &animation_node_class_blend_input),
	JS_CFUNC_DEF("set_parameter", 2, &animation_node_class_set_parameter),
	JS_CFUNC_DEF("get_parameter", 1, &animation_node_class_get_parameter),
};
static JSValue animation_node_class_get_tree_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationNode *opaque = reinterpret_cast<AnimationNode *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "tree_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "tree_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "tree_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_node_class_get_animation_node_renamed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationNode *opaque = reinterpret_cast<AnimationNode *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_node_renamed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_node_renamed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_node_renamed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_node_class_get_animation_node_removed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationNode *opaque = reinterpret_cast<AnimationNode *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_node_removed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_node_removed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_node_removed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_animation_node_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "filter_enabled"),
        JS_NewCFunction(ctx, animation_node_class_is_filter_enabled, "is_filter_enabled", 0),
        JS_NewCFunction(ctx, animation_node_class_set_filter_enabled, "set_filter_enabled", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "tree_changed"),
		JS_NewCFunction(ctx, animation_node_class_get_tree_changed_signal, "get_tree_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_node_renamed"),
		JS_NewCFunction(ctx, animation_node_class_get_animation_node_renamed_signal, "get_animation_node_renamed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_node_removed"),
		JS_NewCFunction(ctx, animation_node_class_get_animation_node_removed_signal, "get_animation_node_removed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_animation_node_enum(JSContext *ctx, JSValue proto) {
	JSValue FilterAction_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, FilterAction_obj, "FILTER_IGNORE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, FilterAction_obj, "FILTER_PASS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, FilterAction_obj, "FILTER_STOP", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, FilterAction_obj, "FILTER_BLEND", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "FilterAction", FilterAction_obj);
}

static int js_animation_node_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AnimationNode"] = AnimationNode::__class_id;
	class_id_list.insert(AnimationNode::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNode::__class_id, &animation_node_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNode::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNode::__class_id, proto);

	define_animation_node_property(ctx, proto);
	define_animation_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_class_proto_funcs, _countof(animation_node_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_class_constructor, "AnimationNode", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNode", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNode");
	return m;
}

JSModuleDef *js_init_animation_node_module(JSContext *ctx) {
	return _js_init_animation_node_module(ctx, "@godot/classes/animation_node");
}

void register_animation_node() {
	AnimationNode::__init_js_class_id();
	js_init_animation_node_module(ctx);
}