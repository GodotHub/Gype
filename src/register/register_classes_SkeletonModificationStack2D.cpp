
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModificationStack2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModificationStack2D>("SkeletonModificationStack2D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<bool (SkeletonModificationStack2D::*)() const>(&SkeletonModificationStack2D::get_enabled), static_cast<void (SkeletonModificationStack2D::*)(bool)>(&SkeletonModificationStack2D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<double (SkeletonModificationStack2D::*)() const>(&SkeletonModificationStack2D::get_strength), static_cast<void (SkeletonModificationStack2D::*)(double)>(&SkeletonModificationStack2D::set_strength)>((new std::string("strength"))->c_str())
			.property<static_cast<int32_t (SkeletonModificationStack2D::*)() const>(&SkeletonModificationStack2D::get_modification_count), static_cast<void (SkeletonModificationStack2D::*)(int32_t)>(&SkeletonModificationStack2D::set_modification_count)>((new std::string("modification_count"))->c_str())
			.fun<static_cast<void (SkeletonModificationStack2D::*)()>(&SkeletonModificationStack2D::setup)>((new std::string("setup"))->c_str())
			.fun<static_cast<void (SkeletonModificationStack2D::*)(double, int32_t)>(&SkeletonModificationStack2D::execute)>((new std::string("execute"))->c_str())
			.fun<static_cast<void (SkeletonModificationStack2D::*)(bool)>(&SkeletonModificationStack2D::enable_all_modifications)>((new std::string("enable_all_modifications"))->c_str())
			.fun<static_cast<Ref<SkeletonModification2D> (SkeletonModificationStack2D::*)(int32_t) const>(&SkeletonModificationStack2D::get_modification)>((new std::string("get_modification"))->c_str())
			.fun<static_cast<void (SkeletonModificationStack2D::*)(const Ref<SkeletonModification2D> &)>(&SkeletonModificationStack2D::add_modification)>((new std::string("add_modification"))->c_str())
			.fun<static_cast<void (SkeletonModificationStack2D::*)(int32_t)>(&SkeletonModificationStack2D::delete_modification)>((new std::string("delete_modification"))->c_str())
			.fun<static_cast<void (SkeletonModificationStack2D::*)(int32_t, const Ref<SkeletonModification2D> &)>(&SkeletonModificationStack2D::set_modification)>((new std::string("set_modification"))->c_str())
			.fun<static_cast<bool (SkeletonModificationStack2D::*)() const>(&SkeletonModificationStack2D::get_is_setup)>((new std::string("get_is_setup"))->c_str())
			.fun<static_cast<Skeleton2D *(SkeletonModificationStack2D::*)() const>(&SkeletonModificationStack2D::get_skeleton)>((new std::string("get_skeleton"))->c_str());
}