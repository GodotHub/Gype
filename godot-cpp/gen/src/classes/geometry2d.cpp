/**************************************************************************/
/*  geometry2d.cpp                                                        */
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

#include <godot_cpp/classes/geometry2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

Geometry2D *Geometry2D::singleton = nullptr;

Geometry2D *Geometry2D::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(Geometry2D::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<Geometry2D *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &Geometry2D::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(Geometry2D::get_class_static(), singleton);
		}
	}
	return singleton;
}

Geometry2D::~Geometry2D() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(Geometry2D::get_class_static());
		singleton = nullptr;
	}
}

bool Geometry2D::is_point_in_circle(const Vector2 &point, const Vector2 &circle_position, double circle_radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("is_point_in_circle")._native_ptr(), 2929491703);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	double circle_radius_encoded;
	PtrToArg<double>::encode(circle_radius, &circle_radius_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &point, &circle_position, &circle_radius_encoded);
}

double Geometry2D::segment_intersects_circle(const Vector2 &segment_from, const Vector2 &segment_to, const Vector2 &circle_position, double circle_radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("segment_intersects_circle")._native_ptr(), 1356928167);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	double circle_radius_encoded;
	PtrToArg<double>::encode(circle_radius, &circle_radius_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &segment_from, &segment_to, &circle_position, &circle_radius_encoded);
}

Variant Geometry2D::segment_intersects_segment(const Vector2 &from_a, const Vector2 &to_a, const Vector2 &from_b, const Vector2 &to_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("segment_intersects_segment")._native_ptr(), 2058025344);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &from_a, &to_a, &from_b, &to_b);
}

Variant Geometry2D::line_intersects_line(const Vector2 &from_a, const Vector2 &dir_a, const Vector2 &from_b, const Vector2 &dir_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("line_intersects_line")._native_ptr(), 2058025344);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &from_a, &dir_a, &from_b, &dir_b);
}

PackedVector2Array Geometry2D::get_closest_points_between_segments(const Vector2 &p1, const Vector2 &q1, const Vector2 &p2, const Vector2 &q2) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("get_closest_points_between_segments")._native_ptr(), 3344690961);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &p1, &q1, &p2, &q2);
}

Vector2 Geometry2D::get_closest_point_to_segment(const Vector2 &point, const Vector2 &s1, const Vector2 &s2) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("get_closest_point_to_segment")._native_ptr(), 4172901909);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &point, &s1, &s2);
}

Vector2 Geometry2D::get_closest_point_to_segment_uncapped(const Vector2 &point, const Vector2 &s1, const Vector2 &s2) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("get_closest_point_to_segment_uncapped")._native_ptr(), 4172901909);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &point, &s1, &s2);
}

bool Geometry2D::point_is_inside_triangle(const Vector2 &point, const Vector2 &a, const Vector2 &b, const Vector2 &c) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("point_is_inside_triangle")._native_ptr(), 1025948137);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &point, &a, &b, &c);
}

bool Geometry2D::is_polygon_clockwise(const PackedVector2Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("is_polygon_clockwise")._native_ptr(), 1361156557);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &polygon);
}

bool Geometry2D::is_point_in_polygon(const Vector2 &point, const PackedVector2Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("is_point_in_polygon")._native_ptr(), 738277916);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &point, &polygon);
}

PackedInt32Array Geometry2D::triangulate_polygon(const PackedVector2Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("triangulate_polygon")._native_ptr(), 1389921771);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &polygon);
}

PackedInt32Array Geometry2D::triangulate_delaunay(const PackedVector2Array &points) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("triangulate_delaunay")._native_ptr(), 1389921771);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &points);
}

PackedVector2Array Geometry2D::convex_hull(const PackedVector2Array &points) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("convex_hull")._native_ptr(), 2004331998);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &points);
}

TypedArray<PackedVector2Array> Geometry2D::decompose_polygon_in_convex(const PackedVector2Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("decompose_polygon_in_convex")._native_ptr(), 3982393695);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &polygon);
}

TypedArray<PackedVector2Array> Geometry2D::merge_polygons(const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("merge_polygons")._native_ptr(), 3637387053);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &polygon_a, &polygon_b);
}

TypedArray<PackedVector2Array> Geometry2D::clip_polygons(const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("clip_polygons")._native_ptr(), 3637387053);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &polygon_a, &polygon_b);
}

TypedArray<PackedVector2Array> Geometry2D::intersect_polygons(const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("intersect_polygons")._native_ptr(), 3637387053);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &polygon_a, &polygon_b);
}

TypedArray<PackedVector2Array> Geometry2D::exclude_polygons(const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("exclude_polygons")._native_ptr(), 3637387053);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &polygon_a, &polygon_b);
}

TypedArray<PackedVector2Array> Geometry2D::clip_polyline_with_polygon(const PackedVector2Array &polyline, const PackedVector2Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("clip_polyline_with_polygon")._native_ptr(), 3637387053);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &polyline, &polygon);
}

TypedArray<PackedVector2Array> Geometry2D::intersect_polyline_with_polygon(const PackedVector2Array &polyline, const PackedVector2Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("intersect_polyline_with_polygon")._native_ptr(), 3637387053);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &polyline, &polygon);
}

TypedArray<PackedVector2Array> Geometry2D::offset_polygon(const PackedVector2Array &polygon, double delta, Geometry2D::PolyJoinType join_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("offset_polygon")._native_ptr(), 1275354010);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	double delta_encoded;
	PtrToArg<double>::encode(delta, &delta_encoded);
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &polygon, &delta_encoded, &join_type);
}

TypedArray<PackedVector2Array> Geometry2D::offset_polyline(const PackedVector2Array &polyline, double delta, Geometry2D::PolyJoinType join_type, Geometry2D::PolyEndType end_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("offset_polyline")._native_ptr(), 2328231778);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	double delta_encoded;
	PtrToArg<double>::encode(delta, &delta_encoded);
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &polyline, &delta_encoded, &join_type, &end_type);
}

Dictionary Geometry2D::make_atlas(const PackedVector2Array &sizes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry2D::get_class_static()._native_ptr(), StringName("make_atlas")._native_ptr(), 1337682371);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &sizes);
}


} // namespace godot 