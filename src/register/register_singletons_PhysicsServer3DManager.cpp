#include <godot_cpp/classes/physics_server3d_manager.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_PhysicsServer3DManager() {
	qjs::Value js_singleton = context->newObject();
    PhysicsServer3DManager *singleton = PhysicsServer3DManager::get_singleton();
    js_singleton.add("register_server", [singleton](const String & name,const Callable & create_callback)->void{singleton->register_server(name,create_callback);});
    js_singleton.add("set_default_server", [singleton](const String & name,int32_t priority)->void{singleton->set_default_server(name,priority);});
    context->global()["PhysicsServer3DManager"] = js_singleton;

}