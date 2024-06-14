
#include <godot_cpp/classes/grid_map.hpp>
#include <godot_cpp/classes/mesh_library.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GridMap() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GridMap>("GridMap")
			.constructor<>()
			.base<Node3D>()
			.static_fun<&GridMap::INVALID_CELL_ITEM>((new std::string("INVALID_CELL_ITEM"))->c_str())
			.property<static_cast<Ref<MeshLibrary> (GridMap::*)() const>(&GridMap::get_mesh_library), static_cast<void (GridMap::*)(const Ref<MeshLibrary> &)>(&GridMap::set_mesh_library)>((new std::string("mesh_library"))->c_str())
			.property<static_cast<Ref<PhysicsMaterial> (GridMap::*)() const>(&GridMap::get_physics_material), static_cast<void (GridMap::*)(const Ref<PhysicsMaterial> &)>(&GridMap::set_physics_material)>((new std::string("physics_material"))->c_str())
			.property<static_cast<Vector3 (GridMap::*)() const>(&GridMap::get_cell_size), static_cast<void (GridMap::*)(const Vector3 &)>(&GridMap::set_cell_size)>((new std::string("cell_size"))->c_str())
			.property<static_cast<int32_t (GridMap::*)() const>(&GridMap::get_octant_size), static_cast<void (GridMap::*)(int32_t)>(&GridMap::set_octant_size)>((new std::string("cell_octant_size"))->c_str())
			.property<static_cast<bool (GridMap::*)() const>(&GridMap::get_center_x), static_cast<void (GridMap::*)(bool)>(&GridMap::set_center_x)>((new std::string("cell_center_x"))->c_str())
			.property<static_cast<bool (GridMap::*)() const>(&GridMap::get_center_y), static_cast<void (GridMap::*)(bool)>(&GridMap::set_center_y)>((new std::string("cell_center_y"))->c_str())
			.property<static_cast<bool (GridMap::*)() const>(&GridMap::get_center_z), static_cast<void (GridMap::*)(bool)>(&GridMap::set_center_z)>((new std::string("cell_center_z"))->c_str())
			.property<static_cast<double (GridMap::*)() const>(&GridMap::get_cell_scale), static_cast<void (GridMap::*)(double)>(&GridMap::set_cell_scale)>((new std::string("cell_scale"))->c_str())
			.property<static_cast<uint32_t (GridMap::*)() const>(&GridMap::get_collision_layer), static_cast<void (GridMap::*)(uint32_t)>(&GridMap::set_collision_layer)>((new std::string("collision_layer"))->c_str())
			.property<static_cast<uint32_t (GridMap::*)() const>(&GridMap::get_collision_mask), static_cast<void (GridMap::*)(uint32_t)>(&GridMap::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<double (GridMap::*)() const>(&GridMap::get_collision_priority), static_cast<void (GridMap::*)(double)>(&GridMap::set_collision_priority)>((new std::string("collision_priority"))->c_str())
			.property<static_cast<bool (GridMap::*)()>(&GridMap::is_baking_navigation), static_cast<void (GridMap::*)(bool)>(&GridMap::set_bake_navigation)>((new std::string("bake_navigation"))->c_str())
			.fun<static_cast<void (GridMap::*)(int32_t, bool)>(&GridMap::set_collision_mask_value)>((new std::string("set_collision_mask_value"))->c_str())
			.fun<static_cast<bool (GridMap::*)(int32_t) const>(&GridMap::get_collision_mask_value)>((new std::string("get_collision_mask_value"))->c_str())
			.fun<static_cast<void (GridMap::*)(int32_t, bool)>(&GridMap::set_collision_layer_value)>((new std::string("set_collision_layer_value"))->c_str())
			.fun<static_cast<bool (GridMap::*)(int32_t) const>(&GridMap::get_collision_layer_value)>((new std::string("get_collision_layer_value"))->c_str())
			.fun<static_cast<void (GridMap::*)(const RID &)>(&GridMap::set_navigation_map)>((new std::string("set_navigation_map"))->c_str())
			.fun<static_cast<RID (GridMap::*)() const>(&GridMap::get_navigation_map)>((new std::string("get_navigation_map"))->c_str())
			.fun<static_cast<void (GridMap::*)(const Vector3i &, int32_t, int32_t)>(&GridMap::set_cell_item)>((new std::string("set_cell_item"))->c_str())
			.fun<static_cast<int32_t (GridMap::*)(const Vector3i &) const>(&GridMap::get_cell_item)>((new std::string("get_cell_item"))->c_str())
			.fun<static_cast<int32_t (GridMap::*)(const Vector3i &) const>(&GridMap::get_cell_item_orientation)>((new std::string("get_cell_item_orientation"))->c_str())
			.fun<static_cast<Basis (GridMap::*)(const Vector3i &) const>(&GridMap::get_cell_item_basis)>((new std::string("get_cell_item_basis"))->c_str())
			.fun<static_cast<Basis (GridMap::*)(int32_t) const>(&GridMap::get_basis_with_orthogonal_index)>((new std::string("get_basis_with_orthogonal_index"))->c_str())
			.fun<static_cast<int32_t (GridMap::*)(const Basis &) const>(&GridMap::get_orthogonal_index_from_basis)>((new std::string("get_orthogonal_index_from_basis"))->c_str())
			.fun<static_cast<Vector3i (GridMap::*)(const Vector3 &) const>(&GridMap::local_to_map)>((new std::string("local_to_map"))->c_str())
			.fun<static_cast<Vector3 (GridMap::*)(const Vector3i &) const>(&GridMap::map_to_local)>((new std::string("map_to_local"))->c_str())
			.fun<static_cast<void (GridMap::*)(const Ref<Resource> &)>(&GridMap::resource_changed)>((new std::string("resource_changed"))->c_str())
			.fun<static_cast<void (GridMap::*)()>(&GridMap::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<TypedArray<Vector3i> (GridMap::*)() const>(&GridMap::get_used_cells)>((new std::string("get_used_cells"))->c_str())
			.fun<static_cast<TypedArray<Vector3i> (GridMap::*)(int32_t) const>(&GridMap::get_used_cells_by_item)>((new std::string("get_used_cells_by_item"))->c_str())
			.fun<static_cast<Array (GridMap::*)() const>(&GridMap::get_meshes)>((new std::string("get_meshes"))->c_str())
			.fun<static_cast<Array (GridMap::*)()>(&GridMap::get_bake_meshes)>((new std::string("get_bake_meshes"))->c_str())
			.fun<static_cast<RID (GridMap::*)(int32_t)>(&GridMap::get_bake_mesh_instance)>((new std::string("get_bake_mesh_instance"))->c_str())
			.fun<static_cast<void (GridMap::*)()>(&GridMap::clear_baked_meshes)>((new std::string("clear_baked_meshes"))->c_str())
			.fun<static_cast<void (GridMap::*)(bool, double)>(&GridMap::make_baked_meshes)>((new std::string("make_baked_meshes"))->c_str());
}