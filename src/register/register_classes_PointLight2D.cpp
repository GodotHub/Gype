#include <godot_cpp/classes/point_light2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PointLight2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<PointLight2D>("PointLight2D")
			.constructor<>()
			.property<&PointLight2D::get_texture, &PointLight2D::set_texture>("texture")
			.property<&PointLight2D::get_texture_offset, &PointLight2D::set_texture_offset>("offset")
			.property<&PointLight2D::get_texture_scale, &PointLight2D::set_texture_scale>("texture_scale")
			.property<&PointLight2D::get_height, &PointLight2D::set_height>("height");
}