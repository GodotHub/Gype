#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/world_environment.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WorldEnvironment() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<WorldEnvironment>("WorldEnvironment")
			.constructor<>()
			.property<&WorldEnvironment::get_environment, &WorldEnvironment::set_environment>("environment")
			.property<&WorldEnvironment::get_camera_attributes, &WorldEnvironment::set_camera_attributes>("camera_attributes");
}