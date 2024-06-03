#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_DirectionalLight2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<DirectionalLight2D>("DirectionalLight2D")
           .constructor<>()
           .property<DirectionalLight2D::get_height, DirectionalLight2D::set_height>("height")
           .property<DirectionalLight2D::get_max_distance, DirectionalLight2D::set_max_distance>("max_distance")
;}