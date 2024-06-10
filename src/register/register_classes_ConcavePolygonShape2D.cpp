#include <godot_cpp/classes/concave_polygon_shape2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ConcavePolygonShape2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ConcavePolygonShape2D>("ConcavePolygonShape2D")
			.constructor<>()
			.property<&ConcavePolygonShape2D::get_segments, &ConcavePolygonShape2D::set_segments>("segments");
}