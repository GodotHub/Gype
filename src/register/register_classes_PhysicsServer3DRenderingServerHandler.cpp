#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/physics_server3d_rendering_server_handler.hpp>

using namespace godot;

void register_classes_PhysicsServer3DRenderingServerHandler() {
    qjs::Context::Module &_module = _General;
    _module.class_<PhysicsServer3DRenderingServerHandler>("PhysicsServer3DRenderingServerHandler")
           .constructor<>()
		    .fun<static_cast<void(PhysicsServer3DRenderingServerHandler::*)(int32_t,const Vector3 &)>(&PhysicsServer3DRenderingServerHandler::_set_vertex)>("_set_vertex")
		    .fun<static_cast<void(PhysicsServer3DRenderingServerHandler::*)(int32_t,const Vector3 &)>(&PhysicsServer3DRenderingServerHandler::_set_normal)>("_set_normal")
		    .fun<static_cast<void(PhysicsServer3DRenderingServerHandler::*)(const AABB &)>(&PhysicsServer3DRenderingServerHandler::_set_aabb)>("_set_aabb")
		    .fun<static_cast<void(PhysicsServer3DRenderingServerHandler::*)(int32_t,const Vector3 &)>(&PhysicsServer3DRenderingServerHandler::set_vertex)>("set_vertex")
		    .fun<static_cast<void(PhysicsServer3DRenderingServerHandler::*)(int32_t,const Vector3 &)>(&PhysicsServer3DRenderingServerHandler::set_normal)>("set_normal")
		    .fun<static_cast<void(PhysicsServer3DRenderingServerHandler::*)(const AABB &)>(&PhysicsServer3DRenderingServerHandler::set_aabb)>("set_aabb")
;}