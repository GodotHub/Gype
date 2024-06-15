#include <godot_cpp/classes/rd_pipeline_depth_stencil_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDPipelineDepthStencilState() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDPipelineDepthStencilState>("RDPipelineDepthStencilState")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_enable_depth_test),static_cast<void(RDPipelineDepthStencilState::*)(bool)>(&RDPipelineDepthStencilState::set_enable_depth_test)>("enable_depth_test")
            .property<static_cast<bool(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_enable_depth_write),static_cast<void(RDPipelineDepthStencilState::*)(bool)>(&RDPipelineDepthStencilState::set_enable_depth_write)>("enable_depth_write")
            .property<static_cast<RenderingDevice::CompareOperator(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_depth_compare_operator),static_cast<void(RDPipelineDepthStencilState::*)(RenderingDevice::CompareOperator)>(&RDPipelineDepthStencilState::set_depth_compare_operator)>("depth_compare_operator")
            .property<static_cast<bool(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_enable_depth_range),static_cast<void(RDPipelineDepthStencilState::*)(bool)>(&RDPipelineDepthStencilState::set_enable_depth_range)>("enable_depth_range")
            .property<static_cast<double(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_depth_range_min),static_cast<void(RDPipelineDepthStencilState::*)(double)>(&RDPipelineDepthStencilState::set_depth_range_min)>("depth_range_min")
            .property<static_cast<double(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_depth_range_max),static_cast<void(RDPipelineDepthStencilState::*)(double)>(&RDPipelineDepthStencilState::set_depth_range_max)>("depth_range_max")
            .property<static_cast<bool(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_enable_stencil),static_cast<void(RDPipelineDepthStencilState::*)(bool)>(&RDPipelineDepthStencilState::set_enable_stencil)>("enable_stencil")
            .property<static_cast<RenderingDevice::StencilOperation(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_front_op_fail),static_cast<void(RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_front_op_fail)>("front_op_fail")
            .property<static_cast<RenderingDevice::StencilOperation(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_front_op_pass),static_cast<void(RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_front_op_pass)>("front_op_pass")
            .property<static_cast<RenderingDevice::StencilOperation(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_front_op_depth_fail),static_cast<void(RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_front_op_depth_fail)>("front_op_depth_fail")
            .property<static_cast<RenderingDevice::CompareOperator(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_front_op_compare),static_cast<void(RDPipelineDepthStencilState::*)(RenderingDevice::CompareOperator)>(&RDPipelineDepthStencilState::set_front_op_compare)>("front_op_compare")
            .property<static_cast<uint32_t(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_front_op_compare_mask),static_cast<void(RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_front_op_compare_mask)>("front_op_compare_mask")
            .property<static_cast<uint32_t(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_front_op_write_mask),static_cast<void(RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_front_op_write_mask)>("front_op_write_mask")
            .property<static_cast<uint32_t(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_front_op_reference),static_cast<void(RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_front_op_reference)>("front_op_reference")
            .property<static_cast<RenderingDevice::StencilOperation(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_back_op_fail),static_cast<void(RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_back_op_fail)>("back_op_fail")
            .property<static_cast<RenderingDevice::StencilOperation(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_back_op_pass),static_cast<void(RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_back_op_pass)>("back_op_pass")
            .property<static_cast<RenderingDevice::StencilOperation(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_back_op_depth_fail),static_cast<void(RDPipelineDepthStencilState::*)(RenderingDevice::StencilOperation)>(&RDPipelineDepthStencilState::set_back_op_depth_fail)>("back_op_depth_fail")
            .property<static_cast<RenderingDevice::CompareOperator(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_back_op_compare),static_cast<void(RDPipelineDepthStencilState::*)(RenderingDevice::CompareOperator)>(&RDPipelineDepthStencilState::set_back_op_compare)>("back_op_compare")
            .property<static_cast<uint32_t(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_back_op_compare_mask),static_cast<void(RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_back_op_compare_mask)>("back_op_compare_mask")
            .property<static_cast<uint32_t(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_back_op_write_mask),static_cast<void(RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_back_op_write_mask)>("back_op_write_mask")
            .property<static_cast<uint32_t(RDPipelineDepthStencilState::*)()const>(&RDPipelineDepthStencilState::get_back_op_reference),static_cast<void(RDPipelineDepthStencilState::*)(uint32_t)>(&RDPipelineDepthStencilState::set_back_op_reference)>("back_op_reference")
;}