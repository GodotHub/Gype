
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/xr_node3d.hpp>
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void xr_node3d_class_finalizer(JSRuntime *rt, JSValue val) {
	XRNode3D *xr_node3d = static_cast<XRNode3D *>(JS_GetOpaque(val, XRNode3D::__class_id));
	if (xr_node3d)
		XRNode3D::free(nullptr, xr_node3d);
}

static JSClassDef xr_node3d_class_def = {
	"XRNode3D",
	.finalizer = xr_node3d_class_finalizer
};

static JSValue xr_node3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRNode3D *xr_node3d_class;
	JSValue obj = JS_NewObjectClass(ctx, XRNode3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_node3d_class = memnew(XRNode3D);
	if (!xr_node3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_node3d_class);
	return obj;
}
static JSValue xr_node3d_class_set_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRNode3D::set_tracker, XRNode3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_node3d_class_get_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRNode3D::get_tracker, XRNode3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_node3d_class_set_pose_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRNode3D::set_pose_name, XRNode3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_node3d_class_get_pose_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRNode3D::get_pose_name, XRNode3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_node3d_class_set_show_when_tracked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRNode3D::set_show_when_tracked, XRNode3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_node3d_class_get_show_when_tracked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRNode3D::get_show_when_tracked, XRNode3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_node3d_class_get_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRNode3D::get_is_active, XRNode3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_node3d_class_get_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRNode3D::get_has_tracking_data, XRNode3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_node3d_class_get_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRNode3D::get_pose, XRNode3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_node3d_class_trigger_haptic_pulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRNode3D::trigger_haptic_pulse, XRNode3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry xr_node3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_tracker", 1, &xr_node3d_class_set_tracker),
	JS_CFUNC_DEF("get_tracker", 0, &xr_node3d_class_get_tracker),
	JS_CFUNC_DEF("set_pose_name", 1, &xr_node3d_class_set_pose_name),
	JS_CFUNC_DEF("get_pose_name", 0, &xr_node3d_class_get_pose_name),
	JS_CFUNC_DEF("set_show_when_tracked", 1, &xr_node3d_class_set_show_when_tracked),
	JS_CFUNC_DEF("get_show_when_tracked", 0, &xr_node3d_class_get_show_when_tracked),
	JS_CFUNC_DEF("get_is_active", 0, &xr_node3d_class_get_is_active),
	JS_CFUNC_DEF("get_has_tracking_data", 0, &xr_node3d_class_get_has_tracking_data),
	JS_CFUNC_DEF("get_pose", 0, &xr_node3d_class_get_pose),
	JS_CFUNC_DEF("trigger_haptic_pulse", 5, &xr_node3d_class_trigger_haptic_pulse),
};

static int js_xr_node3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRNode3D::__class_id);
	classes["XRNode3D"] = XRNode3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRNode3D::__class_id, &xr_node3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRNode3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_node3d_class_proto_funcs, _countof(xr_node3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_node3d_class_constructor, "XRNode3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRNode3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_node3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_node3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRNode3D");
	return m;
}

JSModuleDef *js_init_xr_node3d_module(JSContext *ctx) {
	return _js_init_xr_node3d_module(ctx, "godot/classes/xr_node3d");
}

void register_xr_node3d() {
	js_init_xr_node3d_module(ctx);
}