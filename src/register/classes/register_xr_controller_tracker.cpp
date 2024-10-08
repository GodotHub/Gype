
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/classes/xr_controller_tracker.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void xr_controller_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	XRControllerTracker *xr_controller_tracker = static_cast<XRControllerTracker *>(JS_GetOpaque(val, XRControllerTracker::__class_id));
	if (xr_controller_tracker)
		XRControllerTracker::free(nullptr, xr_controller_tracker);
}

static JSClassDef xr_controller_tracker_class_def = {
	"XRControllerTracker",
	.finalizer = xr_controller_tracker_class_finalizer
};

static JSValue xr_controller_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRControllerTracker *xr_controller_tracker_class;
	JSValue obj = JS_NewObjectClass(ctx, XRControllerTracker::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_controller_tracker_class = memnew(XRControllerTracker);
	if (!xr_controller_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_controller_tracker_class);
	return obj;
}

static int js_xr_controller_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRControllerTracker::__class_id);
	classes["XRControllerTracker"] = XRControllerTracker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRControllerTracker::__class_id, &xr_controller_tracker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRPositionalTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRControllerTracker::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, xr_controller_tracker_class_constructor, "XRControllerTracker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRControllerTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_controller_tracker_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_controller_tracker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRControllerTracker");
	return m;
}

JSModuleDef *js_init_xr_controller_tracker_module(JSContext *ctx) {
	return _js_init_xr_controller_tracker_module(ctx, "godot/classes/xr_controller_tracker");
}

void register_xr_controller_tracker() {
	js_init_xr_controller_tracker_module(ctx);
}