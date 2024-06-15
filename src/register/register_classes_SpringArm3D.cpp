#include <godot_cpp/classes/spring_arm3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SpringArm3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<SpringArm3D>("SpringArm3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<uint32_t(SpringArm3D::*)()>(&SpringArm3D::get_collision_mask),static_cast<void(SpringArm3D::*)(uint32_t)>(&SpringArm3D::set_collision_mask)>("collision_mask")
            .property<static_cast<Ref<Shape3D>(SpringArm3D::*)()const>(&SpringArm3D::get_shape),static_cast<void(SpringArm3D::*)(const Ref<Shape3D> &)>(&SpringArm3D::set_shape)>("shape")
            .property<static_cast<double(SpringArm3D::*)()const>(&SpringArm3D::get_length),static_cast<void(SpringArm3D::*)(double)>(&SpringArm3D::set_length)>("spring_length")
            .property<static_cast<double(SpringArm3D::*)()>(&SpringArm3D::get_margin),static_cast<void(SpringArm3D::*)(double)>(&SpringArm3D::set_margin)>("margin")
            .fun<static_cast<double(SpringArm3D::*)()>(&SpringArm3D::get_hit_length)>("get_hit_length")
            .fun<static_cast<void(SpringArm3D::*)(const RID &)>(&SpringArm3D::add_excluded_object)>("add_excluded_object")
            .fun<static_cast<bool(SpringArm3D::*)(const RID &)>(&SpringArm3D::remove_excluded_object)>("remove_excluded_object")
            .fun<static_cast<void(SpringArm3D::*)()>(&SpringArm3D::clear_excluded_objects)>("clear_excluded_objects")
;}