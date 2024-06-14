
#include <godot_cpp/classes/csg_polygon3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CSGPolygon3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGPolygon3D>("CSGPolygon3D")
			.constructor<>()
			.base<CSGPrimitive3D>()
			.property<static_cast<PackedVector2Array (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_polygon), static_cast<void (CSGPolygon3D::*)(const PackedVector2Array &)>(&CSGPolygon3D::set_polygon)>((new std::string("polygon"))->c_str())
			.property<static_cast<CSGPolygon3D::Mode (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_mode), static_cast<void (CSGPolygon3D::*)(CSGPolygon3D::Mode)>(&CSGPolygon3D::set_mode)>((new std::string("mode"))->c_str())
			.property<static_cast<double (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_depth), static_cast<void (CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_depth)>((new std::string("depth"))->c_str())
			.property<static_cast<double (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_spin_degrees), static_cast<void (CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_spin_degrees)>((new std::string("spin_degrees"))->c_str())
			.property<static_cast<int32_t (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_spin_sides), static_cast<void (CSGPolygon3D::*)(int32_t)>(&CSGPolygon3D::set_spin_sides)>((new std::string("spin_sides"))->c_str())
			.property<static_cast<NodePath (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_path_node), static_cast<void (CSGPolygon3D::*)(const NodePath &)>(&CSGPolygon3D::set_path_node)>((new std::string("path_node"))->c_str())
			.property<static_cast<CSGPolygon3D::PathIntervalType (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_path_interval_type), static_cast<void (CSGPolygon3D::*)(CSGPolygon3D::PathIntervalType)>(&CSGPolygon3D::set_path_interval_type)>((new std::string("path_interval_type"))->c_str())
			.property<static_cast<double (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_path_interval), static_cast<void (CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_path_interval)>((new std::string("path_interval"))->c_str())
			.property<static_cast<double (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_path_simplify_angle), static_cast<void (CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_path_simplify_angle)>((new std::string("path_simplify_angle"))->c_str())
			.property<static_cast<CSGPolygon3D::PathRotation (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_path_rotation), static_cast<void (CSGPolygon3D::*)(CSGPolygon3D::PathRotation)>(&CSGPolygon3D::set_path_rotation)>((new std::string("path_rotation"))->c_str())
			.property<static_cast<bool (CSGPolygon3D::*)() const>(&CSGPolygon3D::is_path_local), static_cast<void (CSGPolygon3D::*)(bool)>(&CSGPolygon3D::set_path_local)>((new std::string("path_local"))->c_str())
			.property<static_cast<bool (CSGPolygon3D::*)() const>(&CSGPolygon3D::is_path_continuous_u), static_cast<void (CSGPolygon3D::*)(bool)>(&CSGPolygon3D::set_path_continuous_u)>((new std::string("path_continuous_u"))->c_str())
			.property<static_cast<double (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_path_u_distance), static_cast<void (CSGPolygon3D::*)(double)>(&CSGPolygon3D::set_path_u_distance)>((new std::string("path_u_distance"))->c_str())
			.property<static_cast<bool (CSGPolygon3D::*)() const>(&CSGPolygon3D::is_path_joined), static_cast<void (CSGPolygon3D::*)(bool)>(&CSGPolygon3D::set_path_joined)>((new std::string("path_joined"))->c_str())
			.property<static_cast<bool (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_smooth_faces), static_cast<void (CSGPolygon3D::*)(bool)>(&CSGPolygon3D::set_smooth_faces)>((new std::string("smooth_faces"))->c_str())
			.property<static_cast<Ref<Material> (CSGPolygon3D::*)() const>(&CSGPolygon3D::get_material), static_cast<void (CSGPolygon3D::*)(const Ref<Material> &)>(&CSGPolygon3D::set_material)>((new std::string("material"))->c_str());
	qjs::Value _Mode = context->newObject();
	_Mode[(new std::string("MODE_DEPTH"))->c_str()] = CSGPolygon3D::Mode::MODE_DEPTH;
	_Mode[(new std::string("MODE_SPIN"))->c_str()] = CSGPolygon3D::Mode::MODE_SPIN;
	_Mode[(new std::string("MODE_PATH"))->c_str()] = CSGPolygon3D::Mode::MODE_PATH;
	_module.add("Mode", std::move(_Mode));
	qjs::Value _PathRotation = context->newObject();
	_PathRotation[(new std::string("PATH_ROTATION_POLYGON"))->c_str()] = CSGPolygon3D::PathRotation::PATH_ROTATION_POLYGON;
	_PathRotation[(new std::string("PATH_ROTATION_PATH"))->c_str()] = CSGPolygon3D::PathRotation::PATH_ROTATION_PATH;
	_PathRotation[(new std::string("PATH_ROTATION_PATH_FOLLOW"))->c_str()] = CSGPolygon3D::PathRotation::PATH_ROTATION_PATH_FOLLOW;
	_module.add("PathRotation", std::move(_PathRotation));
	qjs::Value _PathIntervalType = context->newObject();
	_PathIntervalType[(new std::string("PATH_INTERVAL_DISTANCE"))->c_str()] = CSGPolygon3D::PathIntervalType::PATH_INTERVAL_DISTANCE;
	_PathIntervalType[(new std::string("PATH_INTERVAL_SUBDIVIDE"))->c_str()] = CSGPolygon3D::PathIntervalType::PATH_INTERVAL_SUBDIVIDE;
	_module.add("PathIntervalType", std::move(_PathIntervalType));
}