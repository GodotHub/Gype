#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_blend2.hpp>

using namespace godot;

void register_classes_AnimationNodeBlend2Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeBlend2>>("AnimationNodeBlend2Ref").constructor<AnimationNodeBlend2 *>();
}