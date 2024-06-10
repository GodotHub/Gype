#include <godot_cpp/classes/xr_anchor3d.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRAnchor3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<XRAnchor3D>("XRAnchor3D")
			.constructor<>()
			.fun<static_cast<Vector3 (XRAnchor3D::*)() const>(&XRAnchor3D::get_size)>("get_size")
			.fun<static_cast<Plane (XRAnchor3D::*)() const>(&XRAnchor3D::get_plane)>("get_plane");
}