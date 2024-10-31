
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_node3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_node3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef xr_node3d_class_def = {
	"XRNode3D",
	.finalizer = xr_node3d_class_finalizer
};

static JSValue xr_node3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRNode3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	XRNode3D *xr_node3d_class;
	if (argc == 1) 
		xr_node3d_class = static_cast<XRNode3D *>(static_cast<Object *>(Variant(*argv)));
	else 
		xr_node3d_class = memnew(XRNode3D);
	if (!xr_node3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_node3d_class);	
	return obj;
}
static JSValue xr_node3d_class_set_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRNode3D::set_tracker, ctx, this_val, argc, argv);
};
static JSValue xr_node3d_class_get_tracker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRNode3D::get_tracker, ctx, this_val, argc, argv);
};
static JSValue xr_node3d_class_set_pose_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRNode3D::set_pose_name, ctx, this_val, argc, argv);
};
static JSValue xr_node3d_class_get_pose_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRNode3D::get_pose_name, ctx, this_val, argc, argv);
};
static JSValue xr_node3d_class_set_show_when_tracked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRNode3D::set_show_when_tracked, ctx, this_val, argc, argv);
};
static JSValue xr_node3d_class_get_show_when_tracked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRNode3D::get_show_when_tracked, ctx, this_val, argc, argv);
};
static JSValue xr_node3d_class_get_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRNode3D::get_is_active, ctx, this_val, argc, argv);
};
static JSValue xr_node3d_class_get_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRNode3D::get_has_tracking_data, ctx, this_val, argc, argv);
};
static JSValue xr_node3d_class_get_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRNode3D::get_pose, ctx, this_val, argc, argv);
};
static JSValue xr_node3d_class_trigger_haptic_pulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRNode3D::trigger_haptic_pulse, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_node3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_tracker", 1, &xr_node3d_class_set_tracker),
	JS_CFUNC_DEF("get_tracker", 0, &xr_node3d_class_get_tracker),
	JS_CFUNC_DEF("set_pose_name", 1, &xr_node3d_class_set_pose_name),
	JS_CFUNC_DEF("get_pose_name", 0, &xr_node3d_class_get_pose_name),
	JS_CFUNC_DEF("set_show_when_tracked", 1, &xr_node3d_class_set_show_when_tracked),
	JS_CFUNC_DEF("get_show_when_tracked", 0, &xr_node3d_class_get_show_when_tracked),
	JS_CFUNC_DEF("get_is_active", 0, &xr_node3d_class_get_is_active),
	JS_CFUNC_DEF("get_has_tracking_data", 0, &xr_node3d_class_get_has_tracking_data),
	JS_CFUNC_DEF("get_pose", 0, &xr_node3d_class_get_pose),
	JS_CFUNC_DEF("trigger_haptic_pulse", 5, &xr_node3d_class_trigger_haptic_pulse),
};
static JSValue xr_node3d_class_get_tracking_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	XRNode3D *opaque = reinterpret_cast<XRNode3D *>(JS_GetOpaque(this_val, XRNode3D::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "tracking_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "tracking_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "tracking_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_xr_node3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tracker"),
        JS_NewCFunction(ctx, xr_node3d_class_get_tracker, "get_tracker", 0),
        JS_NewCFunction(ctx, xr_node3d_class_set_tracker, "set_tracker", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pose"),
        JS_NewCFunction(ctx, xr_node3d_class_get_pose_name, "get_pose_name", 0),
        JS_NewCFunction(ctx, xr_node3d_class_set_pose_name, "set_pose_name", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "show_when_tracked"),
        JS_NewCFunction(ctx, xr_node3d_class_get_show_when_tracked, "get_show_when_tracked", 0),
        JS_NewCFunction(ctx, xr_node3d_class_set_show_when_tracked, "set_show_when_tracked", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "tracking_changed"),
		JS_NewCFunction(ctx, xr_node3d_class_get_tracking_changed_signal, "get_tracking_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_xr_node3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_xr_node3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRNode3D::__class_id);
	classes["XRNode3D"] = XRNode3D::__class_id;
	class_id_list.insert(XRNode3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRNode3D::__class_id, &xr_node3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRNode3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRNode3D::__class_id, proto);

	define_xr_node3d_property(ctx, proto);
	define_xr_node3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_node3d_class_proto_funcs, _countof(xr_node3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_node3d_class_constructor, "XRNode3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRNode3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_node3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_node3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRNode3D");
	return m;
}

JSModuleDef *js_init_xr_node3d_module(JSContext *ctx) {
	return _js_init_xr_node3d_module(ctx, "@godot/classes/xr_node3d");
}

void register_xr_node3d() {
	XRNode3D::__init_js_class_id();
	js_init_xr_node3d_module(ctx);
}