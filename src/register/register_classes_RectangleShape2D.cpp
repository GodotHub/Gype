#include <godot_cpp/classes/rectangle_shape2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/shape2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RectangleShape2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RectangleShape2D>("RectangleShape2D")
            .constructor<>()
            .base<Shape2D>()
            .property<static_cast<Vector2(RectangleShape2D::*)()const>(&RectangleShape2D::get_size),static_cast<void(RectangleShape2D::*)(const Vector2 &)>(&RectangleShape2D::set_size)>("size")
;}