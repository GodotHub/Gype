#include <godot_cpp/classes/rd_pipeline_color_blend_state_attachment.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDPipelineColorBlendStateAttachment() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDPipelineColorBlendStateAttachment>("RDPipelineColorBlendStateAttachment")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_enable_blend), static_cast<void (RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_enable_blend)>((new std::string("enable_blend"))->c_str())
			.property<static_cast<RenderingDevice::BlendFactor (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_src_color_blend_factor), static_cast<void (RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendFactor)>(&RDPipelineColorBlendStateAttachment::set_src_color_blend_factor)>((new std::string("src_color_blend_factor"))->c_str())
			.property<static_cast<RenderingDevice::BlendFactor (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_dst_color_blend_factor), static_cast<void (RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendFactor)>(&RDPipelineColorBlendStateAttachment::set_dst_color_blend_factor)>((new std::string("dst_color_blend_factor"))->c_str())
			.property<static_cast<RenderingDevice::BlendOperation (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_color_blend_op), static_cast<void (RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendOperation)>(&RDPipelineColorBlendStateAttachment::set_color_blend_op)>((new std::string("color_blend_op"))->c_str())
			.property<static_cast<RenderingDevice::BlendFactor (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_src_alpha_blend_factor), static_cast<void (RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendFactor)>(&RDPipelineColorBlendStateAttachment::set_src_alpha_blend_factor)>((new std::string("src_alpha_blend_factor"))->c_str())
			.property<static_cast<RenderingDevice::BlendFactor (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_dst_alpha_blend_factor), static_cast<void (RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendFactor)>(&RDPipelineColorBlendStateAttachment::set_dst_alpha_blend_factor)>((new std::string("dst_alpha_blend_factor"))->c_str())
			.property<static_cast<RenderingDevice::BlendOperation (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_alpha_blend_op), static_cast<void (RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendOperation)>(&RDPipelineColorBlendStateAttachment::set_alpha_blend_op)>((new std::string("alpha_blend_op"))->c_str())
			.property<static_cast<bool (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_write_r), static_cast<void (RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_write_r)>((new std::string("write_r"))->c_str())
			.property<static_cast<bool (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_write_g), static_cast<void (RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_write_g)>((new std::string("write_g"))->c_str())
			.property<static_cast<bool (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_write_b), static_cast<void (RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_write_b)>((new std::string("write_b"))->c_str())
			.property<static_cast<bool (RDPipelineColorBlendStateAttachment::*)() const>(&RDPipelineColorBlendStateAttachment::get_write_a), static_cast<void (RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_write_a)>((new std::string("write_a"))->c_str())
			.fun<static_cast<void (RDPipelineColorBlendStateAttachment::*)()>(&RDPipelineColorBlendStateAttachment::set_as_mix)>((new std::string("set_as_mix"))->c_str());
}