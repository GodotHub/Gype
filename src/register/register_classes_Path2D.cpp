#include <godot_cpp/classes/curve2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/path2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Path2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Path2D>("Path2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Ref<Curve2D> (Path2D::*)() const>(&Path2D::get_curve), static_cast<void (Path2D::*)(const Ref<Curve2D> &)>(&Path2D::set_curve)>((new std::string("curve"))->c_str());
}