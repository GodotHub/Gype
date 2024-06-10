#include <godot_cpp/classes/csg_box3d.hpp>
#include <godot_cpp/classes/material.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CSGBox3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGBox3D>("CSGBox3D")
			.constructor<>()
			.property<&CSGBox3D::get_size, &CSGBox3D::set_size>("size")
			.property<&CSGBox3D::get_material, &CSGBox3D::set_material>("material");
}