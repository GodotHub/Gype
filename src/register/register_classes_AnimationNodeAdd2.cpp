#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_add2.hpp>

using namespace godot;

void register_classes_AnimationNodeAdd2() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeAdd2>("AnimationNodeAdd2")
           .constructor<>()
;}