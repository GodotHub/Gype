
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/xr_camera3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_camera3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef xr_camera3d_class_def = {
	"XRCamera3D",
	.finalizer = xr_camera3d_class_finalizer
};

static JSValue xr_camera3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRCamera3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	XRCamera3D *xr_camera3d_class;
	if (argc == 1) 
		xr_camera3d_class = static_cast<XRCamera3D *>(Variant(*argv).operator Object *());
	else 
		xr_camera3d_class = memnew(XRCamera3D);
	if (!xr_camera3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_camera3d_class);
	return obj;
}

static void define_xr_camera3d_property(JSContext *ctx, JSValue proto) {
	
}

static void define_xr_camera3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_xr_camera3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["XRCamera3D"] = XRCamera3D::__class_id;
	class_id_list.insert(XRCamera3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRCamera3D::__class_id, &xr_camera3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRCamera3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Camera3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRCamera3D::__class_id, proto);

	define_xr_camera3d_property(ctx, proto);
	define_xr_camera3d_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, xr_camera3d_class_constructor, "XRCamera3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRCamera3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_camera3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/camera3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_camera3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRCamera3D");
	return m;
}

JSModuleDef *js_init_xr_camera3d_module(JSContext *ctx) {
	return _js_init_xr_camera3d_module(ctx, "@godot/classes/xr_camera3d");
}

void register_xr_camera3d() {
	XRCamera3D::__init_js_class_id();
	js_init_xr_camera3d_module(ctx);
}