/**************************************************************************/
/*  grid_map.cpp                                                          */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#include <godot_cpp/classes/grid_map.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/mesh_library.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/resource.hpp>

namespace godot {

void GridMap::set_collision_layer(uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_collision_layer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_encoded);
}

uint32_t GridMap::get_collision_layer() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_collision_layer")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GridMap::set_collision_mask(uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_collision_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

uint32_t GridMap::get_collision_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_collision_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GridMap::set_collision_mask_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_collision_mask_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool GridMap::get_collision_mask_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_collision_mask_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}

void GridMap::set_collision_layer_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_collision_layer_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool GridMap::get_collision_layer_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_collision_layer_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}

void GridMap::set_collision_priority(double priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_collision_priority")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double priority_encoded;
	PtrToArg<double>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &priority_encoded);
}

double GridMap::get_collision_priority() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_collision_priority")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GridMap::set_physics_material(const Ref<PhysicsMaterial> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_physics_material")._native_ptr(), 1784508650);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (material != nullptr ? &material->_owner : nullptr));
}

Ref<PhysicsMaterial> GridMap::get_physics_material() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_physics_material")._native_ptr(), 2521850424);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<PhysicsMaterial>());
	return Ref<PhysicsMaterial>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<PhysicsMaterial>(_gde_method_bind, _owner));
}

void GridMap::set_bake_navigation(bool bake_navigation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_bake_navigation")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t bake_navigation_encoded;
	PtrToArg<bool>::encode(bake_navigation, &bake_navigation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bake_navigation_encoded);
}

bool GridMap::is_baking_navigation() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("is_baking_navigation")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GridMap::set_navigation_map(const RID &navigation_map) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_navigation_map")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &navigation_map);
}

RID GridMap::get_navigation_map() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_navigation_map")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void GridMap::set_mesh_library(const Ref<MeshLibrary> &mesh_library) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_mesh_library")._native_ptr(), 1488083439);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh_library != nullptr ? &mesh_library->_owner : nullptr));
}

Ref<MeshLibrary> GridMap::get_mesh_library() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_mesh_library")._native_ptr(), 3350993772);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<MeshLibrary>());
	return Ref<MeshLibrary>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<MeshLibrary>(_gde_method_bind, _owner));
}

void GridMap::set_cell_size(const Vector3 &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_cell_size")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

Vector3 GridMap::get_cell_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_cell_size")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void GridMap::set_cell_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_cell_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

double GridMap::get_cell_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_cell_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GridMap::set_octant_size(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_octant_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

int32_t GridMap::get_octant_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_octant_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GridMap::set_cell_item(const Vector3i &position, int32_t item, int32_t orientation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_cell_item")._native_ptr(), 3449088946);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t item_encoded;
	PtrToArg<int64_t>::encode(item, &item_encoded);
	int64_t orientation_encoded;
	PtrToArg<int64_t>::encode(orientation, &orientation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position, &item_encoded, &orientation_encoded);
}

int32_t GridMap::get_cell_item(const Vector3i &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_cell_item")._native_ptr(), 3724960147);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &position);
}

int32_t GridMap::get_cell_item_orientation(const Vector3i &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_cell_item_orientation")._native_ptr(), 3724960147);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &position);
}

Basis GridMap::get_cell_item_basis(const Vector3i &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_cell_item_basis")._native_ptr(), 3493604918);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Basis());
	return internal::_call_native_mb_ret<Basis>(_gde_method_bind, _owner, &position);
}

Basis GridMap::get_basis_with_orthogonal_index(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_basis_with_orthogonal_index")._native_ptr(), 2816196998);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Basis());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Basis>(_gde_method_bind, _owner, &index_encoded);
}

int32_t GridMap::get_orthogonal_index_from_basis(const Basis &basis) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_orthogonal_index_from_basis")._native_ptr(), 4210359952);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &basis);
}

Vector3i GridMap::local_to_map(const Vector3 &local_position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("local_to_map")._native_ptr(), 1257687843);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3i());
	return internal::_call_native_mb_ret<Vector3i>(_gde_method_bind, _owner, &local_position);
}

Vector3 GridMap::map_to_local(const Vector3i &map_position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("map_to_local")._native_ptr(), 1088329196);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &map_position);
}

void GridMap::resource_changed(const Ref<Resource> &resource) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("resource_changed")._native_ptr(), 968641751);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (resource != nullptr ? &resource->_owner : nullptr));
}

void GridMap::set_center_x(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_center_x")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool GridMap::get_center_x() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_center_x")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GridMap::set_center_y(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_center_y")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool GridMap::get_center_y() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_center_y")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GridMap::set_center_z(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("set_center_z")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool GridMap::get_center_z() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_center_z")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GridMap::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

TypedArray<Vector3i> GridMap::get_used_cells() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_used_cells")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Vector3i>());
	return internal::_call_native_mb_ret<TypedArray<Vector3i>>(_gde_method_bind, _owner);
}

TypedArray<Vector3i> GridMap::get_used_cells_by_item(int32_t item) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_used_cells_by_item")._native_ptr(), 663333327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Vector3i>());
	int64_t item_encoded;
	PtrToArg<int64_t>::encode(item, &item_encoded);
	return internal::_call_native_mb_ret<TypedArray<Vector3i>>(_gde_method_bind, _owner, &item_encoded);
}

Array GridMap::get_meshes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_meshes")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

Array GridMap::get_bake_meshes() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_bake_meshes")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

RID GridMap::get_bake_mesh_instance(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("get_bake_mesh_instance")._native_ptr(), 937000113);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &idx_encoded);
}

void GridMap::clear_baked_meshes() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("clear_baked_meshes")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void GridMap::make_baked_meshes(bool gen_lightmap_uv, double lightmap_uv_texel_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GridMap::get_class_static()._native_ptr(), StringName("make_baked_meshes")._native_ptr(), 3609286057);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t gen_lightmap_uv_encoded;
	PtrToArg<bool>::encode(gen_lightmap_uv, &gen_lightmap_uv_encoded);
	double lightmap_uv_texel_size_encoded;
	PtrToArg<double>::encode(lightmap_uv_texel_size, &lightmap_uv_texel_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gen_lightmap_uv_encoded, &lightmap_uv_texel_size_encoded);
}


} // namespace godot 