/**************************************************************************/
/*  curve2d.cpp                                                           */
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

#include <godot_cpp/classes/curve2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


int32_t Curve2D::get_point_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("get_point_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Curve2D::set_point_count(int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("set_point_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &count_encoded);
}

void Curve2D::add_point(const Vector2 &position, const Vector2 &in, const Vector2 &out, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("add_point")._native_ptr(), 4175465202);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position, &in, &out, &index_encoded);
}

void Curve2D::set_point_position(int32_t idx, const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("set_point_position")._native_ptr(), 163021252);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &position);
}

Vector2 Curve2D::get_point_position(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("get_point_position")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &idx_encoded);
}

void Curve2D::set_point_in(int32_t idx, const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("set_point_in")._native_ptr(), 163021252);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &position);
}

Vector2 Curve2D::get_point_in(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("get_point_in")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &idx_encoded);
}

void Curve2D::set_point_out(int32_t idx, const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("set_point_out")._native_ptr(), 163021252);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &position);
}

Vector2 Curve2D::get_point_out(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("get_point_out")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &idx_encoded);
}

void Curve2D::remove_point(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("remove_point")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded);
}

void Curve2D::clear_points() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("clear_points")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Vector2 Curve2D::sample(int32_t idx, double t) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("sample")._native_ptr(), 26514310);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	double t_encoded;
	PtrToArg<double>::encode(t, &t_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &idx_encoded, &t_encoded);
}

Vector2 Curve2D::samplef(double fofs) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("samplef")._native_ptr(), 3588506812);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	double fofs_encoded;
	PtrToArg<double>::encode(fofs, &fofs_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &fofs_encoded);
}

void Curve2D::set_bake_interval(double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("set_bake_interval")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &distance_encoded);
}

double Curve2D::get_bake_interval() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("get_bake_interval")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Curve2D::get_baked_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("get_baked_length")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Vector2 Curve2D::sample_baked(double offset, bool cubic) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("sample_baked")._native_ptr(), 3464257706);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	int8_t cubic_encoded;
	PtrToArg<bool>::encode(cubic, &cubic_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &offset_encoded, &cubic_encoded);
}

Transform2D Curve2D::sample_baked_with_rotation(double offset, bool cubic) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("sample_baked_with_rotation")._native_ptr(), 3296056341);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	int8_t cubic_encoded;
	PtrToArg<bool>::encode(cubic, &cubic_encoded);
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner, &offset_encoded, &cubic_encoded);
}

PackedVector2Array Curve2D::get_baked_points() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("get_baked_points")._native_ptr(), 2961356807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner);
}

Vector2 Curve2D::get_closest_point(const Vector2 &to_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("get_closest_point")._native_ptr(), 2656412154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &to_point);
}

double Curve2D::get_closest_offset(const Vector2 &to_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("get_closest_offset")._native_ptr(), 2276447920);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &to_point);
}

PackedVector2Array Curve2D::tessellate(int32_t max_stages, double tolerance_degrees) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("tessellate")._native_ptr(), 958145977);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	int64_t max_stages_encoded;
	PtrToArg<int64_t>::encode(max_stages, &max_stages_encoded);
	double tolerance_degrees_encoded;
	PtrToArg<double>::encode(tolerance_degrees, &tolerance_degrees_encoded);
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &max_stages_encoded, &tolerance_degrees_encoded);
}

PackedVector2Array Curve2D::tessellate_even_length(int32_t max_stages, double tolerance_length) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve2D::get_class_static()._native_ptr(), StringName("tessellate_even_length")._native_ptr(), 2319761637);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	int64_t max_stages_encoded;
	PtrToArg<int64_t>::encode(max_stages, &max_stages_encoded);
	double tolerance_length_encoded;
	PtrToArg<double>::encode(tolerance_length, &tolerance_length_encoded);
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &max_stages_encoded, &tolerance_length_encoded);
}


} // namespace godot 