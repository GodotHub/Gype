
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/particle_process_material.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void particle_process_material_class_finalizer(JSRuntime *rt, JSValue val) {
	ParticleProcessMaterial *particle_process_material = static_cast<ParticleProcessMaterial *>(JS_GetOpaque(val, ParticleProcessMaterial::__class_id));
	if (particle_process_material)
		ParticleProcessMaterial::free(nullptr, particle_process_material);
}

static JSClassDef particle_process_material_class_def = {
	"ParticleProcessMaterial",
	.finalizer = particle_process_material_class_finalizer
};

static JSValue particle_process_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ParticleProcessMaterial *particle_process_material_class;
	JSValue obj = JS_NewObjectClass(ctx, ParticleProcessMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;
	particle_process_material_class = memnew(ParticleProcessMaterial);
	if (!particle_process_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, particle_process_material_class);
	return obj;
}
static JSValue particle_process_material_class_set_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_direction, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_direction, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_inherit_velocity_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_inherit_velocity_ratio, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_inherit_velocity_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ParticleProcessMaterial::get_inherit_velocity_ratio, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_spread, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_spread, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_flatness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_flatness, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_flatness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_flatness, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_param, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_param, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_param_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_param_min, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_param_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_param_min, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_param_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_param_max, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_param_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_param_max, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_param_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_param_texture, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_param_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_param_texture, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_color, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_color, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_color_ramp, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_color_ramp, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_alpha_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_alpha_curve, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_alpha_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_alpha_curve, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_curve, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_curve, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_color_initial_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_color_initial_ramp, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_color_initial_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_color_initial_ramp, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_velocity_limit_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_velocity_limit_curve, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_velocity_limit_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_velocity_limit_curve, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_particle_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_particle_flag, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_particle_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_particle_flag, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_velocity_pivot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_velocity_pivot, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_velocity_pivot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ParticleProcessMaterial::get_velocity_pivot, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_shape, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_shape, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_sphere_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_sphere_radius, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_sphere_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_sphere_radius, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_box_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_box_extents, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_box_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_box_extents, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_point_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_point_texture, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_point_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_point_texture, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_normal_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_normal_texture, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_normal_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_normal_texture, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_color_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_color_texture, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_color_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_color_texture, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_point_count, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_point_count, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_ring_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_ring_axis, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_ring_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_ring_axis, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_ring_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_ring_height, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_ring_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_ring_height, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_ring_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_ring_radius, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_ring_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_ring_radius, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_ring_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_ring_inner_radius, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_ring_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_ring_inner_radius, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_shape_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_shape_offset, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_shape_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_shape_offset, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_emission_shape_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_emission_shape_scale, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_emission_shape_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_emission_shape_scale, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_get_turbulence_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_enabled, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_turbulence_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_enabled, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_turbulence_noise_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_noise_strength, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_turbulence_noise_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_noise_strength, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_turbulence_noise_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_noise_scale, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_turbulence_noise_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_noise_scale, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_turbulence_noise_speed_random(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_noise_speed_random, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_turbulence_noise_speed_random(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_noise_speed_random, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_turbulence_noise_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_turbulence_noise_speed, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_turbulence_noise_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_turbulence_noise_speed, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_gravity, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_gravity, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_set_lifetime_randomness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_lifetime_randomness, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_lifetime_randomness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_lifetime_randomness, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_get_sub_emitter_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_mode, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_mode, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_sub_emitter_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_frequency, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_frequency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_frequency, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_sub_emitter_amount_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_amount_at_end, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_amount_at_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_amount_at_end, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_sub_emitter_amount_at_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_amount_at_collision, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_amount_at_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_amount_at_collision, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_sub_emitter_keep_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_sub_emitter_keep_velocity, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_sub_emitter_keep_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_sub_emitter_keep_velocity, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_set_attractor_interaction_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_attractor_interaction_enabled, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_is_attractor_interaction_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::is_attractor_interaction_enabled, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_collision_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_collision_mode, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_collision_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_collision_mode, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_collision_use_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_collision_use_scale, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_is_collision_using_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::is_collision_using_scale, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_collision_friction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_collision_friction, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_collision_friction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_collision_friction, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
};
static JSValue particle_process_material_class_set_collision_bounce(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ParticleProcessMaterial::set_collision_bounce, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue particle_process_material_class_get_collision_bounce(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParticleProcessMaterial::get_collision_bounce, ParticleProcessMaterial::__class_id, ctx, this_val, argv);
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

static int js_particle_process_material_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ParticleProcessMaterial::__class_id);
	classes["ParticleProcessMaterial"] = ParticleProcessMaterial::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ParticleProcessMaterial::__class_id, &particle_process_material_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ParticleProcessMaterial::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, particle_process_material_class_proto_funcs, _countof(particle_process_material_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, particle_process_material_class_constructor, "ParticleProcessMaterial", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ParticleProcessMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_particle_process_material_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_particle_process_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ParticleProcessMaterial");
	return m;
}

JSModuleDef *js_init_particle_process_material_module(JSContext *ctx) {
	return _js_init_particle_process_material_module(ctx, "godot/classes/particle_process_material");
}

void register_particle_process_material() {
	js_init_particle_process_material_module(ctx);
}