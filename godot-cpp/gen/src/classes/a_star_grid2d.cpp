/**************************************************************************/
/*  a_star_grid2d.cpp                                                     */
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

#include <godot_cpp/classes/a_star_grid2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


void AStarGrid2D::set_region(const Rect2i &region) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_region")._native_ptr(), 1763793166);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region);
}

Rect2i AStarGrid2D::get_region() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_region")._native_ptr(), 410525958);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2i());
	return internal::_call_native_mb_ret<Rect2i>(_gde_method_bind, _owner);
}

void AStarGrid2D::set_size(const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_size")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

Vector2i AStarGrid2D::get_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void AStarGrid2D::set_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector2 AStarGrid2D::get_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void AStarGrid2D::set_cell_size(const Vector2 &cell_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_cell_size")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cell_size);
}

Vector2 AStarGrid2D::get_cell_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_cell_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void AStarGrid2D::set_cell_shape(AStarGrid2D::CellShape cell_shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_cell_shape")._native_ptr(), 4130591146);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cell_shape);
}

AStarGrid2D::CellShape AStarGrid2D::get_cell_shape() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_cell_shape")._native_ptr(), 3293463634);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AStarGrid2D::CellShape(0));
	return (AStarGrid2D::CellShape)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool AStarGrid2D::is_in_bounds(int32_t x, int32_t y) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("is_in_bounds")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t x_encoded;
	PtrToArg<int64_t>::encode(x, &x_encoded);
	int64_t y_encoded;
	PtrToArg<int64_t>::encode(y, &y_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &x_encoded, &y_encoded);
}

bool AStarGrid2D::is_in_boundsv(const Vector2i &id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("is_in_boundsv")._native_ptr(), 3900751641);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &id);
}

bool AStarGrid2D::is_dirty() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("is_dirty")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AStarGrid2D::update() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("update")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void AStarGrid2D::set_jumping_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_jumping_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool AStarGrid2D::is_jumping_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("is_jumping_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AStarGrid2D::set_diagonal_mode(AStarGrid2D::DiagonalMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_diagonal_mode")._native_ptr(), 1017829798);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AStarGrid2D::DiagonalMode AStarGrid2D::get_diagonal_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_diagonal_mode")._native_ptr(), 3129282674);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AStarGrid2D::DiagonalMode(0));
	return (AStarGrid2D::DiagonalMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AStarGrid2D::set_default_compute_heuristic(AStarGrid2D::Heuristic heuristic) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_default_compute_heuristic")._native_ptr(), 1044375519);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &heuristic);
}

AStarGrid2D::Heuristic AStarGrid2D::get_default_compute_heuristic() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_default_compute_heuristic")._native_ptr(), 2074731422);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AStarGrid2D::Heuristic(0));
	return (AStarGrid2D::Heuristic)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AStarGrid2D::set_default_estimate_heuristic(AStarGrid2D::Heuristic heuristic) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_default_estimate_heuristic")._native_ptr(), 1044375519);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &heuristic);
}

AStarGrid2D::Heuristic AStarGrid2D::get_default_estimate_heuristic() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_default_estimate_heuristic")._native_ptr(), 2074731422);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AStarGrid2D::Heuristic(0));
	return (AStarGrid2D::Heuristic)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AStarGrid2D::set_point_solid(const Vector2i &id, bool solid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_point_solid")._native_ptr(), 1765703753);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t solid_encoded;
	PtrToArg<bool>::encode(solid, &solid_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id, &solid_encoded);
}

bool AStarGrid2D::is_point_solid(const Vector2i &id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("is_point_solid")._native_ptr(), 3900751641);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &id);
}

void AStarGrid2D::set_point_weight_scale(const Vector2i &id, double weight_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("set_point_weight_scale")._native_ptr(), 2262553149);
	CHECK_METHOD_BIND(_gde_method_bind);
	double weight_scale_encoded;
	PtrToArg<double>::encode(weight_scale, &weight_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id, &weight_scale_encoded);
}

double AStarGrid2D::get_point_weight_scale(const Vector2i &id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_point_weight_scale")._native_ptr(), 719993801);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &id);
}

void AStarGrid2D::fill_solid_region(const Rect2i &region, bool solid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("fill_solid_region")._native_ptr(), 2261970063);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t solid_encoded;
	PtrToArg<bool>::encode(solid, &solid_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &solid_encoded);
}

void AStarGrid2D::fill_weight_scale_region(const Rect2i &region, double weight_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("fill_weight_scale_region")._native_ptr(), 2793244083);
	CHECK_METHOD_BIND(_gde_method_bind);
	double weight_scale_encoded;
	PtrToArg<double>::encode(weight_scale, &weight_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &region, &weight_scale_encoded);
}

void AStarGrid2D::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Vector2 AStarGrid2D::get_point_position(const Vector2i &id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_point_position")._native_ptr(), 108438297);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &id);
}

PackedVector2Array AStarGrid2D::get_point_path(const Vector2i &from_id, const Vector2i &to_id, bool allow_partial_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_point_path")._native_ptr(), 1641925693);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	int8_t allow_partial_path_encoded;
	PtrToArg<bool>::encode(allow_partial_path, &allow_partial_path_encoded);
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &from_id, &to_id, &allow_partial_path_encoded);
}

TypedArray<Vector2i> AStarGrid2D::get_id_path(const Vector2i &from_id, const Vector2i &to_id, bool allow_partial_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStarGrid2D::get_class_static()._native_ptr(), StringName("get_id_path")._native_ptr(), 1918132273);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Vector2i>());
	int8_t allow_partial_path_encoded;
	PtrToArg<bool>::encode(allow_partial_path, &allow_partial_path_encoded);
	return internal::_call_native_mb_ret<TypedArray<Vector2i>>(_gde_method_bind, _owner, &from_id, &to_id, &allow_partial_path_encoded);
}

double AStarGrid2D::_estimate_cost(const Vector2i &from_id, const Vector2i &to_id) const {
	return 0.0;
}

double AStarGrid2D::_compute_cost(const Vector2i &from_id, const Vector2i &to_id) const {
	return 0.0;
}


} // namespace godot 