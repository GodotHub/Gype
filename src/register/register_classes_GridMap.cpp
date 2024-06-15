#include <godot_cpp/classes/grid_map.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <godot_cpp/classes/mesh_library.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GridMap() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<GridMap>("GridMap")
            .constructor<>()
            .base<Node3D>()
            .static_fun<&GridMap::INVALID_CELL_ITEM>("INVALID_CELL_ITEM")
            .property<static_cast<Ref<MeshLibrary>(GridMap::*)()const>(&GridMap::get_mesh_library),static_cast<void(GridMap::*)(const Ref<MeshLibrary> &)>(&GridMap::set_mesh_library)>("mesh_library")
            .property<static_cast<Ref<PhysicsMaterial>(GridMap::*)()const>(&GridMap::get_physics_material),static_cast<void(GridMap::*)(const Ref<PhysicsMaterial> &)>(&GridMap::set_physics_material)>("physics_material")
            .property<static_cast<Vector3(GridMap::*)()const>(&GridMap::get_cell_size),static_cast<void(GridMap::*)(const Vector3 &)>(&GridMap::set_cell_size)>("cell_size")
            .property<static_cast<int32_t(GridMap::*)()const>(&GridMap::get_octant_size),static_cast<void(GridMap::*)(int32_t)>(&GridMap::set_octant_size)>("cell_octant_size")
            .property<static_cast<bool(GridMap::*)()const>(&GridMap::get_center_x),static_cast<void(GridMap::*)(bool)>(&GridMap::set_center_x)>("cell_center_x")
            .property<static_cast<bool(GridMap::*)()const>(&GridMap::get_center_y),static_cast<void(GridMap::*)(bool)>(&GridMap::set_center_y)>("cell_center_y")
            .property<static_cast<bool(GridMap::*)()const>(&GridMap::get_center_z),static_cast<void(GridMap::*)(bool)>(&GridMap::set_center_z)>("cell_center_z")
            .property<static_cast<double(GridMap::*)()const>(&GridMap::get_cell_scale),static_cast<void(GridMap::*)(double)>(&GridMap::set_cell_scale)>("cell_scale")
            .property<static_cast<uint32_t(GridMap::*)()const>(&GridMap::get_collision_layer),static_cast<void(GridMap::*)(uint32_t)>(&GridMap::set_collision_layer)>("collision_layer")
            .property<static_cast<uint32_t(GridMap::*)()const>(&GridMap::get_collision_mask),static_cast<void(GridMap::*)(uint32_t)>(&GridMap::set_collision_mask)>("collision_mask")
            .property<static_cast<double(GridMap::*)()const>(&GridMap::get_collision_priority),static_cast<void(GridMap::*)(double)>(&GridMap::set_collision_priority)>("collision_priority")
            .property<static_cast<bool(GridMap::*)()>(&GridMap::is_baking_navigation),static_cast<void(GridMap::*)(bool)>(&GridMap::set_bake_navigation)>("bake_navigation")
            .fun<static_cast<void(GridMap::*)(int32_t,bool)>(&GridMap::set_collision_mask_value)>("set_collision_mask_value")
            .fun<static_cast<bool(GridMap::*)(int32_t)const>(&GridMap::get_collision_mask_value)>("get_collision_mask_value")
            .fun<static_cast<void(GridMap::*)(int32_t,bool)>(&GridMap::set_collision_layer_value)>("set_collision_layer_value")
            .fun<static_cast<bool(GridMap::*)(int32_t)const>(&GridMap::get_collision_layer_value)>("get_collision_layer_value")
            .fun<static_cast<void(GridMap::*)(const RID &)>(&GridMap::set_navigation_map)>("set_navigation_map")
            .fun<static_cast<RID(GridMap::*)()const>(&GridMap::get_navigation_map)>("get_navigation_map")
            .fun<static_cast<void(GridMap::*)(const Vector3i &,int32_t,int32_t)>(&GridMap::set_cell_item)>("set_cell_item")
            .fun<static_cast<int32_t(GridMap::*)(const Vector3i &)const>(&GridMap::get_cell_item)>("get_cell_item")
            .fun<static_cast<int32_t(GridMap::*)(const Vector3i &)const>(&GridMap::get_cell_item_orientation)>("get_cell_item_orientation")
            .fun<static_cast<Basis(GridMap::*)(const Vector3i &)const>(&GridMap::get_cell_item_basis)>("get_cell_item_basis")
            .fun<static_cast<Basis(GridMap::*)(int32_t)const>(&GridMap::get_basis_with_orthogonal_index)>("get_basis_with_orthogonal_index")
            .fun<static_cast<int32_t(GridMap::*)(const Basis &)const>(&GridMap::get_orthogonal_index_from_basis)>("get_orthogonal_index_from_basis")
            .fun<static_cast<Vector3i(GridMap::*)(const Vector3 &)const>(&GridMap::local_to_map)>("local_to_map")
            .fun<static_cast<Vector3(GridMap::*)(const Vector3i &)const>(&GridMap::map_to_local)>("map_to_local")
            .fun<static_cast<void(GridMap::*)(const Ref<Resource> &)>(&GridMap::resource_changed)>("resource_changed")
            .fun<static_cast<void(GridMap::*)()>(&GridMap::clear)>("clear")
            .fun<static_cast<TypedArray<Vector3i>(GridMap::*)()const>(&GridMap::get_used_cells)>("get_used_cells")
            .fun<static_cast<TypedArray<Vector3i>(GridMap::*)(int32_t)const>(&GridMap::get_used_cells_by_item)>("get_used_cells_by_item")
            .fun<static_cast<Array(GridMap::*)()const>(&GridMap::get_meshes)>("get_meshes")
            .fun<static_cast<Array(GridMap::*)()>(&GridMap::get_bake_meshes)>("get_bake_meshes")
            .fun<static_cast<RID(GridMap::*)(int32_t)>(&GridMap::get_bake_mesh_instance)>("get_bake_mesh_instance")
            .fun<static_cast<void(GridMap::*)()>(&GridMap::clear_baked_meshes)>("clear_baked_meshes")
            .fun<static_cast<void(GridMap::*)(bool,double)>(&GridMap::make_baked_meshes)>("make_baked_meshes")
;}