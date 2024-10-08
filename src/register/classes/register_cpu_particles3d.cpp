
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/cpu_particles3d.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void cpu_particles3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CPUParticles3D *cpu_particles3d = static_cast<CPUParticles3D *>(JS_GetOpaque(val, CPUParticles3D::__class_id));
	if (cpu_particles3d)
		CPUParticles3D::free(nullptr, cpu_particles3d);
}

static JSClassDef cpu_particles3d_class_def = {
	"CPUParticles3D",
	.finalizer = cpu_particles3d_class_finalizer
};

static JSValue cpu_particles3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CPUParticles3D *cpu_particles3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CPUParticles3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	cpu_particles3d_class = memnew(CPUParticles3D);
	if (!cpu_particles3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, cpu_particles3d_class);
	return obj;
}
static JSValue cpu_particles3d_class_set_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emitting, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_amount, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_lifetime, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_one_shot, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_pre_process_time, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_explosiveness_ratio, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_randomness_ratio, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_visibility_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_visibility_aabb, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_lifetime_randomness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_lifetime_randomness, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_use_local_coordinates, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_fixed_fps, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_fractional_delta, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_speed_scale, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_is_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::is_emitting, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_amount, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_lifetime, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_one_shot, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_pre_process_time, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_explosiveness_ratio, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_randomness_ratio, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_visibility_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_visibility_aabb, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_lifetime_randomness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_lifetime_randomness, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_use_local_coordinates, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_fixed_fps, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_fractional_delta, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_speed_scale, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_draw_order, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_draw_order, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_mesh, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_mesh, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_restart(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::restart, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_set_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_direction, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_direction, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_spread, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_spread, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_flatness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_flatness, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_flatness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_flatness, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_param_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_param_min, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_param_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_param_min, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_param_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_param_max, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_param_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_param_max, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_param_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_param_curve, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_param_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_param_curve, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_color, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_color, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_color_ramp, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_color_ramp, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_color_initial_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_color_initial_ramp, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_color_initial_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_color_initial_ramp, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_particle_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_particle_flag, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_particle_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_particle_flag, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_shape, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_shape, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_sphere_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_sphere_radius, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_sphere_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_sphere_radius, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_box_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_box_extents, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_box_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_box_extents, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_points, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_points, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_normals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_normals, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_normals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_normals, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_colors, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_colors, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_ring_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_ring_axis, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_ring_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_ring_axis, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_ring_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_ring_height, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_ring_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_ring_height, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_ring_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_ring_radius, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_ring_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_ring_radius, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_emission_ring_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_emission_ring_inner_radius, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_emission_ring_inner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_emission_ring_inner_radius, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_gravity, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_gravity, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_split_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CPUParticles3D::get_split_scale, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_split_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_split_scale, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_scale_curve_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_scale_curve_x, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_scale_curve_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_scale_curve_x, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_scale_curve_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_scale_curve_y, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_scale_curve_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_scale_curve_y, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_get_scale_curve_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CPUParticles3D::get_scale_curve_z, CPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue cpu_particles3d_class_set_scale_curve_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::set_scale_curve_z, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles3d_class_convert_from_particles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CPUParticles3D::convert_from_particles, CPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry cpu_particles3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_emitting", 1, &cpu_particles3d_class_set_emitting),
	JS_CFUNC_DEF("set_amount", 1, &cpu_particles3d_class_set_amount),
	JS_CFUNC_DEF("set_lifetime", 1, &cpu_particles3d_class_set_lifetime),
	JS_CFUNC_DEF("set_one_shot", 1, &cpu_particles3d_class_set_one_shot),
	JS_CFUNC_DEF("set_pre_process_time", 1, &cpu_particles3d_class_set_pre_process_time),
	JS_CFUNC_DEF("set_explosiveness_ratio", 1, &cpu_particles3d_class_set_explosiveness_ratio),
	JS_CFUNC_DEF("set_randomness_ratio", 1, &cpu_particles3d_class_set_randomness_ratio),
	JS_CFUNC_DEF("set_visibility_aabb", 1, &cpu_particles3d_class_set_visibility_aabb),
	JS_CFUNC_DEF("set_lifetime_randomness", 1, &cpu_particles3d_class_set_lifetime_randomness),
	JS_CFUNC_DEF("set_use_local_coordinates", 1, &cpu_particles3d_class_set_use_local_coordinates),
	JS_CFUNC_DEF("set_fixed_fps", 1, &cpu_particles3d_class_set_fixed_fps),
	JS_CFUNC_DEF("set_fractional_delta", 1, &cpu_particles3d_class_set_fractional_delta),
	JS_CFUNC_DEF("set_speed_scale", 1, &cpu_particles3d_class_set_speed_scale),
	JS_CFUNC_DEF("is_emitting", 0, &cpu_particles3d_class_is_emitting),
	JS_CFUNC_DEF("get_amount", 0, &cpu_particles3d_class_get_amount),
	JS_CFUNC_DEF("get_lifetime", 0, &cpu_particles3d_class_get_lifetime),
	JS_CFUNC_DEF("get_one_shot", 0, &cpu_particles3d_class_get_one_shot),
	JS_CFUNC_DEF("get_pre_process_time", 0, &cpu_particles3d_class_get_pre_process_time),
	JS_CFUNC_DEF("get_explosiveness_ratio", 0, &cpu_particles3d_class_get_explosiveness_ratio),
	JS_CFUNC_DEF("get_randomness_ratio", 0, &cpu_particles3d_class_get_randomness_ratio),
	JS_CFUNC_DEF("get_visibility_aabb", 0, &cpu_particles3d_class_get_visibility_aabb),
	JS_CFUNC_DEF("get_lifetime_randomness", 0, &cpu_particles3d_class_get_lifetime_randomness),
	JS_CFUNC_DEF("get_use_local_coordinates", 0, &cpu_particles3d_class_get_use_local_coordinates),
	JS_CFUNC_DEF("get_fixed_fps", 0, &cpu_particles3d_class_get_fixed_fps),
	JS_CFUNC_DEF("get_fractional_delta", 0, &cpu_particles3d_class_get_fractional_delta),
	JS_CFUNC_DEF("get_speed_scale", 0, &cpu_particles3d_class_get_speed_scale),
	JS_CFUNC_DEF("set_draw_order", 1, &cpu_particles3d_class_set_draw_order),
	JS_CFUNC_DEF("get_draw_order", 0, &cpu_particles3d_class_get_draw_order),
	JS_CFUNC_DEF("set_mesh", 1, &cpu_particles3d_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &cpu_particles3d_class_get_mesh),
	JS_CFUNC_DEF("restart", 0, &cpu_particles3d_class_restart),
	JS_CFUNC_DEF("set_direction", 1, &cpu_particles3d_class_set_direction),
	JS_CFUNC_DEF("get_direction", 0, &cpu_particles3d_class_get_direction),
	JS_CFUNC_DEF("set_spread", 1, &cpu_particles3d_class_set_spread),
	JS_CFUNC_DEF("get_spread", 0, &cpu_particles3d_class_get_spread),
	JS_CFUNC_DEF("set_flatness", 1, &cpu_particles3d_class_set_flatness),
	JS_CFUNC_DEF("get_flatness", 0, &cpu_particles3d_class_get_flatness),
	JS_CFUNC_DEF("set_param_min", 2, &cpu_particles3d_class_set_param_min),
	JS_CFUNC_DEF("get_param_min", 1, &cpu_particles3d_class_get_param_min),
	JS_CFUNC_DEF("set_param_max", 2, &cpu_particles3d_class_set_param_max),
	JS_CFUNC_DEF("get_param_max", 1, &cpu_particles3d_class_get_param_max),
	JS_CFUNC_DEF("set_param_curve", 2, &cpu_particles3d_class_set_param_curve),
	JS_CFUNC_DEF("get_param_curve", 1, &cpu_particles3d_class_get_param_curve),
	JS_CFUNC_DEF("set_color", 1, &cpu_particles3d_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &cpu_particles3d_class_get_color),
	JS_CFUNC_DEF("set_color_ramp", 1, &cpu_particles3d_class_set_color_ramp),
	JS_CFUNC_DEF("get_color_ramp", 0, &cpu_particles3d_class_get_color_ramp),
	JS_CFUNC_DEF("set_color_initial_ramp", 1, &cpu_particles3d_class_set_color_initial_ramp),
	JS_CFUNC_DEF("get_color_initial_ramp", 0, &cpu_particles3d_class_get_color_initial_ramp),
	JS_CFUNC_DEF("set_particle_flag", 2, &cpu_particles3d_class_set_particle_flag),
	JS_CFUNC_DEF("get_particle_flag", 1, &cpu_particles3d_class_get_particle_flag),
	JS_CFUNC_DEF("set_emission_shape", 1, &cpu_particles3d_class_set_emission_shape),
	JS_CFUNC_DEF("get_emission_shape", 0, &cpu_particles3d_class_get_emission_shape),
	JS_CFUNC_DEF("set_emission_sphere_radius", 1, &cpu_particles3d_class_set_emission_sphere_radius),
	JS_CFUNC_DEF("get_emission_sphere_radius", 0, &cpu_particles3d_class_get_emission_sphere_radius),
	JS_CFUNC_DEF("set_emission_box_extents", 1, &cpu_particles3d_class_set_emission_box_extents),
	JS_CFUNC_DEF("get_emission_box_extents", 0, &cpu_particles3d_class_get_emission_box_extents),
	JS_CFUNC_DEF("set_emission_points", 1, &cpu_particles3d_class_set_emission_points),
	JS_CFUNC_DEF("get_emission_points", 0, &cpu_particles3d_class_get_emission_points),
	JS_CFUNC_DEF("set_emission_normals", 1, &cpu_particles3d_class_set_emission_normals),
	JS_CFUNC_DEF("get_emission_normals", 0, &cpu_particles3d_class_get_emission_normals),
	JS_CFUNC_DEF("set_emission_colors", 1, &cpu_particles3d_class_set_emission_colors),
	JS_CFUNC_DEF("get_emission_colors", 0, &cpu_particles3d_class_get_emission_colors),
	JS_CFUNC_DEF("set_emission_ring_axis", 1, &cpu_particles3d_class_set_emission_ring_axis),
	JS_CFUNC_DEF("get_emission_ring_axis", 0, &cpu_particles3d_class_get_emission_ring_axis),
	JS_CFUNC_DEF("set_emission_ring_height", 1, &cpu_particles3d_class_set_emission_ring_height),
	JS_CFUNC_DEF("get_emission_ring_height", 0, &cpu_particles3d_class_get_emission_ring_height),
	JS_CFUNC_DEF("set_emission_ring_radius", 1, &cpu_particles3d_class_set_emission_ring_radius),
	JS_CFUNC_DEF("get_emission_ring_radius", 0, &cpu_particles3d_class_get_emission_ring_radius),
	JS_CFUNC_DEF("set_emission_ring_inner_radius", 1, &cpu_particles3d_class_set_emission_ring_inner_radius),
	JS_CFUNC_DEF("get_emission_ring_inner_radius", 0, &cpu_particles3d_class_get_emission_ring_inner_radius),
	JS_CFUNC_DEF("get_gravity", 0, &cpu_particles3d_class_get_gravity),
	JS_CFUNC_DEF("set_gravity", 1, &cpu_particles3d_class_set_gravity),
	JS_CFUNC_DEF("get_split_scale", 0, &cpu_particles3d_class_get_split_scale),
	JS_CFUNC_DEF("set_split_scale", 1, &cpu_particles3d_class_set_split_scale),
	JS_CFUNC_DEF("get_scale_curve_x", 0, &cpu_particles3d_class_get_scale_curve_x),
	JS_CFUNC_DEF("set_scale_curve_x", 1, &cpu_particles3d_class_set_scale_curve_x),
	JS_CFUNC_DEF("get_scale_curve_y", 0, &cpu_particles3d_class_get_scale_curve_y),
	JS_CFUNC_DEF("set_scale_curve_y", 1, &cpu_particles3d_class_set_scale_curve_y),
	JS_CFUNC_DEF("get_scale_curve_z", 0, &cpu_particles3d_class_get_scale_curve_z),
	JS_CFUNC_DEF("set_scale_curve_z", 1, &cpu_particles3d_class_set_scale_curve_z),
	JS_CFUNC_DEF("convert_from_particles", 1, &cpu_particles3d_class_convert_from_particles),
};

static int js_cpu_particles3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CPUParticles3D::__class_id);
	classes["CPUParticles3D"] = CPUParticles3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CPUParticles3D::__class_id, &cpu_particles3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CPUParticles3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, cpu_particles3d_class_proto_funcs, _countof(cpu_particles3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, cpu_particles3d_class_constructor, "CPUParticles3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CPUParticles3D", ctor);

	return 0;
}

JSModuleDef *_js_init_cpu_particles3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_cpu_particles3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CPUParticles3D");
	return m;
}

JSModuleDef *js_init_cpu_particles3d_module(JSContext *ctx) {
	return _js_init_cpu_particles3d_module(ctx, "godot/classes/cpu_particles3d");
}

void register_cpu_particles3d() {
	js_init_cpu_particles3d_module(ctx);
}