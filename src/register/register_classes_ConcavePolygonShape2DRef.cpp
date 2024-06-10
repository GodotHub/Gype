#include "register/register_classes.h"
#include <godot_cpp/classes/concave_polygon_shape2d.hpp>

using namespace godot;

void register_classes_ConcavePolygonShape2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ConcavePolygonShape2D>>("ConcavePolygonShape2DRef").constructor<ConcavePolygonShape2D *>();
}