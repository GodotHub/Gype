
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/animation_node_blend_space2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_blend_space2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_node_blend_space2d_class_def = {
	"AnimationNodeBlendSpace2D",
	.finalizer = animation_node_blend_space2d_class_finalizer
};

static JSValue animation_node_blend_space2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNodeBlendSpace2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	AnimationNodeBlendSpace2D *animation_node_blend_space2d_class = memnew(AnimationNodeBlendSpace2D);
	if (!animation_node_blend_space2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_blend_space2d_class);	
	return obj;
}
static JSValue animation_node_blend_space2d_class_add_blend_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::add_blend_point, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_set_blend_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_blend_point_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_blend_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_blend_point_position, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_set_blend_point_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_blend_point_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_blend_point_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_blend_point_node, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_remove_blend_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::remove_blend_point, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_blend_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_blend_point_count, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_add_triangle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::add_triangle, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_triangle_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AnimationNodeBlendSpace2D::get_triangle_point, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_remove_triangle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::remove_triangle, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_triangle_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_triangle_count, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_set_min_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_min_space, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_min_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_min_space, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_set_max_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_max_space, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_max_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_max_space, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_set_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_snap, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_snap, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_set_x_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_x_label, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_x_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_x_label, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_set_y_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_y_label, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_y_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_y_label, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_set_auto_triangles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_auto_triangles, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_auto_triangles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_auto_triangles, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_set_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_blend_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_get_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::get_blend_mode, ctx, this_val, argc, argv);
};
static JSValue animation_node_blend_space2d_class_set_use_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AnimationNodeBlendSpace2D::set_use_sync, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_blend_space2d_class_is_using_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationNodeBlendSpace2D::is_using_sync, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animation_node_blend_space2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_blend_point", 3, &animation_node_blend_space2d_class_add_blend_point),
	JS_CFUNC_DEF("set_blend_point_position", 2, &animation_node_blend_space2d_class_set_blend_point_position),
	JS_CFUNC_DEF("get_blend_point_position", 1, &animation_node_blend_space2d_class_get_blend_point_position),
	JS_CFUNC_DEF("set_blend_point_node", 2, &animation_node_blend_space2d_class_set_blend_point_node),
	JS_CFUNC_DEF("get_blend_point_node", 1, &animation_node_blend_space2d_class_get_blend_point_node),
	JS_CFUNC_DEF("remove_blend_point", 1, &animation_node_blend_space2d_class_remove_blend_point),
	JS_CFUNC_DEF("get_blend_point_count", 0, &animation_node_blend_space2d_class_get_blend_point_count),
	JS_CFUNC_DEF("add_triangle", 4, &animation_node_blend_space2d_class_add_triangle),
	JS_CFUNC_DEF("get_triangle_point", 2, &animation_node_blend_space2d_class_get_triangle_point),
	JS_CFUNC_DEF("remove_triangle", 1, &animation_node_blend_space2d_class_remove_triangle),
	JS_CFUNC_DEF("get_triangle_count", 0, &animation_node_blend_space2d_class_get_triangle_count),
	JS_CFUNC_DEF("set_min_space", 1, &animation_node_blend_space2d_class_set_min_space),
	JS_CFUNC_DEF("get_min_space", 0, &animation_node_blend_space2d_class_get_min_space),
	JS_CFUNC_DEF("set_max_space", 1, &animation_node_blend_space2d_class_set_max_space),
	JS_CFUNC_DEF("get_max_space", 0, &animation_node_blend_space2d_class_get_max_space),
	JS_CFUNC_DEF("set_snap", 1, &animation_node_blend_space2d_class_set_snap),
	JS_CFUNC_DEF("get_snap", 0, &animation_node_blend_space2d_class_get_snap),
	JS_CFUNC_DEF("set_x_label", 1, &animation_node_blend_space2d_class_set_x_label),
	JS_CFUNC_DEF("get_x_label", 0, &animation_node_blend_space2d_class_get_x_label),
	JS_CFUNC_DEF("set_y_label", 1, &animation_node_blend_space2d_class_set_y_label),
	JS_CFUNC_DEF("get_y_label", 0, &animation_node_blend_space2d_class_get_y_label),
	JS_CFUNC_DEF("set_auto_triangles", 1, &animation_node_blend_space2d_class_set_auto_triangles),
	JS_CFUNC_DEF("get_auto_triangles", 0, &animation_node_blend_space2d_class_get_auto_triangles),
	JS_CFUNC_DEF("set_blend_mode", 1, &animation_node_blend_space2d_class_set_blend_mode),
	JS_CFUNC_DEF("get_blend_mode", 0, &animation_node_blend_space2d_class_get_blend_mode),
	JS_CFUNC_DEF("set_use_sync", 1, &animation_node_blend_space2d_class_set_use_sync),
	JS_CFUNC_DEF("is_using_sync", 0, &animation_node_blend_space2d_class_is_using_sync),
};

void define_animation_node_blend_space2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "auto_triangles"),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_get_auto_triangles, "get_auto_triangles", 0),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_set_auto_triangles, "set_auto_triangles", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "min_space"),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_get_min_space, "get_min_space", 0),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_set_min_space, "set_min_space", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "max_space"),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_get_max_space, "get_max_space", 0),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_set_max_space, "set_max_space", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "snap"),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_get_snap, "get_snap", 0),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_set_snap, "set_snap", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "x_label"),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_get_x_label, "get_x_label", 0),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_set_x_label, "set_x_label", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "y_label"),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_get_y_label, "get_y_label", 0),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_set_y_label, "set_y_label", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "blend_mode"),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_get_blend_mode, "get_blend_mode", 0),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_set_blend_mode, "set_blend_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sync"),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_is_using_sync, "is_using_sync", 0),
        JS_NewCFunction(ctx, animation_node_blend_space2d_class_set_use_sync, "set_use_sync", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue BlendMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, BlendMode_obj, "BLEND_MODE_INTERPOLATED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, BlendMode_obj, "BLEND_MODE_DISCRETE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, BlendMode_obj, "BLEND_MODE_DISCRETE_CARRY", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "BlendMode", BlendMode_obj);
}

static int js_animation_node_blend_space2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationNodeBlendSpace2D::__class_id);
	classes["AnimationNodeBlendSpace2D"] = AnimationNodeBlendSpace2D::__class_id;
	class_id_list.insert(AnimationNodeBlendSpace2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeBlendSpace2D::__class_id, &animation_node_blend_space2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNodeBlendSpace2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AnimationRootNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeBlendSpace2D::__class_id, proto);

	define_animation_node_blend_space2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_blend_space2d_class_proto_funcs, _countof(animation_node_blend_space2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_blend_space2d_class_constructor, "AnimationNodeBlendSpace2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeBlendSpace2D", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_blend_space2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/animation_root_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_blend_space2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeBlendSpace2D");
	return m;
}

JSModuleDef *js_init_animation_node_blend_space2d_module(JSContext *ctx) {
	return _js_init_animation_node_blend_space2d_module(ctx, "godot/classes/animation_node_blend_space2d");
}

void register_animation_node_blend_space2d() {
	AnimationNodeBlendSpace2D::__init_js_class_id();
	js_init_animation_node_blend_space2d_module(ctx);
}