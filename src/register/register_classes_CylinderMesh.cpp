
#include <godot_cpp/classes/cylinder_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CylinderMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CylinderMesh>("CylinderMesh")
			.constructor<>()
			.base<PrimitiveMesh>()
			.property<static_cast<double (CylinderMesh::*)() const>(&CylinderMesh::get_top_radius), static_cast<void (CylinderMesh::*)(double)>(&CylinderMesh::set_top_radius)>((new std::string("top_radius"))->c_str())
			.property<static_cast<double (CylinderMesh::*)() const>(&CylinderMesh::get_bottom_radius), static_cast<void (CylinderMesh::*)(double)>(&CylinderMesh::set_bottom_radius)>((new std::string("bottom_radius"))->c_str())
			.property<static_cast<double (CylinderMesh::*)() const>(&CylinderMesh::get_height), static_cast<void (CylinderMesh::*)(double)>(&CylinderMesh::set_height)>((new std::string("height"))->c_str())
			.property<static_cast<int32_t (CylinderMesh::*)() const>(&CylinderMesh::get_radial_segments), static_cast<void (CylinderMesh::*)(int32_t)>(&CylinderMesh::set_radial_segments)>((new std::string("radial_segments"))->c_str())
			.property<static_cast<int32_t (CylinderMesh::*)() const>(&CylinderMesh::get_rings), static_cast<void (CylinderMesh::*)(int32_t)>(&CylinderMesh::set_rings)>((new std::string("rings"))->c_str())
			.property<static_cast<bool (CylinderMesh::*)() const>(&CylinderMesh::is_cap_top), static_cast<void (CylinderMesh::*)(bool)>(&CylinderMesh::set_cap_top)>((new std::string("cap_top"))->c_str())
			.property<static_cast<bool (CylinderMesh::*)() const>(&CylinderMesh::is_cap_bottom), static_cast<void (CylinderMesh::*)(bool)>(&CylinderMesh::set_cap_bottom)>((new std::string("cap_bottom"))->c_str());
}