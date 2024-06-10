#include <godot_cpp/classes/rd_vertex_attribute.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDVertexAttribute() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDVertexAttribute>("RDVertexAttribute")
			.constructor<>()
			.property<&RDVertexAttribute::get_location, &RDVertexAttribute::set_location>("location")
			.property<&RDVertexAttribute::get_offset, &RDVertexAttribute::set_offset>("offset")
			.property<&RDVertexAttribute::get_format, &RDVertexAttribute::set_format>("format")
			.property<&RDVertexAttribute::get_stride, &RDVertexAttribute::set_stride>("stride")
			.property<&RDVertexAttribute::get_frequency, &RDVertexAttribute::set_frequency>("frequency");
}