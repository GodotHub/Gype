
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_direct_body_state2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsDirectBodyState2D *physics_direct_body_state2d = static_cast<PhysicsDirectBodyState2D *>(JS_GetOpaque(val, PhysicsDirectBodyState2D::__class_id));
	if (physics_direct_body_state2d)
		PhysicsDirectBodyState2D::free(nullptr, physics_direct_body_state2d);
}

static JSClassDef physics_direct_body_state2d_class_def = {
	"PhysicsDirectBodyState2D",
	.finalizer = physics_direct_body_state2d_class_finalizer
};

static JSValue physics_direct_body_state2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsDirectBodyState2D *physics_direct_body_state2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsDirectBodyState2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_direct_body_state2d_class = memnew(PhysicsDirectBodyState2D);
	if (!physics_direct_body_state2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_direct_body_state2d_class);
	return obj;
}
static JSValue physics_direct_body_state2d_class_get_total_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_total_gravity, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_total_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_total_linear_damp, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_total_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_total_angular_damp, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_center_of_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_center_of_mass, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_center_of_mass_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_center_of_mass_local, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_inverse_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_inverse_mass, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_inverse_inertia(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_inverse_inertia, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_set_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::set_linear_velocity, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_get_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_linear_velocity, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_set_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::set_angular_velocity, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_get_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_angular_velocity, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::set_transform, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_transform, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_velocity_at_local_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_velocity_at_local_position, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_apply_central_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::apply_central_impulse, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_apply_torque_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::apply_torque_impulse, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_apply_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::apply_impulse, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_apply_central_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::apply_central_force, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_apply_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::apply_force, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_apply_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::apply_torque, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_add_constant_central_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::add_constant_central_force, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_add_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::add_constant_force, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_add_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::add_constant_torque, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_set_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::set_constant_force, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_get_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_constant_force, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_set_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::set_constant_torque, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_get_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_constant_torque, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_set_sleep_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::set_sleep_state, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_is_sleeping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::is_sleeping, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_count, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_local_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_local_position, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_local_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_local_normal, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_local_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_local_shape, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_local_velocity_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_local_velocity_at_position, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_collider, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_collider_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_collider_position, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_collider_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_collider_id, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_collider_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_collider_object, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_collider_shape, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_collider_velocity_at_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_collider_velocity_at_position, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_contact_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_contact_impulse, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_get_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectBodyState2D::get_step, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_body_state2d_class_integrate_forces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsDirectBodyState2D::integrate_forces, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_direct_body_state2d_class_get_space_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsDirectBodyState2D::get_space_state, PhysicsDirectBodyState2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physics_direct_body_state2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_total_gravity", 0, &physics_direct_body_state2d_class_get_total_gravity),
	JS_CFUNC_DEF("get_total_linear_damp", 0, &physics_direct_body_state2d_class_get_total_linear_damp),
	JS_CFUNC_DEF("get_total_angular_damp", 0, &physics_direct_body_state2d_class_get_total_angular_damp),
	JS_CFUNC_DEF("get_center_of_mass", 0, &physics_direct_body_state2d_class_get_center_of_mass),
	JS_CFUNC_DEF("get_center_of_mass_local", 0, &physics_direct_body_state2d_class_get_center_of_mass_local),
	JS_CFUNC_DEF("get_inverse_mass", 0, &physics_direct_body_state2d_class_get_inverse_mass),
	JS_CFUNC_DEF("get_inverse_inertia", 0, &physics_direct_body_state2d_class_get_inverse_inertia),
	JS_CFUNC_DEF("set_linear_velocity", 1, &physics_direct_body_state2d_class_set_linear_velocity),
	JS_CFUNC_DEF("get_linear_velocity", 0, &physics_direct_body_state2d_class_get_linear_velocity),
	JS_CFUNC_DEF("set_angular_velocity", 1, &physics_direct_body_state2d_class_set_angular_velocity),
	JS_CFUNC_DEF("get_angular_velocity", 0, &physics_direct_body_state2d_class_get_angular_velocity),
	JS_CFUNC_DEF("set_transform", 1, &physics_direct_body_state2d_class_set_transform),
	JS_CFUNC_DEF("get_transform", 0, &physics_direct_body_state2d_class_get_transform),
	JS_CFUNC_DEF("get_velocity_at_local_position", 1, &physics_direct_body_state2d_class_get_velocity_at_local_position),
	JS_CFUNC_DEF("apply_central_impulse", 1, &physics_direct_body_state2d_class_apply_central_impulse),
	JS_CFUNC_DEF("apply_torque_impulse", 1, &physics_direct_body_state2d_class_apply_torque_impulse),
	JS_CFUNC_DEF("apply_impulse", 2, &physics_direct_body_state2d_class_apply_impulse),
	JS_CFUNC_DEF("apply_central_force", 1, &physics_direct_body_state2d_class_apply_central_force),
	JS_CFUNC_DEF("apply_force", 2, &physics_direct_body_state2d_class_apply_force),
	JS_CFUNC_DEF("apply_torque", 1, &physics_direct_body_state2d_class_apply_torque),
	JS_CFUNC_DEF("add_constant_central_force", 1, &physics_direct_body_state2d_class_add_constant_central_force),
	JS_CFUNC_DEF("add_constant_force", 2, &physics_direct_body_state2d_class_add_constant_force),
	JS_CFUNC_DEF("add_constant_torque", 1, &physics_direct_body_state2d_class_add_constant_torque),
	JS_CFUNC_DEF("set_constant_force", 1, &physics_direct_body_state2d_class_set_constant_force),
	JS_CFUNC_DEF("get_constant_force", 0, &physics_direct_body_state2d_class_get_constant_force),
	JS_CFUNC_DEF("set_constant_torque", 1, &physics_direct_body_state2d_class_set_constant_torque),
	JS_CFUNC_DEF("get_constant_torque", 0, &physics_direct_body_state2d_class_get_constant_torque),
	JS_CFUNC_DEF("set_sleep_state", 1, &physics_direct_body_state2d_class_set_sleep_state),
	JS_CFUNC_DEF("is_sleeping", 0, &physics_direct_body_state2d_class_is_sleeping),
	JS_CFUNC_DEF("get_contact_count", 0, &physics_direct_body_state2d_class_get_contact_count),
	JS_CFUNC_DEF("get_contact_local_position", 1, &physics_direct_body_state2d_class_get_contact_local_position),
	JS_CFUNC_DEF("get_contact_local_normal", 1, &physics_direct_body_state2d_class_get_contact_local_normal),
	JS_CFUNC_DEF("get_contact_local_shape", 1, &physics_direct_body_state2d_class_get_contact_local_shape),
	JS_CFUNC_DEF("get_contact_local_velocity_at_position", 1, &physics_direct_body_state2d_class_get_contact_local_velocity_at_position),
	JS_CFUNC_DEF("get_contact_collider", 1, &physics_direct_body_state2d_class_get_contact_collider),
	JS_CFUNC_DEF("get_contact_collider_position", 1, &physics_direct_body_state2d_class_get_contact_collider_position),
	JS_CFUNC_DEF("get_contact_collider_id", 1, &physics_direct_body_state2d_class_get_contact_collider_id),
	JS_CFUNC_DEF("get_contact_collider_object", 1, &physics_direct_body_state2d_class_get_contact_collider_object),
	JS_CFUNC_DEF("get_contact_collider_shape", 1, &physics_direct_body_state2d_class_get_contact_collider_shape),
	JS_CFUNC_DEF("get_contact_collider_velocity_at_position", 1, &physics_direct_body_state2d_class_get_contact_collider_velocity_at_position),
	JS_CFUNC_DEF("get_contact_impulse", 1, &physics_direct_body_state2d_class_get_contact_impulse),
	JS_CFUNC_DEF("get_step", 0, &physics_direct_body_state2d_class_get_step),
	JS_CFUNC_DEF("integrate_forces", 0, &physics_direct_body_state2d_class_integrate_forces),
	JS_CFUNC_DEF("get_space_state", 0, &physics_direct_body_state2d_class_get_space_state),
};

static int js_physics_direct_body_state2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsDirectBodyState2D::__class_id);
	classes["PhysicsDirectBodyState2D"] = PhysicsDirectBodyState2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsDirectBodyState2D::__class_id, &physics_direct_body_state2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsDirectBodyState2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_direct_body_state2d_class_proto_funcs, _countof(physics_direct_body_state2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_direct_body_state2d_class_constructor, "PhysicsDirectBodyState2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsDirectBodyState2D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_direct_body_state2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_direct_body_state2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsDirectBodyState2D");
	return m;
}

JSModuleDef *js_init_physics_direct_body_state2d_module(JSContext *ctx) {
	return _js_init_physics_direct_body_state2d_module(ctx, "godot/classes/physics_direct_body_state2d");
}

void register_physics_direct_body_state2d() {
	js_init_physics_direct_body_state2d_module(ctx);
}