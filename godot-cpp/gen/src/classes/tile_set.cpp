/**************************************************************************/
/*  tile_set.cpp                                                          */
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

#include <godot_cpp/classes/tile_set.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>

namespace godot {

int32_t TileSet::get_next_source_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_next_source_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TileSet::add_source(const Ref<TileSetSource> &source, int32_t atlas_source_id_override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("add_source")._native_ptr(), 1059186179);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t atlas_source_id_override_encoded;
	PtrToArg<int64_t>::encode(atlas_source_id_override, &atlas_source_id_override_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (source != nullptr ? &source->_owner : nullptr), &atlas_source_id_override_encoded);
}

void TileSet::remove_source(int32_t source_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_source")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t source_id_encoded;
	PtrToArg<int64_t>::encode(source_id, &source_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &source_id_encoded);
}

void TileSet::set_source_id(int32_t source_id, int32_t new_source_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_source_id")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t source_id_encoded;
	PtrToArg<int64_t>::encode(source_id, &source_id_encoded);
	int64_t new_source_id_encoded;
	PtrToArg<int64_t>::encode(new_source_id, &new_source_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &source_id_encoded, &new_source_id_encoded);
}

int32_t TileSet::get_source_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_source_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TileSet::get_source_id(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_source_id")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

bool TileSet::has_source(int32_t source_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("has_source")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t source_id_encoded;
	PtrToArg<int64_t>::encode(source_id, &source_id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &source_id_encoded);
}

Ref<TileSetSource> TileSet::get_source(int32_t source_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_source")._native_ptr(), 1763540252);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<TileSetSource>());
	int64_t source_id_encoded;
	PtrToArg<int64_t>::encode(source_id, &source_id_encoded);
	return Ref<TileSetSource>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<TileSetSource>(_gde_method_bind, _owner, &source_id_encoded));
}

void TileSet::set_tile_shape(TileSet::TileShape shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_tile_shape")._native_ptr(), 2131427112);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape);
}

TileSet::TileShape TileSet::get_tile_shape() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_tile_shape")._native_ptr(), 716918169);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TileSet::TileShape(0));
	return (TileSet::TileShape)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileSet::set_tile_layout(TileSet::TileLayout layout) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_tile_layout")._native_ptr(), 1071216679);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layout);
}

TileSet::TileLayout TileSet::get_tile_layout() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_tile_layout")._native_ptr(), 194628839);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TileSet::TileLayout(0));
	return (TileSet::TileLayout)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileSet::set_tile_offset_axis(TileSet::TileOffsetAxis alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_tile_offset_axis")._native_ptr(), 3300198521);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

TileSet::TileOffsetAxis TileSet::get_tile_offset_axis() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_tile_offset_axis")._native_ptr(), 762494114);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TileSet::TileOffsetAxis(0));
	return (TileSet::TileOffsetAxis)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileSet::set_tile_size(const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_tile_size")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

Vector2i TileSet::get_tile_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_tile_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void TileSet::set_uv_clipping(bool uv_clipping) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_uv_clipping")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t uv_clipping_encoded;
	PtrToArg<bool>::encode(uv_clipping, &uv_clipping_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &uv_clipping_encoded);
}

bool TileSet::is_uv_clipping() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("is_uv_clipping")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t TileSet::get_occlusion_layers_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_occlusion_layers_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileSet::add_occlusion_layer(int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("add_occlusion_layer")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &to_position_encoded);
}

void TileSet::move_occlusion_layer(int32_t layer_index, int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("move_occlusion_layer")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &to_position_encoded);
}

void TileSet::remove_occlusion_layer(int32_t layer_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_occlusion_layer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded);
}

void TileSet::set_occlusion_layer_light_mask(int32_t layer_index, int32_t light_mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_occlusion_layer_light_mask")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t light_mask_encoded;
	PtrToArg<int64_t>::encode(light_mask, &light_mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &light_mask_encoded);
}

int32_t TileSet::get_occlusion_layer_light_mask(int32_t layer_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_occlusion_layer_light_mask")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &layer_index_encoded);
}

