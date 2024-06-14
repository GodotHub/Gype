
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_BaseMaterial3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<BaseMaterial3D>("BaseMaterial3D")
			.constructor<>()
			.base<Material>()
			.property<static_cast<BaseMaterial3D::Transparency (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_transparency), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Transparency)>(&BaseMaterial3D::set_transparency)>((new std::string("transparency"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_alpha_scissor_threshold), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_alpha_scissor_threshold)>((new std::string("alpha_scissor_threshold"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_alpha_hash_scale), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_alpha_hash_scale)>((new std::string("alpha_hash_scale"))->c_str())
			.property<static_cast<BaseMaterial3D::AlphaAntiAliasing (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_alpha_antialiasing), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::AlphaAntiAliasing)>(&BaseMaterial3D::set_alpha_antialiasing)>((new std::string("alpha_antialiasing_mode"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_alpha_antialiasing_edge), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_alpha_antialiasing_edge)>((new std::string("alpha_antialiasing_edge"))->c_str())
			.property<static_cast<BaseMaterial3D::BlendMode (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_blend_mode), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::BlendMode)>(&BaseMaterial3D::set_blend_mode)>((new std::string("blend_mode"))->c_str())
			.property<static_cast<BaseMaterial3D::CullMode (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_cull_mode), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::CullMode)>(&BaseMaterial3D::set_cull_mode)>((new std::string("cull_mode"))->c_str())
			.property<static_cast<BaseMaterial3D::DepthDrawMode (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_depth_draw_mode), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::DepthDrawMode)>(&BaseMaterial3D::set_depth_draw_mode)>((new std::string("depth_draw_mode"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("no_depth_test"))->c_str())
			.property<static_cast<BaseMaterial3D::ShadingMode (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_shading_mode), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::ShadingMode)>(&BaseMaterial3D::set_shading_mode)>((new std::string("shading_mode"))->c_str())
			.property<static_cast<BaseMaterial3D::DiffuseMode (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_diffuse_mode), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::DiffuseMode)>(&BaseMaterial3D::set_diffuse_mode)>((new std::string("diffuse_mode"))->c_str())
			.property<static_cast<BaseMaterial3D::SpecularMode (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_specular_mode), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::SpecularMode)>(&BaseMaterial3D::set_specular_mode)>((new std::string("specular_mode"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("disable_ambient_light"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("disable_fog"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("vertex_color_use_as_albedo"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("vertex_color_is_srgb"))->c_str())
			.property<static_cast<Color (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_albedo), static_cast<void (BaseMaterial3D::*)(const Color &)>(&BaseMaterial3D::set_albedo)>((new std::string("albedo_color"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("albedo_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("albedo_texture_force_srgb"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("albedo_texture_msdf"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("orm_texture"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_metallic), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_metallic)>((new std::string("metallic"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_specular), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_specular)>((new std::string("metallic_specular"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("metallic_texture"))->c_str())
			.property<static_cast<BaseMaterial3D::TextureChannel (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_metallic_texture_channel), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureChannel)>(&BaseMaterial3D::set_metallic_texture_channel)>((new std::string("metallic_texture_channel"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_roughness), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_roughness)>((new std::string("roughness"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("roughness_texture"))->c_str())
			.property<static_cast<BaseMaterial3D::TextureChannel (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_roughness_texture_channel), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureChannel)>(&BaseMaterial3D::set_roughness_texture_channel)>((new std::string("roughness_texture_channel"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("emission_enabled"))->c_str())
			.property<static_cast<Color (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_emission), static_cast<void (BaseMaterial3D::*)(const Color &)>(&BaseMaterial3D::set_emission)>((new std::string("emission"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_emission_energy_multiplier), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_emission_energy_multiplier)>((new std::string("emission_energy_multiplier"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_emission_intensity), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_emission_intensity)>((new std::string("emission_intensity"))->c_str())
			.property<static_cast<BaseMaterial3D::EmissionOperator (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_emission_operator), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::EmissionOperator)>(&BaseMaterial3D::set_emission_operator)>((new std::string("emission_operator"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("emission_on_uv2"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("emission_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("normal_enabled"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_normal_scale), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_normal_scale)>((new std::string("normal_scale"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("normal_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("rim_enabled"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_rim), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_rim)>((new std::string("rim"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_rim_tint), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_rim_tint)>((new std::string("rim_tint"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("rim_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("clearcoat_enabled"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_clearcoat), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_clearcoat)>((new std::string("clearcoat"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_clearcoat_roughness), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_clearcoat_roughness)>((new std::string("clearcoat_roughness"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("clearcoat_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("anisotropy_enabled"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_anisotropy), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_anisotropy)>((new std::string("anisotropy"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("anisotropy_flowmap"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("ao_enabled"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_ao_light_affect), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_ao_light_affect)>((new std::string("ao_light_affect"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("ao_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("ao_on_uv2"))->c_str())
			.property<static_cast<BaseMaterial3D::TextureChannel (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_ao_texture_channel), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureChannel)>(&BaseMaterial3D::set_ao_texture_channel)>((new std::string("ao_texture_channel"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("heightmap_enabled"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_heightmap_scale), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_heightmap_scale)>((new std::string("heightmap_scale"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)() const>(&BaseMaterial3D::is_heightmap_deep_parallax_enabled), static_cast<void (BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_heightmap_deep_parallax)>((new std::string("heightmap_deep_parallax"))->c_str())
			.property<static_cast<int32_t (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_heightmap_deep_parallax_min_layers), static_cast<void (BaseMaterial3D::*)(int32_t)>(&BaseMaterial3D::set_heightmap_deep_parallax_min_layers)>((new std::string("heightmap_min_layers"))->c_str())
			.property<static_cast<int32_t (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_heightmap_deep_parallax_max_layers), static_cast<void (BaseMaterial3D::*)(int32_t)>(&BaseMaterial3D::set_heightmap_deep_parallax_max_layers)>((new std::string("heightmap_max_layers"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_heightmap_deep_parallax_flip_tangent), static_cast<void (BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_heightmap_deep_parallax_flip_tangent)>((new std::string("heightmap_flip_tangent"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_heightmap_deep_parallax_flip_binormal), static_cast<void (BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_heightmap_deep_parallax_flip_binormal)>((new std::string("heightmap_flip_binormal"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("heightmap_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("heightmap_flip_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("subsurf_scatter_enabled"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_subsurface_scattering_strength), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_subsurface_scattering_strength)>((new std::string("subsurf_scatter_strength"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("subsurf_scatter_skin_mode"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("subsurf_scatter_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("subsurf_scatter_transmittance_enabled"))->c_str())
			.property<static_cast<Color (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_transmittance_color), static_cast<void (BaseMaterial3D::*)(const Color &)>(&BaseMaterial3D::set_transmittance_color)>((new std::string("subsurf_scatter_transmittance_color"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("subsurf_scatter_transmittance_texture"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_transmittance_depth), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_transmittance_depth)>((new std::string("subsurf_scatter_transmittance_depth"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_transmittance_boost), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_transmittance_boost)>((new std::string("subsurf_scatter_transmittance_boost"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("backlight_enabled"))->c_str())
			.property<static_cast<Color (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_backlight), static_cast<void (BaseMaterial3D::*)(const Color &)>(&BaseMaterial3D::set_backlight)>((new std::string("backlight"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("backlight_texture"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("refraction_enabled"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_refraction), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_refraction)>((new std::string("refraction_scale"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("refraction_texture"))->c_str())
			.property<static_cast<BaseMaterial3D::TextureChannel (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_refraction_texture_channel), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureChannel)>(&BaseMaterial3D::set_refraction_texture_channel)>((new std::string("refraction_texture_channel"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Feature) const>(&BaseMaterial3D::get_feature), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Feature, bool)>(&BaseMaterial3D::set_feature)>((new std::string("detail_enabled"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("detail_mask"))->c_str())
			.property<static_cast<BaseMaterial3D::BlendMode (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_detail_blend_mode), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::BlendMode)>(&BaseMaterial3D::set_detail_blend_mode)>((new std::string("detail_blend_mode"))->c_str())
			.property<static_cast<BaseMaterial3D::DetailUV (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_detail_uv), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::DetailUV)>(&BaseMaterial3D::set_detail_uv)>((new std::string("detail_uv_layer"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("detail_albedo"))->c_str())
			.property<static_cast<Ref<Texture2D> (BaseMaterial3D::*)(BaseMaterial3D::TextureParam) const>(&BaseMaterial3D::get_texture), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureParam, const Ref<Texture2D> &)>(&BaseMaterial3D::set_texture)>((new std::string("detail_normal"))->c_str())
			.property<static_cast<Vector3 (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_uv1_scale), static_cast<void (BaseMaterial3D::*)(const Vector3 &)>(&BaseMaterial3D::set_uv1_scale)>((new std::string("uv1_scale"))->c_str())
			.property<static_cast<Vector3 (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_uv1_offset), static_cast<void (BaseMaterial3D::*)(const Vector3 &)>(&BaseMaterial3D::set_uv1_offset)>((new std::string("uv1_offset"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("uv1_triplanar"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_uv1_triplanar_blend_sharpness), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_uv1_triplanar_blend_sharpness)>((new std::string("uv1_triplanar_sharpness"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("uv1_world_triplanar"))->c_str())
			.property<static_cast<Vector3 (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_uv2_scale), static_cast<void (BaseMaterial3D::*)(const Vector3 &)>(&BaseMaterial3D::set_uv2_scale)>((new std::string("uv2_scale"))->c_str())
			.property<static_cast<Vector3 (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_uv2_offset), static_cast<void (BaseMaterial3D::*)(const Vector3 &)>(&BaseMaterial3D::set_uv2_offset)>((new std::string("uv2_offset"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("uv2_triplanar"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_uv2_triplanar_blend_sharpness), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_uv2_triplanar_blend_sharpness)>((new std::string("uv2_triplanar_sharpness"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("uv2_world_triplanar"))->c_str())
			.property<static_cast<BaseMaterial3D::TextureFilter (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_texture_filter), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::TextureFilter)>(&BaseMaterial3D::set_texture_filter)>((new std::string("texture_filter"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("texture_repeat"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("disable_receive_shadows"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("shadow_to_opacity"))->c_str())
			.property<static_cast<BaseMaterial3D::BillboardMode (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_billboard_mode), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::BillboardMode)>(&BaseMaterial3D::set_billboard_mode)>((new std::string("billboard_mode"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("billboard_keep_scale"))->c_str())
			.property<static_cast<int32_t (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_particles_anim_h_frames), static_cast<void (BaseMaterial3D::*)(int32_t)>(&BaseMaterial3D::set_particles_anim_h_frames)>((new std::string("particles_anim_h_frames"))->c_str())
			.property<static_cast<int32_t (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_particles_anim_v_frames), static_cast<void (BaseMaterial3D::*)(int32_t)>(&BaseMaterial3D::set_particles_anim_v_frames)>((new std::string("particles_anim_v_frames"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_particles_anim_loop), static_cast<void (BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_particles_anim_loop)>((new std::string("particles_anim_loop"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)() const>(&BaseMaterial3D::is_grow_enabled), static_cast<void (BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_grow_enabled)>((new std::string("grow"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_grow), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_grow)>((new std::string("grow_amount"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("fixed_size"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("use_point_size"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_point_size), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_point_size)>((new std::string("point_size"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)(BaseMaterial3D::Flags) const>(&BaseMaterial3D::get_flag), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::Flags, bool)>(&BaseMaterial3D::set_flag)>((new std::string("use_particle_trails"))->c_str())
			.property<static_cast<bool (BaseMaterial3D::*)() const>(&BaseMaterial3D::is_proximity_fade_enabled), static_cast<void (BaseMaterial3D::*)(bool)>(&BaseMaterial3D::set_proximity_fade_enabled)>((new std::string("proximity_fade_enabled"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_proximity_fade_distance), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_proximity_fade_distance)>((new std::string("proximity_fade_distance"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_msdf_pixel_range), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_msdf_pixel_range)>((new std::string("msdf_pixel_range"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_msdf_outline_size), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_msdf_outline_size)>((new std::string("msdf_outline_size"))->c_str())
			.property<static_cast<BaseMaterial3D::DistanceFadeMode (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_distance_fade), static_cast<void (BaseMaterial3D::*)(BaseMaterial3D::DistanceFadeMode)>(&BaseMaterial3D::set_distance_fade)>((new std::string("distance_fade_mode"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_distance_fade_min_distance), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_distance_fade_min_distance)>((new std::string("distance_fade_min_distance"))->c_str())
			.property<static_cast<double (BaseMaterial3D::*)() const>(&BaseMaterial3D::get_distance_fade_max_distance), static_cast<void (BaseMaterial3D::*)(double)>(&BaseMaterial3D::set_distance_fade_max_distance)>((new std::string("distance_fade_max_distance"))->c_str());
	qjs::Value _TextureParam = context->newObject();
	_TextureParam[(new std::string("TEXTURE_ALBEDO"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_ALBEDO;
	_TextureParam[(new std::string("TEXTURE_METALLIC"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_METALLIC;
	_TextureParam[(new std::string("TEXTURE_ROUGHNESS"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_ROUGHNESS;
	_TextureParam[(new std::string("TEXTURE_EMISSION"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_EMISSION;
	_TextureParam[(new std::string("TEXTURE_NORMAL"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_NORMAL;
	_TextureParam[(new std::string("TEXTURE_RIM"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_RIM;
	_TextureParam[(new std::string("TEXTURE_CLEARCOAT"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_CLEARCOAT;
	_TextureParam[(new std::string("TEXTURE_FLOWMAP"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_FLOWMAP;
	_TextureParam[(new std::string("TEXTURE_AMBIENT_OCCLUSION"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_AMBIENT_OCCLUSION;
	_TextureParam[(new std::string("TEXTURE_HEIGHTMAP"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_HEIGHTMAP;
	_TextureParam[(new std::string("TEXTURE_SUBSURFACE_SCATTERING"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_SUBSURFACE_SCATTERING;
	_TextureParam[(new std::string("TEXTURE_SUBSURFACE_TRANSMITTANCE"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_SUBSURFACE_TRANSMITTANCE;
	_TextureParam[(new std::string("TEXTURE_BACKLIGHT"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_BACKLIGHT;
	_TextureParam[(new std::string("TEXTURE_REFRACTION"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_REFRACTION;
	_TextureParam[(new std::string("TEXTURE_DETAIL_MASK"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_DETAIL_MASK;
	_TextureParam[(new std::string("TEXTURE_DETAIL_ALBEDO"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_DETAIL_ALBEDO;
	_TextureParam[(new std::string("TEXTURE_DETAIL_NORMAL"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_DETAIL_NORMAL;
	_TextureParam[(new std::string("TEXTURE_ORM"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_ORM;
	_TextureParam[(new std::string("TEXTURE_MAX"))->c_str()] = BaseMaterial3D::TextureParam::TEXTURE_MAX;
	_module.add("TextureParam", std::move(_TextureParam));
	qjs::Value _TextureFilter = context->newObject();
	_TextureFilter[(new std::string("TEXTURE_FILTER_NEAREST"))->c_str()] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_NEAREST;
	_TextureFilter[(new std::string("TEXTURE_FILTER_LINEAR"))->c_str()] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_LINEAR;
	_TextureFilter[(new std::string("TEXTURE_FILTER_NEAREST_WITH_MIPMAPS"))->c_str()] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_NEAREST_WITH_MIPMAPS;
	_TextureFilter[(new std::string("TEXTURE_FILTER_LINEAR_WITH_MIPMAPS"))->c_str()] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_LINEAR_WITH_MIPMAPS;
	_TextureFilter[(new std::string("TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC"))->c_str()] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC;
	_TextureFilter[(new std::string("TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC"))->c_str()] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC;
	_TextureFilter[(new std::string("TEXTURE_FILTER_MAX"))->c_str()] = BaseMaterial3D::TextureFilter::TEXTURE_FILTER_MAX;
	_module.add("TextureFilter", std::move(_TextureFilter));
	qjs::Value _DetailUV = context->newObject();
	_DetailUV[(new std::string("DETAIL_UV_1"))->c_str()] = BaseMaterial3D::DetailUV::DETAIL_UV_1;
	_DetailUV[(new std::string("DETAIL_UV_2"))->c_str()] = BaseMaterial3D::DetailUV::DETAIL_UV_2;
	_module.add("DetailUV", std::move(_DetailUV));
	qjs::Value _Transparency = context->newObject();
	_Transparency[(new std::string("TRANSPARENCY_DISABLED"))->c_str()] = BaseMaterial3D::Transparency::TRANSPARENCY_DISABLED;
	_Transparency[(new std::string("TRANSPARENCY_ALPHA"))->c_str()] = BaseMaterial3D::Transparency::TRANSPARENCY_ALPHA;
	_Transparency[(new std::string("TRANSPARENCY_ALPHA_SCISSOR"))->c_str()] = BaseMaterial3D::Transparency::TRANSPARENCY_ALPHA_SCISSOR;
	_Transparency[(new std::string("TRANSPARENCY_ALPHA_HASH"))->c_str()] = BaseMaterial3D::Transparency::TRANSPARENCY_ALPHA_HASH;
	_Transparency[(new std::string("TRANSPARENCY_ALPHA_DEPTH_PRE_PASS"))->c_str()] = BaseMaterial3D::Transparency::TRANSPARENCY_ALPHA_DEPTH_PRE_PASS;
	_Transparency[(new std::string("TRANSPARENCY_MAX"))->c_str()] = BaseMaterial3D::Transparency::TRANSPARENCY_MAX;
	_module.add("Transparency", std::move(_Transparency));
	qjs::Value _ShadingMode = context->newObject();
	_ShadingMode[(new std::string("SHADING_MODE_UNSHADED"))->c_str()] = BaseMaterial3D::ShadingMode::SHADING_MODE_UNSHADED;
	_ShadingMode[(new std::string("SHADING_MODE_PER_PIXEL"))->c_str()] = BaseMaterial3D::ShadingMode::SHADING_MODE_PER_PIXEL;
	_ShadingMode[(new std::string("SHADING_MODE_PER_VERTEX"))->c_str()] = BaseMaterial3D::ShadingMode::SHADING_MODE_PER_VERTEX;
	_ShadingMode[(new std::string("SHADING_MODE_MAX"))->c_str()] = BaseMaterial3D::ShadingMode::SHADING_MODE_MAX;
	_module.add("ShadingMode", std::move(_ShadingMode));
	qjs::Value _Feature = context->newObject();
	_Feature[(new std::string("FEATURE_EMISSION"))->c_str()] = BaseMaterial3D::Feature::FEATURE_EMISSION;
	_Feature[(new std::string("FEATURE_NORMAL_MAPPING"))->c_str()] = BaseMaterial3D::Feature::FEATURE_NORMAL_MAPPING;
	_Feature[(new std::string("FEATURE_RIM"))->c_str()] = BaseMaterial3D::Feature::FEATURE_RIM;
	_Feature[(new std::string("FEATURE_CLEARCOAT"))->c_str()] = BaseMaterial3D::Feature::FEATURE_CLEARCOAT;
	_Feature[(new std::string("FEATURE_ANISOTROPY"))->c_str()] = BaseMaterial3D::Feature::FEATURE_ANISOTROPY;
	_Feature[(new std::string("FEATURE_AMBIENT_OCCLUSION"))->c_str()] = BaseMaterial3D::Feature::FEATURE_AMBIENT_OCCLUSION;
	_Feature[(new std::string("FEATURE_HEIGHT_MAPPING"))->c_str()] = BaseMaterial3D::Feature::FEATURE_HEIGHT_MAPPING;
	_Feature[(new std::string("FEATURE_SUBSURFACE_SCATTERING"))->c_str()] = BaseMaterial3D::Feature::FEATURE_SUBSURFACE_SCATTERING;
	_Feature[(new std::string("FEATURE_SUBSURFACE_TRANSMITTANCE"))->c_str()] = BaseMaterial3D::Feature::FEATURE_SUBSURFACE_TRANSMITTANCE;
	_Feature[(new std::string("FEATURE_BACKLIGHT"))->c_str()] = BaseMaterial3D::Feature::FEATURE_BACKLIGHT;
	_Feature[(new std::string("FEATURE_REFRACTION"))->c_str()] = BaseMaterial3D::Feature::FEATURE_REFRACTION;
	_Feature[(new std::string("FEATURE_DETAIL"))->c_str()] = BaseMaterial3D::Feature::FEATURE_DETAIL;
	_Feature[(new std::string("FEATURE_MAX"))->c_str()] = BaseMaterial3D::Feature::FEATURE_MAX;
	_module.add("Feature", std::move(_Feature));
	qjs::Value _BlendMode = context->newObject();
	_BlendMode[(new std::string("BLEND_MODE_MIX"))->c_str()] = BaseMaterial3D::BlendMode::BLEND_MODE_MIX;
	_BlendMode[(new std::string("BLEND_MODE_ADD"))->c_str()] = BaseMaterial3D::BlendMode::BLEND_MODE_ADD;
	_BlendMode[(new std::string("BLEND_MODE_SUB"))->c_str()] = BaseMaterial3D::BlendMode::BLEND_MODE_SUB;
	_BlendMode[(new std::string("BLEND_MODE_MUL"))->c_str()] = BaseMaterial3D::BlendMode::BLEND_MODE_MUL;
	_BlendMode[(new std::string("BLEND_MODE_PREMULT_ALPHA"))->c_str()] = BaseMaterial3D::BlendMode::BLEND_MODE_PREMULT_ALPHA;
	_module.add("BlendMode", std::move(_BlendMode));
	qjs::Value _AlphaAntiAliasing = context->newObject();
	_AlphaAntiAliasing[(new std::string("ALPHA_ANTIALIASING_OFF"))->c_str()] = BaseMaterial3D::AlphaAntiAliasing::ALPHA_ANTIALIASING_OFF;
	_AlphaAntiAliasing[(new std::string("ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE"))->c_str()] = BaseMaterial3D::AlphaAntiAliasing::ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE;
	_AlphaAntiAliasing[(new std::string("ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE_AND_TO_ONE"))->c_str()] = BaseMaterial3D::AlphaAntiAliasing::ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE_AND_TO_ONE;
	_module.add("AlphaAntiAliasing", std::move(_AlphaAntiAliasing));
	qjs::Value _DepthDrawMode = context->newObject();
	_DepthDrawMode[(new std::string("DEPTH_DRAW_OPAQUE_ONLY"))->c_str()] = BaseMaterial3D::DepthDrawMode::DEPTH_DRAW_OPAQUE_ONLY;
	_DepthDrawMode[(new std::string("DEPTH_DRAW_ALWAYS"))->c_str()] = BaseMaterial3D::DepthDrawMode::DEPTH_DRAW_ALWAYS;
	_DepthDrawMode[(new std::string("DEPTH_DRAW_DISABLED"))->c_str()] = BaseMaterial3D::DepthDrawMode::DEPTH_DRAW_DISABLED;
	_module.add("DepthDrawMode", std::move(_DepthDrawMode));
	qjs::Value _CullMode = context->newObject();
	_CullMode[(new std::string("CULL_BACK"))->c_str()] = BaseMaterial3D::CullMode::CULL_BACK;
	_CullMode[(new std::string("CULL_FRONT"))->c_str()] = BaseMaterial3D::CullMode::CULL_FRONT;
	_CullMode[(new std::string("CULL_DISABLED"))->c_str()] = BaseMaterial3D::CullMode::CULL_DISABLED;
	_module.add("CullMode", std::move(_CullMode));
	qjs::Value _Flags = context->newObject();
	_Flags[(new std::string("FLAG_DISABLE_DEPTH_TEST"))->c_str()] = BaseMaterial3D::Flags::FLAG_DISABLE_DEPTH_TEST;
	_Flags[(new std::string("FLAG_ALBEDO_FROM_VERTEX_COLOR"))->c_str()] = BaseMaterial3D::Flags::FLAG_ALBEDO_FROM_VERTEX_COLOR;
	_Flags[(new std::string("FLAG_SRGB_VERTEX_COLOR"))->c_str()] = BaseMaterial3D::Flags::FLAG_SRGB_VERTEX_COLOR;
	_Flags[(new std::string("FLAG_USE_POINT_SIZE"))->c_str()] = BaseMaterial3D::Flags::FLAG_USE_POINT_SIZE;
	_Flags[(new std::string("FLAG_FIXED_SIZE"))->c_str()] = BaseMaterial3D::Flags::FLAG_FIXED_SIZE;
	_Flags[(new std::string("FLAG_BILLBOARD_KEEP_SCALE"))->c_str()] = BaseMaterial3D::Flags::FLAG_BILLBOARD_KEEP_SCALE;
	_Flags[(new std::string("FLAG_UV1_USE_TRIPLANAR"))->c_str()] = BaseMaterial3D::Flags::FLAG_UV1_USE_TRIPLANAR;
	_Flags[(new std::string("FLAG_UV2_USE_TRIPLANAR"))->c_str()] = BaseMaterial3D::Flags::FLAG_UV2_USE_TRIPLANAR;
	_Flags[(new std::string("FLAG_UV1_USE_WORLD_TRIPLANAR"))->c_str()] = BaseMaterial3D::Flags::FLAG_UV1_USE_WORLD_TRIPLANAR;
	_Flags[(new std::string("FLAG_UV2_USE_WORLD_TRIPLANAR"))->c_str()] = BaseMaterial3D::Flags::FLAG_UV2_USE_WORLD_TRIPLANAR;
	_Flags[(new std::string("FLAG_AO_ON_UV2"))->c_str()] = BaseMaterial3D::Flags::FLAG_AO_ON_UV2;
	_Flags[(new std::string("FLAG_EMISSION_ON_UV2"))->c_str()] = BaseMaterial3D::Flags::FLAG_EMISSION_ON_UV2;
	_Flags[(new std::string("FLAG_ALBEDO_TEXTURE_FORCE_SRGB"))->c_str()] = BaseMaterial3D::Flags::FLAG_ALBEDO_TEXTURE_FORCE_SRGB;
	_Flags[(new std::string("FLAG_DONT_RECEIVE_SHADOWS"))->c_str()] = BaseMaterial3D::Flags::FLAG_DONT_RECEIVE_SHADOWS;
	_Flags[(new std::string("FLAG_DISABLE_AMBIENT_LIGHT"))->c_str()] = BaseMaterial3D::Flags::FLAG_DISABLE_AMBIENT_LIGHT;
	_Flags[(new std::string("FLAG_USE_SHADOW_TO_OPACITY"))->c_str()] = BaseMaterial3D::Flags::FLAG_USE_SHADOW_TO_OPACITY;
	_Flags[(new std::string("FLAG_USE_TEXTURE_REPEAT"))->c_str()] = BaseMaterial3D::Flags::FLAG_USE_TEXTURE_REPEAT;
	_Flags[(new std::string("FLAG_INVERT_HEIGHTMAP"))->c_str()] = BaseMaterial3D::Flags::FLAG_INVERT_HEIGHTMAP;
	_Flags[(new std::string("FLAG_SUBSURFACE_MODE_SKIN"))->c_str()] = BaseMaterial3D::Flags::FLAG_SUBSURFACE_MODE_SKIN;
	_Flags[(new std::string("FLAG_PARTICLE_TRAILS_MODE"))->c_str()] = BaseMaterial3D::Flags::FLAG_PARTICLE_TRAILS_MODE;
	_Flags[(new std::string("FLAG_ALBEDO_TEXTURE_MSDF"))->c_str()] = BaseMaterial3D::Flags::FLAG_ALBEDO_TEXTURE_MSDF;
	_Flags[(new std::string("FLAG_DISABLE_FOG"))->c_str()] = BaseMaterial3D::Flags::FLAG_DISABLE_FOG;
	_Flags[(new std::string("FLAG_MAX"))->c_str()] = BaseMaterial3D::Flags::FLAG_MAX;
	_module.add("Flags", std::move(_Flags));
	qjs::Value _DiffuseMode = context->newObject();
	_DiffuseMode[(new std::string("DIFFUSE_BURLEY"))->c_str()] = BaseMaterial3D::DiffuseMode::DIFFUSE_BURLEY;
	_DiffuseMode[(new std::string("DIFFUSE_LAMBERT"))->c_str()] = BaseMaterial3D::DiffuseMode::DIFFUSE_LAMBERT;
	_DiffuseMode[(new std::string("DIFFUSE_LAMBERT_WRAP"))->c_str()] = BaseMaterial3D::DiffuseMode::DIFFUSE_LAMBERT_WRAP;
	_DiffuseMode[(new std::string("DIFFUSE_TOON"))->c_str()] = BaseMaterial3D::DiffuseMode::DIFFUSE_TOON;
	_module.add("DiffuseMode", std::move(_DiffuseMode));
	qjs::Value _SpecularMode = context->newObject();
	_SpecularMode[(new std::string("SPECULAR_SCHLICK_GGX"))->c_str()] = BaseMaterial3D::SpecularMode::SPECULAR_SCHLICK_GGX;
	_SpecularMode[(new std::string("SPECULAR_TOON"))->c_str()] = BaseMaterial3D::SpecularMode::SPECULAR_TOON;
	_SpecularMode[(new std::string("SPECULAR_DISABLED"))->c_str()] = BaseMaterial3D::SpecularMode::SPECULAR_DISABLED;
	_module.add("SpecularMode", std::move(_SpecularMode));
	qjs::Value _BillboardMode = context->newObject();
	_BillboardMode[(new std::string("BILLBOARD_DISABLED"))->c_str()] = BaseMaterial3D::BillboardMode::BILLBOARD_DISABLED;
	_BillboardMode[(new std::string("BILLBOARD_ENABLED"))->c_str()] = BaseMaterial3D::BillboardMode::BILLBOARD_ENABLED;
	_BillboardMode[(new std::string("BILLBOARD_FIXED_Y"))->c_str()] = BaseMaterial3D::BillboardMode::BILLBOARD_FIXED_Y;
	_BillboardMode[(new std::string("BILLBOARD_PARTICLES"))->c_str()] = BaseMaterial3D::BillboardMode::BILLBOARD_PARTICLES;
	_module.add("BillboardMode", std::move(_BillboardMode));
	qjs::Value _TextureChannel = context->newObject();
	_TextureChannel[(new std::string("TEXTURE_CHANNEL_RED"))->c_str()] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_RED;
	_TextureChannel[(new std::string("TEXTURE_CHANNEL_GREEN"))->c_str()] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_GREEN;
	_TextureChannel[(new std::string("TEXTURE_CHANNEL_BLUE"))->c_str()] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_BLUE;
	_TextureChannel[(new std::string("TEXTURE_CHANNEL_ALPHA"))->c_str()] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_ALPHA;
	_TextureChannel[(new std::string("TEXTURE_CHANNEL_GRAYSCALE"))->c_str()] = BaseMaterial3D::TextureChannel::TEXTURE_CHANNEL_GRAYSCALE;
	_module.add("TextureChannel", std::move(_TextureChannel));
	qjs::Value _EmissionOperator = context->newObject();
	_EmissionOperator[(new std::string("EMISSION_OP_ADD"))->c_str()] = BaseMaterial3D::EmissionOperator::EMISSION_OP_ADD;
	_EmissionOperator[(new std::string("EMISSION_OP_MULTIPLY"))->c_str()] = BaseMaterial3D::EmissionOperator::EMISSION_OP_MULTIPLY;
	_module.add("EmissionOperator", std::move(_EmissionOperator));
	qjs::Value _DistanceFadeMode = context->newObject();
	_DistanceFadeMode[(new std::string("DISTANCE_FADE_DISABLED"))->c_str()] = BaseMaterial3D::DistanceFadeMode::DISTANCE_FADE_DISABLED;
	_DistanceFadeMode[(new std::string("DISTANCE_FADE_PIXEL_ALPHA"))->c_str()] = BaseMaterial3D::DistanceFadeMode::DISTANCE_FADE_PIXEL_ALPHA;
	_DistanceFadeMode[(new std::string("DISTANCE_FADE_PIXEL_DITHER"))->c_str()] = BaseMaterial3D::DistanceFadeMode::DISTANCE_FADE_PIXEL_DITHER;
	_DistanceFadeMode[(new std::string("DISTANCE_FADE_OBJECT_DITHER"))->c_str()] = BaseMaterial3D::DistanceFadeMode::DISTANCE_FADE_OBJECT_DITHER;
	_module.add("DistanceFadeMode", std::move(_DistanceFadeMode));
}