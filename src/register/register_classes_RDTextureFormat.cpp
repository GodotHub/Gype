#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDTextureFormat() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDTextureFormat>("RDTextureFormat")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<RenderingDevice::DataFormat(RDTextureFormat::*)()const>(&RDTextureFormat::get_format),static_cast<void(RDTextureFormat::*)(RenderingDevice::DataFormat)>(&RDTextureFormat::set_format)>("format")
            .property<static_cast<uint32_t(RDTextureFormat::*)()const>(&RDTextureFormat::get_width),static_cast<void(RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_width)>("width")
            .property<static_cast<uint32_t(RDTextureFormat::*)()const>(&RDTextureFormat::get_height),static_cast<void(RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_height)>("height")
            .property<static_cast<uint32_t(RDTextureFormat::*)()const>(&RDTextureFormat::get_depth),static_cast<void(RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_depth)>("depth")
            .property<static_cast<uint32_t(RDTextureFormat::*)()const>(&RDTextureFormat::get_array_layers),static_cast<void(RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_array_layers)>("array_layers")
            .property<static_cast<uint32_t(RDTextureFormat::*)()const>(&RDTextureFormat::get_mipmaps),static_cast<void(RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_mipmaps)>("mipmaps")
            .property<static_cast<RenderingDevice::TextureType(RDTextureFormat::*)()const>(&RDTextureFormat::get_texture_type),static_cast<void(RDTextureFormat::*)(RenderingDevice::TextureType)>(&RDTextureFormat::set_texture_type)>("texture_type")
            .property<static_cast<RenderingDevice::TextureSamples(RDTextureFormat::*)()const>(&RDTextureFormat::get_samples),static_cast<void(RDTextureFormat::*)(RenderingDevice::TextureSamples)>(&RDTextureFormat::set_samples)>("samples")
            .property<static_cast<BitField<RenderingDevice::TextureUsageBits>(RDTextureFormat::*)()const>(&RDTextureFormat::get_usage_bits),static_cast<void(RDTextureFormat::*)(BitField<RenderingDevice::TextureUsageBits>)>(&RDTextureFormat::set_usage_bits)>("usage_bits")
            .fun<static_cast<void(RDTextureFormat::*)(RenderingDevice::DataFormat)>(&RDTextureFormat::add_shareable_format)>("add_shareable_format")
            .fun<static_cast<void(RDTextureFormat::*)(RenderingDevice::DataFormat)>(&RDTextureFormat::remove_shareable_format)>("remove_shareable_format")
;}