#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/polygon_occluder3d.hpp>

using namespace godot;

void register_classes_PolygonOccluder3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<PolygonOccluder3D>("PolygonOccluder3D")
           .constructor<>()
           .property<PolygonOccluder3D::get_polygon, PolygonOccluder3D::set_polygon>("polygon")
;}