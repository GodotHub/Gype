#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/physics_server3d_manager.hpp>

using namespace godot;

void register_classes_PhysicsServer3DManager() {
    qjs::Context::Module &_module = _General;
    _module.class_<PhysicsServer3DManager>("PhysicsServer3DManager")
           .constructor<>()
		    .fun<static_cast<void(PhysicsServer3DManager::*)(const String &,const Callable &)>(&PhysicsServer3DManager::register_server)>("register_server")
		    .fun<static_cast<void(PhysicsServer3DManager::*)(const String &,int32_t)>(&PhysicsServer3DManager::set_default_server)>("set_default_server")
;}