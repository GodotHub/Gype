
#include <godot_cpp/classes/rd_pipeline_depth_stencil_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDPipelineDepthStencilState() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDPipelineDepthStencilState>("RDPipelineDepthStencilState")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_enable_depth_test), static_cast<void (RDPipelineDepthStencilState::*)(bool)>(&RDPipelineDepthStencilState::set_enable_depth_test)>((new std::string("enable_depth_test"))->c_str())
			.property<static_cast<bool (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_enable_depth_write), static_cast<void (RDPipelineDepthStencilState::*)(bool)>(&RDPipelineDepthStencilState::set_enable_depth_write)>((new std::string("enable_depth_write"))->c_str())
			.property<static_cast<RenderingDevice::CompareOperator (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_depth_compare_operator), static_cast<void (RDPipelineDepthStencilState::*)(RenderingDevice::CompareOperator)>(&RDPipelineDepthStencilState::set_depth_compare_operator)>((new std::string("depth_compare_operator"))->c_str())
			.property<static_cast<bool (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_enable_depth_range), static_cast<void (RDPipelineDepthStencilState::*)(bool)>(&RDPipelineDepthStencilState::set_enable_depth_range)>((new std::string("enable_depth_range"))->c_str())
			.property<static_cast<double (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_depth_range_min), static_cast<void (RDPipelineDepthStencilState::*)(double)>(&RDPipelineDepthStencilState::set_depth_range_min)>((new std::string("depth_range_min"))->c_str())
			.property<static_cast<double (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_depth_range_max), static_cast<void (RDPipelineDepthStencilState::*)(double)>(&RDPipelineDepthStencilState::set_depth_range_max)>((new std::string("depth_range_max"))->c_str())
			.property<static_cast<bool (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_enable_stencil), static_cast<void (RDPipelineDepthStencilState::*)(bool)>(&RDPipelineDepthStencilState::set_enable_stencil)>((new std::string("enable_stencil"))->c_str())
			.property<static_cast<RenderingDevice::StencilOperation (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_front_op_fail), static_cast<void (RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_front_op_fail)>((new std::string("front_op_fail"))->c_str())
			.property<static_cast<RenderingDevice::StencilOperation (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_front_op_pass), static_cast<void (RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_front_op_pass)>((new std::string("front_op_pass"))->c_str())
			.property<static_cast<RenderingDevice::StencilOperation (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_front_op_depth_fail), static_cast<void (RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_front_op_depth_fail)>((new std::string("front_op_depth_fail"))->c_str())
			.property<static_cast<RenderingDevice::CompareOperator (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_front_op_compare), static_cast<void (RDPipelineDepthStencilState::*)(RenderingDevice::CompareOperator)>(&RDPipelineDepthStencilState::set_front_op_compare)>((new std::string("front_op_compare"))->c_str())
			.property<static_cast<uint32_t (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_front_op_compare_mask), static_cast<void (RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_front_op_compare_mask)>((new std::string("front_op_compare_mask"))->c_str())
			.property<static_cast<uint32_t (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_front_op_write_mask), static_cast<void (RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_front_op_write_mask)>((new std::string("front_op_write_mask"))->c_str())
			.property<static_cast<uint32_t (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_front_op_reference), static_cast<void (RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_front_op_reference)>((new std::string("front_op_reference"))->c_str())
			.property<static_cast<RenderingDevice::StencilOperation (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_back_op_fail), static_cast<void (RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_back_op_fail)>((new std::string("back_op_fail"))->c_str())
			.property<static_cast<RenderingDevice::StencilOperation (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_back_op_pass), static_cast<void (RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_back_op_pass)>((new std::string("back_op_pass"))->c_str())
			.property<static_cast<RenderingDevice::StencilOperation (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_back_op_depth_fail), static_cast<void (RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_back_op_depth_fail)>((new std::string("back_op_depth_fail"))->c_str())
			.property<static_cast<RenderingDevice::CompareOperator (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_back_op_compare), static_cast<void (RDPipelineDepthStencilState::*)(RenderingDevice::CompareOperator)>(&RDPipelineDepthStencilState::set_back_op_compare)>((new std::string("back_op_compare"))->c_str())
			.property<static_cast<uint32_t (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_back_op_compare_mask), static_cast<void (RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_back_op_compare_mask)>((new std::string("back_op_compare_mask"))->c_str())
			.property<static_cast<uint32_t (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_back_op_write_mask), static_cast<void (RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_back_op_write_mask)>((new std::string("back_op_write_mask"))->c_str())
			.property<static_cast<uint32_t (RDPipelineDepthStencilState::*)() const>(&RDPipelineDepthStencilState::get_back_op_reference), static_cast<void (RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_back_op_reference)>((new std::string("back_op_reference"))->c_str());
}