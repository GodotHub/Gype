
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_interface_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef xr_interface_class_def = {
	"XRInterface",
	.finalizer = xr_interface_class_finalizer
};

static JSValue xr_interface_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRInterface::__class_id);
	if (JS_IsException(obj))
		return obj;
	XRInterface *xr_interface_class;
	if (argc == 1) {
		Variant vobj = *argv;
		xr_interface_class = static_cast<XRInterface *>(static_cast<Object *>(vobj));
	} else {
		xr_interface_class = memnew(XRInterface);
	}
	if (!xr_interface_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_interface_class);	
	return obj;
}
static JSValue xr_interface_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRInterface::get_name, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_capabilities(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRInterface::get_capabilities, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_is_primary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::is_primary, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_set_primary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&XRInterface::set_primary, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_is_initialized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRInterface::is_initialized, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_initialize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::initialize, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_uninitialize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&XRInterface::uninitialize, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_get_system_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::get_system_info, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_tracking_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRInterface::get_tracking_status, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_render_target_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::get_render_target_size, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_view_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::get_view_count, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_trigger_haptic_pulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&XRInterface::trigger_haptic_pulse, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_supports_play_area_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::supports_play_area_mode, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_play_area_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRInterface::get_play_area_mode, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_set_play_area_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::set_play_area_mode, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_play_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRInterface::get_play_area, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_anchor_detection_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRInterface::get_anchor_detection_is_enabled, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_set_anchor_detection_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&XRInterface::set_anchor_detection_is_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_get_camera_feed_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::get_camera_feed_id, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_is_passthrough_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::is_passthrough_supported, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_is_passthrough_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::is_passthrough_enabled, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_start_passthrough(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::start_passthrough, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_stop_passthrough(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&XRInterface::stop_passthrough, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_get_transform_for_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::get_transform_for_view, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_projection_for_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::get_projection_for_view, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_supported_environment_blend_modes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::get_supported_environment_blend_modes, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_set_environment_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterface::set_environment_blend_mode, ctx, this_val, argc, argv);
};
static JSValue xr_interface_class_get_environment_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRInterface::get_environment_blend_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_interface_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_name", 0, &xr_interface_class_get_name),
	JS_CFUNC_DEF("get_capabilities", 0, &xr_interface_class_get_capabilities),
	JS_CFUNC_DEF("is_primary", 0, &xr_interface_class_is_primary),
	JS_CFUNC_DEF("set_primary", 1, &xr_interface_class_set_primary),
	JS_CFUNC_DEF("is_initialized", 0, &xr_interface_class_is_initialized),
	JS_CFUNC_DEF("initialize", 0, &xr_interface_class_initialize),
	JS_CFUNC_DEF("uninitialize", 0, &xr_interface_class_uninitialize),
	JS_CFUNC_DEF("get_system_info", 0, &xr_interface_class_get_system_info),
	JS_CFUNC_DEF("get_tracking_status", 0, &xr_interface_class_get_tracking_status),
	JS_CFUNC_DEF("get_render_target_size", 0, &xr_interface_class_get_render_target_size),
	JS_CFUNC_DEF("get_view_count", 0, &xr_interface_class_get_view_count),
	JS_CFUNC_DEF("trigger_haptic_pulse", 6, &xr_interface_class_trigger_haptic_pulse),
	JS_CFUNC_DEF("supports_play_area_mode", 1, &xr_interface_class_supports_play_area_mode),
	JS_CFUNC_DEF("get_play_area_mode", 0, &xr_interface_class_get_play_area_mode),
	JS_CFUNC_DEF("set_play_area_mode", 1, &xr_interface_class_set_play_area_mode),
	JS_CFUNC_DEF("get_play_area", 0, &xr_interface_class_get_play_area),
	JS_CFUNC_DEF("get_anchor_detection_is_enabled", 0, &xr_interface_class_get_anchor_detection_is_enabled),
	JS_CFUNC_DEF("set_anchor_detection_is_enabled", 1, &xr_interface_class_set_anchor_detection_is_enabled),
	JS_CFUNC_DEF("get_camera_feed_id", 0, &xr_interface_class_get_camera_feed_id),
	JS_CFUNC_DEF("is_passthrough_supported", 0, &xr_interface_class_is_passthrough_supported),
	JS_CFUNC_DEF("is_passthrough_enabled", 0, &xr_interface_class_is_passthrough_enabled),
	JS_CFUNC_DEF("start_passthrough", 0, &xr_interface_class_start_passthrough),
	JS_CFUNC_DEF("stop_passthrough", 0, &xr_interface_class_stop_passthrough),
	JS_CFUNC_DEF("get_transform_for_view", 2, &xr_interface_class_get_transform_for_view),
	JS_CFUNC_DEF("get_projection_for_view", 4, &xr_interface_class_get_projection_for_view),
	JS_CFUNC_DEF("get_supported_environment_blend_modes", 0, &xr_interface_class_get_supported_environment_blend_modes),
	JS_CFUNC_DEF("set_environment_blend_mode", 1, &xr_interface_class_set_environment_blend_mode),
	JS_CFUNC_DEF("get_environment_blend_mode", 0, &xr_interface_class_get_environment_blend_mode),
};