void TileSet::set_occlusion_layer_sdf_collision(int32_t layer_index, bool sdf_collision) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_occlusion_layer_sdf_collision")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int8_t sdf_collision_encoded;
	PtrToArg<bool>::encode(sdf_collision, &sdf_collision_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &sdf_collision_encoded);
}

bool TileSet::get_occlusion_layer_sdf_collision(int32_t layer_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_occlusion_layer_sdf_collision")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_index_encoded);
}

int32_t TileSet::get_physics_layers_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_physics_layers_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileSet::add_physics_layer(int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("add_physics_layer")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &to_position_encoded);
}

void TileSet::move_physics_layer(int32_t layer_index, int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("move_physics_layer")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &to_position_encoded);
}

void TileSet::remove_physics_layer(int32_t layer_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_physics_layer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded);
}

void TileSet::set_physics_layer_collision_layer(int32_t layer_index, uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_physics_layer_collision_layer")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &layer_encoded);
}

uint32_t TileSet::get_physics_layer_collision_layer(int32_t layer_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_physics_layer_collision_layer")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &layer_index_encoded);
}

void TileSet::set_physics_layer_collision_mask(int32_t layer_index, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_physics_layer_collision_mask")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &mask_encoded);
}

uint32_t TileSet::get_physics_layer_collision_mask(int32_t layer_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_physics_layer_collision_mask")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &layer_index_encoded);
}

void TileSet::set_physics_layer_physics_material(int32_t layer_index, const Ref<PhysicsMaterial> &physics_material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_physics_layer_physics_material")._native_ptr(), 1018687357);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, (physics_material != nullptr ? &physics_material->_owner : nullptr));
}

Ref<PhysicsMaterial> TileSet::get_physics_layer_physics_material(int32_t layer_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_physics_layer_physics_material")._native_ptr(), 788318639);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<PhysicsMaterial>());
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	return Ref<PhysicsMaterial>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<PhysicsMaterial>(_gde_method_bind, _owner, &layer_index_encoded));
}

int32_t TileSet::get_terrain_sets_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_terrain_sets_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileSet::add_terrain_set(int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("add_terrain_set")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &to_position_encoded);
}

void TileSet::move_terrain_set(int32_t terrain_set, int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("move_terrain_set")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_set_encoded, &to_position_encoded);
}

void TileSet::remove_terrain_set(int32_t terrain_set) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_terrain_set")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_set_encoded);
}

void TileSet::set_terrain_set_mode(int32_t terrain_set, TileSet::TerrainMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_terrain_set_mode")._native_ptr(), 3943003916);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_set_encoded, &mode);
}

TileSet::TerrainMode TileSet::get_terrain_set_mode(int32_t terrain_set) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_terrain_set_mode")._native_ptr(), 2084469411);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TileSet::TerrainMode(0));
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	return (TileSet::TerrainMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &terrain_set_encoded);
}

int32_t TileSet::get_terrains_count(int32_t terrain_set) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_terrains_count")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &terrain_set_encoded);
}

void TileSet::add_terrain(int32_t terrain_set, int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("add_terrain")._native_ptr(), 1230568737);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_set_encoded, &to_position_encoded);
}

void TileSet::move_terrain(int32_t terrain_set, int32_t terrain_index, int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("move_terrain")._native_ptr(), 1649997291);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	int64_t terrain_index_encoded;
	PtrToArg<int64_t>::encode(terrain_index, &terrain_index_encoded);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_set_encoded, &terrain_index_encoded, &to_position_encoded);
}

void TileSet::remove_terrain(int32_t terrain_set, int32_t terrain_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_terrain")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	int64_t terrain_index_encoded;
	PtrToArg<int64_t>::encode(terrain_index, &terrain_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_set_encoded, &terrain_index_encoded);
}

void TileSet::set_terrain_name(int32_t terrain_set, int32_t terrain_index, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_terrain_name")._native_ptr(), 2285447957);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	int64_t terrain_index_encoded;
	PtrToArg<int64_t>::encode(terrain_index, &terrain_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_set_encoded, &terrain_index_encoded, &name);
}

String TileSet::get_terrain_name(int32_t terrain_set, int32_t terrain_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_terrain_name")._native_ptr(), 1391810591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	int64_t terrain_index_encoded;
	PtrToArg<int64_t>::encode(terrain_index, &terrain_index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &terrain_set_encoded, &terrain_index_encoded);
}

