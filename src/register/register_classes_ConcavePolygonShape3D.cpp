#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/concave_polygon_shape3d.hpp>

using namespace godot;

void register_classes_ConcavePolygonShape3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<ConcavePolygonShape3D>("ConcavePolygonShape3D")
           .constructor<>()
           .property<ConcavePolygonShape3D::get_faces, ConcavePolygonShape3D::set_faces>("data")
           .property<ConcavePolygonShape3D::is_backface_collision_enabled, ConcavePolygonShape3D::set_backface_collision_enabled>("backface_collision")
;}