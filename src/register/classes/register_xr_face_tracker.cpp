
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/xr_face_tracker.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_face_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	XRFaceTracker *xr_face_tracker = static_cast<XRFaceTracker *>(JS_GetOpaque(val, XRFaceTracker::__class_id));
	if (xr_face_tracker)
		XRFaceTracker::free(nullptr, xr_face_tracker);
}

static JSClassDef xr_face_tracker_class_def = {
	"XRFaceTracker",
	.finalizer = xr_face_tracker_class_finalizer
};

static JSValue xr_face_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRFaceTracker *xr_face_tracker_class;
	JSValue obj = JS_NewObjectClass(ctx, XRFaceTracker::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_face_tracker_class = memnew(XRFaceTracker);
	if (!xr_face_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_face_tracker_class);
	return obj;
}
static JSValue xr_face_tracker_class_get_blend_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRFaceTracker::get_blend_shape, XRFaceTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_face_tracker_class_set_blend_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRFaceTracker::set_blend_shape, XRFaceTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_face_tracker_class_get_blend_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRFaceTracker::get_blend_shapes, XRFaceTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_face_tracker_class_set_blend_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRFaceTracker::set_blend_shapes, XRFaceTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry xr_face_tracker_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_blend_shape", 1, &xr_face_tracker_class_get_blend_shape),
	JS_CFUNC_DEF("set_blend_shape", 2, &xr_face_tracker_class_set_blend_shape),
	JS_CFUNC_DEF("get_blend_shapes", 0, &xr_face_tracker_class_get_blend_shapes),
	JS_CFUNC_DEF("set_blend_shapes", 1, &xr_face_tracker_class_set_blend_shapes),
};

static int js_xr_face_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRFaceTracker::__class_id);
	classes["XRFaceTracker"] = XRFaceTracker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRFaceTracker::__class_id, &xr_face_tracker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRFaceTracker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_face_tracker_class_proto_funcs, _countof(xr_face_tracker_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_face_tracker_class_constructor, "XRFaceTracker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRFaceTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_face_tracker_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_face_tracker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRFaceTracker");
	return m;
}

JSModuleDef *js_init_xr_face_tracker_module(JSContext *ctx) {
	return _js_init_xr_face_tracker_module(ctx, "godot/classes/xr_face_tracker");
}

void register_xr_face_tracker() {
	js_init_xr_face_tracker_module(ctx);
}