void TileSet::set_terrain_color(int32_t terrain_set, int32_t terrain_index, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_terrain_color")._native_ptr(), 3733378741);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	int64_t terrain_index_encoded;
	PtrToArg<int64_t>::encode(terrain_index, &terrain_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_set_encoded, &terrain_index_encoded, &color);
}

Color TileSet::get_terrain_color(int32_t terrain_set, int32_t terrain_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_terrain_color")._native_ptr(), 2165839948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	int64_t terrain_index_encoded;
	PtrToArg<int64_t>::encode(terrain_index, &terrain_index_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &terrain_set_encoded, &terrain_index_encoded);
}

int32_t TileSet::get_navigation_layers_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_navigation_layers_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileSet::add_navigation_layer(int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("add_navigation_layer")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &to_position_encoded);
}

void TileSet::move_navigation_layer(int32_t layer_index, int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("move_navigation_layer")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &to_position_encoded);
}

void TileSet::remove_navigation_layer(int32_t layer_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_navigation_layer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded);
}

void TileSet::set_navigation_layer_layers(int32_t layer_index, uint32_t layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_navigation_layer_layers")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &layers_encoded);
}

uint32_t TileSet::get_navigation_layer_layers(int32_t layer_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_navigation_layer_layers")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &layer_index_encoded);
}

void TileSet::set_navigation_layer_layer_value(int32_t layer_index, int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_navigation_layer_layer_value")._native_ptr(), 1383440665);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &layer_number_encoded, &value_encoded);
}

bool TileSet::get_navigation_layer_layer_value(int32_t layer_index, int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_navigation_layer_layer_value")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_index_encoded, &layer_number_encoded);
}

int32_t TileSet::get_custom_data_layers_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_custom_data_layers_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileSet::add_custom_data_layer(int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("add_custom_data_layer")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &to_position_encoded);
}

void TileSet::move_custom_data_layer(int32_t layer_index, int32_t to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("move_custom_data_layer")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	int64_t to_position_encoded;
	PtrToArg<int64_t>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &to_position_encoded);
}

void TileSet::remove_custom_data_layer(int32_t layer_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_custom_data_layer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded);
}

int32_t TileSet::get_custom_data_layer_by_name(const String &layer_name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_custom_data_layer_by_name")._native_ptr(), 1321353865);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &layer_name);
}

void TileSet::set_custom_data_layer_name(int32_t layer_index, const String &layer_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_custom_data_layer_name")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &layer_name);
}

String TileSet::get_custom_data_layer_name(int32_t layer_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_custom_data_layer_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &layer_index_encoded);
}

void TileSet::set_custom_data_layer_type(int32_t layer_index, Variant::Type layer_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_custom_data_layer_type")._native_ptr(), 3492912874);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_index_encoded, &layer_type);
}

Variant::Type TileSet::get_custom_data_layer_type(int32_t layer_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_custom_data_layer_type")._native_ptr(), 2990820875);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant::Type(0));
	int64_t layer_index_encoded;
	PtrToArg<int64_t>::encode(layer_index, &layer_index_encoded);
	return (Variant::Type)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &layer_index_encoded);
}

void TileSet::set_source_level_tile_proxy(int32_t source_from, int32_t source_to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_source_level_tile_proxy")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	int64_t source_to_encoded;
	PtrToArg<int64_t>::encode(source_to, &source_to_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &source_from_encoded, &source_to_encoded);
}

int32_t TileSet::get_source_level_tile_proxy(int32_t source_from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_source_level_tile_proxy")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &source_from_encoded);
}

bool TileSet::has_source_level_tile_proxy(int32_t source_from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("has_source_level_tile_proxy")._native_ptr(), 3067735520);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &source_from_encoded);
}

void TileSet::remove_source_level_tile_proxy(int32_t source_from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_source_level_tile_proxy")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &source_from_encoded);
}

void TileSet::set_coords_level_tile_proxy(int32_t p_source_from, const Vector2i &coords_from, int32_t source_to, const Vector2i &coords_to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_coords_level_tile_proxy")._native_ptr(), 1769939278);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_source_from_encoded;
	PtrToArg<int64_t>::encode(p_source_from, &p_source_from_encoded);
	int64_t source_to_encoded;
	PtrToArg<int64_t>::encode(source_to, &source_to_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_source_from_encoded, &coords_from, &source_to_encoded, &coords_to);
}

