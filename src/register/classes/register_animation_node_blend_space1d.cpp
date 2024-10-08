
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/animation_node_blend_space1d.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_blend_space1d_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeBlendSpace1D *animation_node_blend_space1d = static_cast<AnimationNodeBlendSpace1D *>(JS_GetOpaque(val, AnimationNodeBlendSpace1D::__class_id));
	if (animation_node_blend_space1d)
		AnimationNodeBlendSpace1D::free(nullptr, animation_node_blend_space1d);
}

static JSClassDef animation_node_blend_space1d_class_def = {
	"AnimationNodeBlendSpace1D",
	.finalizer = animation_node_blend_space1d_class_finalizer
};

static JSValue animation_node_blend_space1d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeBlendSpace1D *animation_node_blend_space1d_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeBlendSpace1D::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_blend_space1d_class = memnew(AnimationNodeBlendSpace1D);
	if (!animation_node_blend_space1d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_blend_space1d_class);
	return obj;
}
static JSValue animation_node_blend_space1d_class_add_blend_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::add_blend_point, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_set_blend_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::set_blend_point_position, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_get_blend_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace1D::get_blend_point_position, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_blend_space1d_class_set_blend_point_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::set_blend_point_node, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_get_blend_point_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace1D::get_blend_point_node, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_blend_space1d_class_remove_blend_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::remove_blend_point, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_get_blend_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace1D::get_blend_point_count, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_blend_space1d_class_set_min_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::set_min_space, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_get_min_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace1D::get_min_space, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_blend_space1d_class_set_max_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::set_max_space, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_get_max_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace1D::get_max_space, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_blend_space1d_class_set_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::set_snap, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_get_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace1D::get_snap, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_blend_space1d_class_set_value_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::set_value_label, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_get_value_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace1D::get_value_label, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_blend_space1d_class_set_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::set_blend_mode, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_get_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace1D::get_blend_mode, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
};
static JSValue animation_node_blend_space1d_class_set_use_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AnimationNodeBlendSpace1D::set_use_sync, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space1d_class_is_using_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace1D::is_using_sync, AnimationNodeBlendSpace1D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_node_blend_space1d_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_blend_point", 3, &animation_node_blend_space1d_class_add_blend_point),
	JS_CFUNC_DEF("set_blend_point_position", 2, &animation_node_blend_space1d_class_set_blend_point_position),
	JS_CFUNC_DEF("get_blend_point_position", 1, &animation_node_blend_space1d_class_get_blend_point_position),
	JS_CFUNC_DEF("set_blend_point_node", 2, &animation_node_blend_space1d_class_set_blend_point_node),
	JS_CFUNC_DEF("get_blend_point_node", 1, &animation_node_blend_space1d_class_get_blend_point_node),
	JS_CFUNC_DEF("remove_blend_point", 1, &animation_node_blend_space1d_class_remove_blend_point),
	JS_CFUNC_DEF("get_blend_point_count", 0, &animation_node_blend_space1d_class_get_blend_point_count),
	JS_CFUNC_DEF("set_min_space", 1, &animation_node_blend_space1d_class_set_min_space),
	JS_CFUNC_DEF("get_min_space", 0, &animation_node_blend_space1d_class_get_min_space),
	JS_CFUNC_DEF("set_max_space", 1, &animation_node_blend_space1d_class_set_max_space),
	JS_CFUNC_DEF("get_max_space", 0, &animation_node_blend_space1d_class_get_max_space),
	JS_CFUNC_DEF("set_snap", 1, &animation_node_blend_space1d_class_set_snap),
	JS_CFUNC_DEF("get_snap", 0, &animation_node_blend_space1d_class_get_snap),
	JS_CFUNC_DEF("set_value_label", 1, &animation_node_blend_space1d_class_set_value_label),
	JS_CFUNC_DEF("get_value_label", 0, &animation_node_blend_space1d_class_get_value_label),
	JS_CFUNC_DEF("set_blend_mode", 1, &animation_node_blend_space1d_class_set_blend_mode),
	JS_CFUNC_DEF("get_blend_mode", 0, &animation_node_blend_space1d_class_get_blend_mode),
	JS_CFUNC_DEF("set_use_sync", 1, &animation_node_blend_space1d_class_set_use_sync),
	JS_CFUNC_DEF("is_using_sync", 0, &animation_node_blend_space1d_class_is_using_sync),
};

static int js_animation_node_blend_space1d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeBlendSpace1D::__class_id);
	classes["AnimationNodeBlendSpace1D"] = AnimationNodeBlendSpace1D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeBlendSpace1D::__class_id, &animation_node_blend_space1d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationRootNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeBlendSpace1D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_blend_space1d_class_proto_funcs, _countof(animation_node_blend_space1d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_blend_space1d_class_constructor, "AnimationNodeBlendSpace1D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeBlendSpace1D", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_blend_space1d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_blend_space1d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeBlendSpace1D");
	return m;
}

JSModuleDef *js_init_animation_node_blend_space1d_module(JSContext *ctx) {
	return _js_init_animation_node_blend_space1d_module(ctx, "godot/classes/animation_node_blend_space1d");
}

void register_animation_node_blend_space1d() {
	js_init_animation_node_blend_space1d_module(ctx);
}