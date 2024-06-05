#include <godot_cpp/classes/marker2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_Marker2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<Marker2D>("Marker2D")
			.constructor<>()
			.property<&Marker2D::get_gizmo_extents, &Marker2D::set_gizmo_extents>("gizmo_extents");
}