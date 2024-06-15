#include <godot_cpp/classes/rd_attachment_format.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDAttachmentFormat() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDAttachmentFormat>("RDAttachmentFormat")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<RenderingDevice::DataFormat(RDAttachmentFormat::*)()const>(&RDAttachmentFormat::get_format),static_cast<void(RDAttachmentFormat::*)(RenderingDevice::DataFormat)>(&RDAttachmentFormat::set_format)>("format")
            .property<static_cast<RenderingDevice::TextureSamples(RDAttachmentFormat::*)()const>(&RDAttachmentFormat::get_samples),static_cast<void(RDAttachmentFormat::*)(RenderingDevice::TextureSamples)>(&RDAttachmentFormat::set_samples)>("samples")
            .property<static_cast<uint32_t(RDAttachmentFormat::*)()const>(&RDAttachmentFormat::get_usage_flags),static_cast<void(RDAttachmentFormat::*)(uint32_t)>(&RDAttachmentFormat::set_usage_flags)>("usage_flags")
;}