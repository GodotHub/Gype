#include "support/instance_binding.hpp"

#include <godot_cpp/classes/object.hpp>

using namespace godot;

GodotInstanceBinding::~GodotInstanceBinding() {
	obj->~Object();
}