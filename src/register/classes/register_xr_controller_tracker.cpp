
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/classes/xr_controller_tracker.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_controller_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef xr_controller_tracker_class_def = {
	"XRControllerTracker",
	.finalizer = xr_controller_tracker_class_finalizer
};

static JSValue xr_controller_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRControllerTracker::__class_id);
	if (JS_IsException(obj))
		return obj;
	XRControllerTracker *xr_controller_tracker_class = memnew(XRControllerTracker);
	if (!xr_controller_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_controller_tracker_class);	
	return obj;
}

void define_xr_controller_tracker_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_xr_controller_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRControllerTracker::__class_id);
	classes["XRControllerTracker"] = XRControllerTracker::__class_id;
	class_id_list.insert(XRControllerTracker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRControllerTracker::__class_id, &xr_controller_tracker_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRControllerTracker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, XRPositionalTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRControllerTracker::__class_id, proto);

	define_xr_controller_tracker_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, xr_controller_tracker_class_constructor, "XRControllerTracker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRControllerTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_controller_tracker_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/xr_positional_tracker';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	XRControllerTracker::__init_js_class_id();
	js_init_xr_controller_tracker_module(ctx);
}