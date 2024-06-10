#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_profile.hpp>

using namespace godot;

void register_classes_SkeletonProfileRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonProfile>>("SkeletonProfileRef").constructor<SkeletonProfile *>();
}