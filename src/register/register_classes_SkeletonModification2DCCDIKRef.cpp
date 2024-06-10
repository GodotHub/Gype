#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_modification2dccdik.hpp>

using namespace godot;

void register_classes_SkeletonModification2DCCDIKRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonModification2DCCDIK>>("SkeletonModification2DCCDIKRef").constructor<SkeletonModification2DCCDIK *>();
}