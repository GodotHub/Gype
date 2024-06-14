
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_server3d_rendering_server_handler.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsServer3DRenderingServerHandler() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsServer3DRenderingServerHandler>("PhysicsServer3DRenderingServerHandler")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<void (PhysicsServer3DRenderingServerHandler::*)(int32_t, const Vector3 &)>(&PhysicsServer3DRenderingServerHandler::_set_vertex)>((new std::string("_set_vertex"))->c_str())
			.fun<static_cast<void (PhysicsServer3DRenderingServerHandler::*)(int32_t, const Vector3 &)>(&PhysicsServer3DRenderingServerHandler::_set_normal)>((new std::string("_set_normal"))->c_str())
			.fun<static_cast<void (PhysicsServer3DRenderingServerHandler::*)(const AABB &)>(&PhysicsServer3DRenderingServerHandler::_set_aabb)>((new std::string("_set_aabb"))->c_str())
			.fun<static_cast<void (PhysicsServer3DRenderingServerHandler::*)(int32_t, const Vector3 &)>(&PhysicsServer3DRenderingServerHandler::set_vertex)>((new std::string("set_vertex"))->c_str())
			.fun<static_cast<void (PhysicsServer3DRenderingServerHandler::*)(int32_t, const Vector3 &)>(&PhysicsServer3DRenderingServerHandler::set_normal)>((new std::string("set_normal"))->c_str())
			.fun<static_cast<void (PhysicsServer3DRenderingServerHandler::*)(const AABB &)>(&PhysicsServer3DRenderingServerHandler::set_aabb)>((new std::string("set_aabb"))->c_str());
}