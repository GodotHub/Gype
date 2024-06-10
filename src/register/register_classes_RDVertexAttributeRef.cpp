#include "register/register_classes.h"
#include <godot_cpp/classes/rd_vertex_attribute.hpp>

using namespace godot;

void register_classes_RDVertexAttributeRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDVertexAttribute>>("RDVertexAttributeRef").constructor<RDVertexAttribute *>();
}