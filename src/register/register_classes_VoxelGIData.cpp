#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/voxel_gi_data.hpp>

using namespace godot;

void register_classes_VoxelGIData() {
    qjs::Context::Module &_module = _General;
    _module.class_<VoxelGIData>("VoxelGIData")
           .constructor<>()
           .property<VoxelGIData::get_dynamic_range, VoxelGIData::set_dynamic_range>("dynamic_range")
           .property<VoxelGIData::get_energy, VoxelGIData::set_energy>("energy")
           .property<VoxelGIData::get_bias, VoxelGIData::set_bias>("bias")
           .property<VoxelGIData::get_normal_bias, VoxelGIData::set_normal_bias>("normal_bias")
           .property<VoxelGIData::get_propagation, VoxelGIData::set_propagation>("propagation")
           .property<VoxelGIData::is_using_two_bounces, VoxelGIData::set_use_two_bounces>("use_two_bounces")
           .property<VoxelGIData::is_interior, VoxelGIData::set_interior>("interior")
		    .fun<static_cast<void(VoxelGIData::*)(const Transform3D &,const AABB &,const Vector3 &,const PackedByteArray &,const PackedByteArray &,const PackedByteArray &,const PackedInt32Array &)>(&VoxelGIData::allocate)>("allocate")
		    .fun<static_cast<AABB(VoxelGIData::*)()const>(&VoxelGIData::get_bounds)>("get_bounds")
		    .fun<static_cast<Vector3(VoxelGIData::*)()const>(&VoxelGIData::get_octree_size)>("get_octree_size")
		    .fun<static_cast<Transform3D(VoxelGIData::*)()const>(&VoxelGIData::get_to_cell_xform)>("get_to_cell_xform")
		    .fun<static_cast<PackedByteArray(VoxelGIData::*)()const>(&VoxelGIData::get_octree_cells)>("get_octree_cells")
		    .fun<static_cast<PackedByteArray(VoxelGIData::*)()const>(&VoxelGIData::get_data_cells)>("get_data_cells")
		    .fun<static_cast<PackedInt32Array(VoxelGIData::*)()const>(&VoxelGIData::get_level_counts)>("get_level_counts")
;}