
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_node3d.hpp>
#include <godot_cpp/classes/xr_controller3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_controller3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef xr_controller3d_class_def = {
	"XRController3D",
	.finalizer = xr_controller3d_class_finalizer
};

static JSValue xr_controller3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRController3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	XRController3D *xr_controller3d_class = memnew(XRController3D);
	if (!xr_controller3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_controller3d_class);	
	return obj;
}
static JSValue xr_controller3d_class_is_button_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRController3D::is_button_pressed, ctx, this_val, argc, argv);
};
static JSValue xr_controller3d_class_get_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRController3D::get_input, ctx, this_val, argc, argv);
};
static JSValue xr_controller3d_class_get_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRController3D::get_float, ctx, this_val, argc, argv);
};
static JSValue xr_controller3d_class_get_vector2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRController3D::get_vector2, ctx, this_val, argc, argv);
};
static JSValue xr_controller3d_class_get_tracker_hand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRController3D::get_tracker_hand, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_controller3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_button_pressed", 1, &xr_controller3d_class_is_button_pressed),
	JS_CFUNC_DEF("get_input", 1, &xr_controller3d_class_get_input),
	JS_CFUNC_DEF("get_float", 1, &xr_controller3d_class_get_float),
	JS_CFUNC_DEF("get_vector2", 1, &xr_controller3d_class_get_vector2),
	JS_CFUNC_DEF("get_tracker_hand", 0, &xr_controller3d_class_get_tracker_hand),
};

void define_xr_controller3d_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_xr_controller3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRController3D::__class_id);
	classes["XRController3D"] = XRController3D::__class_id;
	class_id_list.insert(XRController3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRController3D::__class_id, &xr_controller3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRController3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, XRNode3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRController3D::__class_id, proto);

	define_xr_controller3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_controller3d_class_proto_funcs, _countof(xr_controller3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_controller3d_class_constructor, "XRController3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRController3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_controller3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/xr_node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_controller3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRController3D");
	return m;
}

JSModuleDef *js_init_xr_controller3d_module(JSContext *ctx) {
	return _js_init_xr_controller3d_module(ctx, "@godot/classes/xr_controller3d");
}

void register_xr_controller3d() {
	XRController3D::__init_js_class_id();
	js_init_xr_controller3d_module(ctx);
}