
#include <godot_cpp/classes/physics_server3d_manager.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_PhysicsServer3DManager() {
	qjs::Value js_singleton = context->newObject();
	PhysicsServer3DManager *singleton = PhysicsServer3DManager::get_singleton();
	js_singleton.add((new std::string("register_server"))->c_str(), [singleton](const String &name, const Callable &create_callback) -> void { singleton->register_server(name, create_callback); });
	js_singleton.add((new std::string("set_default_server"))->c_str(), [singleton](const String &name, int32_t priority) -> void { singleton->set_default_server(name, priority); });
	context->global()[(new std::string("PhysicsServer3DManager"))->c_str()] = js_singleton;
}