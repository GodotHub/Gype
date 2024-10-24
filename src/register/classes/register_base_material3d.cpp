
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void base_material3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef base_material3d_class_def = {
	"BaseMaterial3D",
	.finalizer = base_material3d_class_finalizer
};

static JSValue base_material3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, BaseMaterial3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	BaseMaterial3D *base_material3d_class = memnew(BaseMaterial3D);
	if (!base_material3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, base_material3d_class);	
	return obj;
}
static JSValue base_material3d_class_set_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_albedo, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_albedo, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_transparency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_transparency, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_transparency(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_transparency, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_alpha_antialiasing, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_alpha_antialiasing, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_alpha_antialiasing_edge, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_alpha_antialiasing_edge, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_shading_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_shading_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_shading_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_shading_mode, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_specular(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_specular, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_specular(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_specular, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_metallic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_metallic, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_metallic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_metallic, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_roughness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_roughness, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_emission, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_emission, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_emission_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_emission_energy_multiplier, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_emission_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_emission_energy_multiplier, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_emission_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_emission_intensity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_emission_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_emission_intensity, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_normal_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_normal_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_normal_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_normal_scale, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_rim(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_rim, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_rim(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_rim, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_rim_tint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_rim_tint, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_rim_tint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_rim_tint, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_clearcoat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_clearcoat, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_clearcoat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_clearcoat, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_clearcoat_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_clearcoat_roughness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_clearcoat_roughness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_clearcoat_roughness, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_anisotropy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_anisotropy, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_anisotropy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_anisotropy, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_heightmap_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_scale, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_subsurface_scattering_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_subsurface_scattering_strength, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_subsurface_scattering_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_subsurface_scattering_strength, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_transmittance_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_transmittance_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_transmittance_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_transmittance_color, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_transmittance_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_transmittance_depth, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_transmittance_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_transmittance_depth, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_transmittance_boost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_transmittance_boost, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_transmittance_boost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_transmittance_boost, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_backlight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_backlight, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_backlight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_backlight, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_refraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_refraction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_refraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_refraction, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_point_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_point_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_point_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_point_size, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_detail_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_detail_uv, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_detail_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_detail_uv, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_blend_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_blend_mode, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_depth_draw_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_depth_draw_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_depth_draw_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_depth_draw_mode, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_cull_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_cull_mode, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_diffuse_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_diffuse_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_diffuse_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_diffuse_mode, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_specular_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_specular_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_specular_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_specular_mode, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_flag, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_flag, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_texture_filter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_texture_filter, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_feature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_feature, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_feature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_feature, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_texture, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_detail_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_detail_blend_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_detail_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_detail_blend_mode, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_uv1_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_uv1_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv1_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv1_scale, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_uv1_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_uv1_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv1_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv1_offset, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_uv1_triplanar_blend_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_uv1_triplanar_blend_sharpness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv1_triplanar_blend_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv1_triplanar_blend_sharpness, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_uv2_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_uv2_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv2_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv2_scale, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_uv2_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_uv2_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv2_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv2_offset, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_uv2_triplanar_blend_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_uv2_triplanar_blend_sharpness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_uv2_triplanar_blend_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_uv2_triplanar_blend_sharpness, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_billboard_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_billboard_mode, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_particles_anim_h_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_particles_anim_h_frames, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_particles_anim_h_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_particles_anim_h_frames, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_particles_anim_v_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_particles_anim_v_frames, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_particles_anim_v_frames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_particles_anim_v_frames, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_particles_anim_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_particles_anim_loop, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_particles_anim_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_particles_anim_loop, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_is_heightmap_deep_parallax_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::is_heightmap_deep_parallax_enabled, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax_min_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax_min_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_deep_parallax_min_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_deep_parallax_min_layers, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax_max_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax_max_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_deep_parallax_max_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_deep_parallax_max_layers, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax_flip_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax_flip_tangent, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_deep_parallax_flip_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_deep_parallax_flip_tangent, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_heightmap_deep_parallax_flip_binormal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_heightmap_deep_parallax_flip_binormal, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_heightmap_deep_parallax_flip_binormal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_heightmap_deep_parallax_flip_binormal, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_grow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_grow, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_grow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_grow, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_emission_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_emission_operator, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_emission_operator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_emission_operator, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_ao_light_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_ao_light_affect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_ao_light_affect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_ao_light_affect, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_alpha_scissor_threshold, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_alpha_scissor_threshold, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_alpha_hash_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_alpha_hash_scale, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_grow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_grow_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_is_grow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::is_grow_enabled, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_metallic_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_metallic_texture_channel, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_metallic_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_metallic_texture_channel, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_roughness_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_roughness_texture_channel, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_roughness_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_roughness_texture_channel, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_ao_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_ao_texture_channel, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_ao_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_ao_texture_channel, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_refraction_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_refraction_texture_channel, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_refraction_texture_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_refraction_texture_channel, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_proximity_fade_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_proximity_fade_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_is_proximity_fade_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::is_proximity_fade_enabled, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_proximity_fade_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_proximity_fade_distance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_proximity_fade_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_proximity_fade_distance, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_msdf_pixel_range, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_msdf_pixel_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_msdf_pixel_range, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_msdf_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_msdf_outline_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_msdf_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_msdf_outline_size, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_distance_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_distance_fade, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_distance_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_distance_fade, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_distance_fade_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_distance_fade_max_distance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_distance_fade_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_distance_fade_max_distance, ctx, this_val, argc, argv);
};
static JSValue base_material3d_class_set_distance_fade_min_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BaseMaterial3D::set_distance_fade_min_distance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue base_material3d_class_get_distance_fade_min_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BaseMaterial3D::get_distance_fade_min_distance, ctx, this_val, argc, argv);
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

void define_base_material3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "transparency"),
        JS_NewCFunction(ctx, base_material3d_class_get_transparency, "get_transparency", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_transparency, "set_transparency", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alpha_scissor_threshold"),
        JS_NewCFunction(ctx, base_material3d_class_get_alpha_scissor_threshold, "get_alpha_scissor_threshold", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_alpha_scissor_threshold, "set_alpha_scissor_threshold", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alpha_hash_scale"),
        JS_NewCFunction(ctx, base_material3d_class_get_alpha_hash_scale, "get_alpha_hash_scale", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_alpha_hash_scale, "set_alpha_hash_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alpha_antialiasing_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_alpha_antialiasing, "get_alpha_antialiasing", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_alpha_antialiasing, "set_alpha_antialiasing", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alpha_antialiasing_edge"),
        JS_NewCFunction(ctx, base_material3d_class_get_alpha_antialiasing_edge, "get_alpha_antialiasing_edge", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_alpha_antialiasing_edge, "set_alpha_antialiasing_edge", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "blend_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_blend_mode, "get_blend_mode", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_blend_mode, "set_blend_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cull_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_cull_mode, "get_cull_mode", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_cull_mode, "set_cull_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "depth_draw_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_depth_draw_mode, "get_depth_draw_mode", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_depth_draw_mode, "set_depth_draw_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "no_depth_test"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shading_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_shading_mode, "get_shading_mode", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_shading_mode, "set_shading_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "diffuse_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_diffuse_mode, "get_diffuse_mode", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_diffuse_mode, "set_diffuse_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "specular_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_specular_mode, "get_specular_mode", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_specular_mode, "set_specular_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "disable_ambient_light"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "disable_fog"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vertex_color_use_as_albedo"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vertex_color_is_srgb"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "albedo_color"),
        JS_NewCFunction(ctx, base_material3d_class_get_albedo, "get_albedo", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_albedo, "set_albedo", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "albedo_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "albedo_texture_force_srgb"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "albedo_texture_msdf"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "orm_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "metallic"),
        JS_NewCFunction(ctx, base_material3d_class_get_metallic, "get_metallic", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_metallic, "set_metallic", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "metallic_specular"),
        JS_NewCFunction(ctx, base_material3d_class_get_specular, "get_specular", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_specular, "set_specular", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "metallic_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "metallic_texture_channel"),
        JS_NewCFunction(ctx, base_material3d_class_get_metallic_texture_channel, "get_metallic_texture_channel", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_metallic_texture_channel, "set_metallic_texture_channel", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "roughness"),
        JS_NewCFunction(ctx, base_material3d_class_get_roughness, "get_roughness", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_roughness, "set_roughness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "roughness_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "roughness_texture_channel"),
        JS_NewCFunction(ctx, base_material3d_class_get_roughness_texture_channel, "get_roughness_texture_channel", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_roughness_texture_channel, "set_roughness_texture_channel", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission"),
        JS_NewCFunction(ctx, base_material3d_class_get_emission, "get_emission", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_emission, "set_emission", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_energy_multiplier"),
        JS_NewCFunction(ctx, base_material3d_class_get_emission_energy_multiplier, "get_emission_energy_multiplier", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_emission_energy_multiplier, "set_emission_energy_multiplier", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_intensity"),
        JS_NewCFunction(ctx, base_material3d_class_get_emission_intensity, "get_emission_intensity", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_emission_intensity, "set_emission_intensity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_operator"),
        JS_NewCFunction(ctx, base_material3d_class_get_emission_operator, "get_emission_operator", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_emission_operator, "set_emission_operator", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_on_uv2"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "normal_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "normal_scale"),
        JS_NewCFunction(ctx, base_material3d_class_get_normal_scale, "get_normal_scale", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_normal_scale, "set_normal_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "normal_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rim_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rim"),
        JS_NewCFunction(ctx, base_material3d_class_get_rim, "get_rim", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_rim, "set_rim", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rim_tint"),
        JS_NewCFunction(ctx, base_material3d_class_get_rim_tint, "get_rim_tint", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_rim_tint, "set_rim_tint", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rim_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "clearcoat_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "clearcoat"),
        JS_NewCFunction(ctx, base_material3d_class_get_clearcoat, "get_clearcoat", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_clearcoat, "set_clearcoat", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "clearcoat_roughness"),
        JS_NewCFunction(ctx, base_material3d_class_get_clearcoat_roughness, "get_clearcoat_roughness", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_clearcoat_roughness, "set_clearcoat_roughness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "clearcoat_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anisotropy_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anisotropy"),
        JS_NewCFunction(ctx, base_material3d_class_get_anisotropy, "get_anisotropy", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_anisotropy, "set_anisotropy", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "anisotropy_flowmap"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ao_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ao_light_affect"),
        JS_NewCFunction(ctx, base_material3d_class_get_ao_light_affect, "get_ao_light_affect", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_ao_light_affect, "set_ao_light_affect", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ao_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ao_on_uv2"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ao_texture_channel"),
        JS_NewCFunction(ctx, base_material3d_class_get_ao_texture_channel, "get_ao_texture_channel", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_ao_texture_channel, "set_ao_texture_channel", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "heightmap_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "heightmap_scale"),
        JS_NewCFunction(ctx, base_material3d_class_get_heightmap_scale, "get_heightmap_scale", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_heightmap_scale, "set_heightmap_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "heightmap_deep_parallax"),
        JS_NewCFunction(ctx, base_material3d_class_is_heightmap_deep_parallax_enabled, "is_heightmap_deep_parallax_enabled", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_heightmap_deep_parallax, "set_heightmap_deep_parallax", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "heightmap_min_layers"),
        JS_NewCFunction(ctx, base_material3d_class_get_heightmap_deep_parallax_min_layers, "get_heightmap_deep_parallax_min_layers", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_heightmap_deep_parallax_min_layers, "set_heightmap_deep_parallax_min_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "heightmap_max_layers"),
        JS_NewCFunction(ctx, base_material3d_class_get_heightmap_deep_parallax_max_layers, "get_heightmap_deep_parallax_max_layers", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_heightmap_deep_parallax_max_layers, "set_heightmap_deep_parallax_max_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "heightmap_flip_tangent"),
        JS_NewCFunction(ctx, base_material3d_class_get_heightmap_deep_parallax_flip_tangent, "get_heightmap_deep_parallax_flip_tangent", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_heightmap_deep_parallax_flip_tangent, "set_heightmap_deep_parallax_flip_tangent", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "heightmap_flip_binormal"),
        JS_NewCFunction(ctx, base_material3d_class_get_heightmap_deep_parallax_flip_binormal, "get_heightmap_deep_parallax_flip_binormal", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_heightmap_deep_parallax_flip_binormal, "set_heightmap_deep_parallax_flip_binormal", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "heightmap_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "heightmap_flip_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subsurf_scatter_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subsurf_scatter_strength"),
        JS_NewCFunction(ctx, base_material3d_class_get_subsurface_scattering_strength, "get_subsurface_scattering_strength", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_subsurface_scattering_strength, "set_subsurface_scattering_strength", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subsurf_scatter_skin_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subsurf_scatter_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subsurf_scatter_transmittance_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subsurf_scatter_transmittance_color"),
        JS_NewCFunction(ctx, base_material3d_class_get_transmittance_color, "get_transmittance_color", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_transmittance_color, "set_transmittance_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subsurf_scatter_transmittance_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subsurf_scatter_transmittance_depth"),
        JS_NewCFunction(ctx, base_material3d_class_get_transmittance_depth, "get_transmittance_depth", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_transmittance_depth, "set_transmittance_depth", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "subsurf_scatter_transmittance_boost"),
        JS_NewCFunction(ctx, base_material3d_class_get_transmittance_boost, "get_transmittance_boost", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_transmittance_boost, "set_transmittance_boost", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "backlight_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "backlight"),
        JS_NewCFunction(ctx, base_material3d_class_get_backlight, "get_backlight", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_backlight, "set_backlight", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "backlight_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "refraction_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "refraction_scale"),
        JS_NewCFunction(ctx, base_material3d_class_get_refraction, "get_refraction", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_refraction, "set_refraction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "refraction_texture"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "refraction_texture_channel"),
        JS_NewCFunction(ctx, base_material3d_class_get_refraction_texture_channel, "get_refraction_texture_channel", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_refraction_texture_channel, "set_refraction_texture_channel", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "detail_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_get_feature, "get_feature", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_feature, "set_feature", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "detail_mask"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "detail_blend_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_detail_blend_mode, "get_detail_blend_mode", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_detail_blend_mode, "set_detail_blend_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "detail_uv_layer"),
        JS_NewCFunction(ctx, base_material3d_class_get_detail_uv, "get_detail_uv", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_detail_uv, "set_detail_uv", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "detail_albedo"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "detail_normal"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv1_scale"),
        JS_NewCFunction(ctx, base_material3d_class_get_uv1_scale, "get_uv1_scale", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_uv1_scale, "set_uv1_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv1_offset"),
        JS_NewCFunction(ctx, base_material3d_class_get_uv1_offset, "get_uv1_offset", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_uv1_offset, "set_uv1_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv1_triplanar"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv1_triplanar_sharpness"),
        JS_NewCFunction(ctx, base_material3d_class_get_uv1_triplanar_blend_sharpness, "get_uv1_triplanar_blend_sharpness", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_uv1_triplanar_blend_sharpness, "set_uv1_triplanar_blend_sharpness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv1_world_triplanar"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv2_scale"),
        JS_NewCFunction(ctx, base_material3d_class_get_uv2_scale, "get_uv2_scale", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_uv2_scale, "set_uv2_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv2_offset"),
        JS_NewCFunction(ctx, base_material3d_class_get_uv2_offset, "get_uv2_offset", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_uv2_offset, "set_uv2_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv2_triplanar"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv2_triplanar_sharpness"),
        JS_NewCFunction(ctx, base_material3d_class_get_uv2_triplanar_blend_sharpness, "get_uv2_triplanar_blend_sharpness", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_uv2_triplanar_blend_sharpness, "set_uv2_triplanar_blend_sharpness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv2_world_triplanar"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_filter"),
        JS_NewCFunction(ctx, base_material3d_class_get_texture_filter, "get_texture_filter", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_texture_filter, "set_texture_filter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_repeat"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "disable_receive_shadows"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_to_opacity"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "billboard_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_billboard_mode, "get_billboard_mode", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_billboard_mode, "set_billboard_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "billboard_keep_scale"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "particles_anim_h_frames"),
        JS_NewCFunction(ctx, base_material3d_class_get_particles_anim_h_frames, "get_particles_anim_h_frames", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_particles_anim_h_frames, "set_particles_anim_h_frames", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "particles_anim_v_frames"),
        JS_NewCFunction(ctx, base_material3d_class_get_particles_anim_v_frames, "get_particles_anim_v_frames", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_particles_anim_v_frames, "set_particles_anim_v_frames", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "particles_anim_loop"),
        JS_NewCFunction(ctx, base_material3d_class_get_particles_anim_loop, "get_particles_anim_loop", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_particles_anim_loop, "set_particles_anim_loop", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "grow"),
        JS_NewCFunction(ctx, base_material3d_class_is_grow_enabled, "is_grow_enabled", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_grow_enabled, "set_grow_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "grow_amount"),
        JS_NewCFunction(ctx, base_material3d_class_get_grow, "get_grow", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_grow, "set_grow", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fixed_size"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_point_size"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "point_size"),
        JS_NewCFunction(ctx, base_material3d_class_get_point_size, "get_point_size", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_point_size, "set_point_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_particle_trails"),
        JS_NewCFunction(ctx, base_material3d_class_get_flag, "get_flag", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_flag, "set_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "proximity_fade_enabled"),
        JS_NewCFunction(ctx, base_material3d_class_is_proximity_fade_enabled, "is_proximity_fade_enabled", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_proximity_fade_enabled, "set_proximity_fade_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "proximity_fade_distance"),
        JS_NewCFunction(ctx, base_material3d_class_get_proximity_fade_distance, "get_proximity_fade_distance", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_proximity_fade_distance, "set_proximity_fade_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "msdf_pixel_range"),
        JS_NewCFunction(ctx, base_material3d_class_get_msdf_pixel_range, "get_msdf_pixel_range", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_msdf_pixel_range, "set_msdf_pixel_range", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "msdf_outline_size"),
        JS_NewCFunction(ctx, base_material3d_class_get_msdf_outline_size, "get_msdf_outline_size", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_msdf_outline_size, "set_msdf_outline_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "distance_fade_mode"),
        JS_NewCFunction(ctx, base_material3d_class_get_distance_fade, "get_distance_fade", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_distance_fade, "set_distance_fade", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "distance_fade_min_distance"),
        JS_NewCFunction(ctx, base_material3d_class_get_distance_fade_min_distance, "get_distance_fade_min_distance", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_distance_fade_min_distance, "set_distance_fade_min_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "distance_fade_max_distance"),
        JS_NewCFunction(ctx, base_material3d_class_get_distance_fade_max_distance, "get_distance_fade_max_distance", 0),
        JS_NewCFunction(ctx, base_material3d_class_set_distance_fade_max_distance, "set_distance_fade_max_distance", 1),
        JS_PROP_GETSET
    );
}

static int js_base_material3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&BaseMaterial3D::__class_id);
	classes["BaseMaterial3D"] = BaseMaterial3D::__class_id;
	class_id_list.insert(BaseMaterial3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), BaseMaterial3D::__class_id, &base_material3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, BaseMaterial3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BaseMaterial3D::__class_id, proto);

	define_base_material3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, base_material3d_class_proto_funcs, _countof(base_material3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, base_material3d_class_constructor, "BaseMaterial3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "BaseMaterial3D", ctor);

	return 0;
}

JSModuleDef *_js_init_base_material3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/material';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	BaseMaterial3D::__init_js_class_id();
	js_init_base_material3d_module(ctx);
}