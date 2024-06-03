#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/skeleton_profile_humanoid.hpp>

using namespace godot;

void register_classes_SkeletonProfileHumanoid() {
    qjs::Context::Module &_module = _General;
    _module.class_<SkeletonProfileHumanoid>("SkeletonProfileHumanoid")
           .constructor<>()
;}