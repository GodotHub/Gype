#include <godot_cpp/classes/animation_node_blend2.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeBlend2() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeBlend2>("AnimationNodeBlend2")
            .constructor<>()
            .base<AnimationNodeSync>()
;}