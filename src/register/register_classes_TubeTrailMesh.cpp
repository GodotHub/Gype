
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tube_trail_mesh.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TubeTrailMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TubeTrailMesh>("TubeTrailMesh")
			.constructor<>()
			.base<PrimitiveMesh>()
			.property<static_cast<double (TubeTrailMesh::*)() const>(&TubeTrailMesh::get_radius), static_cast<void (TubeTrailMesh::*)(double)>(&TubeTrailMesh::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<int32_t (TubeTrailMesh::*)() const>(&TubeTrailMesh::get_radial_steps), static_cast<void (TubeTrailMesh::*)(int32_t)>(&TubeTrailMesh::set_radial_steps)>((new std::string("radial_steps"))->c_str())
			.property<static_cast<int32_t (TubeTrailMesh::*)() const>(&TubeTrailMesh::get_sections), static_cast<void (TubeTrailMesh::*)(int32_t)>(&TubeTrailMesh::set_sections)>((new std::string("sections"))->c_str())
			.property<static_cast<double (TubeTrailMesh::*)() const>(&TubeTrailMesh::get_section_length), static_cast<void (TubeTrailMesh::*)(double)>(&TubeTrailMesh::set_section_length)>((new std::string("section_length"))->c_str())
			.property<static_cast<int32_t (TubeTrailMesh::*)() const>(&TubeTrailMesh::get_section_rings), static_cast<void (TubeTrailMesh::*)(int32_t)>(&TubeTrailMesh::set_section_rings)>((new std::string("section_rings"))->c_str())
			.property<static_cast<bool (TubeTrailMesh::*)() const>(&TubeTrailMesh::is_cap_top), static_cast<void (TubeTrailMesh::*)(bool)>(&TubeTrailMesh::set_cap_top)>((new std::string("cap_top"))->c_str())
			.property<static_cast<bool (TubeTrailMesh::*)() const>(&TubeTrailMesh::is_cap_bottom), static_cast<void (TubeTrailMesh::*)(bool)>(&TubeTrailMesh::set_cap_bottom)>((new std::string("cap_bottom"))->c_str())
			.property<static_cast<Ref<Curve> (TubeTrailMesh::*)() const>(&TubeTrailMesh::get_curve), static_cast<void (TubeTrailMesh::*)(const Ref<Curve> &)>(&TubeTrailMesh::set_curve)>((new std::string("curve"))->c_str());
}