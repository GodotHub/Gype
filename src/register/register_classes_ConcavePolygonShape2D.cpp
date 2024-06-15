#include <godot_cpp/classes/concave_polygon_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ConcavePolygonShape2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ConcavePolygonShape2D>("ConcavePolygonShape2D")
            .constructor<>()
            .base<Shape2D>()
            .property<static_cast<PackedVector2Array(ConcavePolygonShape2D::*)()const>(&ConcavePolygonShape2D::get_segments),static_cast<void(ConcavePolygonShape2D::*)(const PackedVector2Array &)>(&ConcavePolygonShape2D::set_segments)>("segments")
;}