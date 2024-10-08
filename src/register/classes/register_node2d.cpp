
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void node2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Node2D *node2d = static_cast<Node2D *>(JS_GetOpaque(val, Node2D::__class_id));
	if (node2d)
		Node2D::free(nullptr, node2d);
}

static JSClassDef node2d_class_def = {
	"Node2D",
	.finalizer = node2d_class_finalizer
};

static JSValue node2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Node2D *node2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Node2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	node2d_class = memnew(Node2D);
	if (!node2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, node2d_class);
	return obj;
}
static JSValue node2d_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_position, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_set_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_rotation, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_set_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_rotation_degrees, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_set_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_skew, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_set_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_scale, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_position, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_get_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_rotation, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_get_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_rotation_degrees, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_get_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_skew, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_get_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_scale, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_rotate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::rotate, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_move_local_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::move_local_x, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_move_local_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::move_local_y, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_translate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::translate, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_global_translate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::global_translate, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_apply_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::apply_scale, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_set_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_global_position, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_get_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_global_position, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_set_global_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_global_rotation, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_set_global_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_global_rotation_degrees, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_get_global_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_global_rotation, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_get_global_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_global_rotation_degrees, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_set_global_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_global_skew, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_get_global_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_global_skew, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_set_global_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_global_scale, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_get_global_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_global_scale, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_transform, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_set_global_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::set_global_transform, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_look_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Node2D::look_at, Node2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue node2d_class_get_angle_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_angle_to, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_to_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::to_local, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_to_global(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::to_global, Node2D::__class_id, ctx, this_val, argv);
};
static JSValue node2d_class_get_relative_transform_to_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Node2D::get_relative_transform_to_parent, Node2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry node2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_position", 1, &node2d_class_set_position),
	JS_CFUNC_DEF("set_rotation", 1, &node2d_class_set_rotation),
	JS_CFUNC_DEF("set_rotation_degrees", 1, &node2d_class_set_rotation_degrees),
	JS_CFUNC_DEF("set_skew", 1, &node2d_class_set_skew),
	JS_CFUNC_DEF("set_scale", 1, &node2d_class_set_scale),
	JS_CFUNC_DEF("get_position", 0, &node2d_class_get_position),
	JS_CFUNC_DEF("get_rotation", 0, &node2d_class_get_rotation),
	JS_CFUNC_DEF("get_rotation_degrees", 0, &node2d_class_get_rotation_degrees),
	JS_CFUNC_DEF("get_skew", 0, &node2d_class_get_skew),
	JS_CFUNC_DEF("get_scale", 0, &node2d_class_get_scale),
	JS_CFUNC_DEF("rotate", 1, &node2d_class_rotate),
	JS_CFUNC_DEF("move_local_x", 2, &node2d_class_move_local_x),
	JS_CFUNC_DEF("move_local_y", 2, &node2d_class_move_local_y),
	JS_CFUNC_DEF("translate", 1, &node2d_class_translate),
	JS_CFUNC_DEF("global_translate", 1, &node2d_class_global_translate),
	JS_CFUNC_DEF("apply_scale", 1, &node2d_class_apply_scale),
	JS_CFUNC_DEF("set_global_position", 1, &node2d_class_set_global_position),
	JS_CFUNC_DEF("get_global_position", 0, &node2d_class_get_global_position),
	JS_CFUNC_DEF("set_global_rotation", 1, &node2d_class_set_global_rotation),
	JS_CFUNC_DEF("set_global_rotation_degrees", 1, &node2d_class_set_global_rotation_degrees),
	JS_CFUNC_DEF("get_global_rotation", 0, &node2d_class_get_global_rotation),
	JS_CFUNC_DEF("get_global_rotation_degrees", 0, &node2d_class_get_global_rotation_degrees),
	JS_CFUNC_DEF("set_global_skew", 1, &node2d_class_set_global_skew),
	JS_CFUNC_DEF("get_global_skew", 0, &node2d_class_get_global_skew),
	JS_CFUNC_DEF("set_global_scale", 1, &node2d_class_set_global_scale),
	JS_CFUNC_DEF("get_global_scale", 0, &node2d_class_get_global_scale),
	JS_CFUNC_DEF("set_transform", 1, &node2d_class_set_transform),
	JS_CFUNC_DEF("set_global_transform", 1, &node2d_class_set_global_transform),
	JS_CFUNC_DEF("look_at", 1, &node2d_class_look_at),
	JS_CFUNC_DEF("get_angle_to", 1, &node2d_class_get_angle_to),
	JS_CFUNC_DEF("to_local", 1, &node2d_class_to_local),
	JS_CFUNC_DEF("to_global", 1, &node2d_class_to_global),
	JS_CFUNC_DEF("get_relative_transform_to_parent", 1, &node2d_class_get_relative_transform_to_parent),
};

static int js_node2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Node2D::__class_id);
	classes["Node2D"] = Node2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Node2D::__class_id, &node2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CanvasItem::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Node2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, node2d_class_proto_funcs, _countof(node2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, node2d_class_constructor, "Node2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Node2D", ctor);

	return 0;
}

JSModuleDef *_js_init_node2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_node2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Node2D");
	return m;
}

JSModuleDef *js_init_node2d_module(JSContext *ctx) {
	return _js_init_node2d_module(ctx, "godot/classes/node2d");
}

void register_node2d() {
	js_init_node2d_module(ctx);
}