#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_WorldEnvironment() {
    qjs::Context::Module &_module = _Node;
    _module.class_<WorldEnvironment>("WorldEnvironment")
           .constructor<>()
           .property<WorldEnvironment::get_environment, WorldEnvironment::set_environment>("environment")
           .property<WorldEnvironment::get_camera_attributes, WorldEnvironment::set_camera_attributes>("camera_attributes")
;}