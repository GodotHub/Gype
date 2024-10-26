
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/cpu_particles2d.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void cpu_particles2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef cpu_particles2d_class_def = {
	"CPUParticles2D",
	.finalizer = cpu_particles2d_class_finalizer
};

static JSValue cpu_particles2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CPUParticles2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	CPUParticles2D *cpu_particles2d_class = memnew(CPUParticles2D);
	if (!cpu_particles2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, cpu_particles2d_class);	
	return obj;
}
static JSValue cpu_particles2d_class_set_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_emitting, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_amount, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_lifetime, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_one_shot, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_pre_process_time, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_explosiveness_ratio, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_randomness_ratio, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_lifetime_randomness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_lifetime_randomness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_use_local_coordinates, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_fixed_fps, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_fractional_delta, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_speed_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_is_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::is_emitting, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_amount, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_lifetime, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_one_shot, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_pre_process_time, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_explosiveness_ratio, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_randomness_ratio, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_lifetime_randomness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_lifetime_randomness, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_use_local_coordinates, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_fixed_fps, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_fractional_delta, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_speed_scale, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_draw_order, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_draw_order, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_texture, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_restart(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::restart, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_set_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_direction, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_spread, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_spread, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_param_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_param_min, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_param_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_param_min, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_param_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_param_max, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_param_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_param_max, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_param_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_param_curve, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_param_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_param_curve, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_color, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_color_ramp, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_color_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_color_ramp, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_color_initial_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_color_initial_ramp, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_color_initial_ramp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_color_initial_ramp, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_particle_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_particle_flag, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_particle_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_particle_flag, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_emission_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_emission_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_emission_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_emission_shape, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_emission_sphere_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_emission_sphere_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_emission_sphere_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_emission_sphere_radius, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_emission_rect_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_emission_rect_extents, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_emission_rect_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_emission_rect_extents, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_emission_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_emission_points, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_emission_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_emission_points, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_emission_normals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_emission_normals, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_emission_normals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_emission_normals, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_emission_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_emission_colors, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_emission_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_emission_colors, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_gravity, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_gravity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_split_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CPUParticles2D::get_split_scale, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_split_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_split_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_scale_curve_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_scale_curve_x, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_scale_curve_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_scale_curve_x, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_get_scale_curve_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CPUParticles2D::get_scale_curve_y, ctx, this_val, argc, argv);
};
static JSValue cpu_particles2d_class_set_scale_curve_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::set_scale_curve_y, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue cpu_particles2d_class_convert_from_particles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CPUParticles2D::convert_from_particles, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry cpu_particles2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_emitting", 1, &cpu_particles2d_class_set_emitting),
	JS_CFUNC_DEF("set_amount", 1, &cpu_particles2d_class_set_amount),
	JS_CFUNC_DEF("set_lifetime", 1, &cpu_particles2d_class_set_lifetime),
	JS_CFUNC_DEF("set_one_shot", 1, &cpu_particles2d_class_set_one_shot),
	JS_CFUNC_DEF("set_pre_process_time", 1, &cpu_particles2d_class_set_pre_process_time),
	JS_CFUNC_DEF("set_explosiveness_ratio", 1, &cpu_particles2d_class_set_explosiveness_ratio),
	JS_CFUNC_DEF("set_randomness_ratio", 1, &cpu_particles2d_class_set_randomness_ratio),
	JS_CFUNC_DEF("set_lifetime_randomness", 1, &cpu_particles2d_class_set_lifetime_randomness),
	JS_CFUNC_DEF("set_use_local_coordinates", 1, &cpu_particles2d_class_set_use_local_coordinates),
	JS_CFUNC_DEF("set_fixed_fps", 1, &cpu_particles2d_class_set_fixed_fps),
	JS_CFUNC_DEF("set_fractional_delta", 1, &cpu_particles2d_class_set_fractional_delta),
	JS_CFUNC_DEF("set_speed_scale", 1, &cpu_particles2d_class_set_speed_scale),
	JS_CFUNC_DEF("is_emitting", 0, &cpu_particles2d_class_is_emitting),
	JS_CFUNC_DEF("get_amount", 0, &cpu_particles2d_class_get_amount),
	JS_CFUNC_DEF("get_lifetime", 0, &cpu_particles2d_class_get_lifetime),
	JS_CFUNC_DEF("get_one_shot", 0, &cpu_particles2d_class_get_one_shot),
	JS_CFUNC_DEF("get_pre_process_time", 0, &cpu_particles2d_class_get_pre_process_time),
	JS_CFUNC_DEF("get_explosiveness_ratio", 0, &cpu_particles2d_class_get_explosiveness_ratio),
	JS_CFUNC_DEF("get_randomness_ratio", 0, &cpu_particles2d_class_get_randomness_ratio),
	JS_CFUNC_DEF("get_lifetime_randomness", 0, &cpu_particles2d_class_get_lifetime_randomness),
	JS_CFUNC_DEF("get_use_local_coordinates", 0, &cpu_particles2d_class_get_use_local_coordinates),
	JS_CFUNC_DEF("get_fixed_fps", 0, &cpu_particles2d_class_get_fixed_fps),
	JS_CFUNC_DEF("get_fractional_delta", 0, &cpu_particles2d_class_get_fractional_delta),
	JS_CFUNC_DEF("get_speed_scale", 0, &cpu_particles2d_class_get_speed_scale),
	JS_CFUNC_DEF("set_draw_order", 1, &cpu_particles2d_class_set_draw_order),
	JS_CFUNC_DEF("get_draw_order", 0, &cpu_particles2d_class_get_draw_order),
	JS_CFUNC_DEF("set_texture", 1, &cpu_particles2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &cpu_particles2d_class_get_texture),
	JS_CFUNC_DEF("restart", 0, &cpu_particles2d_class_restart),
	JS_CFUNC_DEF("set_direction", 1, &cpu_particles2d_class_set_direction),
	JS_CFUNC_DEF("get_direction", 0, &cpu_particles2d_class_get_direction),
	JS_CFUNC_DEF("set_spread", 1, &cpu_particles2d_class_set_spread),
	JS_CFUNC_DEF("get_spread", 0, &cpu_particles2d_class_get_spread),
	JS_CFUNC_DEF("set_param_min", 2, &cpu_particles2d_class_set_param_min),
	JS_CFUNC_DEF("get_param_min", 1, &cpu_particles2d_class_get_param_min),
	JS_CFUNC_DEF("set_param_max", 2, &cpu_particles2d_class_set_param_max),
	JS_CFUNC_DEF("get_param_max", 1, &cpu_particles2d_class_get_param_max),
	JS_CFUNC_DEF("set_param_curve", 2, &cpu_particles2d_class_set_param_curve),
	JS_CFUNC_DEF("get_param_curve", 1, &cpu_particles2d_class_get_param_curve),
	JS_CFUNC_DEF("set_color", 1, &cpu_particles2d_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &cpu_particles2d_class_get_color),
	JS_CFUNC_DEF("set_color_ramp", 1, &cpu_particles2d_class_set_color_ramp),
	JS_CFUNC_DEF("get_color_ramp", 0, &cpu_particles2d_class_get_color_ramp),
	JS_CFUNC_DEF("set_color_initial_ramp", 1, &cpu_particles2d_class_set_color_initial_ramp),
	JS_CFUNC_DEF("get_color_initial_ramp", 0, &cpu_particles2d_class_get_color_initial_ramp),
	JS_CFUNC_DEF("set_particle_flag", 2, &cpu_particles2d_class_set_particle_flag),
	JS_CFUNC_DEF("get_particle_flag", 1, &cpu_particles2d_class_get_particle_flag),
	JS_CFUNC_DEF("set_emission_shape", 1, &cpu_particles2d_class_set_emission_shape),
	JS_CFUNC_DEF("get_emission_shape", 0, &cpu_particles2d_class_get_emission_shape),
	JS_CFUNC_DEF("set_emission_sphere_radius", 1, &cpu_particles2d_class_set_emission_sphere_radius),
	JS_CFUNC_DEF("get_emission_sphere_radius", 0, &cpu_particles2d_class_get_emission_sphere_radius),
	JS_CFUNC_DEF("set_emission_rect_extents", 1, &cpu_particles2d_class_set_emission_rect_extents),
	JS_CFUNC_DEF("get_emission_rect_extents", 0, &cpu_particles2d_class_get_emission_rect_extents),
	JS_CFUNC_DEF("set_emission_points", 1, &cpu_particles2d_class_set_emission_points),
	JS_CFUNC_DEF("get_emission_points", 0, &cpu_particles2d_class_get_emission_points),
	JS_CFUNC_DEF("set_emission_normals", 1, &cpu_particles2d_class_set_emission_normals),
	JS_CFUNC_DEF("get_emission_normals", 0, &cpu_particles2d_class_get_emission_normals),
	JS_CFUNC_DEF("set_emission_colors", 1, &cpu_particles2d_class_set_emission_colors),
	JS_CFUNC_DEF("get_emission_colors", 0, &cpu_particles2d_class_get_emission_colors),
	JS_CFUNC_DEF("get_gravity", 0, &cpu_particles2d_class_get_gravity),
	JS_CFUNC_DEF("set_gravity", 1, &cpu_particles2d_class_set_gravity),
	JS_CFUNC_DEF("get_split_scale", 0, &cpu_particles2d_class_get_split_scale),
	JS_CFUNC_DEF("set_split_scale", 1, &cpu_particles2d_class_set_split_scale),
	JS_CFUNC_DEF("get_scale_curve_x", 0, &cpu_particles2d_class_get_scale_curve_x),
	JS_CFUNC_DEF("set_scale_curve_x", 1, &cpu_particles2d_class_set_scale_curve_x),
	JS_CFUNC_DEF("get_scale_curve_y", 0, &cpu_particles2d_class_get_scale_curve_y),
	JS_CFUNC_DEF("set_scale_curve_y", 1, &cpu_particles2d_class_set_scale_curve_y),
	JS_CFUNC_DEF("convert_from_particles", 1, &cpu_particles2d_class_convert_from_particles),
};

