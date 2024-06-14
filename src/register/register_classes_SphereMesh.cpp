
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/sphere_mesh.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SphereMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SphereMesh>("SphereMesh")
			.constructor<>()
			.base<PrimitiveMesh>()
			.property<static_cast<double (SphereMesh::*)() const>(&SphereMesh::get_radius), static_cast<void (SphereMesh::*)(double)>(&SphereMesh::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<double (SphereMesh::*)() const>(&SphereMesh::get_height), static_cast<void (SphereMesh::*)(double)>(&SphereMesh::set_height)>((new std::string("height"))->c_str())
			.property<static_cast<int32_t (SphereMesh::*)() const>(&SphereMesh::get_radial_segments), static_cast<void (SphereMesh::*)(int32_t)>(&SphereMesh::set_radial_segments)>((new std::string("radial_segments"))->c_str())
			.property<static_cast<int32_t (SphereMesh::*)() const>(&SphereMesh::get_rings), static_cast<void (SphereMesh::*)(int32_t)>(&SphereMesh::set_rings)>((new std::string("rings"))->c_str())
			.property<static_cast<bool (SphereMesh::*)() const>(&SphereMesh::get_is_hemisphere), static_cast<void (SphereMesh::*)(bool)>(&SphereMesh::set_is_hemisphere)>((new std::string("is_hemisphere"))->c_str());
}