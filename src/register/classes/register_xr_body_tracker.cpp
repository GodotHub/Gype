
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_body_tracker.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_body_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef xr_body_tracker_class_def = {
	"XRBodyTracker",
	.finalizer = xr_body_tracker_class_finalizer
};

static JSValue xr_body_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRBodyTracker::__class_id);
	if (JS_IsException(obj))
		return obj;
	XRBodyTracker *xr_body_tracker_class = memnew(XRBodyTracker);
	if (!xr_body_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_body_tracker_class);	
	return obj;
}
static JSValue xr_body_tracker_class_set_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&XRBodyTracker::set_has_tracking_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRBodyTracker::get_has_tracking_data, ctx, this_val, argc, argv);
};
static JSValue xr_body_tracker_class_set_body_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&XRBodyTracker::set_body_flags, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_body_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRBodyTracker::get_body_flags, ctx, this_val, argc, argv);
};
static JSValue xr_body_tracker_class_set_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&XRBodyTracker::set_joint_flags, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRBodyTracker::get_joint_flags, ctx, this_val, argc, argv);
};
static JSValue xr_body_tracker_class_set_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&XRBodyTracker::set_joint_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRBodyTracker::get_joint_transform, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_body_tracker_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_has_tracking_data", 1, &xr_body_tracker_class_set_has_tracking_data),
	JS_CFUNC_DEF("get_has_tracking_data", 0, &xr_body_tracker_class_get_has_tracking_data),
	JS_CFUNC_DEF("set_body_flags", 1, &xr_body_tracker_class_set_body_flags),
	JS_CFUNC_DEF("get_body_flags", 0, &xr_body_tracker_class_get_body_flags),
	JS_CFUNC_DEF("set_joint_flags", 2, &xr_body_tracker_class_set_joint_flags),
	JS_CFUNC_DEF("get_joint_flags", 1, &xr_body_tracker_class_get_joint_flags),
	JS_CFUNC_DEF("set_joint_transform", 2, &xr_body_tracker_class_set_joint_transform),
	JS_CFUNC_DEF("get_joint_transform", 1, &xr_body_tracker_class_get_joint_transform),
};

