#include <godot_cpp/classes/rd_pipeline_color_blend_state_attachment.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDPipelineColorBlendStateAttachment() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDPipelineColorBlendStateAttachment>("RDPipelineColorBlendStateAttachment")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_enable_blend),static_cast<void(RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_enable_blend)>("enable_blend")
            .property<static_cast<RenderingDevice::BlendFactor(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_src_color_blend_factor),static_cast<void(RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendFactor)>(&RDPipelineColorBlendStateAttachment::set_src_color_blend_factor)>("src_color_blend_factor")
            .property<static_cast<RenderingDevice::BlendFactor(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_dst_color_blend_factor),static_cast<void(RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendFactor)>(&RDPipelineColorBlendStateAttachment::set_dst_color_blend_factor)>("dst_color_blend_factor")
            .property<static_cast<RenderingDevice::BlendOperation(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_color_blend_op),static_cast<void(RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendOperation)>(&RDPipelineColorBlendStateAttachment::set_color_blend_op)>("color_blend_op")
            .property<static_cast<RenderingDevice::BlendFactor(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_src_alpha_blend_factor),static_cast<void(RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendFactor)>(&RDPipelineColorBlendStateAttachment::set_src_alpha_blend_factor)>("src_alpha_blend_factor")
            .property<static_cast<RenderingDevice::BlendFactor(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_dst_alpha_blend_factor),static_cast<void(RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendFactor)>(&RDPipelineColorBlendStateAttachment::set_dst_alpha_blend_factor)>("dst_alpha_blend_factor")
            .property<static_cast<RenderingDevice::BlendOperation(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_alpha_blend_op),static_cast<void(RDPipelineColorBlendStateAttachment::*)(RenderingDevice::BlendOperation)>(&RDPipelineColorBlendStateAttachment::set_alpha_blend_op)>("alpha_blend_op")
            .property<static_cast<bool(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_write_r),static_cast<void(RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_write_r)>("write_r")
            .property<static_cast<bool(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_write_g),static_cast<void(RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_write_g)>("write_g")
            .property<static_cast<bool(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_write_b),static_cast<void(RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_write_b)>("write_b")
            .property<static_cast<bool(RDPipelineColorBlendStateAttachment::*)()const>(&RDPipelineColorBlendStateAttachment::get_write_a),static_cast<void(RDPipelineColorBlendStateAttachment::*)(bool)>(&RDPipelineColorBlendStateAttachment::set_write_a)>("write_a")
            .fun<static_cast<void(RDPipelineColorBlendStateAttachment::*)()>(&RDPipelineColorBlendStateAttachment::set_as_mix)>("set_as_mix")
;}