#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/physics_server2d_manager.hpp>

using namespace godot;

void register_classes_PhysicsServer2DManager() {
    qjs::Context::Module &_module = _General;
    _module.class_<PhysicsServer2DManager>("PhysicsServer2DManager")
           .constructor<>()
		    .fun<static_cast<void(PhysicsServer2DManager::*)(const String &,const Callable &)>(&PhysicsServer2DManager::register_server)>("register_server")
		    .fun<static_cast<void(PhysicsServer2DManager::*)(const String &,int32_t)>(&PhysicsServer2DManager::set_default_server)>("set_default_server")
;}