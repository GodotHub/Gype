#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/convex_polygon_shape3d.hpp>

using namespace godot;

void register_classes_ConvexPolygonShape3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<ConvexPolygonShape3D>("ConvexPolygonShape3D")
           .constructor<>()
           .property<ConvexPolygonShape3D::get_points, ConvexPolygonShape3D::set_points>("points")
;}