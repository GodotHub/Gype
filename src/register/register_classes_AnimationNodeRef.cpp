#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node.hpp>

using namespace godot;

void register_classes_AnimationNodeRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNode>>("AnimationNodeRef").constructor<AnimationNode *>();
}