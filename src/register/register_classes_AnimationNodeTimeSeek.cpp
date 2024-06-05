#include <godot_cpp/classes/animation_node_time_seek.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AnimationNodeTimeSeek() {
	qjs::Context::Module &_module = _General;
	_module.class_<AnimationNodeTimeSeek>("AnimationNodeTimeSeek")
			.constructor<>();
}