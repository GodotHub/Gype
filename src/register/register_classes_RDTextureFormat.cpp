#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/rendering_device.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_RDTextureFormat() {
	qjs::Context::Module &_module = _General;
	_module.class_<RDTextureFormat>("RDTextureFormat")
			.constructor<>()
			.property<&RDTextureFormat::get_format, &RDTextureFormat::set_format>("format")
			.property<&RDTextureFormat::get_width, &RDTextureFormat::set_width>("width")
			.property<&RDTextureFormat::get_height, &RDTextureFormat::set_height>("height")
			.property<&RDTextureFormat::get_depth, &RDTextureFormat::set_depth>("depth")
			.property<&RDTextureFormat::get_array_layers, &RDTextureFormat::set_array_layers>("array_layers")
			.property<&RDTextureFormat::get_mipmaps, &RDTextureFormat::set_mipmaps>("mipmaps")
			.property<&RDTextureFormat::get_texture_type, &RDTextureFormat::set_texture_type>("texture_type")
			.property<&RDTextureFormat::get_samples, &RDTextureFormat::set_samples>("samples")
			.property<&RDTextureFormat::get_usage_bits, &RDTextureFormat::set_usage_bits>("usage_bits")
			.fun<static_cast<void (RDTextureFormat::*)(RenderingDevice::DataFormat)>(&RDTextureFormat::add_shareable_format)>("add_shareable_format")
			.fun<static_cast<void (RDTextureFormat::*)(RenderingDevice::DataFormat)>(&RDTextureFormat::remove_shareable_format)>("remove_shareable_format");
}