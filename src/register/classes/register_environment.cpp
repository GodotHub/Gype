
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void environment_class_finalizer(JSRuntime *rt, JSValue val) {
	Environment *environment = static_cast<Environment *>(JS_GetOpaque(val, Environment::__class_id));
	if (environment)
		Environment::free(nullptr, environment);
}

static JSClassDef environment_class_def = {
	"Environment",
	.finalizer = environment_class_finalizer
};

static JSValue environment_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Environment *environment_class;
	JSValue obj = JS_NewObjectClass(ctx, Environment::__class_id);
	if (JS_IsException(obj))
		return obj;
	environment_class = memnew(Environment);
	if (!environment_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, environment_class);
	return obj;
}
static JSValue environment_class_set_background(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_background, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_background(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_background, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sky(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sky, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sky(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sky, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sky_custom_fov(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sky_custom_fov, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sky_custom_fov(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sky_custom_fov, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sky_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sky_rotation, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sky_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sky_rotation, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_bg_color, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_bg_color, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_bg_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_bg_energy_multiplier, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_bg_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_bg_energy_multiplier, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_bg_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_bg_intensity, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_bg_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_bg_intensity, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_canvas_max_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_canvas_max_layer, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_canvas_max_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_canvas_max_layer, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_camera_feed_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_camera_feed_id, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_camera_feed_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_camera_feed_id, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ambient_light_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ambient_light_color, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ambient_light_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ambient_light_color, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ambient_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ambient_source, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ambient_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ambient_source, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ambient_light_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ambient_light_energy, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ambient_light_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ambient_light_energy, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ambient_light_sky_contribution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ambient_light_sky_contribution, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ambient_light_sky_contribution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ambient_light_sky_contribution, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_reflection_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_reflection_source, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_reflection_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_reflection_source, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_tonemapper(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_tonemapper, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_tonemapper(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_tonemapper, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_tonemap_exposure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_tonemap_exposure, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_tonemap_exposure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_tonemap_exposure, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_tonemap_white(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_tonemap_white, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_tonemap_white(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_tonemap_white, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssr_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssr_enabled, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_ssr_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_ssr_enabled, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssr_max_steps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssr_max_steps, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssr_max_steps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssr_max_steps, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssr_fade_in(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssr_fade_in, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssr_fade_in(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssr_fade_in, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssr_fade_out(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssr_fade_out, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssr_fade_out(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssr_fade_out, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssr_depth_tolerance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssr_depth_tolerance, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssr_depth_tolerance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssr_depth_tolerance, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssao_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssao_enabled, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_ssao_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_ssao_enabled, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssao_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssao_radius, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssao_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssao_radius, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssao_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssao_intensity, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssao_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssao_intensity, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssao_power(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssao_power, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssao_power(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssao_power, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssao_detail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssao_detail, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssao_detail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssao_detail, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssao_horizon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssao_horizon, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssao_horizon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssao_horizon, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssao_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssao_sharpness, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssao_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssao_sharpness, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssao_direct_light_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssao_direct_light_affect, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssao_direct_light_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssao_direct_light_affect, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssao_ao_channel_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssao_ao_channel_affect, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssao_ao_channel_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssao_ao_channel_affect, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssil_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssil_enabled, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_ssil_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_ssil_enabled, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssil_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssil_radius, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssil_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssil_radius, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssil_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssil_intensity, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssil_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssil_intensity, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssil_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssil_sharpness, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssil_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssil_sharpness, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_ssil_normal_rejection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_ssil_normal_rejection, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_ssil_normal_rejection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_ssil_normal_rejection, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_enabled, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_sdfgi_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_sdfgi_enabled, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_cascades(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_cascades, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sdfgi_cascades(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sdfgi_cascades, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_min_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_min_cell_size, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sdfgi_min_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sdfgi_min_cell_size, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_max_distance, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sdfgi_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sdfgi_max_distance, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_cascade0_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_cascade0_distance, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sdfgi_cascade0_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sdfgi_cascade0_distance, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_y_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_y_scale, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sdfgi_y_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sdfgi_y_scale, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_use_occlusion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_use_occlusion, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_sdfgi_using_occlusion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_sdfgi_using_occlusion, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_bounce_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_bounce_feedback, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sdfgi_bounce_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sdfgi_bounce_feedback, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_read_sky_light(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_read_sky_light, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_sdfgi_reading_sky_light(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_sdfgi_reading_sky_light, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_energy, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sdfgi_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sdfgi_energy, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_normal_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_normal_bias, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sdfgi_normal_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sdfgi_normal_bias, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_sdfgi_probe_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_sdfgi_probe_bias, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_sdfgi_probe_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_sdfgi_probe_bias, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_enabled, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_glow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_glow_enabled, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_level, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_level, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_normalized, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_glow_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_glow_normalized, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_intensity, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_intensity, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_strength, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_strength, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_mix, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_mix, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_bloom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_bloom, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_bloom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_bloom, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_blend_mode, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_blend_mode, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_hdr_bleed_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_hdr_bleed_threshold, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_hdr_bleed_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_hdr_bleed_threshold, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_hdr_bleed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_hdr_bleed_scale, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_hdr_bleed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_hdr_bleed_scale, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_hdr_luminance_cap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_hdr_luminance_cap, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_hdr_luminance_cap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_hdr_luminance_cap, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_map_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_map_strength, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_map_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_map_strength, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_glow_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_glow_map, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_glow_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_glow_map, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_enabled, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_fog_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_fog_enabled, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_mode, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_mode, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_light_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_light_color, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_light_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_light_color, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_light_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_light_energy, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_light_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_light_energy, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_sun_scatter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_sun_scatter, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_sun_scatter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_sun_scatter, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_density, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_density, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_height, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_height, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_height_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_height_density, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_height_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_height_density, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_aerial_perspective(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_aerial_perspective, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_aerial_perspective(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_aerial_perspective, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_sky_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_sky_affect, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_sky_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_sky_affect, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_depth_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_depth_curve, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_depth_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_depth_curve, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_depth_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_depth_begin, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_depth_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_depth_begin, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_fog_depth_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_fog_depth_end, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_fog_depth_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_fog_depth_end, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_enabled, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_volumetric_fog_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_volumetric_fog_enabled, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_emission, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_emission, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_albedo, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_albedo, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_density, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_density, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_emission_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_emission_energy, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_emission_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_emission_energy, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_anisotropy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_anisotropy, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_anisotropy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_anisotropy, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_length, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_length, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_detail_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_detail_spread, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_detail_spread(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_detail_spread, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_gi_inject(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_gi_inject, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_gi_inject(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_gi_inject, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_ambient_inject(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_ambient_inject, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_ambient_inject(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_ambient_inject, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_sky_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_sky_affect, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_sky_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_sky_affect, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_temporal_reprojection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_temporal_reprojection_enabled, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_volumetric_fog_temporal_reprojection_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_volumetric_fog_temporal_reprojection_enabled, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_volumetric_fog_temporal_reprojection_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_volumetric_fog_temporal_reprojection_amount, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_volumetric_fog_temporal_reprojection_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_volumetric_fog_temporal_reprojection_amount, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_adjustment_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_adjustment_enabled, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_is_adjustment_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::is_adjustment_enabled, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_adjustment_brightness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_adjustment_brightness, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_adjustment_brightness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_adjustment_brightness, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_adjustment_contrast(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_adjustment_contrast, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_adjustment_contrast(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_adjustment_contrast, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_adjustment_saturation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_adjustment_saturation, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_adjustment_saturation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_adjustment_saturation, Environment::__class_id, ctx, this_val, argv);
};
static JSValue environment_class_set_adjustment_color_correction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Environment::set_adjustment_color_correction, Environment::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue environment_class_get_adjustment_color_correction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Environment::get_adjustment_color_correction, Environment::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry environment_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_background", 1, &environment_class_set_background),
	JS_CFUNC_DEF("get_background", 0, &environment_class_get_background),
	JS_CFUNC_DEF("set_sky", 1, &environment_class_set_sky),
	JS_CFUNC_DEF("get_sky", 0, &environment_class_get_sky),
	JS_CFUNC_DEF("set_sky_custom_fov", 1, &environment_class_set_sky_custom_fov),
	JS_CFUNC_DEF("get_sky_custom_fov", 0, &environment_class_get_sky_custom_fov),
	JS_CFUNC_DEF("set_sky_rotation", 1, &environment_class_set_sky_rotation),
	JS_CFUNC_DEF("get_sky_rotation", 0, &environment_class_get_sky_rotation),
	JS_CFUNC_DEF("set_bg_color", 1, &environment_class_set_bg_color),
	JS_CFUNC_DEF("get_bg_color", 0, &environment_class_get_bg_color),
	JS_CFUNC_DEF("set_bg_energy_multiplier", 1, &environment_class_set_bg_energy_multiplier),
	JS_CFUNC_DEF("get_bg_energy_multiplier", 0, &environment_class_get_bg_energy_multiplier),
	JS_CFUNC_DEF("set_bg_intensity", 1, &environment_class_set_bg_intensity),
	JS_CFUNC_DEF("get_bg_intensity", 0, &environment_class_get_bg_intensity),
	JS_CFUNC_DEF("set_canvas_max_layer", 1, &environment_class_set_canvas_max_layer),
	JS_CFUNC_DEF("get_canvas_max_layer", 0, &environment_class_get_canvas_max_layer),
	JS_CFUNC_DEF("set_camera_feed_id", 1, &environment_class_set_camera_feed_id),
	JS_CFUNC_DEF("get_camera_feed_id", 0, &environment_class_get_camera_feed_id),
	JS_CFUNC_DEF("set_ambient_light_color", 1, &environment_class_set_ambient_light_color),
	JS_CFUNC_DEF("get_ambient_light_color", 0, &environment_class_get_ambient_light_color),
	JS_CFUNC_DEF("set_ambient_source", 1, &environment_class_set_ambient_source),
	JS_CFUNC_DEF("get_ambient_source", 0, &environment_class_get_ambient_source),
	JS_CFUNC_DEF("set_ambient_light_energy", 1, &environment_class_set_ambient_light_energy),
	JS_CFUNC_DEF("get_ambient_light_energy", 0, &environment_class_get_ambient_light_energy),
	JS_CFUNC_DEF("set_ambient_light_sky_contribution", 1, &environment_class_set_ambient_light_sky_contribution),
	JS_CFUNC_DEF("get_ambient_light_sky_contribution", 0, &environment_class_get_ambient_light_sky_contribution),
	JS_CFUNC_DEF("set_reflection_source", 1, &environment_class_set_reflection_source),
	JS_CFUNC_DEF("get_reflection_source", 0, &environment_class_get_reflection_source),
	JS_CFUNC_DEF("set_tonemapper", 1, &environment_class_set_tonemapper),
	JS_CFUNC_DEF("get_tonemapper", 0, &environment_class_get_tonemapper),
	JS_CFUNC_DEF("set_tonemap_exposure", 1, &environment_class_set_tonemap_exposure),
	JS_CFUNC_DEF("get_tonemap_exposure", 0, &environment_class_get_tonemap_exposure),
	JS_CFUNC_DEF("set_tonemap_white", 1, &environment_class_set_tonemap_white),
	JS_CFUNC_DEF("get_tonemap_white", 0, &environment_class_get_tonemap_white),
	JS_CFUNC_DEF("set_ssr_enabled", 1, &environment_class_set_ssr_enabled),
	JS_CFUNC_DEF("is_ssr_enabled", 0, &environment_class_is_ssr_enabled),
	JS_CFUNC_DEF("set_ssr_max_steps", 1, &environment_class_set_ssr_max_steps),
	JS_CFUNC_DEF("get_ssr_max_steps", 0, &environment_class_get_ssr_max_steps),
	JS_CFUNC_DEF("set_ssr_fade_in", 1, &environment_class_set_ssr_fade_in),
	JS_CFUNC_DEF("get_ssr_fade_in", 0, &environment_class_get_ssr_fade_in),
	JS_CFUNC_DEF("set_ssr_fade_out", 1, &environment_class_set_ssr_fade_out),
	JS_CFUNC_DEF("get_ssr_fade_out", 0, &environment_class_get_ssr_fade_out),
	JS_CFUNC_DEF("set_ssr_depth_tolerance", 1, &environment_class_set_ssr_depth_tolerance),
	JS_CFUNC_DEF("get_ssr_depth_tolerance", 0, &environment_class_get_ssr_depth_tolerance),
	JS_CFUNC_DEF("set_ssao_enabled", 1, &environment_class_set_ssao_enabled),
	JS_CFUNC_DEF("is_ssao_enabled", 0, &environment_class_is_ssao_enabled),
	JS_CFUNC_DEF("set_ssao_radius", 1, &environment_class_set_ssao_radius),
	JS_CFUNC_DEF("get_ssao_radius", 0, &environment_class_get_ssao_radius),
	JS_CFUNC_DEF("set_ssao_intensity", 1, &environment_class_set_ssao_intensity),
	JS_CFUNC_DEF("get_ssao_intensity", 0, &environment_class_get_ssao_intensity),
	JS_CFUNC_DEF("set_ssao_power", 1, &environment_class_set_ssao_power),
	JS_CFUNC_DEF("get_ssao_power", 0, &environment_class_get_ssao_power),
	JS_CFUNC_DEF("set_ssao_detail", 1, &environment_class_set_ssao_detail),
	JS_CFUNC_DEF("get_ssao_detail", 0, &environment_class_get_ssao_detail),
	JS_CFUNC_DEF("set_ssao_horizon", 1, &environment_class_set_ssao_horizon),
	JS_CFUNC_DEF("get_ssao_horizon", 0, &environment_class_get_ssao_horizon),
	JS_CFUNC_DEF("set_ssao_sharpness", 1, &environment_class_set_ssao_sharpness),
	JS_CFUNC_DEF("get_ssao_sharpness", 0, &environment_class_get_ssao_sharpness),
	JS_CFUNC_DEF("set_ssao_direct_light_affect", 1, &environment_class_set_ssao_direct_light_affect),
	JS_CFUNC_DEF("get_ssao_direct_light_affect", 0, &environment_class_get_ssao_direct_light_affect),
	JS_CFUNC_DEF("set_ssao_ao_channel_affect", 1, &environment_class_set_ssao_ao_channel_affect),
	JS_CFUNC_DEF("get_ssao_ao_channel_affect", 0, &environment_class_get_ssao_ao_channel_affect),
	JS_CFUNC_DEF("set_ssil_enabled", 1, &environment_class_set_ssil_enabled),
	JS_CFUNC_DEF("is_ssil_enabled", 0, &environment_class_is_ssil_enabled),
	JS_CFUNC_DEF("set_ssil_radius", 1, &environment_class_set_ssil_radius),
	JS_CFUNC_DEF("get_ssil_radius", 0, &environment_class_get_ssil_radius),
	JS_CFUNC_DEF("set_ssil_intensity", 1, &environment_class_set_ssil_intensity),
	JS_CFUNC_DEF("get_ssil_intensity", 0, &environment_class_get_ssil_intensity),
	JS_CFUNC_DEF("set_ssil_sharpness", 1, &environment_class_set_ssil_sharpness),
	JS_CFUNC_DEF("get_ssil_sharpness", 0, &environment_class_get_ssil_sharpness),
	JS_CFUNC_DEF("set_ssil_normal_rejection", 1, &environment_class_set_ssil_normal_rejection),
	JS_CFUNC_DEF("get_ssil_normal_rejection", 0, &environment_class_get_ssil_normal_rejection),
	JS_CFUNC_DEF("set_sdfgi_enabled", 1, &environment_class_set_sdfgi_enabled),
	JS_CFUNC_DEF("is_sdfgi_enabled", 0, &environment_class_is_sdfgi_enabled),
	JS_CFUNC_DEF("set_sdfgi_cascades", 1, &environment_class_set_sdfgi_cascades),
	JS_CFUNC_DEF("get_sdfgi_cascades", 0, &environment_class_get_sdfgi_cascades),
	JS_CFUNC_DEF("set_sdfgi_min_cell_size", 1, &environment_class_set_sdfgi_min_cell_size),
	JS_CFUNC_DEF("get_sdfgi_min_cell_size", 0, &environment_class_get_sdfgi_min_cell_size),
	JS_CFUNC_DEF("set_sdfgi_max_distance", 1, &environment_class_set_sdfgi_max_distance),
	JS_CFUNC_DEF("get_sdfgi_max_distance", 0, &environment_class_get_sdfgi_max_distance),
	JS_CFUNC_DEF("set_sdfgi_cascade0_distance", 1, &environment_class_set_sdfgi_cascade0_distance),
	JS_CFUNC_DEF("get_sdfgi_cascade0_distance", 0, &environment_class_get_sdfgi_cascade0_distance),
	JS_CFUNC_DEF("set_sdfgi_y_scale", 1, &environment_class_set_sdfgi_y_scale),
	JS_CFUNC_DEF("get_sdfgi_y_scale", 0, &environment_class_get_sdfgi_y_scale),
	JS_CFUNC_DEF("set_sdfgi_use_occlusion", 1, &environment_class_set_sdfgi_use_occlusion),
	JS_CFUNC_DEF("is_sdfgi_using_occlusion", 0, &environment_class_is_sdfgi_using_occlusion),
	JS_CFUNC_DEF("set_sdfgi_bounce_feedback", 1, &environment_class_set_sdfgi_bounce_feedback),
	JS_CFUNC_DEF("get_sdfgi_bounce_feedback", 0, &environment_class_get_sdfgi_bounce_feedback),
	JS_CFUNC_DEF("set_sdfgi_read_sky_light", 1, &environment_class_set_sdfgi_read_sky_light),
	JS_CFUNC_DEF("is_sdfgi_reading_sky_light", 0, &environment_class_is_sdfgi_reading_sky_light),
	JS_CFUNC_DEF("set_sdfgi_energy", 1, &environment_class_set_sdfgi_energy),
	JS_CFUNC_DEF("get_sdfgi_energy", 0, &environment_class_get_sdfgi_energy),
	JS_CFUNC_DEF("set_sdfgi_normal_bias", 1, &environment_class_set_sdfgi_normal_bias),
	JS_CFUNC_DEF("get_sdfgi_normal_bias", 0, &environment_class_get_sdfgi_normal_bias),
	JS_CFUNC_DEF("set_sdfgi_probe_bias", 1, &environment_class_set_sdfgi_probe_bias),
	JS_CFUNC_DEF("get_sdfgi_probe_bias", 0, &environment_class_get_sdfgi_probe_bias),
	JS_CFUNC_DEF("set_glow_enabled", 1, &environment_class_set_glow_enabled),
	JS_CFUNC_DEF("is_glow_enabled", 0, &environment_class_is_glow_enabled),
	JS_CFUNC_DEF("set_glow_level", 2, &environment_class_set_glow_level),
	JS_CFUNC_DEF("get_glow_level", 1, &environment_class_get_glow_level),
	JS_CFUNC_DEF("set_glow_normalized", 1, &environment_class_set_glow_normalized),
	JS_CFUNC_DEF("is_glow_normalized", 0, &environment_class_is_glow_normalized),
	JS_CFUNC_DEF("set_glow_intensity", 1, &environment_class_set_glow_intensity),
	JS_CFUNC_DEF("get_glow_intensity", 0, &environment_class_get_glow_intensity),
	JS_CFUNC_DEF("set_glow_strength", 1, &environment_class_set_glow_strength),
	JS_CFUNC_DEF("get_glow_strength", 0, &environment_class_get_glow_strength),
	JS_CFUNC_DEF("set_glow_mix", 1, &environment_class_set_glow_mix),
	JS_CFUNC_DEF("get_glow_mix", 0, &environment_class_get_glow_mix),
	JS_CFUNC_DEF("set_glow_bloom", 1, &environment_class_set_glow_bloom),
	JS_CFUNC_DEF("get_glow_bloom", 0, &environment_class_get_glow_bloom),
	JS_CFUNC_DEF("set_glow_blend_mode", 1, &environment_class_set_glow_blend_mode),
	JS_CFUNC_DEF("get_glow_blend_mode", 0, &environment_class_get_glow_blend_mode),
	JS_CFUNC_DEF("set_glow_hdr_bleed_threshold", 1, &environment_class_set_glow_hdr_bleed_threshold),
	JS_CFUNC_DEF("get_glow_hdr_bleed_threshold", 0, &environment_class_get_glow_hdr_bleed_threshold),
	JS_CFUNC_DEF("set_glow_hdr_bleed_scale", 1, &environment_class_set_glow_hdr_bleed_scale),
	JS_CFUNC_DEF("get_glow_hdr_bleed_scale", 0, &environment_class_get_glow_hdr_bleed_scale),
	JS_CFUNC_DEF("set_glow_hdr_luminance_cap", 1, &environment_class_set_glow_hdr_luminance_cap),
	JS_CFUNC_DEF("get_glow_hdr_luminance_cap", 0, &environment_class_get_glow_hdr_luminance_cap),
	JS_CFUNC_DEF("set_glow_map_strength", 1, &environment_class_set_glow_map_strength),
	JS_CFUNC_DEF("get_glow_map_strength", 0, &environment_class_get_glow_map_strength),
	JS_CFUNC_DEF("set_glow_map", 1, &environment_class_set_glow_map),
	JS_CFUNC_DEF("get_glow_map", 0, &environment_class_get_glow_map),
	JS_CFUNC_DEF("set_fog_enabled", 1, &environment_class_set_fog_enabled),
	JS_CFUNC_DEF("is_fog_enabled", 0, &environment_class_is_fog_enabled),
	JS_CFUNC_DEF("set_fog_mode", 1, &environment_class_set_fog_mode),
	JS_CFUNC_DEF("get_fog_mode", 0, &environment_class_get_fog_mode),
	JS_CFUNC_DEF("set_fog_light_color", 1, &environment_class_set_fog_light_color),
	JS_CFUNC_DEF("get_fog_light_color", 0, &environment_class_get_fog_light_color),
	JS_CFUNC_DEF("set_fog_light_energy", 1, &environment_class_set_fog_light_energy),
	JS_CFUNC_DEF("get_fog_light_energy", 0, &environment_class_get_fog_light_energy),
	JS_CFUNC_DEF("set_fog_sun_scatter", 1, &environment_class_set_fog_sun_scatter),
	JS_CFUNC_DEF("get_fog_sun_scatter", 0, &environment_class_get_fog_sun_scatter),
	JS_CFUNC_DEF("set_fog_density", 1, &environment_class_set_fog_density),
	JS_CFUNC_DEF("get_fog_density", 0, &environment_class_get_fog_density),
	JS_CFUNC_DEF("set_fog_height", 1, &environment_class_set_fog_height),
	JS_CFUNC_DEF("get_fog_height", 0, &environment_class_get_fog_height),
	JS_CFUNC_DEF("set_fog_height_density", 1, &environment_class_set_fog_height_density),
	JS_CFUNC_DEF("get_fog_height_density", 0, &environment_class_get_fog_height_density),
	JS_CFUNC_DEF("set_fog_aerial_perspective", 1, &environment_class_set_fog_aerial_perspective),
	JS_CFUNC_DEF("get_fog_aerial_perspective", 0, &environment_class_get_fog_aerial_perspective),
	JS_CFUNC_DEF("set_fog_sky_affect", 1, &environment_class_set_fog_sky_affect),
	JS_CFUNC_DEF("get_fog_sky_affect", 0, &environment_class_get_fog_sky_affect),
	JS_CFUNC_DEF("set_fog_depth_curve", 1, &environment_class_set_fog_depth_curve),
	JS_CFUNC_DEF("get_fog_depth_curve", 0, &environment_class_get_fog_depth_curve),
	JS_CFUNC_DEF("set_fog_depth_begin", 1, &environment_class_set_fog_depth_begin),
	JS_CFUNC_DEF("get_fog_depth_begin", 0, &environment_class_get_fog_depth_begin),
	JS_CFUNC_DEF("set_fog_depth_end", 1, &environment_class_set_fog_depth_end),
	JS_CFUNC_DEF("get_fog_depth_end", 0, &environment_class_get_fog_depth_end),
	JS_CFUNC_DEF("set_volumetric_fog_enabled", 1, &environment_class_set_volumetric_fog_enabled),
	JS_CFUNC_DEF("is_volumetric_fog_enabled", 0, &environment_class_is_volumetric_fog_enabled),
	JS_CFUNC_DEF("set_volumetric_fog_emission", 1, &environment_class_set_volumetric_fog_emission),
	JS_CFUNC_DEF("get_volumetric_fog_emission", 0, &environment_class_get_volumetric_fog_emission),
	JS_CFUNC_DEF("set_volumetric_fog_albedo", 1, &environment_class_set_volumetric_fog_albedo),
	JS_CFUNC_DEF("get_volumetric_fog_albedo", 0, &environment_class_get_volumetric_fog_albedo),
	JS_CFUNC_DEF("set_volumetric_fog_density", 1, &environment_class_set_volumetric_fog_density),
	JS_CFUNC_DEF("get_volumetric_fog_density", 0, &environment_class_get_volumetric_fog_density),
	JS_CFUNC_DEF("set_volumetric_fog_emission_energy", 1, &environment_class_set_volumetric_fog_emission_energy),
	JS_CFUNC_DEF("get_volumetric_fog_emission_energy", 0, &environment_class_get_volumetric_fog_emission_energy),
	JS_CFUNC_DEF("set_volumetric_fog_anisotropy", 1, &environment_class_set_volumetric_fog_anisotropy),
	JS_CFUNC_DEF("get_volumetric_fog_anisotropy", 0, &environment_class_get_volumetric_fog_anisotropy),
	JS_CFUNC_DEF("set_volumetric_fog_length", 1, &environment_class_set_volumetric_fog_length),
	JS_CFUNC_DEF("get_volumetric_fog_length", 0, &environment_class_get_volumetric_fog_length),
	JS_CFUNC_DEF("set_volumetric_fog_detail_spread", 1, &environment_class_set_volumetric_fog_detail_spread),
	JS_CFUNC_DEF("get_volumetric_fog_detail_spread", 0, &environment_class_get_volumetric_fog_detail_spread),
	JS_CFUNC_DEF("set_volumetric_fog_gi_inject", 1, &environment_class_set_volumetric_fog_gi_inject),
	JS_CFUNC_DEF("get_volumetric_fog_gi_inject", 0, &environment_class_get_volumetric_fog_gi_inject),
	JS_CFUNC_DEF("set_volumetric_fog_ambient_inject", 1, &environment_class_set_volumetric_fog_ambient_inject),
	JS_CFUNC_DEF("get_volumetric_fog_ambient_inject", 0, &environment_class_get_volumetric_fog_ambient_inject),
	JS_CFUNC_DEF("set_volumetric_fog_sky_affect", 1, &environment_class_set_volumetric_fog_sky_affect),
	JS_CFUNC_DEF("get_volumetric_fog_sky_affect", 0, &environment_class_get_volumetric_fog_sky_affect),
	JS_CFUNC_DEF("set_volumetric_fog_temporal_reprojection_enabled", 1, &environment_class_set_volumetric_fog_temporal_reprojection_enabled),
	JS_CFUNC_DEF("is_volumetric_fog_temporal_reprojection_enabled", 0, &environment_class_is_volumetric_fog_temporal_reprojection_enabled),
	JS_CFUNC_DEF("set_volumetric_fog_temporal_reprojection_amount", 1, &environment_class_set_volumetric_fog_temporal_reprojection_amount),
	JS_CFUNC_DEF("get_volumetric_fog_temporal_reprojection_amount", 0, &environment_class_get_volumetric_fog_temporal_reprojection_amount),
	JS_CFUNC_DEF("set_adjustment_enabled", 1, &environment_class_set_adjustment_enabled),
	JS_CFUNC_DEF("is_adjustment_enabled", 0, &environment_class_is_adjustment_enabled),
	JS_CFUNC_DEF("set_adjustment_brightness", 1, &environment_class_set_adjustment_brightness),
	JS_CFUNC_DEF("get_adjustment_brightness", 0, &environment_class_get_adjustment_brightness),
	JS_CFUNC_DEF("set_adjustment_contrast", 1, &environment_class_set_adjustment_contrast),
	JS_CFUNC_DEF("get_adjustment_contrast", 0, &environment_class_get_adjustment_contrast),
	JS_CFUNC_DEF("set_adjustment_saturation", 1, &environment_class_set_adjustment_saturation),
	JS_CFUNC_DEF("get_adjustment_saturation", 0, &environment_class_get_adjustment_saturation),
	JS_CFUNC_DEF("set_adjustment_color_correction", 1, &environment_class_set_adjustment_color_correction),
	JS_CFUNC_DEF("get_adjustment_color_correction", 0, &environment_class_get_adjustment_color_correction),
};

static int js_environment_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Environment::__class_id);
	classes["Environment"] = Environment::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Environment::__class_id, &environment_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Environment::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, environment_class_proto_funcs, _countof(environment_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, environment_class_constructor, "Environment", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Environment", ctor);

	return 0;
}

JSModuleDef *_js_init_environment_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_environment_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Environment");
	return m;
}

JSModuleDef *js_init_environment_module(JSContext *ctx) {
	return _js_init_environment_module(ctx, "godot/classes/environment");
}

void register_environment() {
	js_init_environment_module(ctx);
}