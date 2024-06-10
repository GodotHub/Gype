#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_profile_humanoid.hpp>

using namespace godot;

void register_classes_SkeletonProfileHumanoidRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonProfileHumanoid>>("SkeletonProfileHumanoidRef").constructor<SkeletonProfileHumanoid *>();
}