#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/animation_node.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationRootNode() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationRootNode>("AnimationRootNode")
            .constructor<>()
            .base<AnimationNode>()
;}