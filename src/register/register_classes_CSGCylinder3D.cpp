
#include <godot_cpp/classes/csg_cylinder3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CSGCylinder3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGCylinder3D>("CSGCylinder3D")
			.constructor<>()
			.base<CSGPrimitive3D>()
			.property<static_cast<double (CSGCylinder3D::*)() const>(&CSGCylinder3D::get_radius), static_cast<void (CSGCylinder3D::*)(double)>(&CSGCylinder3D::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<double (CSGCylinder3D::*)() const>(&CSGCylinder3D::get_height), static_cast<void (CSGCylinder3D::*)(double)>(&CSGCylinder3D::set_height)>((new std::string("height"))->c_str())
			.property<static_cast<int32_t (CSGCylinder3D::*)() const>(&CSGCylinder3D::get_sides), static_cast<void (CSGCylinder3D::*)(int32_t)>(&CSGCylinder3D::set_sides)>((new std::string("sides"))->c_str())
			.property<static_cast<bool (CSGCylinder3D::*)() const>(&CSGCylinder3D::is_cone), static_cast<void (CSGCylinder3D::*)(bool)>(&CSGCylinder3D::set_cone)>((new std::string("cone"))->c_str())
			.property<static_cast<bool (CSGCylinder3D::*)() const>(&CSGCylinder3D::get_smooth_faces), static_cast<void (CSGCylinder3D::*)(bool)>(&CSGCylinder3D::set_smooth_faces)>((new std::string("smooth_faces"))->c_str())
			.property<static_cast<Ref<Material> (CSGCylinder3D::*)() const>(&CSGCylinder3D::get_material), static_cast<void (CSGCylinder3D::*)(const Ref<Material> &)>(&CSGCylinder3D::set_material)>((new std::string("material"))->c_str());
}