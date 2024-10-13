
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/classes/open_xr_interface.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_interface_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRInterface *open_xr_interface = static_cast<OpenXRInterface *>(JS_GetOpaque(val, OpenXRInterface::__class_id));
	if (open_xr_interface)
		OpenXRInterface::free(nullptr, open_xr_interface);
}

static JSClassDef open_xr_interface_class_def = {
	"OpenXRInterface",
	.finalizer = open_xr_interface_class_finalizer
};

static JSValue open_xr_interface_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRInterface *open_xr_interface_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRInterface::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_interface_class = memnew(OpenXRInterface);
	if (!open_xr_interface_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_interface_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue open_xr_interface_class_get_display_refresh_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_display_refresh_rate, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_set_display_refresh_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInterface::set_display_refresh_rate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interface_class_get_render_target_size_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_render_target_size_multiplier, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_set_render_target_size_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInterface::set_render_target_size_multiplier, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interface_class_is_foveation_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::is_foveation_supported, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_foveation_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_foveation_level, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_set_foveation_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInterface::set_foveation_level, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interface_class_get_foveation_dynamic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_foveation_dynamic, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_set_foveation_dynamic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInterface::set_foveation_dynamic, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interface_class_is_action_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::is_action_set_active, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_set_action_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInterface::set_action_set_active, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interface_class_get_action_sets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_action_sets, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_available_display_refresh_rates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_available_display_refresh_rates, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_set_motion_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInterface::set_motion_range, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interface_class_get_motion_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_motion_range, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_hand_tracking_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_hand_tracking_source, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_hand_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_hand_joint_flags, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_hand_joint_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_hand_joint_rotation, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_hand_joint_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_hand_joint_position, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_hand_joint_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_hand_joint_radius, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_hand_joint_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_hand_joint_linear_velocity, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_hand_joint_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_hand_joint_angular_velocity, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_is_hand_tracking_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRInterface::is_hand_tracking_supported, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_is_hand_interaction_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::is_hand_interaction_supported, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_is_eye_gaze_interaction_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRInterface::is_eye_gaze_interaction_supported, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_get_vrs_min_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_vrs_min_radius, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_set_vrs_min_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInterface::set_vrs_min_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interface_class_get_vrs_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRInterface::get_vrs_strength, ctx, this_val, argc, argv);
};
static JSValue open_xr_interface_class_set_vrs_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRInterface::set_vrs_strength, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry open_xr_interface_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_display_refresh_rate", 0, &open_xr_interface_class_get_display_refresh_rate),
	JS_CFUNC_DEF("set_display_refresh_rate", 1, &open_xr_interface_class_set_display_refresh_rate),
	JS_CFUNC_DEF("get_render_target_size_multiplier", 0, &open_xr_interface_class_get_render_target_size_multiplier),
	JS_CFUNC_DEF("set_render_target_size_multiplier", 1, &open_xr_interface_class_set_render_target_size_multiplier),
	JS_CFUNC_DEF("is_foveation_supported", 0, &open_xr_interface_class_is_foveation_supported),
	JS_CFUNC_DEF("get_foveation_level", 0, &open_xr_interface_class_get_foveation_level),
	JS_CFUNC_DEF("set_foveation_level", 1, &open_xr_interface_class_set_foveation_level),
	JS_CFUNC_DEF("get_foveation_dynamic", 0, &open_xr_interface_class_get_foveation_dynamic),
	JS_CFUNC_DEF("set_foveation_dynamic", 1, &open_xr_interface_class_set_foveation_dynamic),
	JS_CFUNC_DEF("is_action_set_active", 1, &open_xr_interface_class_is_action_set_active),
	JS_CFUNC_DEF("set_action_set_active", 2, &open_xr_interface_class_set_action_set_active),
	JS_CFUNC_DEF("get_action_sets", 0, &open_xr_interface_class_get_action_sets),
	JS_CFUNC_DEF("get_available_display_refresh_rates", 0, &open_xr_interface_class_get_available_display_refresh_rates),
	JS_CFUNC_DEF("set_motion_range", 2, &open_xr_interface_class_set_motion_range),
	JS_CFUNC_DEF("get_motion_range", 1, &open_xr_interface_class_get_motion_range),
	JS_CFUNC_DEF("get_hand_tracking_source", 1, &open_xr_interface_class_get_hand_tracking_source),
	JS_CFUNC_DEF("get_hand_joint_flags", 2, &open_xr_interface_class_get_hand_joint_flags),
	JS_CFUNC_DEF("get_hand_joint_rotation", 2, &open_xr_interface_class_get_hand_joint_rotation),
	JS_CFUNC_DEF("get_hand_joint_position", 2, &open_xr_interface_class_get_hand_joint_position),
	JS_CFUNC_DEF("get_hand_joint_radius", 2, &open_xr_interface_class_get_hand_joint_radius),
	JS_CFUNC_DEF("get_hand_joint_linear_velocity", 2, &open_xr_interface_class_get_hand_joint_linear_velocity),
	JS_CFUNC_DEF("get_hand_joint_angular_velocity", 2, &open_xr_interface_class_get_hand_joint_angular_velocity),
	JS_CFUNC_DEF("is_hand_tracking_supported", 0, &open_xr_interface_class_is_hand_tracking_supported),
	JS_CFUNC_DEF("is_hand_interaction_supported", 0, &open_xr_interface_class_is_hand_interaction_supported),
	JS_CFUNC_DEF("is_eye_gaze_interaction_supported", 0, &open_xr_interface_class_is_eye_gaze_interaction_supported),
	JS_CFUNC_DEF("get_vrs_min_radius", 0, &open_xr_interface_class_get_vrs_min_radius),
	JS_CFUNC_DEF("set_vrs_min_radius", 1, &open_xr_interface_class_set_vrs_min_radius),
	JS_CFUNC_DEF("get_vrs_strength", 0, &open_xr_interface_class_get_vrs_strength),
	JS_CFUNC_DEF("set_vrs_strength", 1, &open_xr_interface_class_set_vrs_strength),
};

