#include <godot_cpp/classes/animation_root_node.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AnimationRootNode() {
	qjs::Context::Module &_module = _General;
	_module.class_<AnimationRootNode>("AnimationRootNode")
			.constructor<>();
}