void define_xr_interface_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "interface_is_primary"),
        JS_NewCFunction(ctx, xr_interface_class_is_primary, "is_primary", 0),
        JS_NewCFunction(ctx, xr_interface_class_set_primary, "set_primary", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "xr_play_area_mode"),
        JS_NewCFunction(ctx, xr_interface_class_get_play_area_mode, "get_play_area_mode", 0),
        JS_NewCFunction(ctx, xr_interface_class_set_play_area_mode, "set_play_area_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "environment_blend_mode"),
        JS_NewCFunction(ctx, xr_interface_class_get_environment_blend_mode, "get_environment_blend_mode", 0),
        JS_NewCFunction(ctx, xr_interface_class_set_environment_blend_mode, "set_environment_blend_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ar_is_anchor_detection_enabled"),
        JS_NewCFunction(ctx, xr_interface_class_get_anchor_detection_is_enabled, "get_anchor_detection_is_enabled", 0),
        JS_NewCFunction(ctx, xr_interface_class_set_anchor_detection_is_enabled, "set_anchor_detection_is_enabled", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Capabilities_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Capabilities_obj, "XR_NONE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Capabilities_obj, "XR_MONO", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Capabilities_obj, "XR_STEREO", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Capabilities_obj, "XR_QUAD", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Capabilities_obj, "XR_VR", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, Capabilities_obj, "XR_AR", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, Capabilities_obj, "XR_EXTERNAL", JS_NewInt64(ctx, 32));
	JS_SetPropertyStr(ctx, proto, "Capabilities", Capabilities_obj);
	JSValue TrackingStatus_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, TrackingStatus_obj, "XR_NORMAL_TRACKING", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, TrackingStatus_obj, "XR_EXCESSIVE_MOTION", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, TrackingStatus_obj, "XR_INSUFFICIENT_FEATURES", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, TrackingStatus_obj, "XR_UNKNOWN_TRACKING", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, TrackingStatus_obj, "XR_NOT_TRACKING", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "TrackingStatus", TrackingStatus_obj);
	JSValue PlayAreaMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, PlayAreaMode_obj, "XR_PLAY_AREA_UNKNOWN", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, PlayAreaMode_obj, "XR_PLAY_AREA_3DOF", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, PlayAreaMode_obj, "XR_PLAY_AREA_SITTING", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, PlayAreaMode_obj, "XR_PLAY_AREA_ROOMSCALE", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, PlayAreaMode_obj, "XR_PLAY_AREA_STAGE", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "PlayAreaMode", PlayAreaMode_obj);
	JSValue EnvironmentBlendMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, EnvironmentBlendMode_obj, "XR_ENV_BLEND_MODE_OPAQUE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, EnvironmentBlendMode_obj, "XR_ENV_BLEND_MODE_ADDITIVE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, EnvironmentBlendMode_obj, "XR_ENV_BLEND_MODE_ALPHA_BLEND", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "EnvironmentBlendMode", EnvironmentBlendMode_obj);
}

static int js_xr_interface_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRInterface::__class_id);
	classes["XRInterface"] = XRInterface::__class_id;
	class_id_list.insert(XRInterface::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRInterface::__class_id, &xr_interface_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRInterface::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRInterface::__class_id, proto);

	define_xr_interface_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_interface_class_proto_funcs, _countof(xr_interface_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_interface_class_constructor, "XRInterface", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRInterface", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_interface_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_interface_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRInterface");
	return m;
}

JSModuleDef *js_init_xr_interface_module(JSContext *ctx) {
	return _js_init_xr_interface_module(ctx, "@godot/classes/xr_interface");
}

void register_xr_interface() {
	XRInterface::__init_js_class_id();
	js_init_xr_interface_module(ctx);
}