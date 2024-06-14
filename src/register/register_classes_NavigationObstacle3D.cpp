
#include <godot_cpp/classes/navigation_obstacle3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationObstacle3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<NavigationObstacle3D>("NavigationObstacle3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<double (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_radius), static_cast<void (NavigationObstacle3D::*)(double)>(&NavigationObstacle3D::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<double (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_height), static_cast<void (NavigationObstacle3D::*)(double)>(&NavigationObstacle3D::set_height)>((new std::string("height"))->c_str())
			.property<static_cast<PackedVector3Array (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_vertices), static_cast<void (NavigationObstacle3D::*)(const PackedVector3Array &)>(&NavigationObstacle3D::set_vertices)>((new std::string("vertices"))->c_str())
			.property<static_cast<bool (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_affect_navigation_mesh), static_cast<void (NavigationObstacle3D::*)(bool)>(&NavigationObstacle3D::set_affect_navigation_mesh)>((new std::string("affect_navigation_mesh"))->c_str())
			.property<static_cast<bool (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_carve_navigation_mesh), static_cast<void (NavigationObstacle3D::*)(bool)>(&NavigationObstacle3D::set_carve_navigation_mesh)>((new std::string("carve_navigation_mesh"))->c_str())
			.property<static_cast<bool (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_avoidance_enabled), static_cast<void (NavigationObstacle3D::*)(bool)>(&NavigationObstacle3D::set_avoidance_enabled)>((new std::string("avoidance_enabled"))->c_str())
			.property<static_cast<Vector3 (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_velocity), static_cast<void (NavigationObstacle3D::*)(const Vector3 &)>(&NavigationObstacle3D::set_velocity)>((new std::string("velocity"))->c_str())
			.property<static_cast<uint32_t (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_avoidance_layers), static_cast<void (NavigationObstacle3D::*)(uint32_t)>(&NavigationObstacle3D::set_avoidance_layers)>((new std::string("avoidance_layers"))->c_str())
			.property<static_cast<bool (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_use_3d_avoidance), static_cast<void (NavigationObstacle3D::*)(bool)>(&NavigationObstacle3D::set_use_3d_avoidance)>((new std::string("use_3d_avoidance"))->c_str())
			.fun<static_cast<RID (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<void (NavigationObstacle3D::*)(const RID &)>(&NavigationObstacle3D::set_navigation_map)>((new std::string("set_navigation_map"))->c_str())
			.fun<static_cast<RID (NavigationObstacle3D::*)() const>(&NavigationObstacle3D::get_navigation_map)>((new std::string("get_navigation_map"))->c_str())
			.fun<static_cast<void (NavigationObstacle3D::*)(int32_t, bool)>(&NavigationObstacle3D::set_avoidance_layer_value)>((new std::string("set_avoidance_layer_value"))->c_str())
			.fun<static_cast<bool (NavigationObstacle3D::*)(int32_t) const>(&NavigationObstacle3D::get_avoidance_layer_value)>((new std::string("get_avoidance_layer_value"))->c_str());
}