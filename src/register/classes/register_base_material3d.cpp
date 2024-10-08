
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void base_material3d_class_finalizer(JSRuntime *rt, JSValue val) {
	BaseMaterial3D *base_material3d = static_cast<BaseMaterial3D *>(JS_GetOpaque(val, BaseMaterial3D::__class_id));
	if (base_material3d)
		BaseMaterial3D::free(nullptr, base_material3d);
}

static JSClassDef base_material3d_class_def = {
	"BaseMaterial3D",
	.finalizer = base_material3d_class_finalizer
};

static JSValue base_material3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	BaseMaterial3D *base_material3d_class;
	JSValue obj = JS_NewObjectClass(ctx, BaseMaterial3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	base_material3d_class = memnew(BaseMaterial3D);
	if (!base_material3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, base_material3d_class);
	return obj;
}
static JSValue base_material3d_class_set_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_albedo, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_albedo, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_transparency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_transparency, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_transparency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_transparency, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_alpha_antialiasing, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_alpha_antialiasing, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_alpha_antialiasing_edge, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_alpha_antialiasing_edge, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_shading_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_shading_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_shading_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_shading_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_specular(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_specular, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_specular(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_specular, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_metallic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_metallic, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_metallic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_metallic, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_roughness, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_roughness, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_emission, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_emission, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_emission_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_emission_energy_multiplier, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_emission_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_emission_energy_multiplier, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_emission_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_emission_intensity, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_emission_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_emission_intensity, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_normal_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_normal_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_normal_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_normal_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_rim(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_rim, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_rim(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_rim, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_rim_tint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_rim_tint, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_rim_tint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_rim_tint, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_clearcoat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_clearcoat, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_clearcoat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_clearcoat, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_clearcoat_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_clearcoat_roughness, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_clearcoat_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_clearcoat_roughness, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_anisotropy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_anisotropy, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_anisotropy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_anisotropy, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_heightmap_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_subsurface_scattering_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_subsurface_scattering_strength, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_subsurface_scattering_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_subsurface_scattering_strength, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_transmittance_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_transmittance_color, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_transmittance_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_transmittance_color, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_transmittance_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_transmittance_depth, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_transmittance_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_transmittance_depth, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_transmittance_boost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_transmittance_boost, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_transmittance_boost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_transmittance_boost, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_backlight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_backlight, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_backlight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_backlight, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_refraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_refraction, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_refraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_refraction, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_point_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_point_size, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_point_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_point_size, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_detail_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_detail_uv, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_detail_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_detail_uv, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_blend_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_blend_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_depth_draw_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_depth_draw_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_depth_draw_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_depth_draw_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_cull_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_cull_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_diffuse_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_diffuse_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_diffuse_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_diffuse_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_specular_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_specular_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_specular_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_specular_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_flag, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_flag, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_texture_filter, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_texture_filter, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_feature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_feature, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_feature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_feature, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_texture, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_texture, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_detail_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_detail_blend_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_detail_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_detail_blend_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_uv1_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_uv1_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv1_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv1_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_uv1_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_uv1_offset, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv1_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv1_offset, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_uv1_triplanar_blend_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_uv1_triplanar_blend_sharpness, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv1_triplanar_blend_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv1_triplanar_blend_sharpness, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_uv2_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_uv2_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv2_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv2_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_uv2_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_uv2_offset, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv2_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv2_offset, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_uv2_triplanar_blend_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_uv2_triplanar_blend_sharpness, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv2_triplanar_blend_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv2_triplanar_blend_sharpness, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_billboard_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_billboard_mode, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_particles_anim_h_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_particles_anim_h_frames, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_particles_anim_h_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_particles_anim_h_frames, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_particles_anim_v_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_particles_anim_v_frames, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_particles_anim_v_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_particles_anim_v_frames, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_particles_anim_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_particles_anim_loop, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_particles_anim_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_particles_anim_loop, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_is_heightmap_deep_parallax_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::is_heightmap_deep_parallax_enabled, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax_min_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax_min_layers, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_deep_parallax_min_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_deep_parallax_min_layers, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax_max_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax_max_layers, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_deep_parallax_max_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_deep_parallax_max_layers, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax_flip_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax_flip_tangent, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_deep_parallax_flip_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_deep_parallax_flip_tangent, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax_flip_binormal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax_flip_binormal, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_deep_parallax_flip_binormal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_deep_parallax_flip_binormal, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_grow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_grow, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_grow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_grow, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_emission_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_emission_operator, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_emission_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_emission_operator, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_ao_light_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_ao_light_affect, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_ao_light_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_ao_light_affect, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_alpha_scissor_threshold, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_alpha_scissor_threshold, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_alpha_hash_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_alpha_hash_scale, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_grow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_grow_enabled, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_is_grow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::is_grow_enabled, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_metallic_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_metallic_texture_channel, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_metallic_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_metallic_texture_channel, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_roughness_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_roughness_texture_channel, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_roughness_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_roughness_texture_channel, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_ao_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_ao_texture_channel, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_ao_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_ao_texture_channel, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_refraction_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_refraction_texture_channel, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_refraction_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_refraction_texture_channel, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_proximity_fade_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_proximity_fade_enabled, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_is_proximity_fade_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::is_proximity_fade_enabled, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_proximity_fade_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_proximity_fade_distance, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_proximity_fade_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_proximity_fade_distance, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_msdf_pixel_range, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_msdf_pixel_range, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_msdf_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_msdf_outline_size, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_msdf_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_msdf_outline_size, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_distance_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_distance_fade, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_distance_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_distance_fade, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_distance_fade_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_distance_fade_max_distance, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_distance_fade_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_distance_fade_max_distance, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static JSValue base_material3d_class_set_distance_fade_min_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&BaseMaterial3D::set_distance_fade_min_distance, BaseMaterial3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_distance_fade_min_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseMaterial3D::get_distance_fade_min_distance, BaseMaterial3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry base_material3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_albedo", 1, &base_material3d_class_set_albedo),
	JS_CFUNC_DEF("get_albedo", 0, &base_material3d_class_get_albedo),
	JS_CFUNC_DEF("set_transparency", 1, &base_material3d_class_set_transparency),
	JS_CFUNC_DEF("get_transparency", 0, &base_material3d_class_get_transparency),
	JS_CFUNC_DEF("set_alpha_antialiasing", 1, &base_material3d_class_set_alpha_antialiasing),
	JS_CFUNC_DEF("get_alpha_antialiasing", 0, &base_material3d_class_get_alpha_antialiasing),
	JS_CFUNC_DEF("set_alpha_antialiasing_edge", 1, &base_material3d_class_set_alpha_antialiasing_edge),
	JS_CFUNC_DEF("get_alpha_antialiasing_edge", 0, &base_material3d_class_get_alpha_antialiasing_edge),
	JS_CFUNC_DEF("set_shading_mode", 1, &base_material3d_class_set_shading_mode),
	JS_CFUNC_DEF("get_shading_mode", 0, &base_material3d_class_get_shading_mode),
	JS_CFUNC_DEF("set_specular", 1, &base_material3d_class_set_specular),
	JS_CFUNC_DEF("get_specular", 0, &base_material3d_class_get_specular),
	JS_CFUNC_DEF("set_metallic", 1, &base_material3d_class_set_metallic),
	JS_CFUNC_DEF("get_metallic", 0, &base_material3d_class_get_metallic),
	JS_CFUNC_DEF("set_roughness", 1, &base_material3d_class_set_roughness),
	JS_CFUNC_DEF("get_roughness", 0, &base_material3d_class_get_roughness),
	JS_CFUNC_DEF("set_emission", 1, &base_material3d_class_set_emission),
	JS_CFUNC_DEF("get_emission", 0, &base_material3d_class_get_emission),
	JS_CFUNC_DEF("set_emission_energy_multiplier", 1, &base_material3d_class_set_emission_energy_multiplier),
	JS_CFUNC_DEF("get_emission_energy_multiplier", 0, &base_material3d_class_get_emission_energy_multiplier),
	JS_CFUNC_DEF("set_emission_intensity", 1, &base_material3d_class_set_emission_intensity),
	JS_CFUNC_DEF("get_emission_intensity", 0, &base_material3d_class_get_emission_intensity),
	JS_CFUNC_DEF("set_normal_scale", 1, &base_material3d_class_set_normal_scale),
	JS_CFUNC_DEF("get_normal_scale", 0, &base_material3d_class_get_normal_scale),
	JS_CFUNC_DEF("set_rim", 1, &base_material3d_class_set_rim),
	JS_CFUNC_DEF("get_rim", 0, &base_material3d_class_get_rim),
	JS_CFUNC_DEF("set_rim_tint", 1, &base_material3d_class_set_rim_tint),
	JS_CFUNC_DEF("get_rim_tint", 0, &base_material3d_class_get_rim_tint),
	JS_CFUNC_DEF("set_clearcoat", 1, &base_material3d_class_set_clearcoat),
	JS_CFUNC_DEF("get_clearcoat", 0, &base_material3d_class_get_clearcoat),
	JS_CFUNC_DEF("set_clearcoat_roughness", 1, &base_material3d_class_set_clearcoat_roughness),
	JS_CFUNC_DEF("get_clearcoat_roughness", 0, &base_material3d_class_get_clearcoat_roughness),
	JS_CFUNC_DEF("set_anisotropy", 1, &base_material3d_class_set_anisotropy),
	JS_CFUNC_DEF("get_anisotropy", 0, &base_material3d_class_get_anisotropy),
	JS_CFUNC_DEF("set_heightmap_scale", 1, &base_material3d_class_set_heightmap_scale),
	JS_CFUNC_DEF("get_heightmap_scale", 0, &base_material3d_class_get_heightmap_scale),
	JS_CFUNC_DEF("set_subsurface_scattering_strength", 1, &base_material3d_class_set_subsurface_scattering_strength),
	JS_CFUNC_DEF("get_subsurface_scattering_strength", 0, &base_material3d_class_get_subsurface_scattering_strength),
	JS_CFUNC_DEF("set_transmittance_color", 1, &base_material3d_class_set_transmittance_color),
	JS_CFUNC_DEF("get_transmittance_color", 0, &base_material3d_class_get_transmittance_color),
	JS_CFUNC_DEF("set_transmittance_depth", 1, &base_material3d_class_set_transmittance_depth),
	JS_CFUNC_DEF("get_transmittance_depth", 0, &base_material3d_class_get_transmittance_depth),
	JS_CFUNC_DEF("set_transmittance_boost", 1, &base_material3d_class_set_transmittance_boost),
	JS_CFUNC_DEF("get_transmittance_boost", 0, &base_material3d_class_get_transmittance_boost),
	JS_CFUNC_DEF("set_backlight", 1, &base_material3d_class_set_backlight),
	JS_CFUNC_DEF("get_backlight", 0, &base_material3d_class_get_backlight),
	JS_CFUNC_DEF("set_refraction", 1, &base_material3d_class_set_refraction),
	JS_CFUNC_DEF("get_refraction", 0, &base_material3d_class_get_refraction),
	JS_CFUNC_DEF("set_point_size", 1, &base_material3d_class_set_point_size),
	JS_CFUNC_DEF("get_point_size", 0, &base_material3d_class_get_point_size),
	JS_CFUNC_DEF("set_detail_uv", 1, &base_material3d_class_set_detail_uv),
	JS_CFUNC_DEF("get_detail_uv", 0, &base_material3d_class_get_detail_uv),
	JS_CFUNC_DEF("set_blend_mode", 1, &base_material3d_class_set_blend_mode),
	JS_CFUNC_DEF("get_blend_mode", 0, &base_material3d_class_get_blend_mode),
	JS_CFUNC_DEF("set_depth_draw_mode", 1, &base_material3d_class_set_depth_draw_mode),
	JS_CFUNC_DEF("get_depth_draw_mode", 0, &base_material3d_class_get_depth_draw_mode),
	JS_CFUNC_DEF("set_cull_mode", 1, &base_material3d_class_set_cull_mode),
	JS_CFUNC_DEF("get_cull_mode", 0, &base_material3d_class_get_cull_mode),
	JS_CFUNC_DEF("set_diffuse_mode", 1, &base_material3d_class_set_diffuse_mode),
	JS_CFUNC_DEF("get_diffuse_mode", 0, &base_material3d_class_get_diffuse_mode),
	JS_CFUNC_DEF("set_specular_mode", 1, &base_material3d_class_set_specular_mode),
	JS_CFUNC_DEF("get_specular_mode", 0, &base_material3d_class_get_specular_mode),
	JS_CFUNC_DEF("set_flag", 2, &base_material3d_class_set_flag),
	JS_CFUNC_DEF("get_flag", 1, &base_material3d_class_get_flag),
	JS_CFUNC_DEF("set_texture_filter", 1, &base_material3d_class_set_texture_filter),
	JS_CFUNC_DEF("get_texture_filter", 0, &base_material3d_class_get_texture_filter),
	JS_CFUNC_DEF("set_feature", 2, &base_material3d_class_set_feature),
	JS_CFUNC_DEF("get_feature", 1, &base_material3d_class_get_feature),
	JS_CFUNC_DEF("set_texture", 2, &base_material3d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 1, &base_material3d_class_get_texture),
	JS_CFUNC_DEF("set_detail_blend_mode", 1, &base_material3d_class_set_detail_blend_mode),
	JS_CFUNC_DEF("get_detail_blend_mode", 0, &base_material3d_class_get_detail_blend_mode),
	JS_CFUNC_DEF("set_uv1_scale", 1, &base_material3d_class_set_uv1_scale),
	JS_CFUNC_DEF("get_uv1_scale", 0, &base_material3d_class_get_uv1_scale),
	JS_CFUNC_DEF("set_uv1_offset", 1, &base_material3d_class_set_uv1_offset),
	JS_CFUNC_DEF("get_uv1_offset", 0, &base_material3d_class_get_uv1_offset),
	JS_CFUNC_DEF("set_uv1_triplanar_blend_sharpness", 1, &base_material3d_class_set_uv1_triplanar_blend_sharpness),
	JS_CFUNC_DEF("get_uv1_triplanar_blend_sharpness", 0, &base_material3d_class_get_uv1_triplanar_blend_sharpness),
	JS_CFUNC_DEF("set_uv2_scale", 1, &base_material3d_class_set_uv2_scale),
	JS_CFUNC_DEF("get_uv2_scale", 0, &base_material3d_class_get_uv2_scale),
	JS_CFUNC_DEF("set_uv2_offset", 1, &base_material3d_class_set_uv2_offset),
	JS_CFUNC_DEF("get_uv2_offset", 0, &base_material3d_class_get_uv2_offset),
	JS_CFUNC_DEF("set_uv2_triplanar_blend_sharpness", 1, &base_material3d_class_set_uv2_triplanar_blend_sharpness),
	JS_CFUNC_DEF("get_uv2_triplanar_blend_sharpness", 0, &base_material3d_class_get_uv2_triplanar_blend_sharpness),
	JS_CFUNC_DEF("set_billboard_mode", 1, &base_material3d_class_set_billboard_mode),
	JS_CFUNC_DEF("get_billboard_mode", 0, &base_material3d_class_get_billboard_mode),
	JS_CFUNC_DEF("set_particles_anim_h_frames", 1, &base_material3d_class_set_particles_anim_h_frames),
	JS_CFUNC_DEF("get_particles_anim_h_frames", 0, &base_material3d_class_get_particles_anim_h_frames),
	JS_CFUNC_DEF("set_particles_anim_v_frames", 1, &base_material3d_class_set_particles_anim_v_frames),
	JS_CFUNC_DEF("get_particles_anim_v_frames", 0, &base_material3d_class_get_particles_anim_v_frames),
	JS_CFUNC_DEF("set_particles_anim_loop", 1, &base_material3d_class_set_particles_anim_loop),
	JS_CFUNC_DEF("get_particles_anim_loop", 0, &base_material3d_class_get_particles_anim_loop),
	JS_CFUNC_DEF("set_heightmap_deep_parallax", 1, &base_material3d_class_set_heightmap_deep_parallax),
	JS_CFUNC_DEF("is_heightmap_deep_parallax_enabled", 0, &base_material3d_class_is_heightmap_deep_parallax_enabled),
	JS_CFUNC_DEF("set_heightmap_deep_parallax_min_layers", 1, &base_material3d_class_set_heightmap_deep_parallax_min_layers),
	JS_CFUNC_DEF("get_heightmap_deep_parallax_min_layers", 0, &base_material3d_class_get_heightmap_deep_parallax_min_layers),
	JS_CFUNC_DEF("set_heightmap_deep_parallax_max_layers", 1, &base_material3d_class_set_heightmap_deep_parallax_max_layers),
	JS_CFUNC_DEF("get_heightmap_deep_parallax_max_layers", 0, &base_material3d_class_get_heightmap_deep_parallax_max_layers),
	JS_CFUNC_DEF("set_heightmap_deep_parallax_flip_tangent", 1, &base_material3d_class_set_heightmap_deep_parallax_flip_tangent),
	JS_CFUNC_DEF("get_heightmap_deep_parallax_flip_tangent", 0, &base_material3d_class_get_heightmap_deep_parallax_flip_tangent),
	JS_CFUNC_DEF("set_heightmap_deep_parallax_flip_binormal", 1, &base_material3d_class_set_heightmap_deep_parallax_flip_binormal),
	JS_CFUNC_DEF("get_heightmap_deep_parallax_flip_binormal", 0, &base_material3d_class_get_heightmap_deep_parallax_flip_binormal),
	JS_CFUNC_DEF("set_grow", 1, &base_material3d_class_set_grow),
	JS_CFUNC_DEF("get_grow", 0, &base_material3d_class_get_grow),
	JS_CFUNC_DEF("set_emission_operator", 1, &base_material3d_class_set_emission_operator),
	JS_CFUNC_DEF("get_emission_operator", 0, &base_material3d_class_get_emission_operator),
	JS_CFUNC_DEF("set_ao_light_affect", 1, &base_material3d_class_set_ao_light_affect),
	JS_CFUNC_DEF("get_ao_light_affect", 0, &base_material3d_class_get_ao_light_affect),
	JS_CFUNC_DEF("set_alpha_scissor_threshold", 1, &base_material3d_class_set_alpha_scissor_threshold),
	JS_CFUNC_DEF("get_alpha_scissor_threshold", 0, &base_material3d_class_get_alpha_scissor_threshold),
	JS_CFUNC_DEF("set_alpha_hash_scale", 1, &base_material3d_class_set_alpha_hash_scale),
	JS_CFUNC_DEF("get_alpha_hash_scale", 0, &base_material3d_class_get_alpha_hash_scale),
	JS_CFUNC_DEF("set_grow_enabled", 1, &base_material3d_class_set_grow_enabled),
	JS_CFUNC_DEF("is_grow_enabled", 0, &base_material3d_class_is_grow_enabled),
	JS_CFUNC_DEF("set_metallic_texture_channel", 1, &base_material3d_class_set_metallic_texture_channel),
	JS_CFUNC_DEF("get_metallic_texture_channel", 0, &base_material3d_class_get_metallic_texture_channel),
	JS_CFUNC_DEF("set_roughness_texture_channel", 1, &base_material3d_class_set_roughness_texture_channel),
	JS_CFUNC_DEF("get_roughness_texture_channel", 0, &base_material3d_class_get_roughness_texture_channel),
	JS_CFUNC_DEF("set_ao_texture_channel", 1, &base_material3d_class_set_ao_texture_channel),
	JS_CFUNC_DEF("get_ao_texture_channel", 0, &base_material3d_class_get_ao_texture_channel),
	JS_CFUNC_DEF("set_refraction_texture_channel", 1, &base_material3d_class_set_refraction_texture_channel),
	JS_CFUNC_DEF("get_refraction_texture_channel", 0, &base_material3d_class_get_refraction_texture_channel),
	JS_CFUNC_DEF("set_proximity_fade_enabled", 1, &base_material3d_class_set_proximity_fade_enabled),
	JS_CFUNC_DEF("is_proximity_fade_enabled", 0, &base_material3d_class_is_proximity_fade_enabled),
	JS_CFUNC_DEF("set_proximity_fade_distance", 1, &base_material3d_class_set_proximity_fade_distance),
	JS_CFUNC_DEF("get_proximity_fade_distance", 0, &base_material3d_class_get_proximity_fade_distance),
	JS_CFUNC_DEF("set_msdf_pixel_range", 1, &base_material3d_class_set_msdf_pixel_range),
	JS_CFUNC_DEF("get_msdf_pixel_range", 0, &base_material3d_class_get_msdf_pixel_range),
	JS_CFUNC_DEF("set_msdf_outline_size", 1, &base_material3d_class_set_msdf_outline_size),
	JS_CFUNC_DEF("get_msdf_outline_size", 0, &base_material3d_class_get_msdf_outline_size),
	JS_CFUNC_DEF("set_distance_fade", 1, &base_material3d_class_set_distance_fade),
	JS_CFUNC_DEF("get_distance_fade", 0, &base_material3d_class_get_distance_fade),
	JS_CFUNC_DEF("set_distance_fade_max_distance", 1, &base_material3d_class_set_distance_fade_max_distance),
	JS_CFUNC_DEF("get_distance_fade_max_distance", 0, &base_material3d_class_get_distance_fade_max_distance),
	JS_CFUNC_DEF("set_distance_fade_min_distance", 1, &base_material3d_class_set_distance_fade_min_distance),
	JS_CFUNC_DEF("get_distance_fade_min_distance", 0, &base_material3d_class_get_distance_fade_min_distance),
};

static int js_base_material3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&BaseMaterial3D::__class_id);
	classes["BaseMaterial3D"] = BaseMaterial3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), BaseMaterial3D::__class_id, &base_material3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BaseMaterial3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, base_material3d_class_proto_funcs, _countof(base_material3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, base_material3d_class_constructor, "BaseMaterial3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "BaseMaterial3D", ctor);

	return 0;
}

JSModuleDef *_js_init_base_material3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_base_material3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BaseMaterial3D");
	return m;
}

JSModuleDef *js_init_base_material3d_module(JSContext *ctx) {
	return _js_init_base_material3d_module(ctx, "godot/classes/base_material3d");
}

void register_base_material3d() {
	js_init_base_material3d_module(ctx);
}