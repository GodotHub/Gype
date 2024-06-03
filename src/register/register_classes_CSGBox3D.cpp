#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_CSGBox3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<CSGBox3D>("CSGBox3D")
           .constructor<>()
           .property<CSGBox3D::get_size, CSGBox3D::set_size>("size")
           .property<CSGBox3D::get_material, CSGBox3D::set_material>("material")
;}