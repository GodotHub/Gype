
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDTextureFormat() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDTextureFormat>("RDTextureFormat")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<RenderingDevice::DataFormat (RDTextureFormat::*)() const>(&RDTextureFormat::get_format), static_cast<void (RDTextureFormat::*)(RenderingDevice::DataFormat)>(&RDTextureFormat::set_format)>((new std::string("format"))->c_str())
			.property<static_cast<uint32_t (RDTextureFormat::*)() const>(&RDTextureFormat::get_width), static_cast<void (RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_width)>((new std::string("width"))->c_str())
			.property<static_cast<uint32_t (RDTextureFormat::*)() const>(&RDTextureFormat::get_height), static_cast<void (RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_height)>((new std::string("height"))->c_str())
			.property<static_cast<uint32_t (RDTextureFormat::*)() const>(&RDTextureFormat::get_depth), static_cast<void (RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_depth)>((new std::string("depth"))->c_str())
			.property<static_cast<uint32_t (RDTextureFormat::*)() const>(&RDTextureFormat::get_array_layers), static_cast<void (RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_array_layers)>((new std::string("array_layers"))->c_str())
			.property<static_cast<uint32_t (RDTextureFormat::*)() const>(&RDTextureFormat::get_mipmaps), static_cast<void (RDTextureFormat::*)(uint32_t)>(&RDTextureFormat::set_mipmaps)>((new std::string("mipmaps"))->c_str())
			.property<static_cast<RenderingDevice::TextureType (RDTextureFormat::*)() const>(&RDTextureFormat::get_texture_type), static_cast<void (RDTextureFormat::*)(RenderingDevice::TextureType)>(&RDTextureFormat::set_texture_type)>((new std::string("texture_type"))->c_str())
			.property<static_cast<RenderingDevice::TextureSamples (RDTextureFormat::*)() const>(&RDTextureFormat::get_samples), static_cast<void (RDTextureFormat::*)(RenderingDevice::TextureSamples)>(&RDTextureFormat::set_samples)>((new std::string("samples"))->c_str())
			.property<static_cast<BitField<RenderingDevice::TextureUsageBits> (RDTextureFormat::*)() const>(&RDTextureFormat::get_usage_bits), static_cast<void (RDTextureFormat::*)(BitField<RenderingDevice::TextureUsageBits>)>(&RDTextureFormat::set_usage_bits)>((new std::string("usage_bits"))->c_str())
			.fun<static_cast<void (RDTextureFormat::*)(RenderingDevice::DataFormat)>(&RDTextureFormat::add_shareable_format)>((new std::string("add_shareable_format"))->c_str())
			.fun<static_cast<void (RDTextureFormat::*)(RenderingDevice::DataFormat)>(&RDTextureFormat::remove_shareable_format)>((new std::string("remove_shareable_format"))->c_str());
}