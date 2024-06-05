#include <godot_cpp/classes/grid_map.hpp>
#include <godot_cpp/classes/mesh_library.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/variant/vector3i.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GridMap() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<GridMap>("GridMap")
			.constructor<>()
			.property<&GridMap::get_mesh_library, &GridMap::set_mesh_library>("mesh_library")
			.property<&GridMap::get_physics_material, &GridMap::set_physics_material>("physics_material")
			.property<&GridMap::get_cell_size, &GridMap::set_cell_size>("cell_size")
			.property<&GridMap::get_octant_size, &GridMap::set_octant_size>("cell_octant_size")
			.property<&GridMap::get_center_x, &GridMap::set_center_x>("cell_center_x")
			.property<&GridMap::get_center_y, &GridMap::set_center_y>("cell_center_y")
			.property<&GridMap::get_center_z, &GridMap::set_center_z>("cell_center_z")
			.property<&GridMap::get_cell_scale, &GridMap::set_cell_scale>("cell_scale")
			.property<&GridMap::get_collision_layer, &GridMap::set_collision_layer>("collision_layer")
			.property<&GridMap::get_collision_mask, &GridMap::set_collision_mask>("collision_mask")
			.property<&GridMap::get_collision_priority, &GridMap::set_collision_priority>("collision_priority")
			.property<&GridMap::is_baking_navigation, &GridMap::set_bake_navigation>("bake_navigation")
			.fun<static_cast<void (GridMap::*)(int32_t, bool)>(&GridMap::set_collision_mask_value)>("set_collision_mask_value")
			.fun<static_cast<bool (GridMap::*)(int32_t) const>(&GridMap::get_collision_mask_value)>("get_collision_mask_value")
			.fun<static_cast<void (GridMap::*)(int32_t, bool)>(&GridMap::set_collision_layer_value)>("set_collision_layer_value")
			.fun<static_cast<bool (GridMap::*)(int32_t) const>(&GridMap::get_collision_layer_value)>("get_collision_layer_value")
			.fun<static_cast<void (GridMap::*)(const RID &)>(&GridMap::set_navigation_map)>("set_navigation_map")
			.fun<static_cast<RID (GridMap::*)() const>(&GridMap::get_navigation_map)>("get_navigation_map")
			.fun<static_cast<void (GridMap::*)(const Vector3i &, int32_t, int32_t)>(&GridMap::set_cell_item)>("set_cell_item")
			.fun<static_cast<int32_t (GridMap::*)(const Vector3i &) const>(&GridMap::get_cell_item)>("get_cell_item")
			.fun<static_cast<int32_t (GridMap::*)(const Vector3i &) const>(&GridMap::get_cell_item_orientation)>("get_cell_item_orientation")
			.fun<static_cast<Basis (GridMap::*)(const Vector3i &) const>(&GridMap::get_cell_item_basis)>("get_cell_item_basis")
			.fun<static_cast<Basis (GridMap::*)(int32_t) const>(&GridMap::get_basis_with_orthogonal_index)>("get_basis_with_orthogonal_index")
			.fun<static_cast<int32_t (GridMap::*)(const Basis &) const>(&GridMap::get_orthogonal_index_from_basis)>("get_orthogonal_index_from_basis")
			.fun<static_cast<Vector3i (GridMap::*)(const Vector3 &) const>(&GridMap::local_to_map)>("local_to_map")
			.fun<static_cast<Vector3 (GridMap::*)(const Vector3i &) const>(&GridMap::map_to_local)>("map_to_local")
			.fun<static_cast<void (GridMap::*)(const Ref<Resource> &)>(&GridMap::resource_changed)>("resource_changed")
			.fun<static_cast<void (GridMap::*)()>(&GridMap::clear)>("clear")
			.fun<static_cast<TypedArray<Vector3i> (GridMap::*)() const>(&GridMap::get_used_cells)>("get_used_cells")
			.fun<static_cast<TypedArray<Vector3i> (GridMap::*)(int32_t) const>(&GridMap::get_used_cells_by_item)>("get_used_cells_by_item")
			.fun<static_cast<Array (GridMap::*)() const>(&GridMap::get_meshes)>("get_meshes")
			.fun<static_cast<Array (GridMap::*)()>(&GridMap::get_bake_meshes)>("get_bake_meshes")
			.fun<static_cast<RID (GridMap::*)(int32_t)>(&GridMap::get_bake_mesh_instance)>("get_bake_mesh_instance")
			.fun<static_cast<void (GridMap::*)()>(&GridMap::clear_baked_meshes)>("clear_baked_meshes")
			.fun<static_cast<void (GridMap::*)(bool, double)>(&GridMap::make_baked_meshes)>("make_baked_meshes");
}