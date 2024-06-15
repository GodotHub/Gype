#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_BaseMaterial3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<BaseMaterial3D>("BaseMaterial3D")
            .constructor<>()
            .base<Material>()
            .property<static_cast<BaseMaterial3D::Transparency(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_transparency),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Transparency)>(&BaseMaterial3D::set_transparency)>("transparency")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_alpha_scissor_threshold),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_alpha_scissor_threshold)>("alpha_scissor_threshold")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_alpha_hash_scale),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_alpha_hash_scale)>("alpha_hash_scale")
            .property<static_cast<BaseMaterial3D::AlphaAntiAliasing(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_alpha_antialiasing),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::AlphaAntiAliasing)>(&BaseMaterial3D::set_alpha_antialiasing)>("alpha_antialiasing_mode")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_alpha_antialiasing_edge),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_alpha_antialiasing_edge)>("alpha_antialiasing_edge")
            .property<static_cast<BaseMaterial3D::BlendMode(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_blend_mode),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::BlendMode)>(&BaseMaterial3D::set_blend_mode)>("blend_mode")
            .property<static_cast<BaseMaterial3D::CullMode(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_cull_mode),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::CullMode)>(&BaseMaterial3D::set_cull_mode)>("cull_mode")
            .property<static_cast<BaseMaterial3D::DepthDrawMode(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_depth_draw_mode),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::DepthDrawMode)>(&BaseMaterial3D::set_depth_draw_mode)>("depth_draw_mode")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("no_depth_test")
            .property<static_cast<BaseMaterial3D::ShadingMode(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_shading_mode),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::ShadingMode)>(&BaseMaterial3D::set_shading_mode)>("shading_mode")
            .property<static_cast<BaseMaterial3D::DiffuseMode(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_diffuse_mode),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::DiffuseMode)>(&BaseMaterial3D::set_diffuse_mode)>("diffuse_mode")
            .property<static_cast<BaseMaterial3D::SpecularMode(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_specular_mode),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::SpecularMode)>(&BaseMaterial3D::set_specular_mode)>("specular_mode")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("disable_ambient_light")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("disable_fog")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("vertex_color_use_as_albedo")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("vertex_color_is_srgb")
            .property<static_cast<Color(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_albedo),static_cast<void(BaseMaterial3D::*)(const Color &)>(&BaseMaterial3D::set_albedo)>("albedo_color")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("albedo_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("albedo_texture_force_srgb")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("albedo_texture_msdf")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("orm_texture")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_metallic),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_metallic)>("metallic")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_specular),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_specular)>("metallic_specular")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("metallic_texture")
            .property<static_cast<BaseMaterial3D::TextureChannel(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_metallic_texture_channel),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureChannel)>(&BaseMaterial3D::set_metallic_texture_channel)>("metallic_texture_channel")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_roughness),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_roughness)>("roughness")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("roughness_texture")
            .property<static_cast<BaseMaterial3D::TextureChannel(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_roughness_texture_channel),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureChannel)>(&BaseMaterial3D::set_roughness_texture_channel)>("roughness_texture_channel")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("emission_enabled")
            .property<static_cast<Color(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_emission),static_cast<void(BaseMaterial3D::*)(const Color &)>(&BaseMaterial3D::set_emission)>("emission")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_emission_energy_multiplier),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_emission_energy_multiplier)>("emission_energy_multiplier")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_emission_intensity),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_emission_intensity)>("emission_intensity")
            .property<static_cast<BaseMaterial3D::EmissionOperator(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_emission_operator),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::EmissionOperator)>(&BaseMaterial3D::set_emission_operator)>("emission_operator")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("emission_on_uv2")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("emission_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("normal_enabled")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_normal_scale),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_normal_scale)>("normal_scale")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("normal_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("rim_enabled")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_rim),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_rim)>("rim")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_rim_tint),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_rim_tint)>("rim_tint")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("rim_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("clearcoat_enabled")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_clearcoat),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_clearcoat)>("clearcoat")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_clearcoat_roughness),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_clearcoat_roughness)>("clearcoat_roughness")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("clearcoat_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("anisotropy_enabled")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_anisotropy),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_anisotropy)>("anisotropy")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("anisotropy_flowmap")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("ao_enabled")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_ao_light_affect),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_ao_light_affect)>("ao_light_affect")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("ao_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("ao_on_uv2")
            .property<static_cast<BaseMaterial3D::TextureChannel(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_ao_texture_channel),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureChannel)>(&BaseMaterial3D::set_ao_texture_channel)>("ao_texture_channel")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("heightmap_enabled")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_heightmap_scale),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_heightmap_scale)>("heightmap_scale")
            .property<static_cast<bool(BaseMaterial3D::*)()const>(&BaseMaterial3D::is_heightmap_deep_parallax_enabled),static_cast<void(BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_heightmap_deep_parallax)>("heightmap_deep_parallax")
            .property<static_cast<int32_t(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_heightmap_deep_parallax_min_layers),static_cast<void(BaseMaterial3D::*)(int32_t)>(&BaseMaterial3D::set_heightmap_deep_parallax_min_layers)>("heightmap_min_layers")
            .property<static_cast<int32_t(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_heightmap_deep_parallax_max_layers),static_cast<void(BaseMaterial3D::*)(int32_t)>(&BaseMaterial3D::set_heightmap_deep_parallax_max_layers)>("heightmap_max_layers")
            .property<static_cast<bool(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_heightmap_deep_parallax_flip_tangent),static_cast<void(BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_heightmap_deep_parallax_flip_tangent)>("heightmap_flip_tangent")
            .property<static_cast<bool(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_heightmap_deep_parallax_flip_binormal),static_cast<void(BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_heightmap_deep_parallax_flip_binormal)>("heightmap_flip_binormal")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("heightmap_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("heightmap_flip_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("subsurf_scatter_enabled")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_subsurface_scattering_strength),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_subsurface_scattering_strength)>("subsurf_scatter_strength")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("subsurf_scatter_skin_mode")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("subsurf_scatter_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("subsurf_scatter_transmittance_enabled")
            .property<static_cast<Color(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_transmittance_color),static_cast<void(BaseMaterial3D::*)(const Color &)>(&BaseMaterial3D::set_transmittance_color)>("subsurf_scatter_transmittance_color")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("subsurf_scatter_transmittance_texture")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_transmittance_depth),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_transmittance_depth)>("subsurf_scatter_transmittance_depth")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_transmittance_boost),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_transmittance_boost)>("subsurf_scatter_transmittance_boost")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("backlight_enabled")
            .property<static_cast<Color(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_backlight),static_cast<void(BaseMaterial3D::*)(const Color &)>(&BaseMaterial3D::set_backlight)>("backlight")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("backlight_texture")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("refraction_enabled")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_refraction),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_refraction)>("refraction_scale")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("refraction_texture")
            .property<static_cast<BaseMaterial3D::TextureChannel(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_refraction_texture_channel),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureChannel)>(&BaseMaterial3D::set_refraction_texture_channel)>("refraction_texture_channel")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Feature)const>(&BaseMaterial3D::get_feature),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Feature,bool)>(&BaseMaterial3D::set_feature)>("detail_enabled")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("detail_mask")
            .property<static_cast<BaseMaterial3D::BlendMode(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_detail_blend_mode),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::BlendMode)>(&BaseMaterial3D::set_detail_blend_mode)>("detail_blend_mode")
            .property<static_cast<BaseMaterial3D::DetailUV(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_detail_uv),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::DetailUV)>(&BaseMaterial3D::set_detail_uv)>("detail_uv_layer")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("detail_albedo")
            .property<static_cast<Ref<Texture2D>(BaseMaterial3D::*)(BaseMaterial3D::TextureParam)const>(&BaseMaterial3D::get_texture),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureParam,const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>("detail_normal")
            .property<static_cast<Vector3(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_uv1_scale),static_cast<void(BaseMaterial3D::*)(const Vector3 &)>(&BaseMaterial3D::set_uv1_scale)>("uv1_scale")
            .property<static_cast<Vector3(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_uv1_offset),static_cast<void(BaseMaterial3D::*)(const Vector3 &)>(&BaseMaterial3D::set_uv1_offset)>("uv1_offset")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("uv1_triplanar")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_uv1_triplanar_blend_sharpness),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_uv1_triplanar_blend_sharpness)>("uv1_triplanar_sharpness")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("uv1_world_triplanar")
            .property<static_cast<Vector3(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_uv2_scale),static_cast<void(BaseMaterial3D::*)(const Vector3 &)>(&BaseMaterial3D::set_uv2_scale)>("uv2_scale")
            .property<static_cast<Vector3(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_uv2_offset),static_cast<void(BaseMaterial3D::*)(const Vector3 &)>(&BaseMaterial3D::set_uv2_offset)>("uv2_offset")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("uv2_triplanar")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_uv2_triplanar_blend_sharpness),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_uv2_triplanar_blend_sharpness)>("uv2_triplanar_sharpness")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("uv2_world_triplanar")
            .property<static_cast<BaseMaterial3D::TextureFilter(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_texture_filter),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::TextureFilter)>(&BaseMaterial3D::set_texture_filter)>("texture_filter")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("texture_repeat")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("disable_receive_shadows")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("shadow_to_opacity")
            .property<static_cast<BaseMaterial3D::BillboardMode(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_billboard_mode),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::BillboardMode)>(&BaseMaterial3D::set_billboard_mode)>("billboard_mode")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("billboard_keep_scale")
            .property<static_cast<int32_t(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_particles_anim_h_frames),static_cast<void(BaseMaterial3D::*)(int32_t)>(&BaseMaterial3D::set_particles_anim_h_frames)>("particles_anim_h_frames")
            .property<static_cast<int32_t(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_particles_anim_v_frames),static_cast<void(BaseMaterial3D::*)(int32_t)>(&BaseMaterial3D::set_particles_anim_v_frames)>("particles_anim_v_frames")
            .property<static_cast<bool(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_particles_anim_loop),static_cast<void(BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_particles_anim_loop)>("particles_anim_loop")
            .property<static_cast<bool(BaseMaterial3D::*)()const>(&BaseMaterial3D::is_grow_enabled),static_cast<void(BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_grow_enabled)>("grow")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_grow),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_grow)>("grow_amount")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("fixed_size")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("use_point_size")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_point_size),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_point_size)>("point_size")
            .property<static_cast<bool(BaseMaterial3D::*)(BaseMaterial3D::Flags)const>(&BaseMaterial3D::get_flag),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::Flags,bool)>(&BaseMaterial3D::set_flag)>("use_particle_trails")
            .property<static_cast<bool(BaseMaterial3D::*)()const>(&BaseMaterial3D::is_proximity_fade_enabled),static_cast<void(BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_proximity_fade_enabled)>("proximity_fade_enabled")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_proximity_fade_distance),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_proximity_fade_distance)>("proximity_fade_distance")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_msdf_pixel_range),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_msdf_pixel_range)>("msdf_pixel_range")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_msdf_outline_size),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_msdf_outline_size)>("msdf_outline_size")
            .property<static_cast<BaseMaterial3D::DistanceFadeMode(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_distance_fade),static_cast<void(BaseMaterial3D::*)(BaseMaterial3D::DistanceFadeMode)>(&BaseMaterial3D::set_distance_fade)>("distance_fade_mode")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_distance_fade_min_distance),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_distance_fade_min_distance)>("distance_fade_min_distance")
            .property<static_cast<double(BaseMaterial3D::*)()const>(&BaseMaterial3D::get_distance_fade_max_distance),static_cast<void(BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_distance_fade_max_distance)>("distance_fade_max_distance")
