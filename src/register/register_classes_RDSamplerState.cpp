#include <godot_cpp/classes/rd_sampler_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDSamplerState() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDSamplerState>("RDSamplerState")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<RenderingDevice::SamplerFilter(RDSamplerState::*)()const>(&RDSamplerState::get_mag_filter),static_cast<void(RDSamplerState::*)(RenderingDevice::SamplerFilter)>(&RDSamplerState::set_mag_filter)>("mag_filter")
            .property<static_cast<RenderingDevice::SamplerFilter(RDSamplerState::*)()const>(&RDSamplerState::get_min_filter),static_cast<void(RDSamplerState::*)(RenderingDevice::SamplerFilter)>(&RDSamplerState::set_min_filter)>("min_filter")
            .property<static_cast<RenderingDevice::SamplerFilter(RDSamplerState::*)()const>(&RDSamplerState::get_mip_filter),static_cast<void(RDSamplerState::*)(RenderingDevice::SamplerFilter)>(&RDSamplerState::set_mip_filter)>("mip_filter")
            .property<static_cast<RenderingDevice::SamplerRepeatMode(RDSamplerState::*)()const>(&RDSamplerState::get_repeat_u),static_cast<void(RDSamplerState::*)(RenderingDevice::SamplerRepeatMode)>(&RDSamplerState::set_repeat_u)>("repeat_u")
            .property<static_cast<RenderingDevice::SamplerRepeatMode(RDSamplerState::*)()const>(&RDSamplerState::get_repeat_v),static_cast<void(RDSamplerState::*)(RenderingDevice::SamplerRepeatMode)>(&RDSamplerState::set_repeat_v)>("repeat_v")
            .property<static_cast<RenderingDevice::SamplerRepeatMode(RDSamplerState::*)()const>(&RDSamplerState::get_repeat_w),static_cast<void(RDSamplerState::*)(RenderingDevice::SamplerRepeatMode)>(&RDSamplerState::set_repeat_w)>("repeat_w")
            .property<static_cast<double(RDSamplerState::*)()const>(&RDSamplerState::get_lod_bias),static_cast<void(RDSamplerState::*)(double)>(&RDSamplerState::set_lod_bias)>("lod_bias")
            .property<static_cast<bool(RDSamplerState::*)()const>(&RDSamplerState::get_use_anisotropy),static_cast<void(RDSamplerState::*)(bool)>(&RDSamplerState::set_use_anisotropy)>("use_anisotropy")
            .property<static_cast<double(RDSamplerState::*)()const>(&RDSamplerState::get_anisotropy_max),static_cast<void(RDSamplerState::*)(double)>(&RDSamplerState::set_anisotropy_max)>("anisotropy_max")
            .property<static_cast<bool(RDSamplerState::*)()const>(&RDSamplerState::get_enable_compare),static_cast<void(RDSamplerState::*)(bool)>(&RDSamplerState::set_enable_compare)>("enable_compare")
            .property<static_cast<RenderingDevice::CompareOperator(RDSamplerState::*)()const>(&RDSamplerState::get_compare_op),static_cast<void(RDSamplerState::*)(RenderingDevice::CompareOperator)>(&RDSamplerState::set_compare_op)>("compare_op")
            .property<static_cast<double(RDSamplerState::*)()const>(&RDSamplerState::get_min_lod),static_cast<void(RDSamplerState::*)(double)>(&RDSamplerState::set_min_lod)>("min_lod")
            .property<static_cast<double(RDSamplerState::*)()const>(&RDSamplerState::get_max_lod),static_cast<void(RDSamplerState::*)(double)>(&RDSamplerState::set_max_lod)>("max_lod")
            .property<static_cast<RenderingDevice::SamplerBorderColor(RDSamplerState::*)()const>(&RDSamplerState::get_border_color),static_cast<void(RDSamplerState::*)(RenderingDevice::SamplerBorderColor)>(&RDSamplerState::set_border_color)>("border_color")
            .property<static_cast<bool(RDSamplerState::*)()const>(&RDSamplerState::get_unnormalized_uvw),static_cast<void(RDSamplerState::*)(bool)>(&RDSamplerState::set_unnormalized_uvw)>("unnormalized_uvw")
;}