
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/xr_face_modifier3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_face_modifier3d_class_finalizer(JSRuntime *rt, JSValue val) {
	XRFaceModifier3D *xr_face_modifier3d = static_cast<XRFaceModifier3D *>(JS_GetOpaque(val, XRFaceModifier3D::__class_id));
	if (xr_face_modifier3d)
		XRFaceModifier3D::free(nullptr, xr_face_modifier3d);
}

static JSClassDef xr_face_modifier3d_class_def = {
	"XRFaceModifier3D",
	.finalizer = xr_face_modifier3d_class_finalizer
};

static JSValue xr_face_modifier3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRFaceModifier3D *xr_face_modifier3d_class;
	JSValue obj = JS_NewObjectClass(ctx, XRFaceModifier3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_face_modifier3d_class = memnew(XRFaceModifier3D);
	if (!xr_face_modifier3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_face_modifier3d_class);
	return obj;
}
static JSValue xr_face_modifier3d_class_set_face_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRFaceModifier3D::set_face_tracker, XRFaceModifier3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_face_modifier3d_class_get_face_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRFaceModifier3D::get_face_tracker, XRFaceModifier3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_face_modifier3d_class_set_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRFaceModifier3D::set_target, XRFaceModifier3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_face_modifier3d_class_get_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRFaceModifier3D::get_target, XRFaceModifier3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xr_face_modifier3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_face_tracker", 1, &xr_face_modifier3d_class_set_face_tracker),
	JS_CFUNC_DEF("get_face_tracker", 0, &xr_face_modifier3d_class_get_face_tracker),
	JS_CFUNC_DEF("set_target", 1, &xr_face_modifier3d_class_set_target),
	JS_CFUNC_DEF("get_target", 0, &xr_face_modifier3d_class_get_target),
};

static int js_xr_face_modifier3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRFaceModifier3D::__class_id);
	classes["XRFaceModifier3D"] = XRFaceModifier3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRFaceModifier3D::__class_id, &xr_face_modifier3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRFaceModifier3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_face_modifier3d_class_proto_funcs, _countof(xr_face_modifier3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_face_modifier3d_class_constructor, "XRFaceModifier3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRFaceModifier3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_face_modifier3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_face_modifier3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRFaceModifier3D");
	return m;
}

JSModuleDef *js_init_xr_face_modifier3d_module(JSContext *ctx) {
	return _js_init_xr_face_modifier3d_module(ctx, "godot/classes/xr_face_modifier3d");
}

void register_xr_face_modifier3d() {
	js_init_xr_face_modifier3d_module(ctx);
}