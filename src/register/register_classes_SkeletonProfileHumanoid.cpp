#include <godot_cpp/classes/skeleton_profile_humanoid.hpp>
#include <godot_cpp/classes/skeleton_profile.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SkeletonProfileHumanoid() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SkeletonProfileHumanoid>("SkeletonProfileHumanoid")
            .constructor<>()
            .base<SkeletonProfile>()
;}