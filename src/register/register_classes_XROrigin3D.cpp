#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/xr_origin3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XROrigin3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<XROrigin3D>("XROrigin3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<double (XROrigin3D::*)() const>(&XROrigin3D::get_world_scale), static_cast<void (XROrigin3D::*)(double)>(&XROrigin3D::set_world_scale)>((new std::string("world_scale"))->c_str())
			.property<static_cast<bool (XROrigin3D::*)() const>(&XROrigin3D::is_current), static_cast<void (XROrigin3D::*)(bool)>(&XROrigin3D::set_current)>((new std::string("current"))->c_str());
}