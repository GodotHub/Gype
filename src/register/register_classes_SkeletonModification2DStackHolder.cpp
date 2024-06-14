#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d_stack_holder.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModification2DStackHolder() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SkeletonModification2DStackHolder>("SkeletonModification2DStackHolder")
			.constructor<>()
			.base<SkeletonModification2D>()
			.fun<static_cast<void (SkeletonModification2DStackHolder::*)(const Ref<SkeletonModificationStack2D> &)>(&SkeletonModification2DStackHolder::set_held_modification_stack)>((new std::string("set_held_modification_stack"))->c_str())
			.fun<static_cast<Ref<SkeletonModificationStack2D> (SkeletonModification2DStackHolder::*)() const>(&SkeletonModification2DStackHolder::get_held_modification_stack)>((new std::string("get_held_modification_stack"))->c_str());
}