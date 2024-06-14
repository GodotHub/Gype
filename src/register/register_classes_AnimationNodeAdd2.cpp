#include <godot_cpp/classes/animation_node_add2.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeAdd2() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeAdd2>("AnimationNodeAdd2")
            .constructor<>()
            .base<AnimationNodeSync>()
;}