#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_VisibleOnScreenEnabler3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<VisibleOnScreenEnabler3D>("VisibleOnScreenEnabler3D")
           .constructor<>()
           .property<VisibleOnScreenEnabler3D::get_enable_mode, VisibleOnScreenEnabler3D::set_enable_mode>("enable_mode")
           .property<VisibleOnScreenEnabler3D::get_enable_node_path, VisibleOnScreenEnabler3D::set_enable_node_path>("enable_node_path")
;}