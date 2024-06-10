#include <godot_cpp/classes/physics_server2d_manager.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsServer2DManager() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsServer2DManager>("PhysicsServer2DManager")
			.fun<static_cast<void (PhysicsServer2DManager::*)(const String &, const Callable &)>(&PhysicsServer2DManager::register_server)>("register_server")
			.fun<static_cast<void (PhysicsServer2DManager::*)(const String &, int32_t)>(&PhysicsServer2DManager::set_default_server)>("set_default_server");
}