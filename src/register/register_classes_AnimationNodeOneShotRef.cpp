#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_one_shot.hpp>

using namespace godot;

void register_classes_AnimationNodeOneShotRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeOneShot>>("AnimationNodeOneShotRef").constructor<AnimationNodeOneShot *>();
}