#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_add3.hpp>

using namespace godot;

void register_classes_AnimationNodeAdd3Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimationNodeAdd3>>("AnimationNodeAdd3Ref").constructor<AnimationNodeAdd3 *>();
}