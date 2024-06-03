#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_SliderJoint3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<SliderJoint3D>("SliderJoint3D")
           .constructor<>()
		   .fun<static_cast<void(SliderJoint3D::*)(SliderJoint3D::Param,double)>(&SliderJoint3D::set_param)>("set_param")
		   .fun<static_cast<double(SliderJoint3D::*)(SliderJoint3D::Param)const>(&SliderJoint3D::get_param)>("get_param")
;}