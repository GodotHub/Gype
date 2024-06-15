#include <godot_cpp/classes/occluder_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OccluderInstance3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<OccluderInstance3D>("OccluderInstance3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<Ref<Occluder3D>(OccluderInstance3D::*)()const>(&OccluderInstance3D::get_occluder),static_cast<void(OccluderInstance3D::*)(const Ref<Occluder3D> &)>(&OccluderInstance3D::set_occluder)>("occluder")
            .property<static_cast<uint32_t(OccluderInstance3D::*)()const>(&OccluderInstance3D::get_bake_mask),static_cast<void(OccluderInstance3D::*)(uint32_t)>(&OccluderInstance3D::set_bake_mask)>("bake_mask")
            .property<static_cast<double(OccluderInstance3D::*)()const>(&OccluderInstance3D::get_bake_simplification_distance),static_cast<void(OccluderInstance3D::*)(double)>(&OccluderInstance3D::set_bake_simplification_distance)>("bake_simplification_distance")
            .fun<static_cast<void(OccluderInstance3D::*)(int32_t,bool)>(&OccluderInstance3D::set_bake_mask_value)>("set_bake_mask_value")
            .fun<static_cast<bool(OccluderInstance3D::*)(int32_t)const>(&OccluderInstance3D::get_bake_mask_value)>("get_bake_mask_value")
;}