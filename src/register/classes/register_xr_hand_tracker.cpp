
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/classes/xr_hand_tracker.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_hand_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	XRHandTracker *xr_hand_tracker = static_cast<XRHandTracker *>(JS_GetOpaque(val, XRHandTracker::__class_id));
	if (xr_hand_tracker)
		memdelete(xr_hand_tracker);
}

static JSClassDef xr_hand_tracker_class_def = {
	"XRHandTracker",
	.finalizer = xr_hand_tracker_class_finalizer
};

static JSValue xr_hand_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRHandTracker::__class_id);
	if (JS_IsException(obj))
		return obj;

	XRHandTracker *xr_hand_tracker_class;
	if (argc == 1) 
		xr_hand_tracker_class = static_cast<XRHandTracker *>(Variant(*argv).operator Object *());
	else 
		xr_hand_tracker_class = memnew(XRHandTracker);
	if (!xr_hand_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_hand_tracker_class);
	return obj;
}
static JSValue xr_hand_tracker_class_set_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRHandTracker::set_has_tracking_data, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_get_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRHandTracker::get_has_tracking_data, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_set_hand_tracking_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRHandTracker::set_hand_tracking_source, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_get_hand_tracking_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_tracking_source, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_flags, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_get_hand_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_flags, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_transform, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_get_hand_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_transform, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_radius, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_get_hand_joint_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_radius, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_linear_velocity, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_get_hand_joint_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_linear_velocity, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_angular_velocity, ctx, this_val, argc, argv);
};
static JSValue xr_hand_tracker_class_get_hand_joint_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_angular_velocity, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_hand_tracker_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_has_tracking_data", 1, &xr_hand_tracker_class_set_has_tracking_data),
	JS_CFUNC_DEF("get_has_tracking_data", 0, &xr_hand_tracker_class_get_has_tracking_data),
	JS_CFUNC_DEF("set_hand_tracking_source", 1, &xr_hand_tracker_class_set_hand_tracking_source),
	JS_CFUNC_DEF("get_hand_tracking_source", 0, &xr_hand_tracker_class_get_hand_tracking_source),
	JS_CFUNC_DEF("set_hand_joint_flags", 2, &xr_hand_tracker_class_set_hand_joint_flags),
	JS_CFUNC_DEF("get_hand_joint_flags", 1, &xr_hand_tracker_class_get_hand_joint_flags),
	JS_CFUNC_DEF("set_hand_joint_transform", 2, &xr_hand_tracker_class_set_hand_joint_transform),
	JS_CFUNC_DEF("get_hand_joint_transform", 1, &xr_hand_tracker_class_get_hand_joint_transform),
	JS_CFUNC_DEF("set_hand_joint_radius", 2, &xr_hand_tracker_class_set_hand_joint_radius),
	JS_CFUNC_DEF("get_hand_joint_radius", 1, &xr_hand_tracker_class_get_hand_joint_radius),
	JS_CFUNC_DEF("set_hand_joint_linear_velocity", 2, &xr_hand_tracker_class_set_hand_joint_linear_velocity),
	JS_CFUNC_DEF("get_hand_joint_linear_velocity", 1, &xr_hand_tracker_class_get_hand_joint_linear_velocity),
	JS_CFUNC_DEF("set_hand_joint_angular_velocity", 2, &xr_hand_tracker_class_set_hand_joint_angular_velocity),
	JS_CFUNC_DEF("get_hand_joint_angular_velocity", 1, &xr_hand_tracker_class_get_hand_joint_angular_velocity),
};

static void define_xr_hand_tracker_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "has_tracking_data"),
        JS_NewCFunction(ctx, xr_hand_tracker_class_get_has_tracking_data, "get_has_tracking_data", 0),
        JS_NewCFunction(ctx, xr_hand_tracker_class_set_has_tracking_data, "set_has_tracking_data", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "hand_tracking_source"),
        JS_NewCFunction(ctx, xr_hand_tracker_class_get_hand_tracking_source, "get_hand_tracking_source", 0),
        JS_NewCFunction(ctx, xr_hand_tracker_class_set_hand_tracking_source, "set_hand_tracking_source", 1),
        JS_PROP_GETSET
    );
	
}

