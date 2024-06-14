#include <godot_cpp/classes/rd_sampler_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDSamplerState() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDSamplerState>("RDSamplerState")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<RenderingDevice::SamplerFilter (RDSamplerState::*)() const>(&RDSamplerState::get_mag_filter), static_cast<void (RDSamplerState::*)(RenderingDevice::SamplerFilter)>(&RDSamplerState::set_mag_filter)>((new std::string("mag_filter"))->c_str())
			.property<static_cast<RenderingDevice::SamplerFilter (RDSamplerState::*)() const>(&RDSamplerState::get_min_filter), static_cast<void (RDSamplerState::*)(RenderingDevice::SamplerFilter)>(&RDSamplerState::set_min_filter)>((new std::string("min_filter"))->c_str())
			.property<static_cast<RenderingDevice::SamplerFilter (RDSamplerState::*)() const>(&RDSamplerState::get_mip_filter), static_cast<void (RDSamplerState::*)(RenderingDevice::SamplerFilter)>(&RDSamplerState::set_mip_filter)>((new std::string("mip_filter"))->c_str())
			.property<static_cast<RenderingDevice::SamplerRepeatMode (RDSamplerState::*)() const>(&RDSamplerState::get_repeat_u), static_cast<void (RDSamplerState::*)(RenderingDevice::SamplerRepeatMode)>(&RDSamplerState::set_repeat_u)>((new std::string("repeat_u"))->c_str())
			.property<static_cast<RenderingDevice::SamplerRepeatMode (RDSamplerState::*)() const>(&RDSamplerState::get_repeat_v), static_cast<void (RDSamplerState::*)(RenderingDevice::SamplerRepeatMode)>(&RDSamplerState::set_repeat_v)>((new std::string("repeat_v"))->c_str())
			.property<static_cast<RenderingDevice::SamplerRepeatMode (RDSamplerState::*)() const>(&RDSamplerState::get_repeat_w), static_cast<void (RDSamplerState::*)(RenderingDevice::SamplerRepeatMode)>(&RDSamplerState::set_repeat_w)>((new std::string("repeat_w"))->c_str())
			.property<static_cast<double (RDSamplerState::*)() const>(&RDSamplerState::get_lod_bias), static_cast<void (RDSamplerState::*)(double)>(&RDSamplerState::set_lod_bias)>((new std::string("lod_bias"))->c_str())
			.property<static_cast<bool (RDSamplerState::*)() const>(&RDSamplerState::get_use_anisotropy), static_cast<void (RDSamplerState::*)(bool)>(&RDSamplerState::set_use_anisotropy)>((new std::string("use_anisotropy"))->c_str())
			.property<static_cast<double (RDSamplerState::*)() const>(&RDSamplerState::get_anisotropy_max), static_cast<void (RDSamplerState::*)(double)>(&RDSamplerState::set_anisotropy_max)>((new std::string("anisotropy_max"))->c_str())
			.property<static_cast<bool (RDSamplerState::*)() const>(&RDSamplerState::get_enable_compare), static_cast<void (RDSamplerState::*)(bool)>(&RDSamplerState::set_enable_compare)>((new std::string("enable_compare"))->c_str())
			.property<static_cast<RenderingDevice::CompareOperator (RDSamplerState::*)() const>(&RDSamplerState::get_compare_op), static_cast<void (RDSamplerState::*)(RenderingDevice::CompareOperator)>(&RDSamplerState::set_compare_op)>((new std::string("compare_op"))->c_str())
			.property<static_cast<double (RDSamplerState::*)() const>(&RDSamplerState::get_min_lod), static_cast<void (RDSamplerState::*)(double)>(&RDSamplerState::set_min_lod)>((new std::string("min_lod"))->c_str())
			.property<static_cast<double (RDSamplerState::*)() const>(&RDSamplerState::get_max_lod), static_cast<void (RDSamplerState::*)(double)>(&RDSamplerState::set_max_lod)>((new std::string("max_lod"))->c_str())
			.property<static_cast<RenderingDevice::SamplerBorderColor (RDSamplerState::*)() const>(&RDSamplerState::get_border_color), static_cast<void (RDSamplerState::*)(RenderingDevice::SamplerBorderColor)>(&RDSamplerState::set_border_color)>((new std::string("border_color"))->c_str())
			.property<static_cast<bool (RDSamplerState::*)() const>(&RDSamplerState::get_unnormalized_uvw), static_cast<void (RDSamplerState::*)(bool)>(&RDSamplerState::set_unnormalized_uvw)>((new std::string("unnormalized_uvw"))->c_str());
}