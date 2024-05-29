/**************************************************************************/
/*  geometry3d.cpp                                                        */
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

#include <godot_cpp/classes/geometry3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

Geometry3D *Geometry3D::get_singleton() {
	static Geometry3D *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(Geometry3D::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<Geometry3D *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &Geometry3D::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

PackedVector3Array Geometry3D::compute_convex_mesh_points(const TypedArray<Plane> &planes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("compute_convex_mesh_points")._native_ptr(), 1936902142);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner, &planes);
}

TypedArray<Plane> Geometry3D::build_box_planes(const Vector3 &extents) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("build_box_planes")._native_ptr(), 3622277145);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Plane>());
	return internal::_call_native_mb_ret<TypedArray<Plane>>(_gde_method_bind, _owner, &extents);
}

TypedArray<Plane> Geometry3D::build_cylinder_planes(double radius, double height, int32_t sides, Vector3::Axis axis) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("build_cylinder_planes")._native_ptr(), 449920067);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Plane>());
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	int64_t sides_encoded;
	PtrToArg<int64_t>::encode(sides, &sides_encoded);
	return internal::_call_native_mb_ret<TypedArray<Plane>>(_gde_method_bind, _owner, &radius_encoded, &height_encoded, &sides_encoded, &axis);
}

TypedArray<Plane> Geometry3D::build_capsule_planes(double radius, double height, int32_t sides, int32_t lats, Vector3::Axis axis) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("build_capsule_planes")._native_ptr(), 2113592876);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Plane>());
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	int64_t sides_encoded;
	PtrToArg<int64_t>::encode(sides, &sides_encoded);
	int64_t lats_encoded;
	PtrToArg<int64_t>::encode(lats, &lats_encoded);
	return internal::_call_native_mb_ret<TypedArray<Plane>>(_gde_method_bind, _owner, &radius_encoded, &height_encoded, &sides_encoded, &lats_encoded, &axis);
}

PackedVector3Array Geometry3D::get_closest_points_between_segments(const Vector3 &p1, const Vector3 &p2, const Vector3 &q1, const Vector3 &q2) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("get_closest_points_between_segments")._native_ptr(), 1056373962);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner, &p1, &p2, &q1, &q2);
}

Vector3 Geometry3D::get_closest_point_to_segment(const Vector3 &point, const Vector3 &s1, const Vector3 &s2) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("get_closest_point_to_segment")._native_ptr(), 2168193209);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &point, &s1, &s2);
}

Vector3 Geometry3D::get_closest_point_to_segment_uncapped(const Vector3 &point, const Vector3 &s1, const Vector3 &s2) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("get_closest_point_to_segment_uncapped")._native_ptr(), 2168193209);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &point, &s1, &s2);
}

Vector3 Geometry3D::get_triangle_barycentric_coords(const Vector3 &point, const Vector3 &a, const Vector3 &b, const Vector3 &c) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("get_triangle_barycentric_coords")._native_ptr(), 1362048029);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &point, &a, &b, &c);
}

Variant Geometry3D::ray_intersects_triangle(const Vector3 &from, const Vector3 &dir, const Vector3 &a, const Vector3 &b, const Vector3 &c) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("ray_intersects_triangle")._native_ptr(), 1718655448);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &from, &dir, &a, &b, &c);
}

Variant Geometry3D::segment_intersects_triangle(const Vector3 &from, const Vector3 &to, const Vector3 &a, const Vector3 &b, const Vector3 &c) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("segment_intersects_triangle")._native_ptr(), 1718655448);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &from, &to, &a, &b, &c);
}

PackedVector3Array Geometry3D::segment_intersects_sphere(const Vector3 &from, const Vector3 &to, const Vector3 &sphere_position, double sphere_radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("segment_intersects_sphere")._native_ptr(), 4080141172);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	double sphere_radius_encoded;
	PtrToArg<double>::encode(sphere_radius, &sphere_radius_encoded);
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner, &from, &to, &sphere_position, &sphere_radius_encoded);
}

PackedVector3Array Geometry3D::segment_intersects_cylinder(const Vector3 &from, const Vector3 &to, double height, double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("segment_intersects_cylinder")._native_ptr(), 2361316491);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner, &from, &to, &height_encoded, &radius_encoded);
}

PackedVector3Array Geometry3D::segment_intersects_convex(const Vector3 &from, const Vector3 &to, const TypedArray<Plane> &planes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("segment_intersects_convex")._native_ptr(), 537425332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner, &from, &to, &planes);
}

PackedVector3Array Geometry3D::clip_polygon(const PackedVector3Array &points, const Plane &plane) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Geometry3D::get_class_static()._native_ptr(), StringName("clip_polygon")._native_ptr(), 2603188319);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner, &points, &plane);
}


} // namespace godot 