#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_sync.hpp>

using namespace godot;

void register_classes_AnimationNodeSync() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeSync>("AnimationNodeSync")
           .constructor<>()
           .property<AnimationNodeSync::is_using_sync, AnimationNodeSync::set_use_sync>("sync")
;}