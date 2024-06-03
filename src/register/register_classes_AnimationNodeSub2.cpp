#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_sub2.hpp>

using namespace godot;

void register_classes_AnimationNodeSub2() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeSub2>("AnimationNodeSub2")
           .constructor<>()
;}