Array TileSet::get_coords_level_tile_proxy(int32_t source_from, const Vector2i &coords_from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_coords_level_tile_proxy")._native_ptr(), 2856536371);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &source_from_encoded, &coords_from);
}

bool TileSet::has_coords_level_tile_proxy(int32_t source_from, const Vector2i &coords_from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("has_coords_level_tile_proxy")._native_ptr(), 3957903770);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &source_from_encoded, &coords_from);
}

void TileSet::remove_coords_level_tile_proxy(int32_t source_from, const Vector2i &coords_from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_coords_level_tile_proxy")._native_ptr(), 2311374912);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &source_from_encoded, &coords_from);
}

void TileSet::set_alternative_level_tile_proxy(int32_t source_from, const Vector2i &coords_from, int32_t alternative_from, int32_t source_to, const Vector2i &coords_to, int32_t alternative_to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("set_alternative_level_tile_proxy")._native_ptr(), 3862385460);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	int64_t alternative_from_encoded;
	PtrToArg<int64_t>::encode(alternative_from, &alternative_from_encoded);
	int64_t source_to_encoded;
	PtrToArg<int64_t>::encode(source_to, &source_to_encoded);
	int64_t alternative_to_encoded;
	PtrToArg<int64_t>::encode(alternative_to, &alternative_to_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &source_from_encoded, &coords_from, &alternative_from_encoded, &source_to_encoded, &coords_to, &alternative_to_encoded);
}

Array TileSet::get_alternative_level_tile_proxy(int32_t source_from, const Vector2i &coords_from, int32_t alternative_from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_alternative_level_tile_proxy")._native_ptr(), 2303761075);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	int64_t alternative_from_encoded;
	PtrToArg<int64_t>::encode(alternative_from, &alternative_from_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &source_from_encoded, &coords_from, &alternative_from_encoded);
}

bool TileSet::has_alternative_level_tile_proxy(int32_t source_from, const Vector2i &coords_from, int32_t alternative_from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("has_alternative_level_tile_proxy")._native_ptr(), 180086755);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	int64_t alternative_from_encoded;
	PtrToArg<int64_t>::encode(alternative_from, &alternative_from_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &source_from_encoded, &coords_from, &alternative_from_encoded);
}

void TileSet::remove_alternative_level_tile_proxy(int32_t source_from, const Vector2i &coords_from, int32_t alternative_from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_alternative_level_tile_proxy")._native_ptr(), 2328951467);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	int64_t alternative_from_encoded;
	PtrToArg<int64_t>::encode(alternative_from, &alternative_from_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &source_from_encoded, &coords_from, &alternative_from_encoded);
}

Array TileSet::map_tile_proxy(int32_t source_from, const Vector2i &coords_from, int32_t alternative_from) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("map_tile_proxy")._native_ptr(), 4267935328);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t source_from_encoded;
	PtrToArg<int64_t>::encode(source_from, &source_from_encoded);
	int64_t alternative_from_encoded;
	PtrToArg<int64_t>::encode(alternative_from, &alternative_from_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &source_from_encoded, &coords_from, &alternative_from_encoded);
}

void TileSet::cleanup_invalid_tile_proxies() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("cleanup_invalid_tile_proxies")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TileSet::clear_tile_proxies() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("clear_tile_proxies")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

int32_t TileSet::add_pattern(const Ref<TileMapPattern> &pattern, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("add_pattern")._native_ptr(), 763712015);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (pattern != nullptr ? &pattern->_owner : nullptr), &index_encoded);
}

Ref<TileMapPattern> TileSet::get_pattern(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_pattern")._native_ptr(), 4207737510);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<TileMapPattern>());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return Ref<TileMapPattern>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<TileMapPattern>(_gde_method_bind, _owner, &index_encoded));
}

void TileSet::remove_pattern(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("remove_pattern")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

int32_t TileSet::get_patterns_count() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSet::get_class_static()._native_ptr(), StringName("get_patterns_count")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 