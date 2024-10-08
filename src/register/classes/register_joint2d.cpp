
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void joint2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Joint2D *joint2d = static_cast<Joint2D *>(JS_GetOpaque(val, Joint2D::__class_id));
	if (joint2d)
		Joint2D::free(nullptr, joint2d);
}

static JSClassDef joint2d_class_def = {
	"Joint2D",
	.finalizer = joint2d_class_finalizer
};

static JSValue joint2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Joint2D *joint2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Joint2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	joint2d_class = memnew(Joint2D);
	if (!joint2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, joint2d_class);
	return obj;
}
static JSValue joint2d_class_set_node_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint2D::set_node_a, Joint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue joint2d_class_get_node_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint2D::get_node_a, Joint2D::__class_id, ctx, this_val, argv);
};
static JSValue joint2d_class_set_node_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint2D::set_node_b, Joint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue joint2d_class_get_node_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint2D::get_node_b, Joint2D::__class_id, ctx, this_val, argv);
};
static JSValue joint2d_class_set_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint2D::set_bias, Joint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue joint2d_class_get_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint2D::get_bias, Joint2D::__class_id, ctx, this_val, argv);
};
static JSValue joint2d_class_set_exclude_nodes_from_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Joint2D::set_exclude_nodes_from_collision, Joint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue joint2d_class_get_exclude_nodes_from_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint2D::get_exclude_nodes_from_collision, Joint2D::__class_id, ctx, this_val, argv);
};
static JSValue joint2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Joint2D::get_rid, Joint2D::__class_id, ctx, this_val, argv);
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

static int js_joint2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Joint2D::__class_id);
	classes["Joint2D"] = Joint2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Joint2D::__class_id, &joint2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Joint2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, joint2d_class_proto_funcs, _countof(joint2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, joint2d_class_constructor, "Joint2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Joint2D", ctor);

	return 0;
}

JSModuleDef *_js_init_joint2d_module(JSContext *ctx, const char *module_name) {
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
	js_init_joint2d_module(ctx);
}