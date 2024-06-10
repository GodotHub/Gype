#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_blend_space1d.hpp>

using namespace godot;

void register_classes_AnimationNodeBlendSpace1DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeBlendSpace1D>>("AnimationNodeBlendSpace1DRef").constructor<AnimationNodeBlendSpace1D *>();
}