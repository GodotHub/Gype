#include "register/register_classes.h"
#include <godot_cpp/classes/convex_polygon_shape2d.hpp>

using namespace godot;

void register_classes_ConvexPolygonShape2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ConvexPolygonShape2D>>("ConvexPolygonShape2DRef").constructor<ConvexPolygonShape2D *>();
}