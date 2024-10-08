
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/xr_node3d.hpp>
#include <godot_cpp/classes/xr_controller3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void xr_controller3d_class_finalizer(JSRuntime *rt, JSValue val) {
	XRController3D *xr_controller3d = static_cast<XRController3D *>(JS_GetOpaque(val, XRController3D::__class_id));
	if (xr_controller3d)
		XRController3D::free(nullptr, xr_controller3d);
}

static JSClassDef xr_controller3d_class_def = {
	"XRController3D",
	.finalizer = xr_controller3d_class_finalizer
};

static JSValue xr_controller3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRController3D *xr_controller3d_class;
	JSValue obj = JS_NewObjectClass(ctx, XRController3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_controller3d_class = memnew(XRController3D);
	if (!xr_controller3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_controller3d_class);
	return obj;
}
static JSValue xr_controller3d_class_is_button_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRController3D::is_button_pressed, XRController3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_controller3d_class_get_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRController3D::get_input, XRController3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_controller3d_class_get_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRController3D::get_float, XRController3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_controller3d_class_get_vector2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRController3D::get_vector2, XRController3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_controller3d_class_get_tracker_hand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRController3D::get_tracker_hand, XRController3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xr_controller3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_button_pressed", 1, &xr_controller3d_class_is_button_pressed),
	JS_CFUNC_DEF("get_input", 1, &xr_controller3d_class_get_input),
	JS_CFUNC_DEF("get_float", 1, &xr_controller3d_class_get_float),
	JS_CFUNC_DEF("get_vector2", 1, &xr_controller3d_class_get_vector2),
	JS_CFUNC_DEF("get_tracker_hand", 0, &xr_controller3d_class_get_tracker_hand),
};

static int js_xr_controller3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRController3D::__class_id);
	classes["XRController3D"] = XRController3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRController3D::__class_id, &xr_controller3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRNode3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRController3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_controller3d_class_proto_funcs, _countof(xr_controller3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_controller3d_class_constructor, "XRController3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRController3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_controller3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_controller3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRController3D");
	return m;
}

JSModuleDef *js_init_xr_controller3d_module(JSContext *ctx) {
	return _js_init_xr_controller3d_module(ctx, "godot/classes/xr_controller3d");
}

void register_xr_controller3d() {
	js_init_xr_controller3d_module(ctx);
}