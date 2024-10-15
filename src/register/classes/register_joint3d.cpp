
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Joint3D *joint3d = static_cast<Joint3D *>(JS_GetOpaque(val, Joint3D::__class_id));
	if (joint3d)
		memdelete(joint3d);
}

static JSClassDef joint3d_class_def = {
	"Joint3D",
	.finalizer = joint3d_class_finalizer
};

static JSValue joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Joint3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Joint3D *joint3d_class = memnew(Joint3D);
	if (!joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, joint3d_class);	
	return obj;
}
static JSValue joint3d_class_set_node_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint3D::set_node_a, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue joint3d_class_get_node_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_node_a, ctx, this_val, argc, argv);
};
static JSValue joint3d_class_set_node_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint3D::set_node_b, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue joint3d_class_get_node_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_node_b, ctx, this_val, argc, argv);
};
static JSValue joint3d_class_set_solver_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint3D::set_solver_priority, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue joint3d_class_get_solver_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_solver_priority, ctx, this_val, argc, argv);
};
static JSValue joint3d_class_set_exclude_nodes_from_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint3D::set_exclude_nodes_from_collision, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue joint3d_class_get_exclude_nodes_from_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_exclude_nodes_from_collision, ctx, this_val, argc, argv);
};
static JSValue joint3d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_rid, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry joint3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_node_a", 1, &joint3d_class_set_node_a),
	JS_CFUNC_DEF("get_node_a", 0, &joint3d_class_get_node_a),
	JS_CFUNC_DEF("set_node_b", 1, &joint3d_class_set_node_b),
	JS_CFUNC_DEF("get_node_b", 0, &joint3d_class_get_node_b),
	JS_CFUNC_DEF("set_solver_priority", 1, &joint3d_class_set_solver_priority),
	JS_CFUNC_DEF("get_solver_priority", 0, &joint3d_class_get_solver_priority),
	JS_CFUNC_DEF("set_exclude_nodes_from_collision", 1, &joint3d_class_set_exclude_nodes_from_collision),
	JS_CFUNC_DEF("get_exclude_nodes_from_collision", 0, &joint3d_class_get_exclude_nodes_from_collision),
	JS_CFUNC_DEF("get_rid", 0, &joint3d_class_get_rid),
};

void define_joint3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "node_a"),
        JS_NewCFunction(ctx, joint3d_class_get_node_a, "get_node_a", 0),
        JS_NewCFunction(ctx, joint3d_class_set_node_a, "set_node_a", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "node_b"),
        JS_NewCFunction(ctx, joint3d_class_get_node_b, "get_node_b", 0),
        JS_NewCFunction(ctx, joint3d_class_set_node_b, "set_node_b", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "solver_priority"),
        JS_NewCFunction(ctx, joint3d_class_get_solver_priority, "get_solver_priority", 0),
        JS_NewCFunction(ctx, joint3d_class_set_solver_priority, "set_solver_priority", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "exclude_nodes_from_collision"),
        JS_NewCFunction(ctx, joint3d_class_get_exclude_nodes_from_collision, "get_exclude_nodes_from_collision", 0),
        JS_NewCFunction(ctx, joint3d_class_set_exclude_nodes_from_collision, "set_exclude_nodes_from_collision", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Joint3D::__class_id);
	classes["Joint3D"] = Joint3D::__class_id;
	class_id_list.insert(Joint3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Joint3D::__class_id, &joint3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Joint3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Joint3D::__class_id, proto);

	define_joint3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, joint3d_class_proto_funcs, _countof(joint3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, joint3d_class_constructor, "Joint3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Joint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_joint3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_joint3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Joint3D");
	return m;
}

JSModuleDef *js_init_joint3d_module(JSContext *ctx) {
	return _js_init_joint3d_module(ctx, "godot/classes/joint3d");
}

void register_joint3d() {
	Joint3D::__init_js_class_id();
	js_init_joint3d_module(ctx);
}