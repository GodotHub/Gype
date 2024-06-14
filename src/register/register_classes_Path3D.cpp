#include <godot_cpp/classes/curve3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/path3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Path3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Path3D>("Path3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<Ref<Curve3D> (Path3D::*)() const>(&Path3D::get_curve), static_cast<void (Path3D::*)(const Ref<Curve3D> &)>(&Path3D::set_curve)>((new std::string("curve"))->c_str());
}