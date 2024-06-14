#include <godot_cpp/classes/rd_pipeline_color_blend_state.hpp>
#include <godot_cpp/classes/rd_pipeline_color_blend_state_attachment.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDPipelineColorBlendState() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDPipelineColorBlendState>("RDPipelineColorBlendState")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (RDPipelineColorBlendState::*)() const>(&RDPipelineColorBlendState::get_enable_logic_op), static_cast<void (RDPipelineColorBlendState::*)(bool)>(&RDPipelineColorBlendState::set_enable_logic_op)>((new std::string("enable_logic_op"))->c_str())
			.property<static_cast<RenderingDevice::LogicOperation (RDPipelineColorBlendState::*)() const>(&RDPipelineColorBlendState::get_logic_op), static_cast<void (RDPipelineColorBlendState::*)(RenderingDevice::LogicOperation)>(&RDPipelineColorBlendState::set_logic_op)>((new std::string("logic_op"))->c_str())
			.property<static_cast<Color (RDPipelineColorBlendState::*)() const>(&RDPipelineColorBlendState::get_blend_constant), static_cast<void (RDPipelineColorBlendState::*)(const Color &)>(&RDPipelineColorBlendState::set_blend_constant)>((new std::string("blend_constant"))->c_str())
			.property<static_cast<TypedArray<RDPipelineColorBlendStateAttachment> (RDPipelineColorBlendState::*)() const>(&RDPipelineColorBlendState::get_attachments), static_cast<void (RDPipelineColorBlendState::*)(const TypedArray<RDPipelineColorBlendStateAttachment> &)>(&RDPipelineColorBlendState::set_attachments)>((new std::string("attachments"))->c_str());
}