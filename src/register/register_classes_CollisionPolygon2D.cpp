#include <godot_cpp/classes/collision_polygon2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CollisionPolygon2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<CollisionPolygon2D>("CollisionPolygon2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<CollisionPolygon2D::BuildMode(CollisionPolygon2D::*)()const>(&CollisionPolygon2D::get_build_mode),static_cast<void(CollisionPolygon2D::*)(CollisionPolygon2D::BuildMode)>(&CollisionPolygon2D::set_build_mode)>("build_mode")
            .property<static_cast<PackedVector2Array(CollisionPolygon2D::*)()const>(&CollisionPolygon2D::get_polygon),static_cast<void(CollisionPolygon2D::*)(const PackedVector2Array &)>(&CollisionPolygon2D::set_polygon)>("polygon")
            .property<static_cast<bool(CollisionPolygon2D::*)()const>(&CollisionPolygon2D::is_disabled),static_cast<void(CollisionPolygon2D::*)(bool)>(&CollisionPolygon2D::set_disabled)>("disabled")
            .property<static_cast<bool(CollisionPolygon2D::*)()const>(&CollisionPolygon2D::is_one_way_collision_enabled),static_cast<void(CollisionPolygon2D::*)(bool)>(&CollisionPolygon2D::set_one_way_collision)>("one_way_collision")
            .property<static_cast<double(CollisionPolygon2D::*)()const>(&CollisionPolygon2D::get_one_way_collision_margin),static_cast<void(CollisionPolygon2D::*)(double)>(&CollisionPolygon2D::set_one_way_collision_margin)>("one_way_collision_margin")
;    qjs::Value _BuildMode = context->newObject();
    _BuildMode["BUILD_SOLIDS"] = CollisionPolygon2D::BuildMode::BUILD_SOLIDS;
    _BuildMode["BUILD_SEGMENTS"] = CollisionPolygon2D::BuildMode::BUILD_SEGMENTS;
    _module.add("BuildMode", std::move(_BuildMode));
}