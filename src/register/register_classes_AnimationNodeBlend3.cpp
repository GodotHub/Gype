#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_blend3.hpp>

using namespace godot;

void register_classes_AnimationNodeBlend3() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeBlend3>("AnimationNodeBlend3")
           .constructor<>()
;}