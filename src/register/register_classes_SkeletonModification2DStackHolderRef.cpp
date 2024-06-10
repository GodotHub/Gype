#include "register/register_classes.h"
#include <godot_cpp/classes/skeleton_modification2d_stack_holder.hpp>

using namespace godot;

void register_classes_SkeletonModification2DStackHolderRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkeletonModification2DStackHolder>>("SkeletonModification2DStackHolderRef").constructor<SkeletonModification2DStackHolder *>();
}