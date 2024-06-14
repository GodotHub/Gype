#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDTextureView() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDTextureView>("RDTextureView")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<RenderingDevice::DataFormat (RDTextureView::*)() const>(&RDTextureView::get_format_override), static_cast<void (RDTextureView::*)(RenderingDevice::DataFormat)>(&RDTextureView::set_format_override)>((new std::string("format_override"))->c_str())
			.property<static_cast<RenderingDevice::TextureSwizzle (RDTextureView::*)() const>(&RDTextureView::get_swizzle_r), static_cast<void (RDTextureView::*)(RenderingDevice::TextureSwizzle)>(&RDTextureView::set_swizzle_r)>((new std::string("swizzle_r"))->c_str())
			.property<static_cast<RenderingDevice::TextureSwizzle (RDTextureView::*)() const>(&RDTextureView::get_swizzle_g), static_cast<void (RDTextureView::*)(RenderingDevice::TextureSwizzle)>(&RDTextureView::set_swizzle_g)>((new std::string("swizzle_g"))->c_str())
			.property<static_cast<RenderingDevice::TextureSwizzle (RDTextureView::*)() const>(&RDTextureView::get_swizzle_b), static_cast<void (RDTextureView::*)(RenderingDevice::TextureSwizzle)>(&RDTextureView::set_swizzle_b)>((new std::string("swizzle_b"))->c_str())
			.property<static_cast<RenderingDevice::TextureSwizzle (RDTextureView::*)() const>(&RDTextureView::get_swizzle_a), static_cast<void (RDTextureView::*)(RenderingDevice::TextureSwizzle)>(&RDTextureView::set_swizzle_a)>((new std::string("swizzle_a"))->c_str());
}