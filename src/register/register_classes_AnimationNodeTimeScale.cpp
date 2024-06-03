#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_time_scale.hpp>

using namespace godot;

void register_classes_AnimationNodeTimeScale() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeTimeScale>("AnimationNodeTimeScale")
           .constructor<>()
;}