/**************************************************************************/
/*  tile_set_atlas_source.cpp                                             */
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

#include <godot_cpp/classes/tile_set_atlas_source.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/tile_data.hpp>

namespace godot {

const int TileSetAtlasSource::TRANSFORM_FLIP_H = 4096;
const int TileSetAtlasSource::TRANSFORM_FLIP_V = 8192;
const int TileSetAtlasSource::TRANSFORM_TRANSPOSE = 16384;

void TileSetAtlasSource::set_texture(const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_texture")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> TileSetAtlasSource::get_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void TileSetAtlasSource::set_margins(const Vector2i &margins) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_margins")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &margins);
}

Vector2i TileSetAtlasSource::get_margins() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_margins")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void TileSetAtlasSource::set_separation(const Vector2i &separation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_separation")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &separation);
}

Vector2i TileSetAtlasSource::get_separation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_separation")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void TileSetAtlasSource::set_texture_region_size(const Vector2i &texture_region_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_texture_region_size")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture_region_size);
}

Vector2i TileSetAtlasSource::get_texture_region_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_texture_region_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void TileSetAtlasSource::set_use_texture_padding(bool use_texture_padding) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_use_texture_padding")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_texture_padding_encoded;
	PtrToArg<bool>::encode(use_texture_padding, &use_texture_padding_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_texture_padding_encoded);
}

bool TileSetAtlasSource::get_use_texture_padding() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_use_texture_padding")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TileSetAtlasSource::create_tile(const Vector2i &atlas_coords, const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("create_tile")._native_ptr(), 190528769);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &size);
}

void TileSetAtlasSource::remove_tile(const Vector2i &atlas_coords) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("remove_tile")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords);
}

void TileSetAtlasSource::move_tile_in_atlas(const Vector2i &atlas_coords, const Vector2i &new_atlas_coords, const Vector2i &new_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("move_tile_in_atlas")._native_ptr(), 3870111920);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &new_atlas_coords, &new_size);
}

Vector2i TileSetAtlasSource::get_tile_size_in_atlas(const Vector2i &atlas_coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_size_in_atlas")._native_ptr(), 3050897911);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &atlas_coords);
}

bool TileSetAtlasSource::has_room_for_tile(const Vector2i &atlas_coords, const Vector2i &size, int32_t animation_columns, const Vector2i &animation_separation, int32_t frames_count, const Vector2i &ignored_tile) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("has_room_for_tile")._native_ptr(), 3018597268);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t animation_columns_encoded;
	PtrToArg<int64_t>::encode(animation_columns, &animation_columns_encoded);
	int64_t frames_count_encoded;
	PtrToArg<int64_t>::encode(frames_count, &frames_count_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &atlas_coords, &size, &animation_columns_encoded, &animation_separation, &frames_count_encoded, &ignored_tile);
}

PackedVector2Array TileSetAtlasSource::get_tiles_to_be_removed_on_change(const Ref<Texture2D> &texture, const Vector2i &margins, const Vector2i &separation, const Vector2i &texture_region_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tiles_to_be_removed_on_change")._native_ptr(), 1240378054);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &margins, &separation, &texture_region_size);
}

Vector2i TileSetAtlasSource::get_tile_at_coords(const Vector2i &atlas_coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_at_coords")._native_ptr(), 3050897911);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &atlas_coords);
}

bool TileSetAtlasSource::has_tiles_outside_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("has_tiles_outside_texture")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TileSetAtlasSource::clear_tiles_outside_texture() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("clear_tiles_outside_texture")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TileSetAtlasSource::set_tile_animation_columns(const Vector2i &atlas_coords, int32_t frame_columns) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_tile_animation_columns")._native_ptr(), 3200960707);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frame_columns_encoded;
	PtrToArg<int64_t>::encode(frame_columns, &frame_columns_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &frame_columns_encoded);
}

int32_t TileSetAtlasSource::get_tile_animation_columns(const Vector2i &atlas_coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_animation_columns")._native_ptr(), 2485466453);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &atlas_coords);
}

void TileSetAtlasSource::set_tile_animation_separation(const Vector2i &atlas_coords, const Vector2i &separation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_tile_animation_separation")._native_ptr(), 1941061099);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &separation);
}

Vector2i TileSetAtlasSource::get_tile_animation_separation(const Vector2i &atlas_coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_animation_separation")._native_ptr(), 3050897911);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &atlas_coords);
}

void TileSetAtlasSource::set_tile_animation_speed(const Vector2i &atlas_coords, double speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_tile_animation_speed")._native_ptr(), 2262553149);
	CHECK_METHOD_BIND(_gde_method_bind);
	double speed_encoded;
	PtrToArg<double>::encode(speed, &speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &speed_encoded);
}

double TileSetAtlasSource::get_tile_animation_speed(const Vector2i &atlas_coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_animation_speed")._native_ptr(), 719993801);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &atlas_coords);
}

