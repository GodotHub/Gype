/**************************************************************************/
/*  importer_mesh.cpp                                                     */
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

#include <godot_cpp/classes/importer_mesh.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


void ImporterMesh::add_blend_shape(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("add_blend_shape")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

int32_t ImporterMesh::get_blend_shape_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_blend_shape_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

String ImporterMesh::get_blend_shape_name(int32_t blend_shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_blend_shape_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t blend_shape_idx_encoded;
	PtrToArg<int64_t>::encode(blend_shape_idx, &blend_shape_idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &blend_shape_idx_encoded);
}

void ImporterMesh::set_blend_shape_mode(Mesh::BlendShapeMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("set_blend_shape_mode")._native_ptr(), 227983991);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Mesh::BlendShapeMode ImporterMesh::get_blend_shape_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_blend_shape_mode")._native_ptr(), 836485024);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Mesh::BlendShapeMode(0));
	return (Mesh::BlendShapeMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ImporterMesh::add_surface(Mesh::PrimitiveType primitive, const Array &arrays, const TypedArray<Array> &blend_shapes, const Dictionary &lods, const Ref<Material> &material, const String &name, uint64_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("add_surface")._native_ptr(), 1740448849);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &primitive, &arrays, &blend_shapes, &lods, (material != nullptr ? &material->_owner : nullptr), &name, &flags_encoded);
}

int32_t ImporterMesh::get_surface_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Mesh::PrimitiveType ImporterMesh::get_surface_primitive_type(int32_t surface_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_primitive_type")._native_ptr(), 3552571330);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Mesh::PrimitiveType(0));
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	return (Mesh::PrimitiveType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &surface_idx_encoded);
}

String ImporterMesh::get_surface_name(int32_t surface_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &surface_idx_encoded);
}

Array ImporterMesh::get_surface_arrays(int32_t surface_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_arrays")._native_ptr(), 663333327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &surface_idx_encoded);
}

Array ImporterMesh::get_surface_blend_shape_arrays(int32_t surface_idx, int32_t blend_shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_blend_shape_arrays")._native_ptr(), 2345056839);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	int64_t blend_shape_idx_encoded;
	PtrToArg<int64_t>::encode(blend_shape_idx, &blend_shape_idx_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &surface_idx_encoded, &blend_shape_idx_encoded);
}

int32_t ImporterMesh::get_surface_lod_count(int32_t surface_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_lod_count")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &surface_idx_encoded);
}

double ImporterMesh::get_surface_lod_size(int32_t surface_idx, int32_t lod_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_lod_size")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	int64_t lod_idx_encoded;
	PtrToArg<int64_t>::encode(lod_idx, &lod_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &surface_idx_encoded, &lod_idx_encoded);
}

PackedInt32Array ImporterMesh::get_surface_lod_indices(int32_t surface_idx, int32_t lod_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_lod_indices")._native_ptr(), 1265128013);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	int64_t lod_idx_encoded;
	PtrToArg<int64_t>::encode(lod_idx, &lod_idx_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &surface_idx_encoded, &lod_idx_encoded);
}

Ref<Material> ImporterMesh::get_surface_material(int32_t surface_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_material")._native_ptr(), 2897466400);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Material>());
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	return Ref<Material>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Material>(_gde_method_bind, _owner, &surface_idx_encoded));
}

uint64_t ImporterMesh::get_surface_format(int32_t surface_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_surface_format")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &surface_idx_encoded);
}

void ImporterMesh::set_surface_name(int32_t surface_idx, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("set_surface_name")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &surface_idx_encoded, &name);
}

void ImporterMesh::set_surface_material(int32_t surface_idx, const Ref<Material> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("set_surface_material")._native_ptr(), 3671737478);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surface_idx_encoded;
	PtrToArg<int64_t>::encode(surface_idx, &surface_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &surface_idx_encoded, (material != nullptr ? &material->_owner : nullptr));
}

void ImporterMesh::generate_lods(double normal_merge_angle, double normal_split_angle, const Array &bone_transform_array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("generate_lods")._native_ptr(), 2491878677);
	CHECK_METHOD_BIND(_gde_method_bind);
	double normal_merge_angle_encoded;
	PtrToArg<double>::encode(normal_merge_angle, &normal_merge_angle_encoded);
	double normal_split_angle_encoded;
	PtrToArg<double>::encode(normal_split_angle, &normal_split_angle_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &normal_merge_angle_encoded, &normal_split_angle_encoded, &bone_transform_array);
}

Ref<ArrayMesh> ImporterMesh::get_mesh(const Ref<ArrayMesh> &base_mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_mesh")._native_ptr(), 1457573577);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ArrayMesh>());
	return Ref<ArrayMesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ArrayMesh>(_gde_method_bind, _owner, (base_mesh != nullptr ? &base_mesh->_owner : nullptr)));
}

void ImporterMesh::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void ImporterMesh::set_lightmap_size_hint(const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("set_lightmap_size_hint")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

Vector2i ImporterMesh::get_lightmap_size_hint() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMesh::get_class_static()._native_ptr(), StringName("get_lightmap_size_hint")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}


} // namespace godot 