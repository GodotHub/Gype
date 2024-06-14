
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModification2D>("SkeletonModification2D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<bool (SkeletonModification2D::*)()>(&SkeletonModification2D::get_enabled), static_cast<void (SkeletonModification2D::*)(bool)>(&SkeletonModification2D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<int32_t (SkeletonModification2D::*)() const>(&SkeletonModification2D::get_execution_mode), static_cast<void (SkeletonModification2D::*)(int32_t)>(&SkeletonModification2D::set_execution_mode)>((new std::string("execution_mode"))->c_str())
			.fun<static_cast<void (SkeletonModification2D::*)(double)>(&SkeletonModification2D::_execute)>((new std::string("_execute"))->c_str())
			.fun<static_cast<void (SkeletonModification2D::*)(const Ref<SkeletonModificationStack2D> &)>(&SkeletonModification2D::_setup_modification)>((new std::string("_setup_modification"))->c_str())
			.fun<static_cast<void (SkeletonModification2D::*)()>(&SkeletonModification2D::_draw_editor_gizmo)>((new std::string("_draw_editor_gizmo"))->c_str())
			.fun<static_cast<Ref<SkeletonModificationStack2D> (SkeletonModification2D::*)()>(&SkeletonModification2D::get_modification_stack)>((new std::string("get_modification_stack"))->c_str())
			.fun<static_cast<void (SkeletonModification2D::*)(bool)>(&SkeletonModification2D::set_is_setup)>((new std::string("set_is_setup"))->c_str())
			.fun<static_cast<bool (SkeletonModification2D::*)() const>(&SkeletonModification2D::get_is_setup)>((new std::string("get_is_setup"))->c_str())
			.fun<static_cast<double (SkeletonModification2D::*)(double, double, double, bool)>(&SkeletonModification2D::clamp_angle)>((new std::string("clamp_angle"))->c_str())
			.fun<static_cast<void (SkeletonModification2D::*)(bool)>(&SkeletonModification2D::set_editor_draw_gizmo)>((new std::string("set_editor_draw_gizmo"))->c_str())
			.fun<static_cast<bool (SkeletonModification2D::*)() const>(&SkeletonModification2D::get_editor_draw_gizmo)>((new std::string("get_editor_draw_gizmo"))->c_str());
}