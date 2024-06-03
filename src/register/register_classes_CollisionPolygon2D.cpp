#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/collision_polygon2d.hpp>

using namespace godot;

void register_classes_CollisionPolygon2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<CollisionPolygon2D>("CollisionPolygon2D")
           .constructor<>()
           .property<CollisionPolygon2D::get_build_mode, CollisionPolygon2D::set_build_mode>("build_mode")
           .property<CollisionPolygon2D::get_polygon, CollisionPolygon2D::set_polygon>("polygon")
           .property<CollisionPolygon2D::is_disabled, CollisionPolygon2D::set_disabled>("disabled")
           .property<CollisionPolygon2D::is_one_way_collision_enabled, CollisionPolygon2D::set_one_way_collision>("one_way_collision")
           .property<CollisionPolygon2D::get_one_way_collision_margin, CollisionPolygon2D::set_one_way_collision_margin>("one_way_collision_margin")
;}