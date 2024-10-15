
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_face_tracker.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_face_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	XRFaceTracker *xr_face_tracker = static_cast<XRFaceTracker *>(JS_GetOpaque(val, XRFaceTracker::__class_id));
	if (xr_face_tracker)
		memdelete(xr_face_tracker);
}

static JSClassDef xr_face_tracker_class_def = {
	"XRFaceTracker",
	.finalizer = xr_face_tracker_class_finalizer
};

static JSValue xr_face_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRFaceTracker::__class_id);
	if (JS_IsException(obj))
		return obj;
	XRFaceTracker *xr_face_tracker_class = memnew(XRFaceTracker);
	if (!xr_face_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_face_tracker_class);	
	return obj;
}
static JSValue xr_face_tracker_class_get_blend_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRFaceTracker::get_blend_shape, ctx, this_val, argc, argv);
};
static JSValue xr_face_tracker_class_set_blend_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRFaceTracker::set_blend_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_face_tracker_class_get_blend_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRFaceTracker::get_blend_shapes, ctx, this_val, argc, argv);
};
static JSValue xr_face_tracker_class_set_blend_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRFaceTracker::set_blend_shapes, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry xr_face_tracker_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_blend_shape", 1, &xr_face_tracker_class_get_blend_shape),
	JS_CFUNC_DEF("set_blend_shape", 2, &xr_face_tracker_class_set_blend_shape),
	JS_CFUNC_DEF("get_blend_shapes", 0, &xr_face_tracker_class_get_blend_shapes),
	JS_CFUNC_DEF("set_blend_shapes", 1, &xr_face_tracker_class_set_blend_shapes),
};

void define_xr_face_tracker_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "blend_shapes"),
        JS_NewCFunction(ctx, xr_face_tracker_class_get_blend_shapes, "get_blend_shapes", 0),
        JS_NewCFunction(ctx, xr_face_tracker_class_set_blend_shapes, "set_blend_shapes", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_xr_face_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRFaceTracker::__class_id);
	classes["XRFaceTracker"] = XRFaceTracker::__class_id;
	class_id_list.insert(XRFaceTracker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRFaceTracker::__class_id, &xr_face_tracker_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRFaceTracker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, XRTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRFaceTracker::__class_id, proto);

	define_xr_face_tracker_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_face_tracker_class_proto_funcs, _countof(xr_face_tracker_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_face_tracker_class_constructor, "XRFaceTracker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRFaceTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_face_tracker_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/xr_tracker';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	XRFaceTracker::__init_js_class_id();
	js_init_xr_face_tracker_module(ctx);
}