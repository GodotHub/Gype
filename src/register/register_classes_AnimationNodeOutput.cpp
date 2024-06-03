#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_output.hpp>

using namespace godot;

void register_classes_AnimationNodeOutput() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeOutput>("AnimationNodeOutput")
           .constructor<>()
;}