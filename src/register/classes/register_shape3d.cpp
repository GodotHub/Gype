
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef shape3d_class_def = {
	"Shape3D",
	.finalizer = shape3d_class_finalizer
};

static JSValue shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Shape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Shape3D *shape3d_class = memnew(Shape3D);
	if (!shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, shape3d_class);
	return obj;
}
static JSValue shape3d_class_set_custom_solver_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&Shape3D::set_custom_solver_bias, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape3d_class_get_custom_solver_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shape3D::get_custom_solver_bias, ctx, this_val, argc, argv);
};
static JSValue shape3d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&Shape3D::set_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape3d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shape3D::get_margin, ctx, this_val, argc, argv);
};
static JSValue shape3d_class_get_debug_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Shape3D::get_debug_mesh, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_custom_solver_bias", 1, &shape3d_class_set_custom_solver_bias),
	JS_CFUNC_DEF("get_custom_solver_bias", 0, &shape3d_class_get_custom_solver_bias),
	JS_CFUNC_DEF("set_margin", 1, &shape3d_class_set_margin),
	JS_CFUNC_DEF("get_margin", 0, &shape3d_class_get_margin),
	JS_CFUNC_DEF("get_debug_mesh", 0, &shape3d_class_get_debug_mesh),
};

void define_shape3d_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "custom_solver_bias"),
			JS_NewCFunction(ctx, shape3d_class_get_custom_solver_bias, "get_custom_solver_bias", 0),
			JS_NewCFunction(ctx, shape3d_class_set_custom_solver_bias, "set_custom_solver_bias", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "margin"),
			JS_NewCFunction(ctx, shape3d_class_get_margin, "get_margin", 0),
			JS_NewCFunction(ctx, shape3d_class_set_margin, "set_margin", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Shape3D::__class_id);
	classes["Shape3D"] = Shape3D::__class_id;
	class_id_list.insert(Shape3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Shape3D::__class_id, &shape3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Shape3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Shape3D::__class_id, proto);

	define_shape3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, shape3d_class_proto_funcs, _countof(shape3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, shape3d_class_constructor, "Shape3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Shape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_shape3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Shape3D");
	return m;
}

JSModuleDef *js_init_shape3d_module(JSContext *ctx) {
	return _js_init_shape3d_module(ctx, "godot/classes/shape3d");
}

void register_shape3d() {
	Shape3D::__init_js_class_id();
	js_init_shape3d_module(ctx);
}