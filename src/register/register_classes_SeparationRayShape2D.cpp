#include <godot_cpp/classes/separation_ray_shape2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_SeparationRayShape2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<SeparationRayShape2D>("SeparationRayShape2D")
			.constructor<>()
			.property<&SeparationRayShape2D::get_length, &SeparationRayShape2D::set_length>("length")
			.property<&SeparationRayShape2D::get_slide_on_slope, &SeparationRayShape2D::set_slide_on_slope>("slide_on_slope");
}