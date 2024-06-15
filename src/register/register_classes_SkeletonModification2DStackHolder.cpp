#include <godot_cpp/classes/skeleton_modification2d_stack_holder.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SkeletonModification2DStackHolder() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SkeletonModification2DStackHolder>("SkeletonModification2DStackHolder")
            .constructor<>()
            .base<SkeletonModification2D>()
            .fun<static_cast<void(SkeletonModification2DStackHolder::*)(const Ref<SkeletonModificationStack2D> &)>(&SkeletonModification2DStackHolder::set_held_modification_stack)>("set_held_modification_stack")
            .fun<static_cast<Ref<SkeletonModificationStack2D>(SkeletonModification2DStackHolder::*)()const>(&SkeletonModification2DStackHolder::get_held_modification_stack)>("get_held_modification_stack")
;}