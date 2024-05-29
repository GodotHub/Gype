/**************************************************************************/
/*  curve.cpp                                                             */
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

#include <godot_cpp/classes/curve.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

int32_t Curve::get_point_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("get_point_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Curve::set_point_count(int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_point_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &count_encoded);
}

int32_t Curve::add_point(const Vector2 &position, double left_tangent, double right_tangent, Curve::TangentMode left_mode, Curve::TangentMode right_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("add_point")._native_ptr(), 434072736);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	double left_tangent_encoded;
	PtrToArg<double>::encode(left_tangent, &left_tangent_encoded);
	double right_tangent_encoded;
	PtrToArg<double>::encode(right_tangent, &right_tangent_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &position, &left_tangent_encoded, &right_tangent_encoded, &left_mode, &right_mode);
}

void Curve::remove_point(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("remove_point")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

void Curve::clear_points() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("clear_points")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Vector2 Curve::get_point_position(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("get_point_position")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &index_encoded);
}

void Curve::set_point_value(int32_t index, double y) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_point_value")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	double y_encoded;
	PtrToArg<double>::encode(y, &y_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &y_encoded);
}

int32_t Curve::set_point_offset(int32_t index, double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_point_offset")._native_ptr(), 3780573764);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded, &offset_encoded);
}

double Curve::sample(double offset) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("sample")._native_ptr(), 3919130443);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &offset_encoded);
}

double Curve::sample_baked(double offset) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("sample_baked")._native_ptr(), 3919130443);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &offset_encoded);
}

double Curve::get_point_left_tangent(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("get_point_left_tangent")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &index_encoded);
}

double Curve::get_point_right_tangent(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("get_point_right_tangent")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &index_encoded);
}

Curve::TangentMode Curve::get_point_left_mode(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("get_point_left_mode")._native_ptr(), 426950354);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Curve::TangentMode(0));
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return (Curve::TangentMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

Curve::TangentMode Curve::get_point_right_mode(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("get_point_right_mode")._native_ptr(), 426950354);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Curve::TangentMode(0));
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return (Curve::TangentMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

void Curve::set_point_left_tangent(int32_t index, double tangent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_point_left_tangent")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	double tangent_encoded;
	PtrToArg<double>::encode(tangent, &tangent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &tangent_encoded);
}

void Curve::set_point_right_tangent(int32_t index, double tangent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_point_right_tangent")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	double tangent_encoded;
	PtrToArg<double>::encode(tangent, &tangent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &tangent_encoded);
}

void Curve::set_point_left_mode(int32_t index, Curve::TangentMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_point_left_mode")._native_ptr(), 1217242874);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &mode);
}

void Curve::set_point_right_mode(int32_t index, Curve::TangentMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_point_right_mode")._native_ptr(), 1217242874);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &mode);
}

double Curve::get_min_value() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("get_min_value")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Curve::set_min_value(double min) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_min_value")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double min_encoded;
	PtrToArg<double>::encode(min, &min_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &min_encoded);
}

double Curve::get_max_value() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("get_max_value")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Curve::set_max_value(double max) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_max_value")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double max_encoded;
	PtrToArg<double>::encode(max, &max_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_encoded);
}

void Curve::clean_dupes() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("clean_dupes")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Curve::bake() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("bake")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

int32_t Curve::get_bake_resolution() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("get_bake_resolution")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Curve::set_bake_resolution(int32_t resolution) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Curve::get_class_static()._native_ptr(), StringName("set_bake_resolution")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t resolution_encoded;
	PtrToArg<int64_t>::encode(resolution, &resolution_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &resolution_encoded);
}


} // namespace godot 