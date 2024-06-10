#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_modification2d_jiggle.hpp>

using namespace godot;

void register_classes_SkeletonModification2DJiggleRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonModification2DJiggle>>("SkeletonModification2DJiggleRef").constructor<SkeletonModification2DJiggle *>();
}