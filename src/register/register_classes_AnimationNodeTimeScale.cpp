#include <godot_cpp/classes/animation_node_time_scale.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeTimeScale() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeTimeScale>("AnimationNodeTimeScale")
			.constructor<>();
}