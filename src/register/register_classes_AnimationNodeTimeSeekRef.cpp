#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_time_seek.hpp>

using namespace godot;

void register_classes_AnimationNodeTimeSeekRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeTimeSeek>>("AnimationNodeTimeSeekRef").constructor<AnimationNodeTimeSeek *>();
}