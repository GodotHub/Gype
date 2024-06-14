
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/lightmap_gi.hpp>
#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_LightmapGI() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<LightmapGI>("LightmapGI")
			.constructor<>()
			.base<VisualInstance3D>()
			.property<static_cast<LightmapGI::BakeQuality (LightmapGI::*)() const>(&LightmapGI::get_bake_quality), static_cast<void (LightmapGI::*)(LightmapGI::BakeQuality)>(&LightmapGI::set_bake_quality)>((new std::string("quality"))->c_str())
			.property<static_cast<int32_t (LightmapGI::*)() const>(&LightmapGI::get_bounces), static_cast<void (LightmapGI::*)(int32_t)>(&LightmapGI::set_bounces)>((new std::string("bounces"))->c_str())
			.property<static_cast<double (LightmapGI::*)() const>(&LightmapGI::get_bounce_indirect_energy), static_cast<void (LightmapGI::*)(double)>(&LightmapGI::set_bounce_indirect_energy)>((new std::string("bounce_indirect_energy"))->c_str())
			.property<static_cast<bool (LightmapGI::*)() const>(&LightmapGI::is_directional), static_cast<void (LightmapGI::*)(bool)>(&LightmapGI::set_directional)>((new std::string("directional"))->c_str())
			.property<static_cast<bool (LightmapGI::*)() const>(&LightmapGI::is_using_texture_for_bounces), static_cast<void (LightmapGI::*)(bool)>(&LightmapGI::set_use_texture_for_bounces)>((new std::string("use_texture_for_bounces"))->c_str())
			.property<static_cast<bool (LightmapGI::*)() const>(&LightmapGI::is_interior), static_cast<void (LightmapGI::*)(bool)>(&LightmapGI::set_interior)>((new std::string("interior"))->c_str())
			.property<static_cast<bool (LightmapGI::*)() const>(&LightmapGI::is_using_denoiser), static_cast<void (LightmapGI::*)(bool)>(&LightmapGI::set_use_denoiser)>((new std::string("use_denoiser"))->c_str())
			.property<static_cast<double (LightmapGI::*)() const>(&LightmapGI::get_denoiser_strength), static_cast<void (LightmapGI::*)(double)>(&LightmapGI::set_denoiser_strength)>((new std::string("denoiser_strength"))->c_str())
			.property<static_cast<int32_t (LightmapGI::*)() const>(&LightmapGI::get_denoiser_range), static_cast<void (LightmapGI::*)(int32_t)>(&LightmapGI::set_denoiser_range)>((new std::string("denoiser_range"))->c_str())
			.property<static_cast<double (LightmapGI::*)() const>(&LightmapGI::get_bias), static_cast<void (LightmapGI::*)(double)>(&LightmapGI::set_bias)>((new std::string("bias"))->c_str())
			.property<static_cast<double (LightmapGI::*)() const>(&LightmapGI::get_texel_scale), static_cast<void (LightmapGI::*)(double)>(&LightmapGI::set_texel_scale)>((new std::string("texel_scale"))->c_str())
			.property<static_cast<int32_t (LightmapGI::*)() const>(&LightmapGI::get_max_texture_size), static_cast<void (LightmapGI::*)(int32_t)>(&LightmapGI::set_max_texture_size)>((new std::string("max_texture_size"))->c_str())
			.property<static_cast<LightmapGI::EnvironmentMode (LightmapGI::*)() const>(&LightmapGI::get_environment_mode), static_cast<void (LightmapGI::*)(LightmapGI::EnvironmentMode)>(&LightmapGI::set_environment_mode)>((new std::string("environment_mode"))->c_str())
			.property<static_cast<Ref<Sky> (LightmapGI::*)() const>(&LightmapGI::get_environment_custom_sky), static_cast<void (LightmapGI::*)(const Ref<Sky> &)>(&LightmapGI::set_environment_custom_sky)>((new std::string("environment_custom_sky"))->c_str())
			.property<static_cast<Color (LightmapGI::*)() const>(&LightmapGI::get_environment_custom_color), static_cast<void (LightmapGI::*)(const Color &)>(&LightmapGI::set_environment_custom_color)>((new std::string("environment_custom_color"))->c_str())
			.property<static_cast<double (LightmapGI::*)() const>(&LightmapGI::get_environment_custom_energy), static_cast<void (LightmapGI::*)(double)>(&LightmapGI::set_environment_custom_energy)>((new std::string("environment_custom_energy"))->c_str())
			.property<static_cast<Ref<CameraAttributes> (LightmapGI::*)() const>(&LightmapGI::get_camera_attributes), static_cast<void (LightmapGI::*)(const Ref<CameraAttributes> &)>(&LightmapGI::set_camera_attributes)>((new std::string("camera_attributes"))->c_str())
			.property<static_cast<LightmapGI::GenerateProbes (LightmapGI::*)() const>(&LightmapGI::get_generate_probes), static_cast<void (LightmapGI::*)(LightmapGI::GenerateProbes)>(&LightmapGI::set_generate_probes)>((new std::string("generate_probes_subdiv"))->c_str())
			.property<static_cast<Ref<LightmapGIData> (LightmapGI::*)() const>(&LightmapGI::get_light_data), static_cast<void (LightmapGI::*)(const Ref<LightmapGIData> &)>(&LightmapGI::set_light_data)>((new std::string("light_data"))->c_str());
	qjs::Value _BakeQuality = context->newObject();
	_BakeQuality[(new std::string("BAKE_QUALITY_LOW"))->c_str()] = LightmapGI::BakeQuality::BAKE_QUALITY_LOW;
	_BakeQuality[(new std::string("BAKE_QUALITY_MEDIUM"))->c_str()] = LightmapGI::BakeQuality::BAKE_QUALITY_MEDIUM;
	_BakeQuality[(new std::string("BAKE_QUALITY_HIGH"))->c_str()] = LightmapGI::BakeQuality::BAKE_QUALITY_HIGH;
	_BakeQuality[(new std::string("BAKE_QUALITY_ULTRA"))->c_str()] = LightmapGI::BakeQuality::BAKE_QUALITY_ULTRA;
	_module.add("BakeQuality", std::move(_BakeQuality));
	qjs::Value _GenerateProbes = context->newObject();
	_GenerateProbes[(new std::string("GENERATE_PROBES_DISABLED"))->c_str()] = LightmapGI::GenerateProbes::GENERATE_PROBES_DISABLED;
	_GenerateProbes[(new std::string("GENERATE_PROBES_SUBDIV_4"))->c_str()] = LightmapGI::GenerateProbes::GENERATE_PROBES_SUBDIV_4;
	_GenerateProbes[(new std::string("GENERATE_PROBES_SUBDIV_8"))->c_str()] = LightmapGI::GenerateProbes::GENERATE_PROBES_SUBDIV_8;
	_GenerateProbes[(new std::string("GENERATE_PROBES_SUBDIV_16"))->c_str()] = LightmapGI::GenerateProbes::GENERATE_PROBES_SUBDIV_16;
	_GenerateProbes[(new std::string("GENERATE_PROBES_SUBDIV_32"))->c_str()] = LightmapGI::GenerateProbes::GENERATE_PROBES_SUBDIV_32;
	_module.add("GenerateProbes", std::move(_GenerateProbes));
	qjs::Value _BakeError = context->newObject();
	_BakeError[(new std::string("BAKE_ERROR_OK"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_OK;
	_BakeError[(new std::string("BAKE_ERROR_NO_SCENE_ROOT"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_NO_SCENE_ROOT;
	_BakeError[(new std::string("BAKE_ERROR_FOREIGN_DATA"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_FOREIGN_DATA;
	_BakeError[(new std::string("BAKE_ERROR_NO_LIGHTMAPPER"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_NO_LIGHTMAPPER;
	_BakeError[(new std::string("BAKE_ERROR_NO_SAVE_PATH"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_NO_SAVE_PATH;
	_BakeError[(new std::string("BAKE_ERROR_NO_MESHES"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_NO_MESHES;
	_BakeError[(new std::string("BAKE_ERROR_MESHES_INVALID"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_MESHES_INVALID;
	_BakeError[(new std::string("BAKE_ERROR_CANT_CREATE_IMAGE"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_CANT_CREATE_IMAGE;
	_BakeError[(new std::string("BAKE_ERROR_USER_ABORTED"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_USER_ABORTED;
	_BakeError[(new std::string("BAKE_ERROR_TEXTURE_SIZE_TOO_SMALL"))->c_str()] = LightmapGI::BakeError::BAKE_ERROR_TEXTURE_SIZE_TOO_SMALL;
	_module.add("BakeError", std::move(_BakeError));
	qjs::Value _EnvironmentMode = context->newObject();
	_EnvironmentMode[(new std::string("ENVIRONMENT_MODE_DISABLED"))->c_str()] = LightmapGI::EnvironmentMode::ENVIRONMENT_MODE_DISABLED;
	_EnvironmentMode[(new std::string("ENVIRONMENT_MODE_SCENE"))->c_str()] = LightmapGI::EnvironmentMode::ENVIRONMENT_MODE_SCENE;
	_EnvironmentMode[(new std::string("ENVIRONMENT_MODE_CUSTOM_SKY"))->c_str()] = LightmapGI::EnvironmentMode::ENVIRONMENT_MODE_CUSTOM_SKY;
	_EnvironmentMode[(new std::string("ENVIRONMENT_MODE_CUSTOM_COLOR"))->c_str()] = LightmapGI::EnvironmentMode::ENVIRONMENT_MODE_CUSTOM_COLOR;
	_module.add("EnvironmentMode", std::move(_EnvironmentMode));
}