void define_open_xr_interface_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "display_refresh_rate"),
        JS_NewCFunction(ctx, open_xr_interface_class_get_display_refresh_rate, "get_display_refresh_rate", 0),
        JS_NewCFunction(ctx, open_xr_interface_class_set_display_refresh_rate, "set_display_refresh_rate", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "render_target_size_multiplier"),
        JS_NewCFunction(ctx, open_xr_interface_class_get_render_target_size_multiplier, "get_render_target_size_multiplier", 0),
        JS_NewCFunction(ctx, open_xr_interface_class_set_render_target_size_multiplier, "set_render_target_size_multiplier", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "foveation_level"),
        JS_NewCFunction(ctx, open_xr_interface_class_get_foveation_level, "get_foveation_level", 0),
        JS_NewCFunction(ctx, open_xr_interface_class_set_foveation_level, "set_foveation_level", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "foveation_dynamic"),
        JS_NewCFunction(ctx, open_xr_interface_class_get_foveation_dynamic, "get_foveation_dynamic", 0),
        JS_NewCFunction(ctx, open_xr_interface_class_set_foveation_dynamic, "set_foveation_dynamic", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vrs_min_radius"),
        JS_NewCFunction(ctx, open_xr_interface_class_get_vrs_min_radius, "get_vrs_min_radius", 0),
        JS_NewCFunction(ctx, open_xr_interface_class_set_vrs_min_radius, "set_vrs_min_radius", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vrs_strength"),
        JS_NewCFunction(ctx, open_xr_interface_class_get_vrs_strength, "get_vrs_strength", 0),
        JS_NewCFunction(ctx, open_xr_interface_class_set_vrs_strength, "set_vrs_strength", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_open_xr_interface_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&OpenXRInterface::__class_id);
	classes["OpenXRInterface"] = OpenXRInterface::__class_id;
	class_id_list.insert(OpenXRInterface::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRInterface::__class_id, &open_xr_interface_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRInterface::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRInterface::__class_id, proto);
	define_open_xr_interface_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_interface_class_proto_funcs, _countof(open_xr_interface_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_interface_class_constructor, "OpenXRInterface", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRInterface", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_interface_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/xr_interface';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_interface_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRInterface");
	return m;
}

JSModuleDef *js_init_open_xr_interface_module(JSContext *ctx) {
	return _js_init_open_xr_interface_module(ctx, "godot/classes/open_xr_interface");
}

void register_open_xr_interface() {
	OpenXRInterface::__init_js_class_id();
	js_init_open_xr_interface_module(ctx);
}