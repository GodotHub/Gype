#include <godot_cpp/classes/segment_shape2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/shape2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SegmentShape2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SegmentShape2D>("SegmentShape2D")
            .constructor<>()
            .base<Shape2D>()
            .property<static_cast<Vector2(SegmentShape2D::*)()const>(&SegmentShape2D::get_a),static_cast<void(SegmentShape2D::*)(const Vector2 &)>(&SegmentShape2D::set_a)>("a")
            .property<static_cast<Vector2(SegmentShape2D::*)()const>(&SegmentShape2D::get_b),static_cast<void(SegmentShape2D::*)(const Vector2 &)>(&SegmentShape2D::set_b)>("b")
;}