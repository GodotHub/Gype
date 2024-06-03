#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/generic6dof_joint3d.hpp>

using namespace godot;

void register_classes_Generic6DOFJoint3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<Generic6DOFJoint3D>("Generic6DOFJoint3D")
           .constructor<>()
		    .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param,double)>(&Generic6DOFJoint3D::set_param_x)>("set_param_x")
		    .fun<static_cast<double(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param)const>(&Generic6DOFJoint3D::get_param_x)>("get_param_x")
		    .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param,double)>(&Generic6DOFJoint3D::set_param_y)>("set_param_y")
		    .fun<static_cast<double(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param)const>(&Generic6DOFJoint3D::get_param_y)>("get_param_y")
		    .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param,double)>(&Generic6DOFJoint3D::set_param_z)>("set_param_z")
		    .fun<static_cast<double(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Param)const>(&Generic6DOFJoint3D::get_param_z)>("get_param_z")
		    .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag,bool)>(&Generic6DOFJoint3D::set_flag_x)>("set_flag_x")
		    .fun<static_cast<bool(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag)const>(&Generic6DOFJoint3D::get_flag_x)>("get_flag_x")
		    .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag,bool)>(&Generic6DOFJoint3D::set_flag_y)>("set_flag_y")
		    .fun<static_cast<bool(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag)const>(&Generic6DOFJoint3D::get_flag_y)>("get_flag_y")
		    .fun<static_cast<void(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag,bool)>(&Generic6DOFJoint3D::set_flag_z)>("set_flag_z")
		    .fun<static_cast<bool(Generic6DOFJoint3D::*)(Generic6DOFJoint3D::Flag)const>(&Generic6DOFJoint3D::get_flag_z)>("get_flag_z")
;}