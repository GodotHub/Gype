#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/sphere_occluder3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SphereOccluder3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SphereOccluder3D>("SphereOccluder3D")
			.constructor<>()
			.base<Occluder3D>()
			.property<static_cast<double (SphereOccluder3D::*)() const>(&SphereOccluder3D::get_radius), static_cast<void (SphereOccluder3D::*)(double)>(&SphereOccluder3D::set_radius)>((new std::string("radius"))->c_str());
}