static void define_xr_hand_tracker_enum(JSContext *ctx, JSValue proto) {
	JSValue HandTrackingSource_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, HandTrackingSource_obj, "HAND_TRACKING_SOURCE_UNKNOWN", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, HandTrackingSource_obj, "HAND_TRACKING_SOURCE_UNOBSTRUCTED", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, HandTrackingSource_obj, "HAND_TRACKING_SOURCE_CONTROLLER", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, HandTrackingSource_obj, "HAND_TRACKING_SOURCE_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "HandTrackingSource", HandTrackingSource_obj);
	JSValue HandJoint_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_PALM", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_WRIST", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_THUMB_METACARPAL", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_THUMB_PHALANX_PROXIMAL", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_THUMB_PHALANX_DISTAL", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_THUMB_TIP", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_INDEX_FINGER_METACARPAL", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_INDEX_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_INDEX_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_INDEX_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_INDEX_FINGER_TIP", JS_NewInt64(ctx, 10));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_MIDDLE_FINGER_METACARPAL", JS_NewInt64(ctx, 11));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_MIDDLE_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 12));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_MIDDLE_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 13));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_MIDDLE_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 14));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_MIDDLE_FINGER_TIP", JS_NewInt64(ctx, 15));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_RING_FINGER_METACARPAL", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_RING_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 17));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_RING_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 18));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_RING_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 19));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_RING_FINGER_TIP", JS_NewInt64(ctx, 20));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_PINKY_FINGER_METACARPAL", JS_NewInt64(ctx, 21));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_PINKY_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 22));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_PINKY_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 23));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_PINKY_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 24));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_PINKY_FINGER_TIP", JS_NewInt64(ctx, 25));
	JS_SetPropertyStr(ctx, HandJoint_obj, "HAND_JOINT_MAX", JS_NewInt64(ctx, 26));
	JS_SetPropertyStr(ctx, proto, "HandJoint", HandJoint_obj);
	JSValue HandJointFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, HandJointFlags_obj, "HAND_JOINT_FLAG_ORIENTATION_VALID", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, HandJointFlags_obj, "HAND_JOINT_FLAG_ORIENTATION_TRACKED", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, HandJointFlags_obj, "HAND_JOINT_FLAG_POSITION_VALID", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, HandJointFlags_obj, "HAND_JOINT_FLAG_POSITION_TRACKED", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, HandJointFlags_obj, "HAND_JOINT_FLAG_LINEAR_VELOCITY_VALID", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, HandJointFlags_obj, "HAND_JOINT_FLAG_ANGULAR_VELOCITY_VALID", JS_NewInt64(ctx, 32));
	JS_SetPropertyStr(ctx, proto, "HandJointFlags", HandJointFlags_obj);
}

static int js_xr_hand_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["XRHandTracker"] = XRHandTracker::__class_id;
	class_id_list.insert(XRHandTracker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRHandTracker::__class_id, &xr_hand_tracker_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRHandTracker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, XRPositionalTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRHandTracker::__class_id, proto);

	define_xr_hand_tracker_property(ctx, proto);
	define_xr_hand_tracker_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_hand_tracker_class_proto_funcs, _countof(xr_hand_tracker_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_hand_tracker_class_constructor, "XRHandTracker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "XRHandTracker", ctor);
	constructors[XRHandTracker::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_xr_hand_tracker_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/xr_positional_tracker';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_hand_tracker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRHandTracker");
	return m;
}

JSModuleDef *js_init_xr_hand_tracker_module(JSContext *ctx) {
	return _js_init_xr_hand_tracker_module(ctx, "@godot/classes/xr_hand_tracker");
}

void register_xr_hand_tracker() {
	XRHandTracker::__init_js_class_id();
	js_init_xr_hand_tracker_module(ctx);
}