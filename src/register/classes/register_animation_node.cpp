
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_node_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNode *animation_node = static_cast<AnimationNode *>(JS_GetOpaque(val, AnimationNode::__class_id));
	if (animation_node)
		AnimationNode::free(nullptr, animation_node);
}

static JSClassDef animation_node_class_def = {
	"AnimationNode",
	.finalizer = animation_node_class_finalizer
};

static JSValue animation_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNode *animation_node_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_class = memnew(AnimationNode);
	if (!animation_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_class);
	return obj;
}
static JSValue animation_node_class_add_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AnimationNode::add_input, AnimationNode::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_class_remove_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNode::remove_input, AnimationNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_class_set_input_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AnimationNode::set_input_name, AnimationNode::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_class_get_input_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNode::get_input_name, AnimationNode::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_class_get_input_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNode::get_input_count, AnimationNode::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_class_find_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNode::find_input, AnimationNode::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_class_set_filter_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNode::set_filter_path, AnimationNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_class_is_path_filtered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNode::is_path_filtered, AnimationNode::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_class_set_filter_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNode::set_filter_enabled, AnimationNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_class_is_filter_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNode::is_filter_enabled, AnimationNode::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_class_blend_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNode::blend_animation, AnimationNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_class_blend_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AnimationNode::blend_node, AnimationNode::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_class_blend_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AnimationNode::blend_input, AnimationNode::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_class_set_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNode::set_parameter, AnimationNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_class_get_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNode::get_parameter, AnimationNode::__class_id, ctx, this_val, argv);
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

static int js_animation_node_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNode::__class_id);
	classes["AnimationNode"] = AnimationNode::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNode::__class_id, &animation_node_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNode::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_class_proto_funcs, _countof(animation_node_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_class_constructor, "AnimationNode", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNode", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNode");
	return m;
}

JSModuleDef *js_init_animation_node_module(JSContext *ctx) {
	return _js_init_animation_node_module(ctx, "godot/classes/animation_node");
}

void register_animation_node() {
	js_init_animation_node_module(ctx);
}