#include <godot_cpp/classes/sphere_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_SphereMesh() {
	qjs::Context::Module &_module = _General;
	_module.class_<SphereMesh>("SphereMesh")
			.constructor<>()
			.property<&SphereMesh::get_radius, &SphereMesh::set_radius>("radius")
			.property<&SphereMesh::get_height, &SphereMesh::set_height>("height")
			.property<&SphereMesh::get_radial_segments, &SphereMesh::set_radial_segments>("radial_segments")
			.property<&SphereMesh::get_rings, &SphereMesh::set_rings>("rings")
			.property<&SphereMesh::get_is_hemisphere, &SphereMesh::set_is_hemisphere>("is_hemisphere");
}