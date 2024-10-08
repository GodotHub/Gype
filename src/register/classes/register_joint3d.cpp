
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Joint3D *joint3d = static_cast<Joint3D *>(JS_GetOpaque(val, Joint3D::__class_id));
	if (joint3d)
		Joint3D::free(nullptr, joint3d);
}

static JSClassDef joint3d_class_def = {
	"Joint3D",
	.finalizer = joint3d_class_finalizer
};

static JSValue joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Joint3D *joint3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Joint3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	joint3d_class = memnew(Joint3D);
	if (!joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, joint3d_class);
	return obj;
}
static JSValue joint3d_class_set_node_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint3D::set_node_a, Joint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue joint3d_class_get_node_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_node_a, Joint3D::__class_id, ctx, this_val, argv);
};
static JSValue joint3d_class_set_node_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint3D::set_node_b, Joint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue joint3d_class_get_node_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_node_b, Joint3D::__class_id, ctx, this_val, argv);
};
static JSValue joint3d_class_set_solver_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint3D::set_solver_priority, Joint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue joint3d_class_get_solver_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_solver_priority, Joint3D::__class_id, ctx, this_val, argv);
};
static JSValue joint3d_class_set_exclude_nodes_from_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint3D::set_exclude_nodes_from_collision, Joint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue joint3d_class_get_exclude_nodes_from_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_exclude_nodes_from_collision, Joint3D::__class_id, ctx, this_val, argv);
};
static JSValue joint3d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint3D::get_rid, Joint3D::__class_id, ctx, this_val, argv);
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

static int js_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Joint3D::__class_id);
	classes["Joint3D"] = Joint3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Joint3D::__class_id, &joint3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Joint3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, joint3d_class_proto_funcs, _countof(joint3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, joint3d_class_constructor, "Joint3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Joint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_joint3d_module(JSContext *ctx, const char *module_name) {
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
	js_init_joint3d_module(ctx);
}