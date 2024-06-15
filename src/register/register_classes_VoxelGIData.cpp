#include <godot_cpp/classes/voxel_gi_data.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VoxelGIData() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<VoxelGIData>("VoxelGIData")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<double(VoxelGIData::*)()const>(&VoxelGIData::get_dynamic_range),static_cast<void(VoxelGIData::*)(double)>(&VoxelGIData::set_dynamic_range)>("dynamic_range")
            .property<static_cast<double(VoxelGIData::*)()const>(&VoxelGIData::get_energy),static_cast<void(VoxelGIData::*)(double)>(&VoxelGIData::set_energy)>("energy")
            .property<static_cast<double(VoxelGIData::*)()const>(&VoxelGIData::get_bias),static_cast<void(VoxelGIData::*)(double)>(&VoxelGIData::set_bias)>("bias")
            .property<static_cast<double(VoxelGIData::*)()const>(&VoxelGIData::get_normal_bias),static_cast<void(VoxelGIData::*)(double)>(&VoxelGIData::set_normal_bias)>("normal_bias")
            .property<static_cast<double(VoxelGIData::*)()const>(&VoxelGIData::get_propagation),static_cast<void(VoxelGIData::*)(double)>(&VoxelGIData::set_propagation)>("propagation")
            .property<static_cast<bool(VoxelGIData::*)()const>(&VoxelGIData::is_using_two_bounces),static_cast<void(VoxelGIData::*)(bool)>(&VoxelGIData::set_use_two_bounces)>("use_two_bounces")
            .property<static_cast<bool(VoxelGIData::*)()const>(&VoxelGIData::is_interior),static_cast<void(VoxelGIData::*)(bool)>(&VoxelGIData::set_interior)>("interior")
            .fun<static_cast<void(VoxelGIData::*)(const Transform3D &,const AABB &,const Vector3 &,const PackedByteArray &,const PackedByteArray &,const PackedByteArray &,const PackedInt32Array &)>(&VoxelGIData::allocate)>("allocate")
            .fun<static_cast<AABB(VoxelGIData::*)()const>(&VoxelGIData::get_bounds)>("get_bounds")
            .fun<static_cast<Vector3(VoxelGIData::*)()const>(&VoxelGIData::get_octree_size)>("get_octree_size")
            .fun<static_cast<Transform3D(VoxelGIData::*)()const>(&VoxelGIData::get_to_cell_xform)>("get_to_cell_xform")
            .fun<static_cast<PackedByteArray(VoxelGIData::*)()const>(&VoxelGIData::get_octree_cells)>("get_octree_cells")
            .fun<static_cast<PackedByteArray(VoxelGIData::*)()const>(&VoxelGIData::get_data_cells)>("get_data_cells")
            .fun<static_cast<PackedInt32Array(VoxelGIData::*)()const>(&VoxelGIData::get_level_counts)>("get_level_counts")
;}