
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/vehicle_wheel3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void vehicle_wheel3d_class_finalizer(JSRuntime *rt, JSValue val) {
	VehicleWheel3D *vehicle_wheel3d = static_cast<VehicleWheel3D *>(JS_GetOpaque(val, VehicleWheel3D::__class_id));
	if (vehicle_wheel3d)
		VehicleWheel3D::free(nullptr, vehicle_wheel3d);
}

static JSClassDef vehicle_wheel3d_class_def = {
	"VehicleWheel3D",
	.finalizer = vehicle_wheel3d_class_finalizer
};

static JSValue vehicle_wheel3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VehicleWheel3D *vehicle_wheel3d_class;
	JSValue obj = JS_NewObjectClass(ctx, VehicleWheel3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	vehicle_wheel3d_class = memnew(VehicleWheel3D);
	if (!vehicle_wheel3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vehicle_wheel3d_class);
	return obj;
}
static JSValue vehicle_wheel3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_radius, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_radius, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_suspension_rest_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_suspension_rest_length, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_suspension_rest_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_suspension_rest_length, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_suspension_travel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_suspension_travel, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_suspension_travel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_suspension_travel, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_suspension_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_suspension_stiffness, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_suspension_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_suspension_stiffness, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_suspension_max_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_suspension_max_force, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_suspension_max_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_suspension_max_force, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_damping_compression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_damping_compression, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_damping_compression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_damping_compression, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_damping_relaxation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_damping_relaxation, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_damping_relaxation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_damping_relaxation, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_use_as_traction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_use_as_traction, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_is_used_as_traction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::is_used_as_traction, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_use_as_steering(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_use_as_steering, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_is_used_as_steering(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::is_used_as_steering, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_friction_slip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_friction_slip, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_friction_slip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_friction_slip, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_is_in_contact(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::is_in_contact, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_get_contact_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_contact_body, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_roll_influence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_roll_influence, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_roll_influence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_roll_influence, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_get_skidinfo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_skidinfo, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_get_rpm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_rpm, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_engine_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_engine_force, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_engine_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_engine_force, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_brake(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_brake, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_brake(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_brake, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static JSValue vehicle_wheel3d_class_set_steering(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VehicleWheel3D::set_steering, VehicleWheel3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue vehicle_wheel3d_class_get_steering(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VehicleWheel3D::get_steering, VehicleWheel3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry vehicle_wheel3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &vehicle_wheel3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &vehicle_wheel3d_class_get_radius),
	JS_CFUNC_DEF("set_suspension_rest_length", 1, &vehicle_wheel3d_class_set_suspension_rest_length),
	JS_CFUNC_DEF("get_suspension_rest_length", 0, &vehicle_wheel3d_class_get_suspension_rest_length),
	JS_CFUNC_DEF("set_suspension_travel", 1, &vehicle_wheel3d_class_set_suspension_travel),
	JS_CFUNC_DEF("get_suspension_travel", 0, &vehicle_wheel3d_class_get_suspension_travel),
	JS_CFUNC_DEF("set_suspension_stiffness", 1, &vehicle_wheel3d_class_set_suspension_stiffness),
	JS_CFUNC_DEF("get_suspension_stiffness", 0, &vehicle_wheel3d_class_get_suspension_stiffness),
	JS_CFUNC_DEF("set_suspension_max_force", 1, &vehicle_wheel3d_class_set_suspension_max_force),
	JS_CFUNC_DEF("get_suspension_max_force", 0, &vehicle_wheel3d_class_get_suspension_max_force),
	JS_CFUNC_DEF("set_damping_compression", 1, &vehicle_wheel3d_class_set_damping_compression),
	JS_CFUNC_DEF("get_damping_compression", 0, &vehicle_wheel3d_class_get_damping_compression),
	JS_CFUNC_DEF("set_damping_relaxation", 1, &vehicle_wheel3d_class_set_damping_relaxation),
	JS_CFUNC_DEF("get_damping_relaxation", 0, &vehicle_wheel3d_class_get_damping_relaxation),
	JS_CFUNC_DEF("set_use_as_traction", 1, &vehicle_wheel3d_class_set_use_as_traction),
	JS_CFUNC_DEF("is_used_as_traction", 0, &vehicle_wheel3d_class_is_used_as_traction),
	JS_CFUNC_DEF("set_use_as_steering", 1, &vehicle_wheel3d_class_set_use_as_steering),
	JS_CFUNC_DEF("is_used_as_steering", 0, &vehicle_wheel3d_class_is_used_as_steering),
	JS_CFUNC_DEF("set_friction_slip", 1, &vehicle_wheel3d_class_set_friction_slip),
	JS_CFUNC_DEF("get_friction_slip", 0, &vehicle_wheel3d_class_get_friction_slip),
	JS_CFUNC_DEF("is_in_contact", 0, &vehicle_wheel3d_class_is_in_contact),
	JS_CFUNC_DEF("get_contact_body", 0, &vehicle_wheel3d_class_get_contact_body),
	JS_CFUNC_DEF("set_roll_influence", 1, &vehicle_wheel3d_class_set_roll_influence),
	JS_CFUNC_DEF("get_roll_influence", 0, &vehicle_wheel3d_class_get_roll_influence),
	JS_CFUNC_DEF("get_skidinfo", 0, &vehicle_wheel3d_class_get_skidinfo),
	JS_CFUNC_DEF("get_rpm", 0, &vehicle_wheel3d_class_get_rpm),
	JS_CFUNC_DEF("set_engine_force", 1, &vehicle_wheel3d_class_set_engine_force),
	JS_CFUNC_DEF("get_engine_force", 0, &vehicle_wheel3d_class_get_engine_force),
	JS_CFUNC_DEF("set_brake", 1, &vehicle_wheel3d_class_set_brake),
	JS_CFUNC_DEF("get_brake", 0, &vehicle_wheel3d_class_get_brake),
	JS_CFUNC_DEF("set_steering", 1, &vehicle_wheel3d_class_set_steering),
	JS_CFUNC_DEF("get_steering", 0, &vehicle_wheel3d_class_get_steering),
};

static int js_vehicle_wheel3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VehicleWheel3D::__class_id);
	classes["VehicleWheel3D"] = VehicleWheel3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VehicleWheel3D::__class_id, &vehicle_wheel3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VehicleWheel3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, vehicle_wheel3d_class_proto_funcs, _countof(vehicle_wheel3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, vehicle_wheel3d_class_constructor, "VehicleWheel3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VehicleWheel3D", ctor);

	return 0;
}

JSModuleDef *_js_init_vehicle_wheel3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_vehicle_wheel3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VehicleWheel3D");
	return m;
}

JSModuleDef *js_init_vehicle_wheel3d_module(JSContext *ctx) {
	return _js_init_vehicle_wheel3d_module(ctx, "godot/classes/vehicle_wheel3d");
}

void register_vehicle_wheel3d() {
	js_init_vehicle_wheel3d_module(ctx);
}