
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/xr_camera3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_camera3d_class_finalizer(JSRuntime *rt, JSValue val) {
	XRCamera3D *xr_camera3d = static_cast<XRCamera3D *>(JS_GetOpaque(val, XRCamera3D::__class_id));
	if (xr_camera3d)
		XRCamera3D::free(nullptr, xr_camera3d);
}

static JSClassDef xr_camera3d_class_def = {
	"XRCamera3D",
	.finalizer = xr_camera3d_class_finalizer
};

static JSValue xr_camera3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRCamera3D *xr_camera3d_class;
	JSValue obj = JS_NewObjectClass(ctx, XRCamera3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_camera3d_class = memnew(XRCamera3D);
	if (!xr_camera3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_camera3d_class);
	return obj;
}

static int js_xr_camera3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRCamera3D::__class_id);
	classes["XRCamera3D"] = XRCamera3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRCamera3D::__class_id, &xr_camera3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Camera3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRCamera3D::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, xr_camera3d_class_constructor, "XRCamera3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRCamera3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_camera3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_camera3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRCamera3D");
	return m;
}

JSModuleDef *js_init_xr_camera3d_module(JSContext *ctx) {
	return _js_init_xr_camera3d_module(ctx, "godot/classes/xr_camera3d");
}

void register_xr_camera3d() {
	js_init_xr_camera3d_module(ctx);
}