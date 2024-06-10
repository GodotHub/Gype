#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>

using namespace godot;

void register_classes_SkeletonModificationStack2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonModificationStack2D>>("SkeletonModificationStack2DRef").constructor<SkeletonModificationStack2D *>();
}