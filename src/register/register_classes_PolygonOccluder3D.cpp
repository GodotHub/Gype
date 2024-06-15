#include <godot_cpp/classes/polygon_occluder3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PolygonOccluder3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PolygonOccluder3D>("PolygonOccluder3D")
            .constructor<>()
            .base<Occluder3D>()
            .property<static_cast<PackedVector2Array(PolygonOccluder3D::*)()const>(&PolygonOccluder3D::get_polygon),static_cast<void(PolygonOccluder3D::*)(const PackedVector2Array &)>(&PolygonOccluder3D::set_polygon)>("polygon")
;}