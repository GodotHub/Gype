
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/classes/xr_body_modifier3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_body_modifier3d_class_finalizer(JSRuntime *rt, JSValue val) {
	XRBodyModifier3D *xr_body_modifier3d = static_cast<XRBodyModifier3D *>(JS_GetOpaque(val, XRBodyModifier3D::__class_id));
	if (xr_body_modifier3d)
		XRBodyModifier3D::free(nullptr, xr_body_modifier3d);
}

static JSClassDef xr_body_modifier3d_class_def = {
	"XRBodyModifier3D",
	.finalizer = xr_body_modifier3d_class_finalizer
};

static JSValue xr_body_modifier3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRBodyModifier3D *xr_body_modifier3d_class;
	JSValue obj = JS_NewObjectClass(ctx, XRBodyModifier3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_body_modifier3d_class = memnew(XRBodyModifier3D);
	if (!xr_body_modifier3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_body_modifier3d_class);
	return obj;
}
static JSValue xr_body_modifier3d_class_set_body_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRBodyModifier3D::set_body_tracker, XRBodyModifier3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_modifier3d_class_get_body_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyModifier3D::get_body_tracker, XRBodyModifier3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_body_modifier3d_class_set_body_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRBodyModifier3D::set_body_update, XRBodyModifier3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_modifier3d_class_get_body_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyModifier3D::get_body_update, XRBodyModifier3D::__class_id, ctx, this_val, argv);
};
static JSValue xr_body_modifier3d_class_set_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRBodyModifier3D::set_bone_update, XRBodyModifier3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_modifier3d_class_get_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyModifier3D::get_bone_update, XRBodyModifier3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xr_body_modifier3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_body_tracker", 1, &xr_body_modifier3d_class_set_body_tracker),
	JS_CFUNC_DEF("get_body_tracker", 0, &xr_body_modifier3d_class_get_body_tracker),
	JS_CFUNC_DEF("set_body_update", 1, &xr_body_modifier3d_class_set_body_update),
	JS_CFUNC_DEF("get_body_update", 0, &xr_body_modifier3d_class_get_body_update),
	JS_CFUNC_DEF("set_bone_update", 1, &xr_body_modifier3d_class_set_bone_update),
	JS_CFUNC_DEF("get_bone_update", 0, &xr_body_modifier3d_class_get_bone_update),
};

static int js_xr_body_modifier3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRBodyModifier3D::__class_id);
	classes["XRBodyModifier3D"] = XRBodyModifier3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRBodyModifier3D::__class_id, &xr_body_modifier3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModifier3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRBodyModifier3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_body_modifier3d_class_proto_funcs, _countof(xr_body_modifier3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_body_modifier3d_class_constructor, "XRBodyModifier3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRBodyModifier3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_body_modifier3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_body_modifier3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRBodyModifier3D");
	return m;
}

JSModuleDef *js_init_xr_body_modifier3d_module(JSContext *ctx) {
	return _js_init_xr_body_modifier3d_module(ctx, "godot/classes/xr_body_modifier3d");
}

void register_xr_body_modifier3d() {
	js_init_xr_body_modifier3d_module(ctx);
}