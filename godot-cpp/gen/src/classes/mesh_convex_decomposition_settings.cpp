/**************************************************************************/
/*  mesh_convex_decomposition_settings.cpp                                */
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

#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void MeshConvexDecompositionSettings::set_max_concavity(double max_concavity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_max_concavity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double max_concavity_encoded;
	PtrToArg<double>::encode(max_concavity, &max_concavity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_concavity_encoded);
}

double MeshConvexDecompositionSettings::get_max_concavity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_max_concavity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_symmetry_planes_clipping_bias(double symmetry_planes_clipping_bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_symmetry_planes_clipping_bias")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double symmetry_planes_clipping_bias_encoded;
	PtrToArg<double>::encode(symmetry_planes_clipping_bias, &symmetry_planes_clipping_bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &symmetry_planes_clipping_bias_encoded);
}

double MeshConvexDecompositionSettings::get_symmetry_planes_clipping_bias() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_symmetry_planes_clipping_bias")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_revolution_axes_clipping_bias(double revolution_axes_clipping_bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_revolution_axes_clipping_bias")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double revolution_axes_clipping_bias_encoded;
	PtrToArg<double>::encode(revolution_axes_clipping_bias, &revolution_axes_clipping_bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &revolution_axes_clipping_bias_encoded);
}

double MeshConvexDecompositionSettings::get_revolution_axes_clipping_bias() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_revolution_axes_clipping_bias")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_min_volume_per_convex_hull(double min_volume_per_convex_hull) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_min_volume_per_convex_hull")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double min_volume_per_convex_hull_encoded;
	PtrToArg<double>::encode(min_volume_per_convex_hull, &min_volume_per_convex_hull_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &min_volume_per_convex_hull_encoded);
}

double MeshConvexDecompositionSettings::get_min_volume_per_convex_hull() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_min_volume_per_convex_hull")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_resolution(uint32_t min_volume_per_convex_hull) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_resolution")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t min_volume_per_convex_hull_encoded;
	PtrToArg<int64_t>::encode(min_volume_per_convex_hull, &min_volume_per_convex_hull_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &min_volume_per_convex_hull_encoded);
}

uint32_t MeshConvexDecompositionSettings::get_resolution() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_resolution")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_max_num_vertices_per_convex_hull(uint32_t max_num_vertices_per_convex_hull) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_max_num_vertices_per_convex_hull")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_num_vertices_per_convex_hull_encoded;
	PtrToArg<int64_t>::encode(max_num_vertices_per_convex_hull, &max_num_vertices_per_convex_hull_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_num_vertices_per_convex_hull_encoded);
}

uint32_t MeshConvexDecompositionSettings::get_max_num_vertices_per_convex_hull() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_max_num_vertices_per_convex_hull")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_plane_downsampling(uint32_t plane_downsampling) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_plane_downsampling")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t plane_downsampling_encoded;
	PtrToArg<int64_t>::encode(plane_downsampling, &plane_downsampling_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &plane_downsampling_encoded);
}

uint32_t MeshConvexDecompositionSettings::get_plane_downsampling() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_plane_downsampling")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_convex_hull_downsampling(uint32_t convex_hull_downsampling) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_convex_hull_downsampling")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t convex_hull_downsampling_encoded;
	PtrToArg<int64_t>::encode(convex_hull_downsampling, &convex_hull_downsampling_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &convex_hull_downsampling_encoded);
}

uint32_t MeshConvexDecompositionSettings::get_convex_hull_downsampling() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_convex_hull_downsampling")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_normalize_mesh(bool normalize_mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_normalize_mesh")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t normalize_mesh_encoded;
	PtrToArg<bool>::encode(normalize_mesh, &normalize_mesh_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &normalize_mesh_encoded);
}

bool MeshConvexDecompositionSettings::get_normalize_mesh() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_normalize_mesh")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_mode(MeshConvexDecompositionSettings::Mode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_mode")._native_ptr(), 1668072869);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

MeshConvexDecompositionSettings::Mode MeshConvexDecompositionSettings::get_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_mode")._native_ptr(), 23479454);
	CHECK_METHOD_BIND_RET(_gde_method_bind, MeshConvexDecompositionSettings::Mode(0));
	return (MeshConvexDecompositionSettings::Mode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_convex_hull_approximation(bool convex_hull_approximation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_convex_hull_approximation")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t convex_hull_approximation_encoded;
	PtrToArg<bool>::encode(convex_hull_approximation, &convex_hull_approximation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &convex_hull_approximation_encoded);
}

bool MeshConvexDecompositionSettings::get_convex_hull_approximation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_convex_hull_approximation")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_max_convex_hulls(uint32_t max_convex_hulls) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_max_convex_hulls")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_convex_hulls_encoded;
	PtrToArg<int64_t>::encode(max_convex_hulls, &max_convex_hulls_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_convex_hulls_encoded);
}

uint32_t MeshConvexDecompositionSettings::get_max_convex_hulls() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_max_convex_hulls")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MeshConvexDecompositionSettings::set_project_hull_vertices(bool project_hull_vertices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("set_project_hull_vertices")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t project_hull_vertices_encoded;
	PtrToArg<bool>::encode(project_hull_vertices, &project_hull_vertices_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &project_hull_vertices_encoded);
}

bool MeshConvexDecompositionSettings::get_project_hull_vertices() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshConvexDecompositionSettings::get_class_static()._native_ptr(), StringName("get_project_hull_vertices")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 