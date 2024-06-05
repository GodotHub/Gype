#include <godot_cpp/classes/animation_node_add2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AnimationNodeAdd2() {
	qjs::Context::Module &_module = _General;
	_module.class_<AnimationNodeAdd2>("AnimationNodeAdd2")
			.constructor<>();
}