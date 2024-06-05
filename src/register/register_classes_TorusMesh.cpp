#include <godot_cpp/classes/torus_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_TorusMesh() {
	qjs::Context::Module &_module = _General;
	_module.class_<TorusMesh>("TorusMesh")
			.constructor<>()
			.property<&TorusMesh::get_inner_radius, &TorusMesh::set_inner_radius>("inner_radius")
			.property<&TorusMesh::get_outer_radius, &TorusMesh::set_outer_radius>("outer_radius")
			.property<&TorusMesh::get_rings, &TorusMesh::set_rings>("rings")
			.property<&TorusMesh::get_ring_segments, &TorusMesh::set_ring_segments>("ring_segments");
}