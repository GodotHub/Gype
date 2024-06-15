#include <godot_cpp/classes/rd_vertex_attribute.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDVertexAttribute() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDVertexAttribute>("RDVertexAttribute")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<uint32_t(RDVertexAttribute::*)()const>(&RDVertexAttribute::get_location),static_cast<void(RDVertexAttribute::*)(uint32_t)>(&RDVertexAttribute::set_location)>("location")
            .property<static_cast<uint32_t(RDVertexAttribute::*)()const>(&RDVertexAttribute::get_offset),static_cast<void(RDVertexAttribute::*)(uint32_t)>(&RDVertexAttribute::set_offset)>("offset")
            .property<static_cast<RenderingDevice::DataFormat(RDVertexAttribute::*)()const>(&RDVertexAttribute::get_format),static_cast<void(RDVertexAttribute::*)(RenderingDevice::DataFormat)>(&RDVertexAttribute::set_format)>("format")
            .property<static_cast<uint32_t(RDVertexAttribute::*)()const>(&RDVertexAttribute::get_stride),static_cast<void(RDVertexAttribute::*)(uint32_t)>(&RDVertexAttribute::set_stride)>("stride")
            .property<static_cast<RenderingDevice::VertexFrequency(RDVertexAttribute::*)()const>(&RDVertexAttribute::get_frequency),static_cast<void(RDVertexAttribute::*)(RenderingDevice::VertexFrequency)>(&RDVertexAttribute::set_frequency)>("frequency")
;}