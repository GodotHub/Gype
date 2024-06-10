#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_modification2d_two_bone_ik.hpp>

using namespace godot;

void register_classes_SkeletonModification2DTwoBoneIKRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonModification2DTwoBoneIK>>("SkeletonModification2DTwoBoneIKRef").constructor<SkeletonModification2DTwoBoneIK *>();
}