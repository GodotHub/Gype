#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/occluder_instance3d.hpp>

using namespace godot;

void register_classes_OccluderInstance3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<OccluderInstance3D>("OccluderInstance3D")
           .constructor<>()
           .property<OccluderInstance3D::get_occluder, OccluderInstance3D::set_occluder>("occluder")
           .property<OccluderInstance3D::get_bake_mask, OccluderInstance3D::set_bake_mask>("bake_mask")
           .property<OccluderInstance3D::get_bake_simplification_distance, OccluderInstance3D::set_bake_simplification_distance>("bake_simplification_distance")
		    .fun<static_cast<void(OccluderInstance3D::*)(int32_t,bool)>(&OccluderInstance3D::set_bake_mask_value)>("set_bake_mask_value")
		    .fun<static_cast<bool(OccluderInstance3D::*)(int32_t)const>(&OccluderInstance3D::get_bake_mask_value)>("get_bake_mask_value")
;}