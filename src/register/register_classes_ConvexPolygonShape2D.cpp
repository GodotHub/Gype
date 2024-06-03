#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/convex_polygon_shape2d.hpp>

using namespace godot;

void register_classes_ConvexPolygonShape2D() {
    qjs::Context::Module &_module = _General;
    _module.class_<ConvexPolygonShape2D>("ConvexPolygonShape2D")
           .constructor<>()
           .property<ConvexPolygonShape2D::get_points, ConvexPolygonShape2D::set_points>("points")
		    .fun<static_cast<void(ConvexPolygonShape2D::*)(const PackedVector2Array &)>(&ConvexPolygonShape2D::set_point_cloud)>("set_point_cloud")
;}