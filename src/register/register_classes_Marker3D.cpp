#include <godot_cpp/classes/marker3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Marker3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Marker3D>("Marker3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<double (Marker3D::*)() const>(&Marker3D::get_gizmo_extents), static_cast<void (Marker3D::*)(double)>(&Marker3D::set_gizmo_extents)>((new std::string("gizmo_extents"))->c_str());
}