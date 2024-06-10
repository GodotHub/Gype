#include <godot_cpp/classes/skeleton_profile_humanoid.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonProfileHumanoid() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonProfileHumanoid>("SkeletonProfileHumanoid")
			.constructor<>();
}