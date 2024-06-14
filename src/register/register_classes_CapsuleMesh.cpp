
#include <godot_cpp/classes/capsule_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CapsuleMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CapsuleMesh>("CapsuleMesh")
			.constructor<>()
			.base<PrimitiveMesh>()
			.property<static_cast<double (CapsuleMesh::*)() const>(&CapsuleMesh::get_radius), static_cast<void (CapsuleMesh::*)(double)>(&CapsuleMesh::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<double (CapsuleMesh::*)() const>(&CapsuleMesh::get_height), static_cast<void (CapsuleMesh::*)(double)>(&CapsuleMesh::set_height)>((new std::string("height"))->c_str())
			.property<static_cast<int32_t (CapsuleMesh::*)() const>(&CapsuleMesh::get_radial_segments), static_cast<void (CapsuleMesh::*)(int32_t)>(&CapsuleMesh::set_radial_segments)>((new std::string("radial_segments"))->c_str())
			.property<static_cast<int32_t (CapsuleMesh::*)() const>(&CapsuleMesh::get_rings), static_cast<void (CapsuleMesh::*)(int32_t)>(&CapsuleMesh::set_rings)>((new std::string("rings"))->c_str());
}