#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/scene_tree_timer.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SceneTreeTimer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SceneTreeTimer>("SceneTreeTimer")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<double (SceneTreeTimer::*)() const>(&SceneTreeTimer::get_time_left), static_cast<void (SceneTreeTimer::*)(double)>(&SceneTreeTimer::set_time_left)>((new std::string("time_left"))->c_str());
}