#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/quad_occluder3d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_QuadOccluder3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<QuadOccluder3D>("QuadOccluder3D")
			.constructor<>()
			.base<Occluder3D>()
			.property<static_cast<Vector2 (QuadOccluder3D::*)() const>(&QuadOccluder3D::get_size), static_cast<void (QuadOccluder3D::*)(const Vector2 &)>(&QuadOccluder3D::set_size)>((new std::string("size"))->c_str());
}