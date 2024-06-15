#include <godot_cpp/classes/convex_polygon_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ConvexPolygonShape2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ConvexPolygonShape2D>("ConvexPolygonShape2D")
            .constructor<>()
            .base<Shape2D>()
            .property<static_cast<PackedVector2Array(ConvexPolygonShape2D::*)()const>(&ConvexPolygonShape2D::get_points),static_cast<void(ConvexPolygonShape2D::*)(const PackedVector2Array &)>(&ConvexPolygonShape2D::set_points)>("points")
            .fun<static_cast<void(ConvexPolygonShape2D::*)(const PackedVector2Array &)>(&ConvexPolygonShape2D::set_point_cloud)>("set_point_cloud")
;}