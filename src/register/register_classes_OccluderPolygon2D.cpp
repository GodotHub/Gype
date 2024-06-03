#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/occluder_polygon2d.hpp>

using namespace godot;

void register_classes_OccluderPolygon2D() {
    qjs::Context::Module &_module = _General;
    _module.class_<OccluderPolygon2D>("OccluderPolygon2D")
           .constructor<>()
           .property<OccluderPolygon2D::is_closed, OccluderPolygon2D::set_closed>("closed")
           .property<OccluderPolygon2D::get_cull_mode, OccluderPolygon2D::set_cull_mode>("cull_mode")
           .property<OccluderPolygon2D::get_polygon, OccluderPolygon2D::set_polygon>("polygon")
;}