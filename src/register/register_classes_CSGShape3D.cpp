
#include <godot_cpp/classes/csg_shape3d.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/variant/array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CSGShape3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CSGShape3D>("CSGShape3D")
			.constructor<>()
			.base<GeometryInstance3D>()
			.property<static_cast<CSGShape3D::Operation (CSGShape3D::*)() const>(&CSGShape3D::get_operation), static_cast<void (CSGShape3D::*)(CSGShape3D::Operation)>(&CSGShape3D::set_operation)>((new std::string("operation"))->c_str())
			.property<static_cast<double (CSGShape3D::*)() const>(&CSGShape3D::get_snap), static_cast<void (CSGShape3D::*)(double)>(&CSGShape3D::set_snap)>((new std::string("snap"))->c_str())
			.property<static_cast<bool (CSGShape3D::*)() const>(&CSGShape3D::is_calculating_tangents), static_cast<void (CSGShape3D::*)(bool)>(&CSGShape3D::set_calculate_tangents)>((new std::string("calculate_tangents"))->c_str())
			.property<static_cast<bool (CSGShape3D::*)() const>(&CSGShape3D::is_using_collision), static_cast<void (CSGShape3D::*)(bool)>(&CSGShape3D::set_use_collision)>((new std::string("use_collision"))->c_str())
			.property<static_cast<uint32_t (CSGShape3D::*)() const>(&CSGShape3D::get_collision_layer), static_cast<void (CSGShape3D::*)(uint32_t)>(&CSGShape3D::set_collision_layer)>((new std::string("collision_layer"))->c_str())
			.property<static_cast<uint32_t (CSGShape3D::*)() const>(&CSGShape3D::get_collision_mask), static_cast<void (CSGShape3D::*)(uint32_t)>(&CSGShape3D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<double (CSGShape3D::*)() const>(&CSGShape3D::get_collision_priority), static_cast<void (CSGShape3D::*)(double)>(&CSGShape3D::set_collision_priority)>((new std::string("collision_priority"))->c_str())
			.fun<static_cast<bool (CSGShape3D::*)() const>(&CSGShape3D::is_root_shape)>((new std::string("is_root_shape"))->c_str())
			.fun<static_cast<void (CSGShape3D::*)(int32_t, bool)>(&CSGShape3D::set_collision_mask_value)>((new std::string("set_collision_mask_value"))->c_str())
			.fun<static_cast<bool (CSGShape3D::*)(int32_t) const>(&CSGShape3D::get_collision_mask_value)>((new std::string("get_collision_mask_value"))->c_str())
			.fun<static_cast<void (CSGShape3D::*)(int32_t, bool)>(&CSGShape3D::set_collision_layer_value)>((new std::string("set_collision_layer_value"))->c_str())
			.fun<static_cast<bool (CSGShape3D::*)(int32_t) const>(&CSGShape3D::get_collision_layer_value)>((new std::string("get_collision_layer_value"))->c_str())
			.fun<static_cast<Array (CSGShape3D::*)() const>(&CSGShape3D::get_meshes)>((new std::string("get_meshes"))->c_str());
	qjs::Value _Operation = context->newObject();
	_Operation[(new std::string("OPERATION_UNION"))->c_str()] = CSGShape3D::Operation::OPERATION_UNION;
	_Operation[(new std::string("OPERATION_INTERSECTION"))->c_str()] = CSGShape3D::Operation::OPERATION_INTERSECTION;
	_Operation[(new std::string("OPERATION_SUBTRACTION"))->c_str()] = CSGShape3D::Operation::OPERATION_SUBTRACTION;
	_module.add("Operation", std::move(_Operation));
}