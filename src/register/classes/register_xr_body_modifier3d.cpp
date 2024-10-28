
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/classes/xr_body_modifier3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void xr_body_modifier3d_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef xr_body_modifier3d_class_def = {
	"XRBodyModifier3D",
	.finalizer = xr_body_modifier3d_class_finalizer
};

static JSValue xr_body_modifier3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRBodyModifier3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	XRBodyModifier3D *xr_body_modifier3d_class = memnew(XRBodyModifier3D);
	if (!xr_body_modifier3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_body_modifier3d_class);
	return obj;
}
static JSValue xr_body_modifier3d_class_set_body_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&XRBodyModifier3D::set_body_tracker, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_modifier3d_class_get_body_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRBodyModifier3D::get_body_tracker, ctx, this_val, argc, argv);
};
static JSValue xr_body_modifier3d_class_set_body_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&XRBodyModifier3D::set_body_update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_modifier3d_class_get_body_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRBodyModifier3D::get_body_update, ctx, this_val, argc, argv);
};
static JSValue xr_body_modifier3d_class_set_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&XRBodyModifier3D::set_bone_update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_modifier3d_class_get_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRBodyModifier3D::get_bone_update, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_body_modifier3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_body_tracker", 1, &xr_body_modifier3d_class_set_body_tracker),
	JS_CFUNC_DEF("get_body_tracker", 0, &xr_body_modifier3d_class_get_body_tracker),
	JS_CFUNC_DEF("set_body_update", 1, &xr_body_modifier3d_class_set_body_update),
	JS_CFUNC_DEF("get_body_update", 0, &xr_body_modifier3d_class_get_body_update),
	JS_CFUNC_DEF("set_bone_update", 1, &xr_body_modifier3d_class_set_bone_update),
	JS_CFUNC_DEF("get_bone_update", 0, &xr_body_modifier3d_class_get_bone_update),
};

void define_xr_body_modifier3d_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "body_tracker"),
			JS_NewCFunction(ctx, xr_body_modifier3d_class_get_body_tracker, "get_body_tracker", 0),
			JS_NewCFunction(ctx, xr_body_modifier3d_class_set_body_tracker, "set_body_tracker", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "body_update"),
			JS_NewCFunction(ctx, xr_body_modifier3d_class_get_body_update, "get_body_update", 0),
			JS_NewCFunction(ctx, xr_body_modifier3d_class_set_body_update, "set_body_update", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "bone_update"),
			JS_NewCFunction(ctx, xr_body_modifier3d_class_get_bone_update, "get_bone_update", 0),
			JS_NewCFunction(ctx, xr_body_modifier3d_class_set_bone_update, "set_bone_update", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue BodyUpdate_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, BodyUpdate_obj, "BODY_UPDATE_UPPER_BODY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, BodyUpdate_obj, "BODY_UPDATE_LOWER_BODY", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, BodyUpdate_obj, "BODY_UPDATE_HANDS", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "BodyUpdate", BodyUpdate_obj);
	JSValue BoneUpdate_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, BoneUpdate_obj, "BONE_UPDATE_FULL", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, BoneUpdate_obj, "BONE_UPDATE_ROTATION_ONLY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, BoneUpdate_obj, "BONE_UPDATE_MAX", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "BoneUpdate", BoneUpdate_obj);
}

static int js_xr_body_modifier3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRBodyModifier3D::__class_id);
	classes["XRBodyModifier3D"] = XRBodyModifier3D::__class_id;
	class_id_list.insert(XRBodyModifier3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRBodyModifier3D::__class_id, &xr_body_modifier3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRBodyModifier3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModifier3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRBodyModifier3D::__class_id, proto);

	define_xr_body_modifier3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_body_modifier3d_class_proto_funcs, _countof(xr_body_modifier3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_body_modifier3d_class_constructor, "XRBodyModifier3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRBodyModifier3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_body_modifier3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/skeleton_modifier3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	XRBodyModifier3D::__init_js_class_id();
	js_init_xr_body_modifier3d_module(ctx);
}