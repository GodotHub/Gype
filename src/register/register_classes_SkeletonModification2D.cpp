#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModification2D>("SkeletonModification2D")
			.constructor<>()
			.property<&SkeletonModification2D::get_enabled, &SkeletonModification2D::set_enabled>("enabled")
			.property<&SkeletonModification2D::get_execution_mode, &SkeletonModification2D::set_execution_mode>("execution_mode")
			.fun<static_cast<void (SkeletonModification2D::*)(double)>(&SkeletonModification2D::_execute)>("_execute")
			.fun<static_cast<void (SkeletonModification2D::*)(const Ref<SkeletonModificationStack2D> &)>(&SkeletonModification2D::_setup_modification)>("_setup_modification")
			.fun<static_cast<void (SkeletonModification2D::*)()>(&SkeletonModification2D::_draw_editor_gizmo)>("_draw_editor_gizmo")
			.fun<static_cast<Ref<SkeletonModificationStack2D> (SkeletonModification2D::*)()>(&SkeletonModification2D::get_modification_stack)>("get_modification_stack")
			.fun<static_cast<void (SkeletonModification2D::*)(bool)>(&SkeletonModification2D::set_is_setup)>("set_is_setup")
			.fun<static_cast<bool (SkeletonModification2D::*)() const>(&SkeletonModification2D::get_is_setup)>("get_is_setup")
			.fun<static_cast<double (SkeletonModification2D::*)(double, double, double, bool)>(&SkeletonModification2D::clamp_angle)>("clamp_angle")
			.fun<static_cast<void (SkeletonModification2D::*)(bool)>(&SkeletonModification2D::set_editor_draw_gizmo)>("set_editor_draw_gizmo")
			.fun<static_cast<bool (SkeletonModification2D::*)() const>(&SkeletonModification2D::get_editor_draw_gizmo)>("get_editor_draw_gizmo");
}