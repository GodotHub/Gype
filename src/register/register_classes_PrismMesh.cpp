#include <godot_cpp/classes/prism_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PrismMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PrismMesh>("PrismMesh")
			.constructor<>()
			.property<&PrismMesh::get_left_to_right, &PrismMesh::set_left_to_right>("left_to_right")
			.property<&PrismMesh::get_size, &PrismMesh::set_size>("size")
			.property<&PrismMesh::get_subdivide_width, &PrismMesh::set_subdivide_width>("subdivide_width")
			.property<&PrismMesh::get_subdivide_height, &PrismMesh::set_subdivide_height>("subdivide_height")
			.property<&PrismMesh::get_subdivide_depth, &PrismMesh::set_subdivide_depth>("subdivide_depth");
}