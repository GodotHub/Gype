#include <godot_cpp/classes/box_occluder3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_BoxOccluder3D() {
	qjs::Context::Module &_module = _General;
	_module.class_<BoxOccluder3D>("BoxOccluder3D")
			.constructor<>()
			.property<&BoxOccluder3D::get_size, &BoxOccluder3D::set_size>("size");
}