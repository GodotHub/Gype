#include <godot_cpp/classes/collision_shape2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CollisionShape2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<CollisionShape2D>("CollisionShape2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Ref<Shape2D>(CollisionShape2D::*)()const>(&CollisionShape2D::get_shape),static_cast<void(CollisionShape2D::*)(const Ref<Shape2D> &)>(&CollisionShape2D::set_shape)>("shape")
            .property<static_cast<bool(CollisionShape2D::*)()const>(&CollisionShape2D::is_disabled),static_cast<void(CollisionShape2D::*)(bool)>(&CollisionShape2D::set_disabled)>("disabled")
            .property<static_cast<bool(CollisionShape2D::*)()const>(&CollisionShape2D::is_one_way_collision_enabled),static_cast<void(CollisionShape2D::*)(bool)>(&CollisionShape2D::set_one_way_collision)>("one_way_collision")
            .property<static_cast<double(CollisionShape2D::*)()const>(&CollisionShape2D::get_one_way_collision_margin),static_cast<void(CollisionShape2D::*)(double)>(&CollisionShape2D::set_one_way_collision_margin)>("one_way_collision_margin")
            .property<static_cast<Color(CollisionShape2D::*)()const>(&CollisionShape2D::get_debug_color),static_cast<void(CollisionShape2D::*)(const Color &)>(&CollisionShape2D::set_debug_color)>("debug_color")
;}