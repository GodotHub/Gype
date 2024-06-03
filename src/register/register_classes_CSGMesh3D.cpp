#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_CSGMesh3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<CSGMesh3D>("CSGMesh3D")
           .constructor<>()
           .property<CSGMesh3D::get_mesh, CSGMesh3D::set_mesh>("mesh")
           .property<CSGMesh3D::get_material, CSGMesh3D::set_material>("material")
;}