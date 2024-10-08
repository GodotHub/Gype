
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/xr_origin3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_origin3d_class_finalizer(JSRuntime *rt, JSValue val) {
	XROrigin3D *xr_origin3d = static_cast<XROrigin3D *>(JS_GetOpaque(val, XROrigin3D::__class_id));
	if (xr_origin3d)
		XROrigin3D::free(nullptr, xr_origin3d);
}

static JSClassDef xr_origin3d_class_def = {
	"XROrigin3D",
	.finalizer = xr_origin3d_class_finalizer
};

static JSValue xr_origin3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XROrigin3D *xr_origin3d_class;
	JSValue obj = JS_NewObjectClass(ctx, XROrigin3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_origin3d_class = memnew(XROrigin3D);
	if (!xr_origin3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_origin3d_class);
	return obj;
}
static JSValue xr_origin3d_class_set_world_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XROrigin3D::set_world_scale, XROrigin3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_origin3d_class_get_world_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XROrigin3D::get_world_scale, XROrigin3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_origin3d_class_set_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XROrigin3D::set_current, XROrigin3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_origin3d_class_is_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XROrigin3D::is_current, XROrigin3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xr_origin3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_world_scale", 1, &xr_origin3d_class_set_world_scale),
	JS_CFUNC_DEF("get_world_scale", 0, &xr_origin3d_class_get_world_scale),
	JS_CFUNC_DEF("set_current", 1, &xr_origin3d_class_set_current),
	JS_CFUNC_DEF("is_current", 0, &xr_origin3d_class_is_current),
};

static int js_xr_origin3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XROrigin3D::__class_id);
	classes["XROrigin3D"] = XROrigin3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XROrigin3D::__class_id, &xr_origin3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XROrigin3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_origin3d_class_proto_funcs, _countof(xr_origin3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_origin3d_class_constructor, "XROrigin3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XROrigin3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_origin3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_origin3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XROrigin3D");
	return m;
}

JSModuleDef *js_init_xr_origin3d_module(JSContext *ctx) {
	return _js_init_xr_origin3d_module(ctx, "godot/classes/xr_origin3d");
}

void register_xr_origin3d() {
	js_init_xr_origin3d_module(ctx);
}