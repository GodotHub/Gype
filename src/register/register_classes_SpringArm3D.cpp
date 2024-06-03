#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_SpringArm3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<SpringArm3D>("SpringArm3D")
           .constructor<>()
           .property<SpringArm3D::get_collision_mask, SpringArm3D::set_collision_mask>("collision_mask")
           .property<SpringArm3D::get_shape, SpringArm3D::set_shape>("shape")
           .property<SpringArm3D::get_length, SpringArm3D::set_length>("spring_length")
           .property<SpringArm3D::get_margin, SpringArm3D::set_margin>("margin")
		   .fun<static_cast<double(SpringArm3D::*)()>(&SpringArm3D::get_hit_length)>("get_hit_length")
		   .fun<static_cast<void(SpringArm3D::*)(const RID &)>(&SpringArm3D::add_excluded_object)>("add_excluded_object")
		   .fun<static_cast<bool(SpringArm3D::*)(const RID &)>(&SpringArm3D::remove_excluded_object)>("remove_excluded_object")
		   .fun<static_cast<void(SpringArm3D::*)()>(&SpringArm3D::clear_excluded_objects)>("clear_excluded_objects")
;}