#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_CollisionShape2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<CollisionShape2D>("CollisionShape2D")
           .constructor<>()
           .property<CollisionShape2D::get_shape, CollisionShape2D::set_shape>("shape")
           .property<CollisionShape2D::is_disabled, CollisionShape2D::set_disabled>("disabled")
           .property<CollisionShape2D::is_one_way_collision_enabled, CollisionShape2D::set_one_way_collision>("one_way_collision")
           .property<CollisionShape2D::get_one_way_collision_margin, CollisionShape2D::set_one_way_collision_margin>("one_way_collision_margin")
           .property<CollisionShape2D::get_debug_color, CollisionShape2D::set_debug_color>("debug_color")
;}