void define_xr_body_tracker_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "has_tracking_data"),
        JS_NewCFunction(ctx, xr_body_tracker_class_get_has_tracking_data, "get_has_tracking_data", 0),
        JS_NewCFunction(ctx, xr_body_tracker_class_set_has_tracking_data, "set_has_tracking_data", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "body_flags"),
        JS_NewCFunction(ctx, xr_body_tracker_class_get_body_flags, "get_body_flags", 0),
        JS_NewCFunction(ctx, xr_body_tracker_class_set_body_flags, "set_body_flags", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue BodyFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, BodyFlags_obj, "BODY_FLAG_UPPER_BODY_SUPPORTED", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, BodyFlags_obj, "BODY_FLAG_LOWER_BODY_SUPPORTED", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, BodyFlags_obj, "BODY_FLAG_HANDS_SUPPORTED", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "BodyFlags", BodyFlags_obj);
	JSValue Joint_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_ROOT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_HIPS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_SPINE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_CHEST", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_UPPER_CHEST", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_NECK", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_HEAD", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_HEAD_TIP", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_SHOULDER", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_UPPER_ARM", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_LOWER_ARM", JS_NewInt64(ctx, 10));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_SHOULDER", JS_NewInt64(ctx, 11));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_UPPER_ARM", JS_NewInt64(ctx, 12));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_LOWER_ARM", JS_NewInt64(ctx, 13));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_UPPER_LEG", JS_NewInt64(ctx, 14));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_LOWER_LEG", JS_NewInt64(ctx, 15));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_FOOT", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_TOES", JS_NewInt64(ctx, 17));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_UPPER_LEG", JS_NewInt64(ctx, 18));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_LOWER_LEG", JS_NewInt64(ctx, 19));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_FOOT", JS_NewInt64(ctx, 20));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_TOES", JS_NewInt64(ctx, 21));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_HAND", JS_NewInt64(ctx, 22));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_PALM", JS_NewInt64(ctx, 23));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_WRIST", JS_NewInt64(ctx, 24));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_THUMB_METACARPAL", JS_NewInt64(ctx, 25));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_THUMB_PHALANX_PROXIMAL", JS_NewInt64(ctx, 26));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_THUMB_PHALANX_DISTAL", JS_NewInt64(ctx, 27));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_THUMB_TIP", JS_NewInt64(ctx, 28));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_INDEX_FINGER_METACARPAL", JS_NewInt64(ctx, 29));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_INDEX_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 30));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_INDEX_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 31));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_INDEX_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 32));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_INDEX_FINGER_TIP", JS_NewInt64(ctx, 33));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_MIDDLE_FINGER_METACARPAL", JS_NewInt64(ctx, 34));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_MIDDLE_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 35));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_MIDDLE_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 36));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_MIDDLE_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 37));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_MIDDLE_FINGER_TIP", JS_NewInt64(ctx, 38));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_RING_FINGER_METACARPAL", JS_NewInt64(ctx, 39));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_RING_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 40));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_RING_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 41));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_RING_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 42));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_RING_FINGER_TIP", JS_NewInt64(ctx, 43));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_PINKY_FINGER_METACARPAL", JS_NewInt64(ctx, 44));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_PINKY_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 45));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_PINKY_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 46));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_PINKY_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 47));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_LEFT_PINKY_FINGER_TIP", JS_NewInt64(ctx, 48));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_HAND", JS_NewInt64(ctx, 49));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_PALM", JS_NewInt64(ctx, 50));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_WRIST", JS_NewInt64(ctx, 51));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_THUMB_METACARPAL", JS_NewInt64(ctx, 52));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_THUMB_PHALANX_PROXIMAL", JS_NewInt64(ctx, 53));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_THUMB_PHALANX_DISTAL", JS_NewInt64(ctx, 54));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_THUMB_TIP", JS_NewInt64(ctx, 55));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_INDEX_FINGER_METACARPAL", JS_NewInt64(ctx, 56));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_INDEX_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 57));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_INDEX_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 58));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_INDEX_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 59));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_INDEX_FINGER_TIP", JS_NewInt64(ctx, 60));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_MIDDLE_FINGER_METACARPAL", JS_NewInt64(ctx, 61));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_MIDDLE_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 62));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_MIDDLE_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 63));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_MIDDLE_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 64));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_MIDDLE_FINGER_TIP", JS_NewInt64(ctx, 65));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_RING_FINGER_METACARPAL", JS_NewInt64(ctx, 66));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_RING_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 67));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_RING_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 68));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_RING_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 69));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_RING_FINGER_TIP", JS_NewInt64(ctx, 70));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_PINKY_FINGER_METACARPAL", JS_NewInt64(ctx, 71));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_PINKY_FINGER_PHALANX_PROXIMAL", JS_NewInt64(ctx, 72));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_PINKY_FINGER_PHALANX_INTERMEDIATE", JS_NewInt64(ctx, 73));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_PINKY_FINGER_PHALANX_DISTAL", JS_NewInt64(ctx, 74));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_RIGHT_PINKY_FINGER_TIP", JS_NewInt64(ctx, 75));
	JS_SetPropertyStr(ctx, Joint_obj, "JOINT_MAX", JS_NewInt64(ctx, 76));
	JS_SetPropertyStr(ctx, proto, "Joint", Joint_obj);
	JSValue JointFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, JointFlags_obj, "JOINT_FLAG_ORIENTATION_VALID", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, JointFlags_obj, "JOINT_FLAG_ORIENTATION_TRACKED", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, JointFlags_obj, "JOINT_FLAG_POSITION_VALID", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, JointFlags_obj, "JOINT_FLAG_POSITION_TRACKED", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, proto, "JointFlags", JointFlags_obj);
}

static int js_xr_body_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRBodyTracker::__class_id);
	classes["XRBodyTracker"] = XRBodyTracker::__class_id;
	class_id_list.insert(XRBodyTracker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRBodyTracker::__class_id, &xr_body_tracker_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRBodyTracker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, XRPositionalTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRBodyTracker::__class_id, proto);

	define_xr_body_tracker_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_body_tracker_class_proto_funcs, _countof(xr_body_tracker_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_body_tracker_class_constructor, "XRBodyTracker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRBodyTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_body_tracker_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/xr_positional_tracker';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_body_tracker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRBodyTracker");
	return m;
}

JSModuleDef *js_init_xr_body_tracker_module(JSContext *ctx) {
	return _js_init_xr_body_tracker_module(ctx, "godot/classes/xr_body_tracker");
}

void register_xr_body_tracker() {
	XRBodyTracker::__init_js_class_id();
	js_init_xr_body_tracker_module(ctx);
}