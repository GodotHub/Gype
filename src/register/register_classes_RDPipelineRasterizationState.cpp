#include <godot_cpp/classes/rd_pipeline_rasterization_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDPipelineRasterizationState() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDPipelineRasterizationState>("RDPipelineRasterizationState")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_enable_depth_clamp),static_cast<void(RDPipelineRasterizationState::*)(bool)>(&RDPipelineRasterizationState::set_enable_depth_clamp)>("enable_depth_clamp")
            .property<static_cast<bool(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_discard_primitives),static_cast<void(RDPipelineRasterizationState::*)(bool)>(&RDPipelineRasterizationState::set_discard_primitives)>("discard_primitives")
            .property<static_cast<bool(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_wireframe),static_cast<void(RDPipelineRasterizationState::*)(bool)>(&RDPipelineRasterizationState::set_wireframe)>("wireframe")
            .property<static_cast<RenderingDevice::PolygonCullMode(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_cull_mode),static_cast<void(RDPipelineRasterizationState::*)(RenderingDevice::PolygonCullMode)>(&RDPipelineRasterizationState::set_cull_mode)>("cull_mode")
            .property<static_cast<RenderingDevice::PolygonFrontFace(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_front_face),static_cast<void(RDPipelineRasterizationState::*)(RenderingDevice::PolygonFrontFace)>(&RDPipelineRasterizationState::set_front_face)>("front_face")
            .property<static_cast<bool(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_depth_bias_enabled),static_cast<void(RDPipelineRasterizationState::*)(bool)>(&RDPipelineRasterizationState::set_depth_bias_enabled)>("depth_bias_enabled")
            .property<static_cast<double(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_depth_bias_constant_factor),static_cast<void(RDPipelineRasterizationState::*)(double)>(&RDPipelineRasterizationState::set_depth_bias_constant_factor)>("depth_bias_constant_factor")
            .property<static_cast<double(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_depth_bias_clamp),static_cast<void(RDPipelineRasterizationState::*)(double)>(&RDPipelineRasterizationState::set_depth_bias_clamp)>("depth_bias_clamp")
            .property<static_cast<double(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_depth_bias_slope_factor),static_cast<void(RDPipelineRasterizationState::*)(double)>(&RDPipelineRasterizationState::set_depth_bias_slope_factor)>("depth_bias_slope_factor")
            .property<static_cast<double(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_line_width),static_cast<void(RDPipelineRasterizationState::*)(double)>(&RDPipelineRasterizationState::set_line_width)>("line_width")
            .property<static_cast<uint32_t(RDPipelineRasterizationState::*)()const>(&RDPipelineRasterizationState::get_patch_control_points),static_cast<void(RDPipelineRasterizationState::*)(uint32_t)>(&RDPipelineRasterizationState::set_patch_control_points)>("patch_control_points")
;}