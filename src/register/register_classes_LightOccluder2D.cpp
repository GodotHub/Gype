#include <godot_cpp/classes/light_occluder2d.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_LightOccluder2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<LightOccluder2D>("LightOccluder2D")
			.constructor<>()
			.property<&LightOccluder2D::get_occluder_polygon, &LightOccluder2D::set_occluder_polygon>("occluder")
			.property<&LightOccluder2D::is_set_as_sdf_collision, &LightOccluder2D::set_as_sdf_collision>("sdf_collision")
			.property<&LightOccluder2D::get_occluder_light_mask, &LightOccluder2D::set_occluder_light_mask>("occluder_light_mask");
}