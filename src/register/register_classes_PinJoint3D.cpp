#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_PinJoint3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<PinJoint3D>("PinJoint3D")
           .constructor<>()
		   .fun<static_cast<void(PinJoint3D::*)(PinJoint3D::Param,double)>(&PinJoint3D::set_param)>("set_param")
		   .fun<static_cast<double(PinJoint3D::*)(PinJoint3D::Param)const>(&PinJoint3D::get_param)>("get_param")
;}