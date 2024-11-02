
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void node2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef node2d_class_def = {
	"Node2D",
	.finalizer = node2d_class_finalizer
};

static JSValue node2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Node2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	Node2D *node2d_class;
	if (argc == 1) 
		node2d_class = static_cast<Node2D *>(Variant(*argv).operator Object *());
	else 
		node2d_class = memnew(Node2D);
	if (!node2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, node2d_class);
	return obj;
}
static JSValue node2d_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_position, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_rotation, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_rotation_degrees, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_skew, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_scale, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_position, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_rotation, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_rotation_degrees, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_skew, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_scale, ctx, this_val, argc, argv);
};
static JSValue node2d_class_rotate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::rotate, ctx, this_val, argc, argv);
};
static JSValue node2d_class_move_local_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::move_local_x, ctx, this_val, argc, argv);
};
static JSValue node2d_class_move_local_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::move_local_y, ctx, this_val, argc, argv);
};
static JSValue node2d_class_translate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::translate, ctx, this_val, argc, argv);
};
static JSValue node2d_class_global_translate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::global_translate, ctx, this_val, argc, argv);
};
static JSValue node2d_class_apply_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::apply_scale, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_global_position, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_global_position, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_global_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_global_rotation, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_global_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_global_rotation_degrees, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_global_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_global_rotation, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_global_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_global_rotation_degrees, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_global_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_global_skew, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_global_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_global_skew, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_global_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_global_scale, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_global_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_global_scale, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_transform, ctx, this_val, argc, argv);
};
static JSValue node2d_class_set_global_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::set_global_transform, ctx, this_val, argc, argv);
};
static JSValue node2d_class_look_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Node2D::look_at, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_angle_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_angle_to, ctx, this_val, argc, argv);
};
static JSValue node2d_class_to_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::to_local, ctx, this_val, argc, argv);
};
static JSValue node2d_class_to_global(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::to_global, ctx, this_val, argc, argv);
};
static JSValue node2d_class_get_relative_transform_to_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Node2D::get_relative_transform_to_parent, ctx, this_val, argc, argv);
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

static void define_node2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "position"),
        JS_NewCFunction(ctx, node2d_class_get_position, "get_position", 0),
        JS_NewCFunction(ctx, node2d_class_set_position, "set_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "rotation"),
        JS_NewCFunction(ctx, node2d_class_get_rotation, "get_rotation", 0),
        JS_NewCFunction(ctx, node2d_class_set_rotation, "set_rotation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "rotation_degrees"),
        JS_NewCFunction(ctx, node2d_class_get_rotation_degrees, "get_rotation_degrees", 0),
        JS_NewCFunction(ctx, node2d_class_set_rotation_degrees, "set_rotation_degrees", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scale"),
        JS_NewCFunction(ctx, node2d_class_get_scale, "get_scale", 0),
        JS_NewCFunction(ctx, node2d_class_set_scale, "set_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "skew"),
        JS_NewCFunction(ctx, node2d_class_get_skew, "get_skew", 0),
        JS_NewCFunction(ctx, node2d_class_set_skew, "set_skew", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "transform"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, node2d_class_set_transform, "set_transform", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "global_position"),
        JS_NewCFunction(ctx, node2d_class_get_global_position, "get_global_position", 0),
        JS_NewCFunction(ctx, node2d_class_set_global_position, "set_global_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "global_rotation"),
        JS_NewCFunction(ctx, node2d_class_get_global_rotation, "get_global_rotation", 0),
        JS_NewCFunction(ctx, node2d_class_set_global_rotation, "set_global_rotation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "global_rotation_degrees"),
        JS_NewCFunction(ctx, node2d_class_get_global_rotation_degrees, "get_global_rotation_degrees", 0),
        JS_NewCFunction(ctx, node2d_class_set_global_rotation_degrees, "set_global_rotation_degrees", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "global_scale"),
        JS_NewCFunction(ctx, node2d_class_get_global_scale, "get_global_scale", 0),
        JS_NewCFunction(ctx, node2d_class_set_global_scale, "set_global_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "global_skew"),
        JS_NewCFunction(ctx, node2d_class_get_global_skew, "get_global_skew", 0),
        JS_NewCFunction(ctx, node2d_class_set_global_skew, "set_global_skew", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "global_transform"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, node2d_class_set_global_transform, "set_global_transform", 1),
        JS_PROP_GETSET
    );
	
}

static void define_node2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_node2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Node2D"] = Node2D::__class_id;
	class_id_list.insert(Node2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Node2D::__class_id, &node2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Node2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CanvasItem::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Node2D::__class_id, proto);

	define_node2d_property(ctx, proto);
	define_node2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, node2d_class_proto_funcs, _countof(node2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, node2d_class_constructor, "Node2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Node2D", ctor);

	return 0;
}

JSModuleDef *_js_init_node2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/canvas_item';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_node2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Node2D");
	return m;
}

JSModuleDef *js_init_node2d_module(JSContext *ctx) {
	return _js_init_node2d_module(ctx, "@godot/classes/node2d");
}

void register_node2d() {
	Node2D::__init_js_class_id();
	js_init_node2d_module(ctx);
}