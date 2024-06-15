#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Light3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<Light3D>("Light3D")
            .constructor<>()
            .base<VisualInstance3D>()
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("light_intensity_lumens")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("light_intensity_lux")
            .property<static_cast<double(Light3D::*)()const>(&Light3D::get_temperature),static_cast<void(Light3D::*)(double)>(&Light3D::set_temperature)>("light_temperature")
            .property<static_cast<Color(Light3D::*)()const>(&Light3D::get_color),static_cast<void(Light3D::*)(const Color &)>(&Light3D::set_color)>("light_color")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("light_energy")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("light_indirect_energy")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("light_volumetric_fog_energy")
            .property<static_cast<Ref<Texture2D>(Light3D::*)()const>(&Light3D::get_projector),static_cast<void(Light3D::*)(const Ref<Texture2D> &)>(&Light3D::set_projector)>("light_projector")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("light_size")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("light_angular_distance")
            .property<static_cast<bool(Light3D::*)()const>(&Light3D::is_negative),static_cast<void(Light3D::*)(bool)>(&Light3D::set_negative)>("light_negative")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("light_specular")
            .property<static_cast<Light3D::BakeMode(Light3D::*)()const>(&Light3D::get_bake_mode),static_cast<void(Light3D::*)(Light3D::BakeMode)>(&Light3D::set_bake_mode)>("light_bake_mode")
            .property<static_cast<uint32_t(Light3D::*)()const>(&Light3D::get_cull_mask),static_cast<void(Light3D::*)(uint32_t)>(&Light3D::set_cull_mask)>("light_cull_mask")
            .property<static_cast<bool(Light3D::*)()const>(&Light3D::has_shadow),static_cast<void(Light3D::*)(bool)>(&Light3D::set_shadow)>("shadow_enabled")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("shadow_bias")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("shadow_normal_bias")
            .property<static_cast<bool(Light3D::*)()const>(&Light3D::get_shadow_reverse_cull_face),static_cast<void(Light3D::*)(bool)>(&Light3D::set_shadow_reverse_cull_face)>("shadow_reverse_cull_face")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("shadow_transmittance_bias")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("shadow_opacity")
            .property<static_cast<double(Light3D::*)(Light3D::Param)const>(&Light3D::get_param),static_cast<void(Light3D::*)(Light3D::Param,double)>(&Light3D::set_param)>("shadow_blur")
            .property<static_cast<bool(Light3D::*)()const>(&Light3D::is_distance_fade_enabled),static_cast<void(Light3D::*)(bool)>(&Light3D::set_enable_distance_fade)>("distance_fade_enabled")
            .property<static_cast<double(Light3D::*)()const>(&Light3D::get_distance_fade_begin),static_cast<void(Light3D::*)(double)>(&Light3D::set_distance_fade_begin)>("distance_fade_begin")
            .property<static_cast<double(Light3D::*)()const>(&Light3D::get_distance_fade_shadow),static_cast<void(Light3D::*)(double)>(&Light3D::set_distance_fade_shadow)>("distance_fade_shadow")
            .property<static_cast<double(Light3D::*)()const>(&Light3D::get_distance_fade_length),static_cast<void(Light3D::*)(double)>(&Light3D::set_distance_fade_length)>("distance_fade_length")
            .property<static_cast<bool(Light3D::*)()const>(&Light3D::is_editor_only),static_cast<void(Light3D::*)(bool)>(&Light3D::set_editor_only)>("editor_only")
            .fun<static_cast<Color(Light3D::*)()const>(&Light3D::get_correlated_color)>("get_correlated_color")
;    qjs::Value _Param = context->newObject();
    _Param["PARAM_ENERGY"] = Light3D::Param::PARAM_ENERGY;
    _Param["PARAM_INDIRECT_ENERGY"] = Light3D::Param::PARAM_INDIRECT_ENERGY;
    _Param["PARAM_VOLUMETRIC_FOG_ENERGY"] = Light3D::Param::PARAM_VOLUMETRIC_FOG_ENERGY;
    _Param["PARAM_SPECULAR"] = Light3D::Param::PARAM_SPECULAR;
    _Param["PARAM_RANGE"] = Light3D::Param::PARAM_RANGE;
    _Param["PARAM_SIZE"] = Light3D::Param::PARAM_SIZE;
    _Param["PARAM_ATTENUATION"] = Light3D::Param::PARAM_ATTENUATION;
    _Param["PARAM_SPOT_ANGLE"] = Light3D::Param::PARAM_SPOT_ANGLE;
    _Param["PARAM_SPOT_ATTENUATION"] = Light3D::Param::PARAM_SPOT_ATTENUATION;
    _Param["PARAM_SHADOW_MAX_DISTANCE"] = Light3D::Param::PARAM_SHADOW_MAX_DISTANCE;
    _Param["PARAM_SHADOW_SPLIT_1_OFFSET"] = Light3D::Param::PARAM_SHADOW_SPLIT_1_OFFSET;
    _Param["PARAM_SHADOW_SPLIT_2_OFFSET"] = Light3D::Param::PARAM_SHADOW_SPLIT_2_OFFSET;
    _Param["PARAM_SHADOW_SPLIT_3_OFFSET"] = Light3D::Param::PARAM_SHADOW_SPLIT_3_OFFSET;
    _Param["PARAM_SHADOW_FADE_START"] = Light3D::Param::PARAM_SHADOW_FADE_START;
    _Param["PARAM_SHADOW_NORMAL_BIAS"] = Light3D::Param::PARAM_SHADOW_NORMAL_BIAS;
    _Param["PARAM_SHADOW_BIAS"] = Light3D::Param::PARAM_SHADOW_BIAS;
    _Param["PARAM_SHADOW_PANCAKE_SIZE"] = Light3D::Param::PARAM_SHADOW_PANCAKE_SIZE;
    _Param["PARAM_SHADOW_OPACITY"] = Light3D::Param::PARAM_SHADOW_OPACITY;
    _Param["PARAM_SHADOW_BLUR"] = Light3D::Param::PARAM_SHADOW_BLUR;
    _Param["PARAM_TRANSMITTANCE_BIAS"] = Light3D::Param::PARAM_TRANSMITTANCE_BIAS;
    _Param["PARAM_INTENSITY"] = Light3D::Param::PARAM_INTENSITY;
    _Param["PARAM_MAX"] = Light3D::Param::PARAM_MAX;
    _module.add("Param", std::move(_Param));
    qjs::Value _BakeMode = context->newObject();
    _BakeMode["BAKE_DISABLED"] = Light3D::BakeMode::BAKE_DISABLED;
    _BakeMode["BAKE_STATIC"] = Light3D::BakeMode::BAKE_STATIC;
    _BakeMode["BAKE_DYNAMIC"] = Light3D::BakeMode::BAKE_DYNAMIC;
    _module.add("BakeMode", std::move(_BakeMode));
}