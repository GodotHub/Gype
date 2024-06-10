#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_blend_tree.hpp>

using namespace godot;

void register_classes_AnimationNodeBlendTreeRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeBlendTree>>("AnimationNodeBlendTreeRef").constructor<AnimationNodeBlendTree *>();
}