#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/tube_trail_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TubeTrailMesh() {
	qjs::Context::Module &_module = _General;
	_module.class_<TubeTrailMesh>("TubeTrailMesh")
			.constructor<>()
			.property<&TubeTrailMesh::get_radius, &TubeTrailMesh::set_radius>("radius")
			.property<&TubeTrailMesh::get_radial_steps, &TubeTrailMesh::set_radial_steps>("radial_steps")
			.property<&TubeTrailMesh::get_sections, &TubeTrailMesh::set_sections>("sections")
			.property<&TubeTrailMesh::get_section_length, &TubeTrailMesh::set_section_length>("section_length")
			.property<&TubeTrailMesh::get_section_rings, &TubeTrailMesh::set_section_rings>("section_rings")
			.property<&TubeTrailMesh::is_cap_top, &TubeTrailMesh::set_cap_top>("cap_top")
			.property<&TubeTrailMesh::is_cap_bottom, &TubeTrailMesh::set_cap_bottom>("cap_bottom")
			.property<&TubeTrailMesh::get_curve, &TubeTrailMesh::set_curve>("curve");
}