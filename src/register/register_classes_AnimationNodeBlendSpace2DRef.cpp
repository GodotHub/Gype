#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_blend_space2d.hpp>

using namespace godot;

void register_classes_AnimationNodeBlendSpace2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeBlendSpace2D>>("AnimationNodeBlendSpace2DRef").constructor<AnimationNodeBlendSpace2D *>();
}