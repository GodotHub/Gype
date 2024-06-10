#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_animation.hpp>

using namespace godot;

void register_classes_GLTFAnimationRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFAnimation>>("GLTFAnimationRef").constructor<GLTFAnimation *>();
}