void define_cpu_particles2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emitting"),
        JS_NewCFunction(ctx, cpu_particles2d_class_is_emitting, "is_emitting", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_emitting, "set_emitting", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "amount"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_amount, "get_amount", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_amount, "set_amount", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "lifetime"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_lifetime, "get_lifetime", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_lifetime, "set_lifetime", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "one_shot"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_one_shot, "get_one_shot", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_one_shot, "set_one_shot", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "preprocess"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_pre_process_time, "get_pre_process_time", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_pre_process_time, "set_pre_process_time", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "speed_scale"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_speed_scale, "get_speed_scale", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_speed_scale, "set_speed_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "explosiveness"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_explosiveness_ratio, "get_explosiveness_ratio", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_explosiveness_ratio, "set_explosiveness_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "randomness"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_randomness_ratio, "get_randomness_ratio", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_randomness_ratio, "set_randomness_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "lifetime_randomness"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_lifetime_randomness, "get_lifetime_randomness", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_lifetime_randomness, "set_lifetime_randomness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fixed_fps"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_fixed_fps, "get_fixed_fps", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_fixed_fps, "set_fixed_fps", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fract_delta"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_fractional_delta, "get_fractional_delta", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_fractional_delta, "set_fractional_delta", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "local_coords"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_use_local_coordinates, "get_use_local_coordinates", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_use_local_coordinates, "set_use_local_coordinates", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "draw_order"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_draw_order, "get_draw_order", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_draw_order, "set_draw_order", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_shape"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_emission_shape, "get_emission_shape", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_emission_shape, "set_emission_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_sphere_radius"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_emission_sphere_radius, "get_emission_sphere_radius", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_emission_sphere_radius, "set_emission_sphere_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_rect_extents"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_emission_rect_extents, "get_emission_rect_extents", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_emission_rect_extents, "set_emission_rect_extents", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_points"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_emission_points, "get_emission_points", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_emission_points, "set_emission_points", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_normals"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_emission_normals, "get_emission_normals", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_emission_normals, "set_emission_normals", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_colors"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_emission_colors, "get_emission_colors", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_emission_colors, "set_emission_colors", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "particle_flag_align_y"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_particle_flag, "get_particle_flag", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_particle_flag, "set_particle_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "direction"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_direction, "get_direction", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_direction, "set_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "spread"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_spread, "get_spread", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_spread, "set_spread", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gravity"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_gravity, "get_gravity", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_gravity, "set_gravity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "initial_velocity_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "initial_velocity_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_velocity_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_velocity_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_velocity_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "orbit_velocity_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "orbit_velocity_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "orbit_velocity_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_accel_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_accel_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_accel_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_accel_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_accel_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_accel_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tangential_accel_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tangential_accel_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tangential_accel_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "damping_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "damping_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "damping_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angle_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angle_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angle_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_amount_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_amount_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_amount_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "split_scale"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_split_scale, "get_split_scale", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_split_scale, "set_split_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_curve_x"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_scale_curve_x, "get_scale_curve_x", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_scale_curve_x, "set_scale_curve_x", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale_curve_y"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_scale_curve_y, "get_scale_curve_y", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_scale_curve_y, "set_scale_curve_y", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_color, "set_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color_ramp"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_color_ramp, "get_color_ramp", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_color_ramp, "set_color_ramp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color_initial_ramp"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_color_initial_ramp, "get_color_initial_ramp", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_color_initial_ramp, "set_color_initial_ramp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hue_variation_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hue_variation_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hue_variation_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_speed_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_speed_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_speed_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_offset_min"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_min, "get_param_min", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_min, "set_param_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_offset_max"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_max, "get_param_max", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_max, "set_param_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anim_offset_curve"),
        JS_NewCFunction(ctx, cpu_particles2d_class_get_param_curve, "get_param_curve", 0),
        JS_NewCFunction(ctx, cpu_particles2d_class_set_param_curve, "set_param_curve", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue DrawOrder_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, DrawOrder_obj, "DRAW_ORDER_INDEX", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, DrawOrder_obj, "DRAW_ORDER_LIFETIME", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "DrawOrder", DrawOrder_obj);
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
	JS_SetPropertyStr(ctx, Parameter_obj, "PARAM_MAX", JS_NewInt64(ctx, 12));
	JS_SetPropertyStr(ctx, proto, "Parameter", Parameter_obj);
	JSValue ParticleFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ParticleFlags_obj, "PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ParticleFlags_obj, "PARTICLE_FLAG_ROTATE_Y", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ParticleFlags_obj, "PARTICLE_FLAG_DISABLE_Z", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ParticleFlags_obj, "PARTICLE_FLAG_MAX", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "ParticleFlags", ParticleFlags_obj);
	JSValue EmissionShape_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_POINT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_SPHERE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_SPHERE_SURFACE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_RECTANGLE", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_POINTS", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_DIRECTED_POINTS", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, EmissionShape_obj, "EMISSION_SHAPE_MAX", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, proto, "EmissionShape", EmissionShape_obj);
}

static int js_cpu_particles2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CPUParticles2D::__class_id);
	classes["CPUParticles2D"] = CPUParticles2D::__class_id;
	class_id_list.insert(CPUParticles2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CPUParticles2D::__class_id, &cpu_particles2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CPUParticles2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CPUParticles2D::__class_id, proto);

	define_cpu_particles2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, cpu_particles2d_class_proto_funcs, _countof(cpu_particles2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, cpu_particles2d_class_constructor, "CPUParticles2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CPUParticles2D", ctor);

	return 0;
}

JSModuleDef *_js_init_cpu_particles2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_cpu_particles2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CPUParticles2D");
	return m;
}

JSModuleDef *js_init_cpu_particles2d_module(JSContext *ctx) {
	return _js_init_cpu_particles2d_module(ctx, "godot/classes/cpu_particles2d");
}

void register_cpu_particles2d() {
	CPUParticles2D::__init_js_class_id();
	js_init_cpu_particles2d_module(ctx);
}