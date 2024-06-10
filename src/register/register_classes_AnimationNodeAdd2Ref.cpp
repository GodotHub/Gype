#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_add2.hpp>

using namespace godot;

void register_classes_AnimationNodeAdd2Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeAdd2>>("AnimationNodeAdd2Ref").constructor<AnimationNodeAdd2 *>();
}