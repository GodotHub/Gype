#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/collision_polygon3d.hpp>

using namespace godot;

void register_classes_CollisionPolygon3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<CollisionPolygon3D>("CollisionPolygon3D")
           .constructor<>()
           .property<CollisionPolygon3D::get_depth, CollisionPolygon3D::set_depth>("depth")
           .property<CollisionPolygon3D::is_disabled, CollisionPolygon3D::set_disabled>("disabled")
           .property<CollisionPolygon3D::get_polygon, CollisionPolygon3D::set_polygon>("polygon")
           .property<CollisionPolygon3D::get_margin, CollisionPolygon3D::set_margin>("margin")
;}