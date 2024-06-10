#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_output.hpp>

using namespace godot;

void register_classes_AnimationNodeOutputRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeOutput>>("AnimationNodeOutputRef").constructor<AnimationNodeOutput *>();
}