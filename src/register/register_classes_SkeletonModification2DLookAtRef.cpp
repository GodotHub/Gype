#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_modification2d_look_at.hpp>

using namespace godot;

void register_classes_SkeletonModification2DLookAtRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonModification2DLookAt>>("SkeletonModification2DLookAtRef").constructor<SkeletonModification2DLookAt *>();
}