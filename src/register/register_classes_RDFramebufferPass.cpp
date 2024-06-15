#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDFramebufferPass() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDFramebufferPass>("RDFramebufferPass")
            .constructor<>()
            .base<RefCounted>()
            .static_fun<&RDFramebufferPass::ATTACHMENT_UNUSED>("ATTACHMENT_UNUSED")
            .property<static_cast<PackedInt32Array(RDFramebufferPass::*)()const>(&RDFramebufferPass::get_color_attachments),static_cast<void(RDFramebufferPass::*)(const PackedInt32Array &)>(&RDFramebufferPass::set_color_attachments)>("color_attachments")
            .property<static_cast<PackedInt32Array(RDFramebufferPass::*)()const>(&RDFramebufferPass::get_input_attachments),static_cast<void(RDFramebufferPass::*)(const PackedInt32Array &)>(&RDFramebufferPass::set_input_attachments)>("input_attachments")
            .property<static_cast<PackedInt32Array(RDFramebufferPass::*)()const>(&RDFramebufferPass::get_resolve_attachments),static_cast<void(RDFramebufferPass::*)(const PackedInt32Array &)>(&RDFramebufferPass::set_resolve_attachments)>("resolve_attachments")
            .property<static_cast<PackedInt32Array(RDFramebufferPass::*)()const>(&RDFramebufferPass::get_preserve_attachments),static_cast<void(RDFramebufferPass::*)(const PackedInt32Array &)>(&RDFramebufferPass::set_preserve_attachments)>("preserve_attachments")
            .property<static_cast<int32_t(RDFramebufferPass::*)()const>(&RDFramebufferPass::get_depth_attachment),static_cast<void(RDFramebufferPass::*)(int32_t)>(&RDFramebufferPass::set_depth_attachment)>("depth_attachment")
;}