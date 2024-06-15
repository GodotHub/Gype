#include <godot_cpp/classes/lightmap_gi.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_LightmapGI() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<LightmapGI>("LightmapGI")
            .constructor<>()
            .base<VisualInstance3D>()
            .property<static_cast<LightmapGI::BakeQuality(LightmapGI::*)()const>(&LightmapGI::get_bake_quality),static_cast<void(LightmapGI::*)(LightmapGI::BakeQuality)>(&LightmapGI::set_bake_quality)>("quality")
            .property<static_cast<int32_t(LightmapGI::*)()const>(&LightmapGI::get_bounces),static_cast<void(LightmapGI::*)(int32_t)>(&LightmapGI::set_bounces)>("bounces")
            .property<static_cast<double(LightmapGI::*)()const>(&LightmapGI::get_bounce_indirect_energy),static_cast<void(LightmapGI::*)(double)>(&LightmapGI::set_bounce_indirect_energy)>("bounce_indirect_energy")
            .property<static_cast<bool(LightmapGI::*)()const>(&LightmapGI::is_directional),static_cast<void(LightmapGI::*)(bool)>(&LightmapGI::set_directional)>("directional")
            .property<static_cast<bool(LightmapGI::*)()const>(&LightmapGI::is_using_texture_for_bounces),static_cast<void(LightmapGI::*)(bool)>(&LightmapGI::set_use_texture_for_bounces)>("use_texture_for_bounces")
            .property<static_cast<bool(LightmapGI::*)()const>(&LightmapGI::is_interior),static_cast<void(LightmapGI::*)(bool)>(&LightmapGI::set_interior)>("interior")
            .property<static_cast<bool(LightmapGI::*)()const>(&LightmapGI::is_using_denoiser),static_cast<void(LightmapGI::*)(bool)>(&LightmapGI::set_use_denoiser)>("use_denoiser")
            .property<static_cast<double(LightmapGI::*)()const>(&LightmapGI::get_denoiser_strength),static_cast<void(LightmapGI::*)(double)>(&LightmapGI::set_denoiser_strength)>("denoiser_strength")
            .property<static_cast<int32_t(LightmapGI::*)()const>(&LightmapGI::get_denoiser_range),static_cast<void(LightmapGI::*)(int32_t)>(&LightmapGI::set_denoiser_range)>("denoiser_range")
            .property<static_cast<double(LightmapGI::*)()const>(&LightmapGI::get_bias),static_cast<void(LightmapGI::*)(double)>(&LightmapGI::set_bias)>("bias")
            .property<static_cast<double(LightmapGI::*)()const>(&LightmapGI::get_texel_scale),static_cast<void(LightmapGI::*)(double)>(&LightmapGI::set_texel_scale)>("texel_scale")
            .property<static_cast<int32_t(LightmapGI::*)()const>(&LightmapGI::get_max_texture_size),static_cast<void(LightmapGI::*)(int32_t)>(&LightmapGI::set_max_texture_size)>("max_texture_size")
            .property<static_cast<LightmapGI::EnvironmentMode(LightmapGI::*)()const>(&LightmapGI::get_environment_mode),static_cast<void(LightmapGI::*)(LightmapGI::EnvironmentMode)>(&LightmapGI::set_environment_mode)>("environment_mode")
            .property<static_cast<Ref<Sky>(LightmapGI::*)()const>(&LightmapGI::get_environment_custom_sky),static_cast<void(LightmapGI::*)(const Ref<Sky> &)>(&LightmapGI::set_environment_custom_sky)>("environment_custom_sky")
            .property<static_cast<Color(LightmapGI::*)()const>(&LightmapGI::get_environment_custom_color),static_cast<void(LightmapGI::*)(const Color &)>(&LightmapGI::set_environment_custom_color)>("environment_custom_color")
            .property<static_cast<double(LightmapGI::*)()const>(&LightmapGI::get_environment_custom_energy),static_cast<void(LightmapGI::*)(double)>(&LightmapGI::set_environment_custom_energy)>("environment_custom_energy")
            .property<static_cast<Ref<CameraAttributes>(LightmapGI::*)()const>(&LightmapGI::get_camera_attributes),static_cast<void(LightmapGI::*)(const Ref<CameraAttributes> &)>(&LightmapGI::set_camera_attributes)>("camera_attributes")
            .property<static_cast<LightmapGI::GenerateProbes(LightmapGI::*)()const>(&LightmapGI::get_generate_probes),static_cast<void(LightmapGI::*)(LightmapGI::GenerateProbes)>(&LightmapGI::set_generate_probes)>("generate_probes_subdiv")
            .property<static_cast<Ref<LightmapGIData>(LightmapGI::*)()const>(&LightmapGI::get_light_data),static_cast<void(LightmapGI::*)(const Ref<LightmapGIData> &)>(&LightmapGI::set_light_data)>("light_data")
