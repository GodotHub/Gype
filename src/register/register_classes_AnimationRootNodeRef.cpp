#include "register/register_classes.h"
#include <godot_cpp/classes/animation_root_node.hpp>

using namespace godot;

void register_classes_AnimationRootNodeRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationRootNode>>("AnimationRootNodeRef").constructor<AnimationRootNode *>();
}