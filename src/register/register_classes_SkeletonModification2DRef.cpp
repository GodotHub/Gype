#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_modification2d.hpp>

using namespace godot;

void register_classes_SkeletonModification2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonModification2D>>("SkeletonModification2DRef").constructor<SkeletonModification2D *>();
}