;    qjs::Value _BakeQuality = context->newObject();
    _BakeQuality["BAKE_QUALITY_LOW"] = LightmapGI::BakeQuality::BAKE_QUALITY_LOW;
    _BakeQuality["BAKE_QUALITY_MEDIUM"] = LightmapGI::BakeQuality::BAKE_QUALITY_MEDIUM;
    _BakeQuality["BAKE_QUALITY_HIGH"] = LightmapGI::BakeQuality::BAKE_QUALITY_HIGH;
    _BakeQuality["BAKE_QUALITY_ULTRA"] = LightmapGI::BakeQuality::BAKE_QUALITY_ULTRA;
    _module.add("BakeQuality", std::move(_BakeQuality));
    qjs::Value _GenerateProbes = context->newObject();
    _GenerateProbes["GENERATE_PROBES_DISABLED"] = LightmapGI::GenerateProbes::GENERATE_PROBES_DISABLED;
    _GenerateProbes["GENERATE_PROBES_SUBDIV_4"] = LightmapGI::GenerateProbes::GENERATE_PROBES_SUBDIV_4;
    _GenerateProbes["GENERATE_PROBES_SUBDIV_8"] = LightmapGI::GenerateProbes::GENERATE_PROBES_SUBDIV_8;
    _GenerateProbes["GENERATE_PROBES_SUBDIV_16"] = LightmapGI::GenerateProbes::GENERATE_PROBES_SUBDIV_16;
    _GenerateProbes["GENERATE_PROBES_SUBDIV_32"] = LightmapGI::GenerateProbes::GENERATE_PROBES_SUBDIV_32;
    _module.add("GenerateProbes", std::move(_GenerateProbes));
    qjs::Value _BakeError = context->newObject();
    _BakeError["BAKE_ERROR_OK"] = LightmapGI::BakeError::BAKE_ERROR_OK;
    _BakeError["BAKE_ERROR_NO_SCENE_ROOT"] = LightmapGI::BakeError::BAKE_ERROR_NO_SCENE_ROOT;
    _BakeError["BAKE_ERROR_FOREIGN_DATA"] = LightmapGI::BakeError::BAKE_ERROR_FOREIGN_DATA;
    _BakeError["BAKE_ERROR_NO_LIGHTMAPPER"] = LightmapGI::BakeError::BAKE_ERROR_NO_LIGHTMAPPER;
    _BakeError["BAKE_ERROR_NO_SAVE_PATH"] = LightmapGI::BakeError::BAKE_ERROR_NO_SAVE_PATH;
    _BakeError["BAKE_ERROR_NO_MESHES"] = LightmapGI::BakeError::BAKE_ERROR_NO_MESHES;
    _BakeError["BAKE_ERROR_MESHES_INVALID"] = LightmapGI::BakeError::BAKE_ERROR_MESHES_INVALID;
    _BakeError["BAKE_ERROR_CANT_CREATE_IMAGE"] = LightmapGI::BakeError::BAKE_ERROR_CANT_CREATE_IMAGE;
    _BakeError["BAKE_ERROR_USER_ABORTED"] = LightmapGI::BakeError::BAKE_ERROR_USER_ABORTED;
    _BakeError["BAKE_ERROR_TEXTURE_SIZE_TOO_SMALL"] = LightmapGI::BakeError::BAKE_ERROR_TEXTURE_SIZE_TOO_SMALL;
    _module.add("BakeError", std::move(_BakeError));
    qjs::Value _EnvironmentMode = context->newObject();
    _EnvironmentMode["ENVIRONMENT_MODE_DISABLED"] = LightmapGI::EnvironmentMode::ENVIRONMENT_MODE_DISABLED;
    _EnvironmentMode["ENVIRONMENT_MODE_SCENE"] = LightmapGI::EnvironmentMode::ENVIRONMENT_MODE_SCENE;
    _EnvironmentMode["ENVIRONMENT_MODE_CUSTOM_SKY"] = LightmapGI::EnvironmentMode::ENVIRONMENT_MODE_CUSTOM_SKY;
    _EnvironmentMode["ENVIRONMENT_MODE_CUSTOM_COLOR"] = LightmapGI::EnvironmentMode::ENVIRONMENT_MODE_CUSTOM_COLOR;
    _module.add("EnvironmentMode", std::move(_EnvironmentMode));
}