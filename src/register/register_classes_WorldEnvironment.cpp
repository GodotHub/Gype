#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/compositor.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/world_environment.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WorldEnvironment() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<WorldEnvironment>("WorldEnvironment")
			.constructor<>()
			.base<Node>()
			.property<static_cast<Ref<Environment> (WorldEnvironment::*)() const>(&WorldEnvironment::get_environment), static_cast<void (WorldEnvironment::*)(const Ref<Environment> &)>(&WorldEnvironment::set_environment)>((new std::string("environment"))->c_str())
			.property<static_cast<Ref<CameraAttributes> (WorldEnvironment::*)() const>(&WorldEnvironment::get_camera_attributes), static_cast<void (WorldEnvironment::*)(const Ref<CameraAttributes> &)>(&WorldEnvironment::set_camera_attributes)>((new std::string("camera_attributes"))->c_str())
			.property<static_cast<Ref<Compositor> (WorldEnvironment::*)() const>(&WorldEnvironment::get_compositor), static_cast<void (WorldEnvironment::*)(const Ref<Compositor> &)>(&WorldEnvironment::set_compositor)>((new std::string("compositor"))->c_str());
}