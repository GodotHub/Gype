
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void joint2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef joint2d_class_def = {
	"Joint2D",
	.finalizer = joint2d_class_finalizer
};

static JSValue joint2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Joint2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Joint2D *joint2d_class = memnew(Joint2D);
	if (!joint2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, joint2d_class);	
	return obj;
}
static JSValue joint2d_class_set_node_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Joint2D::set_node_a, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue joint2d_class_get_node_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Joint2D::get_node_a, ctx, this_val, argc, argv);
};
static JSValue joint2d_class_set_node_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Joint2D::set_node_b, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue joint2d_class_get_node_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Joint2D::get_node_b, ctx, this_val, argc, argv);
};
static JSValue joint2d_class_set_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Joint2D::set_bias, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue joint2d_class_get_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Joint2D::get_bias, ctx, this_val, argc, argv);
};
static JSValue joint2d_class_set_exclude_nodes_from_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Joint2D::set_exclude_nodes_from_collision, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue joint2d_class_get_exclude_nodes_from_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Joint2D::get_exclude_nodes_from_collision, ctx, this_val, argc, argv);
};
static JSValue joint2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Joint2D::get_rid, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry joint2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_node_a", 1, &joint2d_class_set_node_a),
	JS_CFUNC_DEF("get_node_a", 0, &joint2d_class_get_node_a),
	JS_CFUNC_DEF("set_node_b", 1, &joint2d_class_set_node_b),
	JS_CFUNC_DEF("get_node_b", 0, &joint2d_class_get_node_b),
	JS_CFUNC_DEF("set_bias", 1, &joint2d_class_set_bias),
	JS_CFUNC_DEF("get_bias", 0, &joint2d_class_get_bias),
	JS_CFUNC_DEF("set_exclude_nodes_from_collision", 1, &joint2d_class_set_exclude_nodes_from_collision),
	JS_CFUNC_DEF("get_exclude_nodes_from_collision", 0, &joint2d_class_get_exclude_nodes_from_collision),
	JS_CFUNC_DEF("get_rid", 0, &joint2d_class_get_rid),
};

void define_joint2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "node_a"),
        JS_NewCFunction(ctx, joint2d_class_get_node_a, "get_node_a", 0),
        JS_NewCFunction(ctx, joint2d_class_set_node_a, "set_node_a", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "node_b"),
        JS_NewCFunction(ctx, joint2d_class_get_node_b, "get_node_b", 0),
        JS_NewCFunction(ctx, joint2d_class_set_node_b, "set_node_b", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bias"),
        JS_NewCFunction(ctx, joint2d_class_get_bias, "get_bias", 0),
        JS_NewCFunction(ctx, joint2d_class_set_bias, "set_bias", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "disable_collision"),
        JS_NewCFunction(ctx, joint2d_class_get_exclude_nodes_from_collision, "get_exclude_nodes_from_collision", 0),
        JS_NewCFunction(ctx, joint2d_class_set_exclude_nodes_from_collision, "set_exclude_nodes_from_collision", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_joint2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Joint2D::__class_id);
	classes["Joint2D"] = Joint2D::__class_id;
	class_id_list.insert(Joint2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Joint2D::__class_id, &joint2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Joint2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Joint2D::__class_id, proto);

	define_joint2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, joint2d_class_proto_funcs, _countof(joint2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, joint2d_class_constructor, "Joint2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Joint2D", ctor);

	return 0;
}

JSModuleDef *_js_init_joint2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_joint2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Joint2D");
	return m;
}

JSModuleDef *js_init_joint2d_module(JSContext *ctx) {
	return _js_init_joint2d_module(ctx, "godot/classes/joint2d");
}

void register_joint2d() {
	Joint2D::__init_js_class_id();
	js_init_joint2d_module(ctx);
}