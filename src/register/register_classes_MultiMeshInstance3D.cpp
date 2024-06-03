#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_MultiMeshInstance3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<MultiMeshInstance3D>("MultiMeshInstance3D")
           .constructor<>()
           .property<MultiMeshInstance3D::get_multimesh, MultiMeshInstance3D::set_multimesh>("multimesh")
;}