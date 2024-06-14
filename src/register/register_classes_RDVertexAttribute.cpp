
#include <godot_cpp/classes/rd_vertex_attribute.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDVertexAttribute() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDVertexAttribute>("RDVertexAttribute")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<uint32_t (RDVertexAttribute::*)() const>(&RDVertexAttribute::get_location), static_cast<void (RDVertexAttribute::*)(uint32_t)>(&RDVertexAttribute::set_location)>((new std::string("location"))->c_str())
			.property<static_cast<uint32_t (RDVertexAttribute::*)() const>(&RDVertexAttribute::get_offset), static_cast<void (RDVertexAttribute::*)(uint32_t)>(&RDVertexAttribute::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<RenderingDevice::DataFormat (RDVertexAttribute::*)() const>(&RDVertexAttribute::get_format), static_cast<void (RDVertexAttribute::*)(RenderingDevice::DataFormat)>(&RDVertexAttribute::set_format)>((new std::string("format"))->c_str())
			.property<static_cast<uint32_t (RDVertexAttribute::*)() const>(&RDVertexAttribute::get_stride), static_cast<void (RDVertexAttribute::*)(uint32_t)>(&RDVertexAttribute::set_stride)>((new std::string("stride"))->c_str())
			.property<static_cast<RenderingDevice::VertexFrequency (RDVertexAttribute::*)() const>(&RDVertexAttribute::get_frequency), static_cast<void (RDVertexAttribute::*)(RenderingDevice::VertexFrequency)>(&RDVertexAttribute::set_frequency)>((new std::string("frequency"))->c_str());
}