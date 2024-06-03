#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_root_node.hpp>

using namespace godot;

void register_classes_AnimationRootNode() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationRootNode>("AnimationRootNode")
           .constructor<>()
;}