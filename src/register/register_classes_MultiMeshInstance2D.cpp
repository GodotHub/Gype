#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_MultiMeshInstance2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<MultiMeshInstance2D>("MultiMeshInstance2D")
           .constructor<>()
           .property<MultiMeshInstance2D::get_multimesh, MultiMeshInstance2D::set_multimesh>("multimesh")
           .property<MultiMeshInstance2D::get_texture, MultiMeshInstance2D::set_texture>("texture")
;}