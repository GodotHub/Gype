#include <godot_cpp/classes/csg_polygon3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CSGPolygon3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CSGPolygon3D>("CSGPolygon3D")
            .constructor<>()
            .base<CSGPrimitive3D>()
            .property<static_cast<PackedVector2Array(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_polygon),static_cast<void(CSGPolygon3D::*)(const PackedVector2Array &)>(&CSGPolygon3D::set_polygon)>("polygon")
            .property<static_cast<CSGPolygon3D::Mode(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_mode),static_cast<void(CSGPolygon3D::*)(CSGPolygon3D::Mode)>(&CSGPolygon3D::set_mode)>("mode")
            .property<static_cast<double(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_depth),static_cast<void(CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_depth)>("depth")
            .property<static_cast<double(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_spin_degrees),static_cast<void(CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_spin_degrees)>("spin_degrees")
            .property<static_cast<int32_t(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_spin_sides),static_cast<void(CSGPolygon3D::*)(int32_t)>(&CSGPolygon3D::set_spin_sides)>("spin_sides")
            .property<static_cast<NodePath(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_path_node),static_cast<void(CSGPolygon3D::*)(const NodePath &)>(&CSGPolygon3D::set_path_node)>("path_node")
            .property<static_cast<CSGPolygon3D::PathIntervalType(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_path_interval_type),static_cast<void(CSGPolygon3D::*)(CSGPolygon3D::PathIntervalType)>(&CSGPolygon3D::set_path_interval_type)>("path_interval_type")
            .property<static_cast<double(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_path_interval),static_cast<void(CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_path_interval)>("path_interval")
            .property<static_cast<double(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_path_simplify_angle),static_cast<void(CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_path_simplify_angle)>("path_simplify_angle")
            .property<static_cast<CSGPolygon3D::PathRotation(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_path_rotation),static_cast<void(CSGPolygon3D::*)(CSGPolygon3D::PathRotation)>(&CSGPolygon3D::set_path_rotation)>("path_rotation")
            .property<static_cast<bool(CSGPolygon3D::*)()const>(&CSGPolygon3D::is_path_local),static_cast<void(CSGPolygon3D::*)(bool)>(&CSGPolygon3D::set_path_local)>("path_local")
            .property<static_cast<bool(CSGPolygon3D::*)()const>(&CSGPolygon3D::is_path_continuous_u),static_cast<void(CSGPolygon3D::*)(bool)>(&CSGPolygon3D::set_path_continuous_u)>("path_continuous_u")
            .property<static_cast<double(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_path_u_distance),static_cast<void(CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_path_u_distance)>("path_u_distance")
            .property<static_cast<bool(CSGPolygon3D::*)()const>(&CSGPolygon3D::is_path_joined),static_cast<void(CSGPolygon3D::*)(bool)>(&CSGPolygon3D::set_path_joined)>("path_joined")
            .property<static_cast<bool(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_smooth_faces),static_cast<void(CSGPolygon3D::*)(bool)>(&CSGPolygon3D::set_smooth_faces)>("smooth_faces")
            .property<static_cast<Ref<Material>(CSGPolygon3D::*)()const>(&CSGPolygon3D::get_material),static_cast<void(CSGPolygon3D::*)(const Ref<Material> &)>(&CSGPolygon3D::set_material)>("material")
;    qjs::Value _Mode = context->newObject();
    _Mode["MODE_DEPTH"] = CSGPolygon3D::Mode::MODE_DEPTH;
    _Mode["MODE_SPIN"] = CSGPolygon3D::Mode::MODE_SPIN;
    _Mode["MODE_PATH"] = CSGPolygon3D::Mode::MODE_PATH;
    _module.add("Mode", std::move(_Mode));
    qjs::Value _PathRotation = context->newObject();
    _PathRotation["PATH_ROTATION_POLYGON"] = CSGPolygon3D::PathRotation::PATH_ROTATION_POLYGON;
    _PathRotation["PATH_ROTATION_PATH"] = CSGPolygon3D::PathRotation::PATH_ROTATION_PATH;
    _PathRotation["PATH_ROTATION_PATH_FOLLOW"] = CSGPolygon3D::PathRotation::PATH_ROTATION_PATH_FOLLOW;
    _module.add("PathRotation", std::move(_PathRotation));
    qjs::Value _PathIntervalType = context->newObject();
    _PathIntervalType["PATH_INTERVAL_DISTANCE"] = CSGPolygon3D::PathIntervalType::PATH_INTERVAL_DISTANCE;
    _PathIntervalType["PATH_INTERVAL_SUBDIVIDE"] = CSGPolygon3D::PathIntervalType::PATH_INTERVAL_SUBDIVIDE;
    _module.add("PathIntervalType", std::move(_PathIntervalType));
}