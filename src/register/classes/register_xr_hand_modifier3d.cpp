
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/classes/xr_hand_modifier3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_hand_modifier3d_class_finalizer(JSRuntime *rt, JSValue val) {
	XRHandModifier3D *xr_hand_modifier3d = static_cast<XRHandModifier3D *>(JS_GetOpaque(val, XRHandModifier3D::__class_id));
	if (xr_hand_modifier3d)
		XRHandModifier3D::free(nullptr, xr_hand_modifier3d);
}

static JSClassDef xr_hand_modifier3d_class_def = {
	"XRHandModifier3D",
	.finalizer = xr_hand_modifier3d_class_finalizer
};

static JSValue xr_hand_modifier3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRHandModifier3D *xr_hand_modifier3d_class;
	JSValue obj = JS_NewObjectClass(ctx, XRHandModifier3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_hand_modifier3d_class = memnew(XRHandModifier3D);
	if (!xr_hand_modifier3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_hand_modifier3d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue xr_hand_modifier3d_class_set_hand_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRHandModifier3D::set_hand_tracker, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_hand_modifier3d_class_get_hand_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRHandModifier3D::get_hand_tracker, ctx, this_val, argc, argv);
};
static JSValue xr_hand_modifier3d_class_set_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRHandModifier3D::set_bone_update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_hand_modifier3d_class_get_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRHandModifier3D::get_bone_update, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_hand_modifier3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_hand_tracker", 1, &xr_hand_modifier3d_class_set_hand_tracker),
	JS_CFUNC_DEF("get_hand_tracker", 0, &xr_hand_modifier3d_class_get_hand_tracker),
	JS_CFUNC_DEF("set_bone_update", 1, &xr_hand_modifier3d_class_set_bone_update),
	JS_CFUNC_DEF("get_bone_update", 0, &xr_hand_modifier3d_class_get_bone_update),
};

void define_xr_hand_modifier3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hand_tracker"),
        JS_NewCFunction(ctx, xr_hand_modifier3d_class_get_hand_tracker, "get_hand_tracker", 0),
        JS_NewCFunction(ctx, xr_hand_modifier3d_class_set_hand_tracker, "set_hand_tracker", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bone_update"),
        JS_NewCFunction(ctx, xr_hand_modifier3d_class_get_bone_update, "get_bone_update", 0),
        JS_NewCFunction(ctx, xr_hand_modifier3d_class_set_bone_update, "set_bone_update", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_xr_hand_modifier3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRHandModifier3D::__class_id);
	classes["XRHandModifier3D"] = XRHandModifier3D::__class_id;
	class_id_list.insert(XRHandModifier3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRHandModifier3D::__class_id, &xr_hand_modifier3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModifier3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRHandModifier3D::__class_id, proto);
	define_xr_hand_modifier3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_hand_modifier3d_class_proto_funcs, _countof(xr_hand_modifier3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_hand_modifier3d_class_constructor, "XRHandModifier3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRHandModifier3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_hand_modifier3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/skeleton_modifier3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_hand_modifier3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRHandModifier3D");
	return m;
}

JSModuleDef *js_init_xr_hand_modifier3d_module(JSContext *ctx) {
	return _js_init_xr_hand_modifier3d_module(ctx, "godot/classes/xr_hand_modifier3d");
}

void register_xr_hand_modifier3d() {
	XRHandModifier3D::__init_js_class_id();
	js_init_xr_hand_modifier3d_module(ctx);
}