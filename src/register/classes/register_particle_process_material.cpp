
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/particle_process_material.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void particle_process_material_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef particle_process_material_class_def = {
	"ParticleProcessMaterial",
	.finalizer = particle_process_material_class_finalizer
};

static JSValue particle_process_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ParticleProcessMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;
	ParticleProcessMaterial *particle_process_material_class = memnew(ParticleProcessMaterial);
	if (!particle_process_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, particle_process_material_class);	
	return obj;
}
static JSValue particle_process_material_class_set_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_direction, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_inherit_velocity_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_inherit_velocity_ratio, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_inherit_velocity_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ParticleProcessMaterial::get_inherit_velocity_ratio, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_spread, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_spread, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_flatness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_flatness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_flatness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_flatness, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_param, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_param, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_param_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_param_min, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_param_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_param_min, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_param_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_param_max, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_param_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_param_max, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_param_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_param_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_param_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_param_texture, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_color, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_color_ramp, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_color_ramp, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_alpha_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_alpha_curve, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_alpha_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_alpha_curve, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_curve, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_curve, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_color_initial_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_color_initial_ramp, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_color_initial_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_color_initial_ramp, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_velocity_limit_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_velocity_limit_curve, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_velocity_limit_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_velocity_limit_curve, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_particle_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_particle_flag, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_particle_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_particle_flag, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_velocity_pivot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_velocity_pivot, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_velocity_pivot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ParticleProcessMaterial::get_velocity_pivot, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_shape, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_sphere_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_sphere_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_sphere_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_sphere_radius, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_box_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_box_extents, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_box_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_box_extents, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_point_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_point_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_point_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_point_texture, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_normal_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_normal_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_normal_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_normal_texture, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_color_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_color_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_color_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_color_texture, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_point_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_point_count, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_ring_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_ring_axis, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_ring_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_ring_axis, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_ring_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_ring_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_ring_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_ring_height, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_ring_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_ring_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_ring_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_ring_radius, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_ring_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_ring_inner_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_ring_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_ring_inner_radius, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_shape_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_shape_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_shape_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_shape_offset, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_emission_shape_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_shape_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_shape_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_shape_scale, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_get_turbulence_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_enabled, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_turbulence_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_turbulence_noise_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_noise_strength, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_turbulence_noise_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_noise_strength, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_turbulence_noise_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_noise_scale, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_turbulence_noise_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_noise_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_turbulence_noise_speed_random(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_noise_speed_random, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_turbulence_noise_speed_random(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_noise_speed_random, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_turbulence_noise_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_noise_speed, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_turbulence_noise_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_noise_speed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_gravity, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_gravity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_set_lifetime_randomness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_lifetime_randomness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_lifetime_randomness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_lifetime_randomness, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_get_sub_emitter_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_mode, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_sub_emitter_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_frequency, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_frequency, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_sub_emitter_amount_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_amount_at_end, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_amount_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_amount_at_end, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_sub_emitter_amount_at_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_amount_at_collision, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_amount_at_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_amount_at_collision, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_sub_emitter_keep_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_keep_velocity, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_keep_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_keep_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_set_attractor_interaction_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_attractor_interaction_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_is_attractor_interaction_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::is_attractor_interaction_enabled, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_collision_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_collision_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_collision_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_collision_mode, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_collision_use_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_collision_use_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_is_collision_using_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::is_collision_using_scale, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_collision_friction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_collision_friction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_collision_friction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_collision_friction, ctx, this_val, argc, argv);
};
static JSValue particle_process_material_class_set_collision_bounce(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_collision_bounce, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_collision_bounce(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_collision_bounce, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry particle_process_material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_direction", 1, &particle_process_material_class_set_direction),
	JS_CFUNC_DEF("get_direction", 0, &particle_process_material_class_get_direction),
	JS_CFUNC_DEF("set_inherit_velocity_ratio", 1, &particle_process_material_class_set_inherit_velocity_ratio),
	JS_CFUNC_DEF("get_inherit_velocity_ratio", 0, &particle_process_material_class_get_inherit_velocity_ratio),
	JS_CFUNC_DEF("set_spread", 1, &particle_process_material_class_set_spread),
	JS_CFUNC_DEF("get_spread", 0, &particle_process_material_class_get_spread),
	JS_CFUNC_DEF("set_flatness", 1, &particle_process_material_class_set_flatness),
	JS_CFUNC_DEF("get_flatness", 0, &particle_process_material_class_get_flatness),
	JS_CFUNC_DEF("set_param", 2, &particle_process_material_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &particle_process_material_class_get_param),
	JS_CFUNC_DEF("set_param_min", 2, &particle_process_material_class_set_param_min),
	JS_CFUNC_DEF("get_param_min", 1, &particle_process_material_class_get_param_min),
	JS_CFUNC_DEF("set_param_max", 2, &particle_process_material_class_set_param_max),
	JS_CFUNC_DEF("get_param_max", 1, &particle_process_material_class_get_param_max),
	JS_CFUNC_DEF("set_param_texture", 2, &particle_process_material_class_set_param_texture),
	JS_CFUNC_DEF("get_param_texture", 1, &particle_process_material_class_get_param_texture),
	JS_CFUNC_DEF("set_color", 1, &particle_process_material_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &particle_process_material_class_get_color),
	JS_CFUNC_DEF("set_color_ramp", 1, &particle_process_material_class_set_color_ramp),
	JS_CFUNC_DEF("get_color_ramp", 0, &particle_process_material_class_get_color_ramp),
	JS_CFUNC_DEF("set_alpha_curve", 1, &particle_process_material_class_set_alpha_curve),
	JS_CFUNC_DEF("get_alpha_curve", 0, &particle_process_material_class_get_alpha_curve),
	JS_CFUNC_DEF("set_emission_curve", 1, &particle_process_material_class_set_emission_curve),
	JS_CFUNC_DEF("get_emission_curve", 0, &particle_process_material_class_get_emission_curve),
	JS_CFUNC_DEF("set_color_initial_ramp", 1, &particle_process_material_class_set_color_initial_ramp),
	JS_CFUNC_DEF("get_color_initial_ramp", 0, &particle_process_material_class_get_color_initial_ramp),
	JS_CFUNC_DEF("set_velocity_limit_curve", 1, &particle_process_material_class_set_velocity_limit_curve),
	JS_CFUNC_DEF("get_velocity_limit_curve", 0, &particle_process_material_class_get_velocity_limit_curve),
	JS_CFUNC_DEF("set_particle_flag", 2, &particle_process_material_class_set_particle_flag),
	JS_CFUNC_DEF("get_particle_flag", 1, &particle_process_material_class_get_particle_flag),
	JS_CFUNC_DEF("set_velocity_pivot", 1, &particle_process_material_class_set_velocity_pivot),
	JS_CFUNC_DEF("get_velocity_pivot", 0, &particle_process_material_class_get_velocity_pivot),
	JS_CFUNC_DEF("set_emission_shape", 1, &particle_process_material_class_set_emission_shape),
	JS_CFUNC_DEF("get_emission_shape", 0, &particle_process_material_class_get_emission_shape),
	JS_CFUNC_DEF("set_emission_sphere_radius", 1, &particle_process_material_class_set_emission_sphere_radius),
	JS_CFUNC_DEF("get_emission_sphere_radius", 0, &particle_process_material_class_get_emission_sphere_radius),
	JS_CFUNC_DEF("set_emission_box_extents", 1, &particle_process_material_class_set_emission_box_extents),
	JS_CFUNC_DEF("get_emission_box_extents", 0, &particle_process_material_class_get_emission_box_extents),
	JS_CFUNC_DEF("set_emission_point_texture", 1, &particle_process_material_class_set_emission_point_texture),
	JS_CFUNC_DEF("get_emission_point_texture", 0, &particle_process_material_class_get_emission_point_texture),
	JS_CFUNC_DEF("set_emission_normal_texture", 1, &particle_process_material_class_set_emission_normal_texture),
	JS_CFUNC_DEF("get_emission_normal_texture", 0, &particle_process_material_class_get_emission_normal_texture),
	JS_CFUNC_DEF("set_emission_color_texture", 1, &particle_process_material_class_set_emission_color_texture),
	JS_CFUNC_DEF("get_emission_color_texture", 0, &particle_process_material_class_get_emission_color_texture),
	JS_CFUNC_DEF("set_emission_point_count", 1, &particle_process_material_class_set_emission_point_count),
	JS_CFUNC_DEF("get_emission_point_count", 0, &particle_process_material_class_get_emission_point_count),
	JS_CFUNC_DEF("set_emission_ring_axis", 1, &particle_process_material_class_set_emission_ring_axis),
	JS_CFUNC_DEF("get_emission_ring_axis", 0, &particle_process_material_class_get_emission_ring_axis),
	JS_CFUNC_DEF("set_emission_ring_height", 1, &particle_process_material_class_set_emission_ring_height),
	JS_CFUNC_DEF("get_emission_ring_height", 0, &particle_process_material_class_get_emission_ring_height),
	JS_CFUNC_DEF("set_emission_ring_radius", 1, &particle_process_material_class_set_emission_ring_radius),
	JS_CFUNC_DEF("get_emission_ring_radius", 0, &particle_process_material_class_get_emission_ring_radius),
	JS_CFUNC_DEF("set_emission_ring_inner_radius", 1, &particle_process_material_class_set_emission_ring_inner_radius),
	JS_CFUNC_DEF("get_emission_ring_inner_radius", 0, &particle_process_material_class_get_emission_ring_inner_radius),
	JS_CFUNC_DEF("set_emission_shape_offset", 1, &particle_process_material_class_set_emission_shape_offset),
	JS_CFUNC_DEF("get_emission_shape_offset", 0, &particle_process_material_class_get_emission_shape_offset),
	JS_CFUNC_DEF("set_emission_shape_scale", 1, &particle_process_material_class_set_emission_shape_scale),
	JS_CFUNC_DEF("get_emission_shape_scale", 0, &particle_process_material_class_get_emission_shape_scale),
	JS_CFUNC_DEF("get_turbulence_enabled", 0, &particle_process_material_class_get_turbulence_enabled),
	JS_CFUNC_DEF("set_turbulence_enabled", 1, &particle_process_material_class_set_turbulence_enabled),
	JS_CFUNC_DEF("get_turbulence_noise_strength", 0, &particle_process_material_class_get_turbulence_noise_strength),
	JS_CFUNC_DEF("set_turbulence_noise_strength", 1, &particle_process_material_class_set_turbulence_noise_strength),
	JS_CFUNC_DEF("get_turbulence_noise_scale", 0, &particle_process_material_class_get_turbulence_noise_scale),
	JS_CFUNC_DEF("set_turbulence_noise_scale", 1, &particle_process_material_class_set_turbulence_noise_scale),
	JS_CFUNC_DEF("get_turbulence_noise_speed_random", 0, &particle_process_material_class_get_turbulence_noise_speed_random),
	JS_CFUNC_DEF("set_turbulence_noise_speed_random", 1, &particle_process_material_class_set_turbulence_noise_speed_random),
	JS_CFUNC_DEF("get_turbulence_noise_speed", 0, &particle_process_material_class_get_turbulence_noise_speed),
	JS_CFUNC_DEF("set_turbulence_noise_speed", 1, &particle_process_material_class_set_turbulence_noise_speed),
	JS_CFUNC_DEF("get_gravity", 0, &particle_process_material_class_get_gravity),
	JS_CFUNC_DEF("set_gravity", 1, &particle_process_material_class_set_gravity),
	JS_CFUNC_DEF("set_lifetime_randomness", 1, &particle_process_material_class_set_lifetime_randomness),
	JS_CFUNC_DEF("get_lifetime_randomness", 0, &particle_process_material_class_get_lifetime_randomness),
	JS_CFUNC_DEF("get_sub_emitter_mode", 0, &particle_process_material_class_get_sub_emitter_mode),
	JS_CFUNC_DEF("set_sub_emitter_mode", 1, &particle_process_material_class_set_sub_emitter_mode),
	JS_CFUNC_DEF("get_sub_emitter_frequency", 0, &particle_process_material_class_get_sub_emitter_frequency),
	JS_CFUNC_DEF("set_sub_emitter_frequency", 1, &particle_process_material_class_set_sub_emitter_frequency),
	JS_CFUNC_DEF("get_sub_emitter_amount_at_end", 0, &particle_process_material_class_get_sub_emitter_amount_at_end),
	JS_CFUNC_DEF("set_sub_emitter_amount_at_end", 1, &particle_process_material_class_set_sub_emitter_amount_at_end),
	JS_CFUNC_DEF("get_sub_emitter_amount_at_collision", 0, &particle_process_material_class_get_sub_emitter_amount_at_collision),
	JS_CFUNC_DEF("set_sub_emitter_amount_at_collision", 1, &particle_process_material_class_set_sub_emitter_amount_at_collision),
	JS_CFUNC_DEF("get_sub_emitter_keep_velocity", 0, &particle_process_material_class_get_sub_emitter_keep_velocity),
	JS_CFUNC_DEF("set_sub_emitter_keep_velocity", 1, &particle_process_material_class_set_sub_emitter_keep_velocity),
	JS_CFUNC_DEF("set_attractor_interaction_enabled", 1, &particle_process_material_class_set_attractor_interaction_enabled),
	JS_CFUNC_DEF("is_attractor_interaction_enabled", 0, &particle_process_material_class_is_attractor_interaction_enabled),
	JS_CFUNC_DEF("set_collision_mode", 1, &particle_process_material_class_set_collision_mode),
	JS_CFUNC_DEF("get_collision_mode", 0, &particle_process_material_class_get_collision_mode),
	JS_CFUNC_DEF("set_collision_use_scale", 1, &particle_process_material_class_set_collision_use_scale),
	JS_CFUNC_DEF("is_collision_using_scale", 0, &particle_process_material_class_is_collision_using_scale),
	JS_CFUNC_DEF("set_collision_friction", 1, &particle_process_material_class_set_collision_friction),
	JS_CFUNC_DEF("get_collision_friction", 0, &particle_process_material_class_get_collision_friction),
	JS_CFUNC_DEF("set_collision_bounce", 1, &particle_process_material_class_set_collision_bounce),
	JS_CFUNC_DEF("get_collision_bounce", 0, &particle_process_material_class_get_collision_bounce),
};

void define_particle_process_material_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "lifetime_randomness"),
        JS_NewCFunction(ctx, particle_process_material_class_get_lifetime_randomness, "get_lifetime_randomness", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_lifetime_randomness, "set_lifetime_randomness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "particle_flag_align_y"),
        JS_NewCFunction(ctx, particle_process_material_class_get_particle_flag, "get_particle_flag", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_particle_flag, "set_particle_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "particle_flag_rotate_y"),
        JS_NewCFunction(ctx, particle_process_material_class_get_particle_flag, "get_particle_flag", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_particle_flag, "set_particle_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "particle_flag_disable_z"),
        JS_NewCFunction(ctx, particle_process_material_class_get_particle_flag, "get_particle_flag", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_particle_flag, "set_particle_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "particle_flag_damping_as_friction"),
        JS_NewCFunction(ctx, particle_process_material_class_get_particle_flag, "get_particle_flag", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_particle_flag, "set_particle_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_shape_offset"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_shape_offset, "get_emission_shape_offset", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_shape_offset, "set_emission_shape_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_shape_scale"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_shape_scale, "get_emission_shape_scale", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_shape_scale, "set_emission_shape_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_shape"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_shape, "get_emission_shape", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_shape, "set_emission_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_sphere_radius"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_sphere_radius, "get_emission_sphere_radius", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_sphere_radius, "set_emission_sphere_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_box_extents"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_box_extents, "get_emission_box_extents", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_box_extents, "set_emission_box_extents", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_point_texture"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_point_texture, "get_emission_point_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_point_texture, "set_emission_point_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_normal_texture"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_normal_texture, "get_emission_normal_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_normal_texture, "set_emission_normal_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_color_texture"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_color_texture, "get_emission_color_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_color_texture, "set_emission_color_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_point_count"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_point_count, "get_emission_point_count", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_point_count, "set_emission_point_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_ring_axis"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_ring_axis, "get_emission_ring_axis", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_ring_axis, "set_emission_ring_axis", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_ring_height"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_ring_height, "get_emission_ring_height", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_ring_height, "set_emission_ring_height", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_ring_radius"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_ring_radius, "get_emission_ring_radius", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_ring_radius, "set_emission_ring_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_ring_inner_radius"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_ring_inner_radius, "get_emission_ring_inner_radius", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_ring_inner_radius, "set_emission_ring_inner_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angle"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angle_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angle_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angle_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "inherit_velocity_ratio"),
        JS_NewCFunction(ctx, particle_process_material_class_get_inherit_velocity_ratio, "get_inherit_velocity_ratio", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_inherit_velocity_ratio, "set_inherit_velocity_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "velocity_pivot"),
        JS_NewCFunction(ctx, particle_process_material_class_get_velocity_pivot, "get_velocity_pivot", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_velocity_pivot, "set_velocity_pivot", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "direction"),
        JS_NewCFunction(ctx, particle_process_material_class_get_direction, "get_direction", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_direction, "set_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "spread"),
        JS_NewCFunction(ctx, particle_process_material_class_get_spread, "get_spread", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_spread, "set_spread", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flatness"),
        JS_NewCFunction(ctx, particle_process_material_class_get_flatness, "get_flatness", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_flatness, "set_flatness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "initial_velocity"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "initial_velocity_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "initial_velocity_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_velocity"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_velocity_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_velocity_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_velocity_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "directional_velocity"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "directional_velocity_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "directional_velocity_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "directional_velocity_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "orbit_velocity"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "orbit_velocity_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "orbit_velocity_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "orbit_velocity_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_velocity"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_velocity_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_velocity_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_velocity_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "velocity_limit_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_velocity_limit_curve, "get_velocity_limit_curve", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_velocity_limit_curve, "set_velocity_limit_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gravity"),
        JS_NewCFunction(ctx, particle_process_material_class_get_gravity, "get_gravity", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_gravity, "set_gravity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_accel"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_accel_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_accel_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_accel_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_accel"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_accel_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_accel_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_accel_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tangential_accel"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tangential_accel_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tangential_accel_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tangential_accel_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "damping"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "damping_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "damping_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "damping_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "attractor_interaction_enabled"),
        JS_NewCFunction(ctx, particle_process_material_class_is_attractor_interaction_enabled, "is_attractor_interaction_enabled", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_attractor_interaction_enabled, "set_attractor_interaction_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_over_velocity"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_over_velocity_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_over_velocity_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_over_velocity_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, particle_process_material_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_color, "set_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color_ramp"),
        JS_NewCFunction(ctx, particle_process_material_class_get_color_ramp, "get_color_ramp", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_color_ramp, "set_color_ramp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color_initial_ramp"),
        JS_NewCFunction(ctx, particle_process_material_class_get_color_initial_ramp, "get_color_initial_ramp", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_color_initial_ramp, "set_color_initial_ramp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alpha_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_alpha_curve, "get_alpha_curve", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_alpha_curve, "set_alpha_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_emission_curve, "get_emission_curve", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_emission_curve, "set_emission_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hue_variation"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hue_variation_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hue_variation_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hue_variation_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_speed"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_speed_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_speed_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_speed_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_offset"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_offset_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_offset_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_offset_curve"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_enabled"),
        JS_NewCFunction(ctx, particle_process_material_class_get_turbulence_enabled, "get_turbulence_enabled", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_turbulence_enabled, "set_turbulence_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_noise_strength"),
        JS_NewCFunction(ctx, particle_process_material_class_get_turbulence_noise_strength, "get_turbulence_noise_strength", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_turbulence_noise_strength, "set_turbulence_noise_strength", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_noise_scale"),
        JS_NewCFunction(ctx, particle_process_material_class_get_turbulence_noise_scale, "get_turbulence_noise_scale", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_turbulence_noise_scale, "set_turbulence_noise_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_noise_speed"),
        JS_NewCFunction(ctx, particle_process_material_class_get_turbulence_noise_speed, "get_turbulence_noise_speed", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_turbulence_noise_speed, "set_turbulence_noise_speed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_noise_speed_random"),
        JS_NewCFunction(ctx, particle_process_material_class_get_turbulence_noise_speed_random, "get_turbulence_noise_speed_random", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_turbulence_noise_speed_random, "set_turbulence_noise_speed_random", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_influence"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_influence_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_influence_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_initial_displacement"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param, "get_param", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param, "set_param", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_initial_displacement_min"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_initial_displacement_max"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "turbulence_influence_over_life"),
        JS_NewCFunction(ctx, particle_process_material_class_get_param_texture, "get_param_texture", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_param_texture, "set_param_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_mode"),
        JS_NewCFunction(ctx, particle_process_material_class_get_collision_mode, "get_collision_mode", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_collision_mode, "set_collision_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_friction"),
        JS_NewCFunction(ctx, particle_process_material_class_get_collision_friction, "get_collision_friction", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_collision_friction, "set_collision_friction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_bounce"),
        JS_NewCFunction(ctx, particle_process_material_class_get_collision_bounce, "get_collision_bounce", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_collision_bounce, "set_collision_bounce", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_use_scale"),
        JS_NewCFunction(ctx, particle_process_material_class_is_collision_using_scale, "is_collision_using_scale", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_collision_use_scale, "set_collision_use_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sub_emitter_mode"),
        JS_NewCFunction(ctx, particle_process_material_class_get_sub_emitter_mode, "get_sub_emitter_mode", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_sub_emitter_mode, "set_sub_emitter_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sub_emitter_frequency"),
        JS_NewCFunction(ctx, particle_process_material_class_get_sub_emitter_frequency, "get_sub_emitter_frequency", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_sub_emitter_frequency, "set_sub_emitter_frequency", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sub_emitter_amount_at_end"),
        JS_NewCFunction(ctx, particle_process_material_class_get_sub_emitter_amount_at_end, "get_sub_emitter_amount_at_end", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_sub_emitter_amount_at_end, "set_sub_emitter_amount_at_end", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sub_emitter_amount_at_collision"),
        JS_NewCFunction(ctx, particle_process_material_class_get_sub_emitter_amount_at_collision, "get_sub_emitter_amount_at_collision", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_sub_emitter_amount_at_collision, "set_sub_emitter_amount_at_collision", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sub_emitter_keep_velocity"),
        JS_NewCFunction(ctx, particle_process_material_class_get_sub_emitter_keep_velocity, "get_sub_emitter_keep_velocity", 0),
        JS_NewCFunction(ctx, particle_process_material_class_set_sub_emitter_keep_velocity, "set_sub_emitter_keep_velocity", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Parameter_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_INITIAL_LINEAR_VELOCITY", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_ANGULAR_VELOCITY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_ORBIT_VELOCITY", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_LINEAR_ACCEL", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_RADIAL_ACCEL", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_TANGENTIAL_ACCEL", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_DAMPING", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_ANGLE", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_SCALE", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_HUE_VARIATION", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_ANIM_SPEED", JS_NewInt64(ctx, 10));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_ANIM_OFFSET", JS_NewInt64(ctx, 11));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_RADIAL_VELOCITY", JS_NewInt64(ctx, 15));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_DIRECTIONAL_VELOCITY", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_SCALE_OVER_VELOCITY", JS_NewInt64(ctx, 17));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_MAX", JS_NewInt64(ctx, 18));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_TURB_VEL_INFLUENCE", JS_NewInt64(ctx, 13));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_TURB_INIT_DISPLACEMENT", JS_NewInt64(ctx, 14));
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_TURB_INFLUENCE_OVER_LIFE", JS_NewInt64(ctx, 12));
	JS_SetPropertyStr(ctx, proto, "Parameter", Parameter_obj);
	JSValue ParticleFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ParticleFlags_obj, "PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ParticleFlags_obj, "PARTICLE_FLAG_ROTATE_Y", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ParticleFlags_obj, "PARTICLE_FLAG_DISABLE_Z", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ParticleFlags_obj, "PARTICLE_FLAG_DAMPING_AS_FRICTION", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, ParticleFlags_obj, "PARTICLE_FLAG_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "ParticleFlags", ParticleFlags_obj);
	JSValue EmissionShape_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_POINT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_SPHERE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_SPHERE_SURFACE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_BOX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_POINTS", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_DIRECTED_POINTS", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_RING", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_MAX", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, proto, "EmissionShape", EmissionShape_obj);
	JSValue SubEmitterMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, SubEmitterMode_obj, "SUB_EMITTER_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, SubEmitterMode_obj, "SUB_EMITTER_CONSTANT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, SubEmitterMode_obj, "SUB_EMITTER_AT_END", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, SubEmitterMode_obj, "SUB_EMITTER_AT_COLLISION", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, SubEmitterMode_obj, "SUB_EMITTER_MAX", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "SubEmitterMode", SubEmitterMode_obj);
	JSValue CollisionMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, CollisionMode_obj, "COLLISION_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, CollisionMode_obj, "COLLISION_RIGID", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, CollisionMode_obj, "COLLISION_HIDE_ON_CONTACT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, CollisionMode_obj, "COLLISION_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "CollisionMode", CollisionMode_obj);
}

static int js_particle_process_material_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ParticleProcessMaterial::__class_id);
	classes["ParticleProcessMaterial"] = ParticleProcessMaterial::__class_id;
	class_id_list.insert(ParticleProcessMaterial::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ParticleProcessMaterial::__class_id, &particle_process_material_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ParticleProcessMaterial::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ParticleProcessMaterial::__class_id, proto);

	define_particle_process_material_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, particle_process_material_class_proto_funcs, _countof(particle_process_material_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, particle_process_material_class_constructor, "ParticleProcessMaterial", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ParticleProcessMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_particle_process_material_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/material';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_particle_process_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ParticleProcessMaterial");
	return m;
}

JSModuleDef *js_init_particle_process_material_module(JSContext *ctx) {
	return _js_init_particle_process_material_module(ctx, "@godot/classes/particle_process_material");
}

void register_particle_process_material() {
	ParticleProcessMaterial::__init_js_class_id();
	js_init_particle_process_material_module(ctx);
}