
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/xr_face_modifier3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_face_modifier3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef xr_face_modifier3d_class_def = {
	"XRFaceModifier3D",
	.finalizer = xr_face_modifier3d_class_finalizer
};

static JSValue xr_face_modifier3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRFaceModifier3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	XRFaceModifier3D *xr_face_modifier3d_class;
	if (argc == 1) 
		xr_face_modifier3d_class = static_cast<XRFaceModifier3D *>(Variant(*argv).operator Object *());
	else 
		xr_face_modifier3d_class = memnew(XRFaceModifier3D);
	if (!xr_face_modifier3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_face_modifier3d_class);
	return obj;
}
static JSValue xr_face_modifier3d_class_set_face_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRFaceModifier3D::set_face_tracker, ctx, this_val, argc, argv);
};
static JSValue xr_face_modifier3d_class_get_face_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRFaceModifier3D::get_face_tracker, ctx, this_val, argc, argv);
};
static JSValue xr_face_modifier3d_class_set_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRFaceModifier3D::set_target, ctx, this_val, argc, argv);
};
static JSValue xr_face_modifier3d_class_get_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRFaceModifier3D::get_target, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_face_modifier3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_face_tracker", 1, &xr_face_modifier3d_class_set_face_tracker),
	JS_CFUNC_DEF("get_face_tracker", 0, &xr_face_modifier3d_class_get_face_tracker),
	JS_CFUNC_DEF("set_target", 1, &xr_face_modifier3d_class_set_target),
	JS_CFUNC_DEF("get_target", 0, &xr_face_modifier3d_class_get_target),
};

static void define_xr_face_modifier3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "face_tracker"),
        JS_NewCFunction(ctx, xr_face_modifier3d_class_get_face_tracker, "get_face_tracker", 0),
        JS_NewCFunction(ctx, xr_face_modifier3d_class_set_face_tracker, "set_face_tracker", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "target"),
        JS_NewCFunction(ctx, xr_face_modifier3d_class_get_target, "get_target", 0),
        JS_NewCFunction(ctx, xr_face_modifier3d_class_set_target, "set_target", 1),
        JS_PROP_GETSET
    );
	
}

static void define_xr_face_modifier3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_xr_face_modifier3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["XRFaceModifier3D"] = XRFaceModifier3D::__class_id;
	class_id_list.insert(XRFaceModifier3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRFaceModifier3D::__class_id, &xr_face_modifier3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRFaceModifier3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRFaceModifier3D::__class_id, proto);

	define_xr_face_modifier3d_property(ctx, proto);
	define_xr_face_modifier3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_face_modifier3d_class_proto_funcs, _countof(xr_face_modifier3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_face_modifier3d_class_constructor, "XRFaceModifier3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRFaceModifier3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_face_modifier3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_face_modifier3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRFaceModifier3D");
	return m;
}

JSModuleDef *js_init_xr_face_modifier3d_module(JSContext *ctx) {
	return _js_init_xr_face_modifier3d_module(ctx, "@godot/classes/xr_face_modifier3d");
}

void register_xr_face_modifier3d() {
	XRFaceModifier3D::__init_js_class_id();
	js_init_xr_face_modifier3d_module(ctx);
}