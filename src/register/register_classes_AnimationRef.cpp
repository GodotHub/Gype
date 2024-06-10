#include "register/register_classes.h"
#include <godot_cpp/classes/animation.hpp>

using namespace godot;

void register_classes_AnimationRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Animation>>("AnimationRef").constructor<Animation *>();
}