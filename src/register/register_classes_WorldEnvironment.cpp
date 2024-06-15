#include <godot_cpp/classes/world_environment.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/compositor.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/node.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WorldEnvironment() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<WorldEnvironment>("WorldEnvironment")
            .constructor<>()
            .base<Node>()
            .property<static_cast<Ref<Environment>(WorldEnvironment::*)()const>(&WorldEnvironment::get_environment),static_cast<void(WorldEnvironment::*)(const Ref<Environment> &)>(&WorldEnvironment::set_environment)>("environment")
            .property<static_cast<Ref<CameraAttributes>(WorldEnvironment::*)()const>(&WorldEnvironment::get_camera_attributes),static_cast<void(WorldEnvironment::*)(const Ref<CameraAttributes> &)>(&WorldEnvironment::set_camera_attributes)>("camera_attributes")
            .property<static_cast<Ref<Compositor>(WorldEnvironment::*)()const>(&WorldEnvironment::get_compositor),static_cast<void(WorldEnvironment::*)(const Ref<Compositor> &)>(&WorldEnvironment::set_compositor)>("compositor")
;}