void TileSetAtlasSource::set_tile_animation_mode(const Vector2i &atlas_coords, TileSetAtlasSource::TileAnimationMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_tile_animation_mode")._native_ptr(), 3192753483);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &mode);
}

TileSetAtlasSource::TileAnimationMode TileSetAtlasSource::get_tile_animation_mode(const Vector2i &atlas_coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_animation_mode")._native_ptr(), 4025349959);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TileSetAtlasSource::TileAnimationMode(0));
	return (TileSetAtlasSource::TileAnimationMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &atlas_coords);
}

void TileSetAtlasSource::set_tile_animation_frames_count(const Vector2i &atlas_coords, int32_t frames_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_tile_animation_frames_count")._native_ptr(), 3200960707);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frames_count_encoded;
	PtrToArg<int64_t>::encode(frames_count, &frames_count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &frames_count_encoded);
}

int32_t TileSetAtlasSource::get_tile_animation_frames_count(const Vector2i &atlas_coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_animation_frames_count")._native_ptr(), 2485466453);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &atlas_coords);
}

void TileSetAtlasSource::set_tile_animation_frame_duration(const Vector2i &atlas_coords, int32_t frame_index, double duration) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_tile_animation_frame_duration")._native_ptr(), 2843487787);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frame_index_encoded;
	PtrToArg<int64_t>::encode(frame_index, &frame_index_encoded);
	double duration_encoded;
	PtrToArg<double>::encode(duration, &duration_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &frame_index_encoded, &duration_encoded);
}

double TileSetAtlasSource::get_tile_animation_frame_duration(const Vector2i &atlas_coords, int32_t frame_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_animation_frame_duration")._native_ptr(), 1802448425);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t frame_index_encoded;
	PtrToArg<int64_t>::encode(frame_index, &frame_index_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &atlas_coords, &frame_index_encoded);
}

double TileSetAtlasSource::get_tile_animation_total_duration(const Vector2i &atlas_coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_animation_total_duration")._native_ptr(), 719993801);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &atlas_coords);
}

int32_t TileSetAtlasSource::create_alternative_tile(const Vector2i &atlas_coords, int32_t alternative_id_override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("create_alternative_tile")._native_ptr(), 2226298068);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t alternative_id_override_encoded;
	PtrToArg<int64_t>::encode(alternative_id_override, &alternative_id_override_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &atlas_coords, &alternative_id_override_encoded);
}

void TileSetAtlasSource::remove_alternative_tile(const Vector2i &atlas_coords, int32_t alternative_tile) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("remove_alternative_tile")._native_ptr(), 3200960707);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t alternative_tile_encoded;
	PtrToArg<int64_t>::encode(alternative_tile, &alternative_tile_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &alternative_tile_encoded);
}

void TileSetAtlasSource::set_alternative_tile_id(const Vector2i &atlas_coords, int32_t alternative_tile, int32_t new_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("set_alternative_tile_id")._native_ptr(), 1499785778);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t alternative_tile_encoded;
	PtrToArg<int64_t>::encode(alternative_tile, &alternative_tile_encoded);
	int64_t new_id_encoded;
	PtrToArg<int64_t>::encode(new_id, &new_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &atlas_coords, &alternative_tile_encoded, &new_id_encoded);
}

int32_t TileSetAtlasSource::get_next_alternative_tile_id(const Vector2i &atlas_coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_next_alternative_tile_id")._native_ptr(), 2485466453);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &atlas_coords);
}

TileData *TileSetAtlasSource::get_tile_data(const Vector2i &atlas_coords, int32_t alternative_tile) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_data")._native_ptr(), 3534028207);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t alternative_tile_encoded;
	PtrToArg<int64_t>::encode(alternative_tile, &alternative_tile_encoded);
	return internal::_call_native_mb_ret_obj<TileData>(_gde_method_bind, _owner, &atlas_coords, &alternative_tile_encoded);
}

Vector2i TileSetAtlasSource::get_atlas_grid_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_atlas_grid_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

Rect2i TileSetAtlasSource::get_tile_texture_region(const Vector2i &atlas_coords, int32_t frame) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_tile_texture_region")._native_ptr(), 241857547);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2i());
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	return internal::_call_native_mb_ret<Rect2i>(_gde_method_bind, _owner, &atlas_coords, &frame_encoded);
}

Ref<Texture2D> TileSetAtlasSource::get_runtime_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_runtime_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

Rect2i TileSetAtlasSource::get_runtime_tile_texture_region(const Vector2i &atlas_coords, int32_t frame) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileSetAtlasSource::get_class_static()._native_ptr(), StringName("get_runtime_tile_texture_region")._native_ptr(), 104874263);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2i());
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	return internal::_call_native_mb_ret<Rect2i>(_gde_method_bind, _owner, &atlas_coords, &frame_encoded);
}


} // namespace godot 