;    qjs::Value _TextureParam = context->newObject();
    _TextureParam["TEXTURE_ALBEDO"] = BaseMaterial3D::TextureParam::TEXTURE_ALBEDO;
    _TextureParam["TEXTURE_METALLIC"] = BaseMaterial3D::TextureParam::TEXTURE_METALLIC;
    _TextureParam["TEXTURE_ROUGHNESS"] = BaseMaterial3D::TextureParam::TEXTURE_ROUGHNESS;
    _TextureParam["TEXTURE_EMISSION"] = BaseMaterial3D::TextureParam::TEXTURE_EMISSION;
    _TextureParam["TEXTURE_NORMAL"] = BaseMaterial3D::TextureParam::TEXTURE_NORMAL;
    _TextureParam["TEXTURE_RIM"] = BaseMaterial3D::TextureParam::TEXTURE_RIM;
    _TextureParam["TEXTURE_CLEARCOAT"] = BaseMaterial3D::TextureParam::TEXTURE_CLEARCOAT;
    _TextureParam["TEXTURE_FLOWMAP"] = BaseMaterial3D::TextureParam::TEXTURE_FLOWMAP;
    _TextureParam["TEXTURE_AMBIENT_OCCLUSION"] = BaseMaterial3D::TextureParam::TEXTURE_AMBIENT_OCCLUSION;
    _TextureParam["TEXTURE_HEIGHTMAP"] = BaseMaterial3D::TextureParam::TEXTURE_HEIGHTMAP;
    _TextureParam["TEXTURE_SUBSURFACE_SCATTERING"] = BaseMaterial3D::TextureParam::TEXTURE_SUBSURFACE_SCATTERING;
    _TextureParam["TEXTURE_SUBSURFACE_TRANSMITTANCE"] = BaseMaterial3D::TextureParam::TEXTURE_SUBSURFACE_TRANSMITTANCE;
    _TextureParam["TEXTURE_BACKLIGHT"] = BaseMaterial3D::TextureParam::TEXTURE_BACKLIGHT;
    _TextureParam["TEXTURE_REFRACTION"] = BaseMaterial3D::TextureParam::TEXTURE_REFRACTION;
    _TextureParam["TEXTURE_DETAIL_MASK"] = BaseMaterial3D::TextureParam::TEXTURE_DETAIL_MASK;
    _TextureParam["TEXTURE_DETAIL_ALBEDO"] = BaseMaterial3D::TextureParam::TEXTURE_DETAIL_ALBEDO;
    _TextureParam["TEXTURE_DETAIL_NORMAL"] = BaseMaterial3D::TextureParam::TEXTURE_DETAIL_NORMAL;
    _TextureParam["TEXTURE_ORM"] = BaseMaterial3D::TextureParam::TEXTURE_ORM;
    _TextureParam["TEXTURE_MAX"] = BaseMaterial3D::TextureParam::TEXTURE_MAX;
    _module.add("TextureParam", std::move(_TextureParam));
    qjs::Value _TextureFilter = context->newObject();
    _TextureFilter["TEXTURE_FILTER_NEAREST"] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_NEAREST;
    _TextureFilter["TEXTURE_FILTER_LINEAR"] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_LINEAR;
    _TextureFilter["TEXTURE_FILTER_NEAREST_WITH_MIPMAPS"] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_NEAREST_WITH_MIPMAPS;
    _TextureFilter["TEXTURE_FILTER_LINEAR_WITH_MIPMAPS"] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_LINEAR_WITH_MIPMAPS;
    _TextureFilter["TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC"] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC;
    _TextureFilter["TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC"] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC;
    _TextureFilter["TEXTURE_FILTER_MAX"] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_MAX;
    _module.add("TextureFilter", std::move(_TextureFilter));
    qjs::Value _DetailUV = context->newObject();
    _DetailUV["DETAIL_UV_1"] = BaseMaterial3D::DetailUV::DETAIL_UV_1;
    _DetailUV["DETAIL_UV_2"] = BaseMaterial3D::DetailUV::DETAIL_UV_2;
    _module.add("DetailUV", std::move(_DetailUV));
    qjs::Value _Transparency = context->newObject();
    _Transparency["TRANSPARENCY_DISABLED"] = BaseMaterial3D::Transparency::TRANSPARENCY_DISABLED;
    _Transparency["TRANSPARENCY_ALPHA"] = BaseMaterial3D::Transparency::TRANSPARENCY_ALPHA;
    _Transparency["TRANSPARENCY_ALPHA_SCISSOR"] = BaseMaterial3D::Transparency::TRANSPARENCY_ALPHA_SCISSOR;
    _Transparency["TRANSPARENCY_ALPHA_HASH"] = BaseMaterial3D::Transparency::TRANSPARENCY_ALPHA_HASH;
    _Transparency["TRANSPARENCY_ALPHA_DEPTH_PRE_PASS"] = BaseMaterial3D::Transparency::TRANSPARENCY_ALPHA_DEPTH_PRE_PASS;
    _Transparency["TRANSPARENCY_MAX"] = BaseMaterial3D::Transparency::TRANSPARENCY_MAX;
    _module.add("Transparency", std::move(_Transparency));
    qjs::Value _ShadingMode = context->newObject();
    _ShadingMode["SHADING_MODE_UNSHADED"] = BaseMaterial3D::ShadingMode::SHADING_MODE_UNSHADED;
    _ShadingMode["SHADING_MODE_PER_PIXEL"] = BaseMaterial3D::ShadingMode::SHADING_MODE_PER_PIXEL;
    _ShadingMode["SHADING_MODE_PER_VERTEX"] = BaseMaterial3D::ShadingMode::SHADING_MODE_PER_VERTEX;
    _ShadingMode["SHADING_MODE_MAX"] = BaseMaterial3D::ShadingMode::SHADING_MODE_MAX;
    _module.add("ShadingMode", std::move(_ShadingMode));
    qjs::Value _Feature = context->newObject();
    _Feature["FEATURE_EMISSION"] = BaseMaterial3D::Feature::FEATURE_EMISSION;
    _Feature["FEATURE_NORMAL_MAPPING"] = BaseMaterial3D::Feature::FEATURE_NORMAL_MAPPING;
    _Feature["FEATURE_RIM"] = BaseMaterial3D::Feature::FEATURE_RIM;
    _Feature["FEATURE_CLEARCOAT"] = BaseMaterial3D::Feature::FEATURE_CLEARCOAT;
    _Feature["FEATURE_ANISOTROPY"] = BaseMaterial3D::Feature::FEATURE_ANISOTROPY;
    _Feature["FEATURE_AMBIENT_OCCLUSION"] = BaseMaterial3D::Feature::FEATURE_AMBIENT_OCCLUSION;
    _Feature["FEATURE_HEIGHT_MAPPING"] = BaseMaterial3D::Feature::FEATURE_HEIGHT_MAPPING;
    _Feature["FEATURE_SUBSURFACE_SCATTERING"] = BaseMaterial3D::Feature::FEATURE_SUBSURFACE_SCATTERING;
    _Feature["FEATURE_SUBSURFACE_TRANSMITTANCE"] = BaseMaterial3D::Feature::FEATURE_SUBSURFACE_TRANSMITTANCE;
    _Feature["FEATURE_BACKLIGHT"] = BaseMaterial3D::Feature::FEATURE_BACKLIGHT;
    _Feature["FEATURE_REFRACTION"] = BaseMaterial3D::Feature::FEATURE_REFRACTION;
    _Feature["FEATURE_DETAIL"] = BaseMaterial3D::Feature::FEATURE_DETAIL;
    _Feature["FEATURE_MAX"] = BaseMaterial3D::Feature::FEATURE_MAX;
    _module.add("Feature", std::move(_Feature));
    qjs::Value _BlendMode = context->newObject();
    _BlendMode["BLEND_MODE_MIX"] = BaseMaterial3D::BlendMode::BLEND_MODE_MIX;
    _BlendMode["BLEND_MODE_ADD"] = BaseMaterial3D::BlendMode::BLEND_MODE_ADD;
    _BlendMode["BLEND_MODE_SUB"] = BaseMaterial3D::BlendMode::BLEND_MODE_SUB;
    _BlendMode["BLEND_MODE_MUL"] = BaseMaterial3D::BlendMode::BLEND_MODE_MUL;
    _BlendMode["BLEND_MODE_PREMULT_ALPHA"] = BaseMaterial3D::BlendMode::BLEND_MODE_PREMULT_ALPHA;
    _module.add("BlendMode", std::move(_BlendMode));
    qjs::Value _AlphaAntiAliasing = context->newObject();
    _AlphaAntiAliasing["ALPHA_ANTIALIASING_OFF"] = BaseMaterial3D::AlphaAntiAliasing::ALPHA_ANTIALIASING_OFF;
    _AlphaAntiAliasing["ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE"] = BaseMaterial3D::AlphaAntiAliasing::ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE;
    _AlphaAntiAliasing["ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE_AND_TO_ONE"] = BaseMaterial3D::AlphaAntiAliasing::ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE_AND_TO_ONE;
    _module.add("AlphaAntiAliasing", std::move(_AlphaAntiAliasing));
    qjs::Value _DepthDrawMode = context->newObject();
    _DepthDrawMode["DEPTH_DRAW_OPAQUE_ONLY"] = BaseMaterial3D::DepthDrawMode::DEPTH_DRAW_OPAQUE_ONLY;
    _DepthDrawMode["DEPTH_DRAW_ALWAYS"] = BaseMaterial3D::DepthDrawMode::DEPTH_DRAW_ALWAYS;
    _DepthDrawMode["DEPTH_DRAW_DISABLED"] = BaseMaterial3D::DepthDrawMode::DEPTH_DRAW_DISABLED;
    _module.add("DepthDrawMode", std::move(_DepthDrawMode));
    qjs::Value _CullMode = context->newObject();
    _CullMode["CULL_BACK"] = BaseMaterial3D::CullMode::CULL_BACK;
    _CullMode["CULL_FRONT"] = BaseMaterial3D::CullMode::CULL_FRONT;
    _CullMode["CULL_DISABLED"] = BaseMaterial3D::CullMode::CULL_DISABLED;
    _module.add("CullMode", std::move(_CullMode));
    qjs::Value _Flags = context->newObject();
    _Flags["FLAG_DISABLE_DEPTH_TEST"] = BaseMaterial3D::Flags::FLAG_DISABLE_DEPTH_TEST;
    _Flags["FLAG_ALBEDO_FROM_VERTEX_COLOR"] = BaseMaterial3D::Flags::FLAG_ALBEDO_FROM_VERTEX_COLOR;
    _Flags["FLAG_SRGB_VERTEX_COLOR"] = BaseMaterial3D::Flags::FLAG_SRGB_VERTEX_COLOR;
    _Flags["FLAG_USE_POINT_SIZE"] = BaseMaterial3D::Flags::FLAG_USE_POINT_SIZE;
    _Flags["FLAG_FIXED_SIZE"] = BaseMaterial3D::Flags::FLAG_FIXED_SIZE;
    _Flags["FLAG_BILLBOARD_KEEP_SCALE"] = BaseMaterial3D::Flags::FLAG_BILLBOARD_KEEP_SCALE;
    _Flags["FLAG_UV1_USE_TRIPLANAR"] = BaseMaterial3D::Flags::FLAG_UV1_USE_TRIPLANAR;
    _Flags["FLAG_UV2_USE_TRIPLANAR"] = BaseMaterial3D::Flags::FLAG_UV2_USE_TRIPLANAR;
    _Flags["FLAG_UV1_USE_WORLD_TRIPLANAR"] = BaseMaterial3D::Flags::FLAG_UV1_USE_WORLD_TRIPLANAR;
    _Flags["FLAG_UV2_USE_WORLD_TRIPLANAR"] = BaseMaterial3D::Flags::FLAG_UV2_USE_WORLD_TRIPLANAR;
    _Flags["FLAG_AO_ON_UV2"] = BaseMaterial3D::Flags::FLAG_AO_ON_UV2;
    _Flags["FLAG_EMISSION_ON_UV2"] = BaseMaterial3D::Flags::FLAG_EMISSION_ON_UV2;
    _Flags["FLAG_ALBEDO_TEXTURE_FORCE_SRGB"] = BaseMaterial3D::Flags::FLAG_ALBEDO_TEXTURE_FORCE_SRGB;
    _Flags["FLAG_DONT_RECEIVE_SHADOWS"] = BaseMaterial3D::Flags::FLAG_DONT_RECEIVE_SHADOWS;
    _Flags["FLAG_DISABLE_AMBIENT_LIGHT"] = BaseMaterial3D::Flags::FLAG_DISABLE_AMBIENT_LIGHT;
    _Flags["FLAG_USE_SHADOW_TO_OPACITY"] = BaseMaterial3D::Flags::FLAG_USE_SHADOW_TO_OPACITY;
    _Flags["FLAG_USE_TEXTURE_REPEAT"] = BaseMaterial3D::Flags::FLAG_USE_TEXTURE_REPEAT;
    _Flags["FLAG_INVERT_HEIGHTMAP"] = BaseMaterial3D::Flags::FLAG_INVERT_HEIGHTMAP;
    _Flags["FLAG_SUBSURFACE_MODE_SKIN"] = BaseMaterial3D::Flags::FLAG_SUBSURFACE_MODE_SKIN;
    _Flags["FLAG_PARTICLE_TRAILS_MODE"] = BaseMaterial3D::Flags::FLAG_PARTICLE_TRAILS_MODE;
    _Flags["FLAG_ALBEDO_TEXTURE_MSDF"] = BaseMaterial3D::Flags::FLAG_ALBEDO_TEXTURE_MSDF;
    _Flags["FLAG_DISABLE_FOG"] = BaseMaterial3D::Flags::FLAG_DISABLE_FOG;
    _Flags["FLAG_MAX"] = BaseMaterial3D::Flags::FLAG_MAX;
    _module.add("Flags", std::move(_Flags));
    qjs::Value _DiffuseMode = context->newObject();
    _DiffuseMode["DIFFUSE_BURLEY"] = BaseMaterial3D::DiffuseMode::DIFFUSE_BURLEY;
    _DiffuseMode["DIFFUSE_LAMBERT"] = BaseMaterial3D::DiffuseMode::DIFFUSE_LAMBERT;
    _DiffuseMode["DIFFUSE_LAMBERT_WRAP"] = BaseMaterial3D::DiffuseMode::DIFFUSE_LAMBERT_WRAP;
    _DiffuseMode["DIFFUSE_TOON"] = BaseMaterial3D::DiffuseMode::DIFFUSE_TOON;
    _module.add("DiffuseMode", std::move(_DiffuseMode));
    qjs::Value _SpecularMode = context->newObject();
    _SpecularMode["SPECULAR_SCHLICK_GGX"] = BaseMaterial3D::SpecularMode::SPECULAR_SCHLICK_GGX;
    _SpecularMode["SPECULAR_TOON"] = BaseMaterial3D::SpecularMode::SPECULAR_TOON;
    _SpecularMode["SPECULAR_DISABLED"] = BaseMaterial3D::SpecularMode::SPECULAR_DISABLED;
    _module.add("SpecularMode", std::move(_SpecularMode));
    qjs::Value _BillboardMode = context->newObject();
    _BillboardMode["BILLBOARD_DISABLED"] = BaseMaterial3D::BillboardMode::BILLBOARD_DISABLED;
    _BillboardMode["BILLBOARD_ENABLED"] = BaseMaterial3D::BillboardMode::BILLBOARD_ENABLED;
    _BillboardMode["BILLBOARD_FIXED_Y"] = BaseMaterial3D::BillboardMode::BILLBOARD_FIXED_Y;
    _BillboardMode["BILLBOARD_PARTICLES"] = BaseMaterial3D::BillboardMode::BILLBOARD_PARTICLES;
    _module.add("BillboardMode", std::move(_BillboardMode));
    qjs::Value _TextureChannel = context->newObject();
    _TextureChannel["TEXTURE_CHANNEL_RED"] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_RED;
    _TextureChannel["TEXTURE_CHANNEL_GREEN"] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_GREEN;
    _TextureChannel["TEXTURE_CHANNEL_BLUE"] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_BLUE;
    _TextureChannel["TEXTURE_CHANNEL_ALPHA"] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_ALPHA;
    _TextureChannel["TEXTURE_CHANNEL_GRAYSCALE"] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_GRAYSCALE;
    _module.add("TextureChannel", std::move(_TextureChannel));
    qjs::Value _EmissionOperator = context->newObject();
    _EmissionOperator["EMISSION_OP_ADD"] = BaseMaterial3D::EmissionOperator::EMISSION_OP_ADD;
    _EmissionOperator["EMISSION_OP_MULTIPLY"] = BaseMaterial3D::EmissionOperator::EMISSION_OP_MULTIPLY;
    _module.add("EmissionOperator", std::move(_EmissionOperator));
    qjs::Value _DistanceFadeMode = context->newObject();
    _DistanceFadeMode["DISTANCE_FADE_DISABLED"] = BaseMaterial3D::DistanceFadeMode::DISTANCE_FADE_DISABLED;
    _DistanceFadeMode["DISTANCE_FADE_PIXEL_ALPHA"] = BaseMaterial3D::DistanceFadeMode::DISTANCE_FADE_PIXEL_ALPHA;
    _DistanceFadeMode["DISTANCE_FADE_PIXEL_DITHER"] = BaseMaterial3D::DistanceFadeMode::DISTANCE_FADE_PIXEL_DITHER;
    _DistanceFadeMode["DISTANCE_FADE_OBJECT_DITHER"] = BaseMaterial3D::DistanceFadeMode::DISTANCE_FADE_OBJECT_DITHER;
    _module.add("DistanceFadeMode", std::move(_DistanceFadeMode));
}