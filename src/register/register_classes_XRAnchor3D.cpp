#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_XRAnchor3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<XRAnchor3D>("XRAnchor3D")
           .constructor<>()
		   .fun<static_cast<Vector3(XRAnchor3D::*)()const>(&XRAnchor3D::get_size)>("get_size")
		   .fun<static_cast<Plane(XRAnchor3D::*)()const>(&XRAnchor3D::get_plane)>("get_plane")
;}