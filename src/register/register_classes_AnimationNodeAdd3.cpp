#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_add3.hpp>

using namespace godot;

void register_classes_AnimationNodeAdd3() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeAdd3>("AnimationNodeAdd3")
           .constructor<>()
;}