
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Light3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Light3D>("Light3D")
			.constructor<>()
			.base<VisualInstance3D>()
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("light_intensity_lumens"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("light_intensity_lux"))->c_str())
			.property<static_cast<double (Light3D::*)() const>(&Light3D::get_temperature), static_cast<void (Light3D::*)(double)>(&Light3D::set_temperature)>((new std::string("light_temperature"))->c_str())
			.property<static_cast<Color (Light3D::*)() const>(&Light3D::get_color), static_cast<void (Light3D::*)(const Color &)>(&Light3D::set_color)>((new std::string("light_color"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("light_energy"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("light_indirect_energy"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("light_volumetric_fog_energy"))->c_str())
			.property<static_cast<Ref<Texture2D> (Light3D::*)() const>(&Light3D::get_projector), static_cast<void (Light3D::*)(const Ref<Texture2D> &)>(&Light3D::set_projector)>((new std::string("light_projector"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("light_size"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("light_angular_distance"))->c_str())
			.property<static_cast<bool (Light3D::*)() const>(&Light3D::is_negative), static_cast<void (Light3D::*)(bool)>(&Light3D::set_negative)>((new std::string("light_negative"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("light_specular"))->c_str())
			.property<static_cast<Light3D::BakeMode (Light3D::*)() const>(&Light3D::get_bake_mode), static_cast<void (Light3D::*)(Light3D::BakeMode)>(&Light3D::set_bake_mode)>((new std::string("light_bake_mode"))->c_str())
			.property<static_cast<uint32_t (Light3D::*)() const>(&Light3D::get_cull_mask), static_cast<void (Light3D::*)(uint32_t)>(&Light3D::set_cull_mask)>((new std::string("light_cull_mask"))->c_str())
			.property<static_cast<bool (Light3D::*)() const>(&Light3D::has_shadow), static_cast<void (Light3D::*)(bool)>(&Light3D::set_shadow)>((new std::string("shadow_enabled"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("shadow_bias"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("shadow_normal_bias"))->c_str())
			.property<static_cast<bool (Light3D::*)() const>(&Light3D::get_shadow_reverse_cull_face), static_cast<void (Light3D::*)(bool)>(&Light3D::set_shadow_reverse_cull_face)>((new std::string("shadow_reverse_cull_face"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("shadow_transmittance_bias"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("shadow_opacity"))->c_str())
			.property<static_cast<double (Light3D::*)(Light3D::Param) const>(&Light3D::get_param), static_cast<void (Light3D::*)(Light3D::Param, double)>(&Light3D::set_param)>((new std::string("shadow_blur"))->c_str())
			.property<static_cast<bool (Light3D::*)() const>(&Light3D::is_distance_fade_enabled), static_cast<void (Light3D::*)(bool)>(&Light3D::set_enable_distance_fade)>((new std::string("distance_fade_enabled"))->c_str())
			.property<static_cast<double (Light3D::*)() const>(&Light3D::get_distance_fade_begin), static_cast<void (Light3D::*)(double)>(&Light3D::set_distance_fade_begin)>((new std::string("distance_fade_begin"))->c_str())
			.property<static_cast<double (Light3D::*)() const>(&Light3D::get_distance_fade_shadow), static_cast<void (Light3D::*)(double)>(&Light3D::set_distance_fade_shadow)>((new std::string("distance_fade_shadow"))->c_str())
			.property<static_cast<double (Light3D::*)() const>(&Light3D::get_distance_fade_length), static_cast<void (Light3D::*)(double)>(&Light3D::set_distance_fade_length)>((new std::string("distance_fade_length"))->c_str())
			.property<static_cast<bool (Light3D::*)() const>(&Light3D::is_editor_only), static_cast<void (Light3D::*)(bool)>(&Light3D::set_editor_only)>((new std::string("editor_only"))->c_str())
			.fun<static_cast<Color (Light3D::*)() const>(&Light3D::get_correlated_color)>((new std::string("get_correlated_color"))->c_str());
	qjs::Value _Param = context->newObject();
	_Param[(new std::string("PARAM_ENERGY"))->c_str()] = Light3D::Param::PARAM_ENERGY;
	_Param[(new std::string("PARAM_INDIRECT_ENERGY"))->c_str()] = Light3D::Param::PARAM_INDIRECT_ENERGY;
	_Param[(new std::string("PARAM_VOLUMETRIC_FOG_ENERGY"))->c_str()] = Light3D::Param::PARAM_VOLUMETRIC_FOG_ENERGY;
	_Param[(new std::string("PARAM_SPECULAR"))->c_str()] = Light3D::Param::PARAM_SPECULAR;
	_Param[(new std::string("PARAM_RANGE"))->c_str()] = Light3D::Param::PARAM_RANGE;
	_Param[(new std::string("PARAM_SIZE"))->c_str()] = Light3D::Param::PARAM_SIZE;
	_Param[(new std::string("PARAM_ATTENUATION"))->c_str()] = Light3D::Param::PARAM_ATTENUATION;
	_Param[(new std::string("PARAM_SPOT_ANGLE"))->c_str()] = Light3D::Param::PARAM_SPOT_ANGLE;
	_Param[(new std::string("PARAM_SPOT_ATTENUATION"))->c_str()] = Light3D::Param::PARAM_SPOT_ATTENUATION;
	_Param[(new std::string("PARAM_SHADOW_MAX_DISTANCE"))->c_str()] = Light3D::Param::PARAM_SHADOW_MAX_DISTANCE;
	_Param[(new std::string("PARAM_SHADOW_SPLIT_1_OFFSET"))->c_str()] = Light3D::Param::PARAM_SHADOW_SPLIT_1_OFFSET;
	_Param[(new std::string("PARAM_SHADOW_SPLIT_2_OFFSET"))->c_str()] = Light3D::Param::PARAM_SHADOW_SPLIT_2_OFFSET;
	_Param[(new std::string("PARAM_SHADOW_SPLIT_3_OFFSET"))->c_str()] = Light3D::Param::PARAM_SHADOW_SPLIT_3_OFFSET;
	_Param[(new std::string("PARAM_SHADOW_FADE_START"))->c_str()] = Light3D::Param::PARAM_SHADOW_FADE_START;
	_Param[(new std::string("PARAM_SHADOW_NORMAL_BIAS"))->c_str()] = Light3D::Param::PARAM_SHADOW_NORMAL_BIAS;
	_Param[(new std::string("PARAM_SHADOW_BIAS"))->c_str()] = Light3D::Param::PARAM_SHADOW_BIAS;
	_Param[(new std::string("PARAM_SHADOW_PANCAKE_SIZE"))->c_str()] = Light3D::Param::PARAM_SHADOW_PANCAKE_SIZE;
	_Param[(new std::string("PARAM_SHADOW_OPACITY"))->c_str()] = Light3D::Param::PARAM_SHADOW_OPACITY;
	_Param[(new std::string("PARAM_SHADOW_BLUR"))->c_str()] = Light3D::Param::PARAM_SHADOW_BLUR;
	_Param[(new std::string("PARAM_TRANSMITTANCE_BIAS"))->c_str()] = Light3D::Param::PARAM_TRANSMITTANCE_BIAS;
	_Param[(new std::string("PARAM_INTENSITY"))->c_str()] = Light3D::Param::PARAM_INTENSITY;
	_Param[(new std::string("PARAM_MAX"))->c_str()] = Light3D::Param::PARAM_MAX;
	_module.add("Param", std::move(_Param));
	qjs::Value _BakeMode = context->newObject();
	_BakeMode[(new std::string("BAKE_DISABLED"))->c_str()] = Light3D::BakeMode::BAKE_DISABLED;
	_BakeMode[(new std::string("BAKE_STATIC"))->c_str()] = Light3D::BakeMode::BAKE_STATIC;
	_BakeMode[(new std::string("BAKE_DYNAMIC"))->c_str()] = Light3D::BakeMode::BAKE_DYNAMIC;
	_module.add("BakeMode", std::move(_BakeMode));
}