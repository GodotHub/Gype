#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skeleton2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModificationStack2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModificationStack2D>("SkeletonModificationStack2D")
			.constructor<>()
			.property<&SkeletonModificationStack2D::get_enabled, &SkeletonModificationStack2D::set_enabled>("enabled")
			.property<&SkeletonModificationStack2D::get_strength, &SkeletonModificationStack2D::set_strength>("strength")
			.property<&SkeletonModificationStack2D::get_modification_count, &SkeletonModificationStack2D::set_modification_count>("modification_count")
			.fun<static_cast<void (SkeletonModificationStack2D::*)()>(&SkeletonModificationStack2D::setup)>("setup")
			.fun<static_cast<void (SkeletonModificationStack2D::*)(double, int32_t)>(&SkeletonModificationStack2D::execute)>("execute")
			.fun<static_cast<void (SkeletonModificationStack2D::*)(bool)>(&SkeletonModificationStack2D::enable_all_modifications)>("enable_all_modifications")
			.fun<static_cast<Ref<SkeletonModification2D> (SkeletonModificationStack2D::*)(int32_t) const>(&SkeletonModificationStack2D::get_modification)>("get_modification")
			.fun<static_cast<void (SkeletonModificationStack2D::*)(const Ref<SkeletonModification2D> &)>(&SkeletonModificationStack2D::add_modification)>("add_modification")
			.fun<static_cast<void (SkeletonModificationStack2D::*)(int32_t)>(&SkeletonModificationStack2D::delete_modification)>("delete_modification")
			.fun<static_cast<void (SkeletonModificationStack2D::*)(int32_t, const Ref<SkeletonModification2D> &)>(&SkeletonModificationStack2D::set_modification)>("set_modification")
			.fun<static_cast<bool (SkeletonModificationStack2D::*)() const>(&SkeletonModificationStack2D::get_is_setup)>("get_is_setup")
			.fun<static_cast<Skeleton2D *(SkeletonModificationStack2D::*)() const>(&SkeletonModificationStack2D::get_skeleton)>("get_skeleton");
}