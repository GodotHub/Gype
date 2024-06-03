#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/mesh_instance2d.hpp>

using namespace godot;

void register_classes_MeshInstance2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<MeshInstance2D>("MeshInstance2D")
           .constructor<>()
           .property<MeshInstance2D::get_mesh, MeshInstance2D::set_mesh>("mesh")
           .property<MeshInstance2D::get_texture, MeshInstance2D::set_texture>("texture")
;}