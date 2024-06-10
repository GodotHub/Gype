#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_sub2.hpp>

using namespace godot;

void register_classes_AnimationNodeSub2Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeSub2>>("AnimationNodeSub2Ref").constructor<AnimationNodeSub2 *>();
}