#include <godot_cpp/classes/rd_pipeline_color_blend_state.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/rd_pipeline_color_blend_state_attachment.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDPipelineColorBlendState() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDPipelineColorBlendState>("RDPipelineColorBlendState")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(RDPipelineColorBlendState::*)()const>(&RDPipelineColorBlendState::get_enable_logic_op),static_cast<void(RDPipelineColorBlendState::*)(bool)>(&RDPipelineColorBlendState::set_enable_logic_op)>("enable_logic_op")
            .property<static_cast<RenderingDevice::LogicOperation(RDPipelineColorBlendState::*)()const>(&RDPipelineColorBlendState::get_logic_op),static_cast<void(RDPipelineColorBlendState::*)(RenderingDevice::LogicOperation)>(&RDPipelineColorBlendState::set_logic_op)>("logic_op")
            .property<static_cast<Color(RDPipelineColorBlendState::*)()const>(&RDPipelineColorBlendState::get_blend_constant),static_cast<void(RDPipelineColorBlendState::*)(const Color &)>(&RDPipelineColorBlendState::set_blend_constant)>("blend_constant")
            .property<static_cast<TypedArray<RDPipelineColorBlendStateAttachment>(RDPipelineColorBlendState::*)()const>(&RDPipelineColorBlendState::get_attachments),static_cast<void(RDPipelineColorBlendState::*)(const TypedArray<RDPipelineColorBlendStateAttachment> &)>(&RDPipelineColorBlendState::set_attachments)>("attachments")
;}