#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/ribbon_trail_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RibbonTrailMesh() {
	qjs::Context::Module &_module = _General;
	_module.class_<RibbonTrailMesh>("RibbonTrailMesh")
			.constructor<>()
			.property<&RibbonTrailMesh::get_shape, &RibbonTrailMesh::set_shape>("shape")
			.property<&RibbonTrailMesh::get_size, &RibbonTrailMesh::set_size>("size")
			.property<&RibbonTrailMesh::get_sections, &RibbonTrailMesh::set_sections>("sections")
			.property<&RibbonTrailMesh::get_section_length, &RibbonTrailMesh::set_section_length>("section_length")
			.property<&RibbonTrailMesh::get_section_segments, &RibbonTrailMesh::set_section_segments>("section_segments")
			.property<&RibbonTrailMesh::get_curve, &RibbonTrailMesh::set_curve>("curve");
}