#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_modification2dfabrik.hpp>

using namespace godot;

void register_classes_SkeletonModification2DFABRIKRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonModification2DFABRIK>>("SkeletonModification2DFABRIKRef").constructor<SkeletonModification2DFABRIK *>();
}