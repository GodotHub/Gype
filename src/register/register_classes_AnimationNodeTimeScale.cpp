#include <godot_cpp/classes/animation_node_time_scale.hpp>
#include <godot_cpp/classes/animation_node.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeTimeScale() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeTimeScale>("AnimationNodeTimeScale")
            .constructor<>()
            .base<AnimationNode>()
;}