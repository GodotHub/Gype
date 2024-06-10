#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_blend3.hpp>

using namespace godot;

void register_classes_AnimationNodeBlend3Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeBlend3>>("AnimationNodeBlend3Ref").constructor<AnimationNodeBlend3 *>();
}