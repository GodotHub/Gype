#include <godot_cpp/classes/csg_shape3d.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/variant/array.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CSGShape3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CSGShape3D>("CSGShape3D")
            .constructor<>()
            .base<GeometryInstance3D>()
            .property<static_cast<CSGShape3D::Operation(CSGShape3D::*)()const>(&CSGShape3D::get_operation),static_cast<void(CSGShape3D::*)(CSGShape3D::Operation)>(&CSGShape3D::set_operation)>("operation")
            .property<static_cast<double(CSGShape3D::*)()const>(&CSGShape3D::get_snap),static_cast<void(CSGShape3D::*)(double)>(&CSGShape3D::set_snap)>("snap")
            .property<static_cast<bool(CSGShape3D::*)()const>(&CSGShape3D::is_calculating_tangents),static_cast<void(CSGShape3D::*)(bool)>(&CSGShape3D::set_calculate_tangents)>("calculate_tangents")
            .property<static_cast<bool(CSGShape3D::*)()const>(&CSGShape3D::is_using_collision),static_cast<void(CSGShape3D::*)(bool)>(&CSGShape3D::set_use_collision)>("use_collision")
            .property<static_cast<uint32_t(CSGShape3D::*)()const>(&CSGShape3D::get_collision_layer),static_cast<void(CSGShape3D::*)(uint32_t)>(&CSGShape3D::set_collision_layer)>("collision_layer")
            .property<static_cast<uint32_t(CSGShape3D::*)()const>(&CSGShape3D::get_collision_mask),static_cast<void(CSGShape3D::*)(uint32_t)>(&CSGShape3D::set_collision_mask)>("collision_mask")
            .property<static_cast<double(CSGShape3D::*)()const>(&CSGShape3D::get_collision_priority),static_cast<void(CSGShape3D::*)(double)>(&CSGShape3D::set_collision_priority)>("collision_priority")
            .fun<static_cast<bool(CSGShape3D::*)()const>(&CSGShape3D::is_root_shape)>("is_root_shape")
            .fun<static_cast<void(CSGShape3D::*)(int32_t,bool)>(&CSGShape3D::set_collision_mask_value)>("set_collision_mask_value")
            .fun<static_cast<bool(CSGShape3D::*)(int32_t)const>(&CSGShape3D::get_collision_mask_value)>("get_collision_mask_value")
            .fun<static_cast<void(CSGShape3D::*)(int32_t,bool)>(&CSGShape3D::set_collision_layer_value)>("set_collision_layer_value")
            .fun<static_cast<bool(CSGShape3D::*)(int32_t)const>(&CSGShape3D::get_collision_layer_value)>("get_collision_layer_value")
            .fun<static_cast<Array(CSGShape3D::*)()const>(&CSGShape3D::get_meshes)>("get_meshes")
;    qjs::Value _Operation = context->newObject();
    _Operation["OPERATION_UNION"] = CSGShape3D::Operation::OPERATION_UNION;
    _Operation["OPERATION_INTERSECTION"] = CSGShape3D::Operation::OPERATION_INTERSECTION;
    _Operation["OPERATION_SUBTRACTION"] = CSGShape3D::Operation::OPERATION_SUBTRACTION;
    _module.add("Operation", std::move(_Operation));
}