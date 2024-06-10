#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_time_scale.hpp>

using namespace godot;

void register_classes_AnimationNodeTimeScaleRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeTimeScale>>("AnimationNodeTimeScaleRef").constructor<AnimationNodeTimeScale *>();
}