/**************************************************************************/
/*  array_mesh.cpp                                                        */
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

#include <godot_cpp/classes/array_mesh.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/transform3d.hpp>

namespace godot {

void ArrayMesh::add_blend_shape(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("add_blend_shape")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

int32_t ArrayMesh::get_blend_shape_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("get_blend_shape_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

StringName ArrayMesh::get_blend_shape_name(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("get_blend_shape_name")._native_ptr(), 659327637);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &index_encoded);
}

void ArrayMesh::set_blend_shape_name(int32_t index, const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("set_blend_shape_name")._native_ptr(), 3780747571);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &name);
}

void ArrayMesh::clear_blend_shapes() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("clear_blend_shapes")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void ArrayMesh::set_blend_shape_mode(Mesh::BlendShapeMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("set_blend_shape_mode")._native_ptr(), 227983991);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Mesh::BlendShapeMode ArrayMesh::get_blend_shape_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("get_blend_shape_mode")._native_ptr(), 836485024);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Mesh::BlendShapeMode(0));
	return (Mesh::BlendShapeMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ArrayMesh::add_surface_from_arrays(Mesh::PrimitiveType primitive, const Array &arrays, const TypedArray<Array> &blend_shapes, const Dictionary &lods, BitField<Mesh::ArrayFormat> flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("add_surface_from_arrays")._native_ptr(), 1796411378);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &primitive, &arrays, &blend_shapes, &lods, &flags);
}

void ArrayMesh::clear_surfaces() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("clear_surfaces")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void ArrayMesh::surface_update_vertex_region(int32_t surf_idx, int32_t offset, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_update_vertex_region")._native_ptr(), 3837166854);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surf_idx_encoded;
	PtrToArg<int64_t>::encode(surf_idx, &surf_idx_encoded);
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &surf_idx_encoded, &offset_encoded, &data);
}

void ArrayMesh::surface_update_attribute_region(int32_t surf_idx, int32_t offset, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_update_attribute_region")._native_ptr(), 3837166854);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surf_idx_encoded;
	PtrToArg<int64_t>::encode(surf_idx, &surf_idx_encoded);
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &surf_idx_encoded, &offset_encoded, &data);
}

void ArrayMesh::surface_update_skin_region(int32_t surf_idx, int32_t offset, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_update_skin_region")._native_ptr(), 3837166854);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surf_idx_encoded;
	PtrToArg<int64_t>::encode(surf_idx, &surf_idx_encoded);
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &surf_idx_encoded, &offset_encoded, &data);
}

int32_t ArrayMesh::surface_get_array_len(int32_t surf_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_get_array_len")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t surf_idx_encoded;
	PtrToArg<int64_t>::encode(surf_idx, &surf_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &surf_idx_encoded);
}

int32_t ArrayMesh::surface_get_array_index_len(int32_t surf_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_get_array_index_len")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t surf_idx_encoded;
	PtrToArg<int64_t>::encode(surf_idx, &surf_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &surf_idx_encoded);
}

BitField<Mesh::ArrayFormat> ArrayMesh::surface_get_format(int32_t surf_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_get_format")._native_ptr(), 3718287884);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<Mesh::ArrayFormat>(0));
	int64_t surf_idx_encoded;
	PtrToArg<int64_t>::encode(surf_idx, &surf_idx_encoded);
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &surf_idx_encoded);
}

Mesh::PrimitiveType ArrayMesh::surface_get_primitive_type(int32_t surf_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_get_primitive_type")._native_ptr(), 4141943888);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Mesh::PrimitiveType(0));
	int64_t surf_idx_encoded;
	PtrToArg<int64_t>::encode(surf_idx, &surf_idx_encoded);
	return (Mesh::PrimitiveType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &surf_idx_encoded);
}

int32_t ArrayMesh::surface_find_by_name(const String &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_find_by_name")._native_ptr(), 1321353865);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name);
}

void ArrayMesh::surface_set_name(int32_t surf_idx, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_set_name")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surf_idx_encoded;
	PtrToArg<int64_t>::encode(surf_idx, &surf_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &surf_idx_encoded, &name);
}

String ArrayMesh::surface_get_name(int32_t surf_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("surface_get_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t surf_idx_encoded;
	PtrToArg<int64_t>::encode(surf_idx, &surf_idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &surf_idx_encoded);
}

void ArrayMesh::regen_normal_maps() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("regen_normal_maps")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Error ArrayMesh::lightmap_unwrap(const Transform3D &transform, double texel_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("lightmap_unwrap")._native_ptr(), 1476641071);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	double texel_size_encoded;
	PtrToArg<double>::encode(texel_size, &texel_size_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &transform, &texel_size_encoded);
}

void ArrayMesh::set_custom_aabb(const AABB &aabb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("set_custom_aabb")._native_ptr(), 259215842);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &aabb);
}

AABB ArrayMesh::get_custom_aabb() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("get_custom_aabb")._native_ptr(), 1068685055);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner);
}

void ArrayMesh::set_shadow_mesh(const Ref<ArrayMesh> &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("set_shadow_mesh")._native_ptr(), 3377897901);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr));
}

Ref<ArrayMesh> ArrayMesh::get_shadow_mesh() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ArrayMesh::get_class_static()._native_ptr(), StringName("get_shadow_mesh")._native_ptr(), 3206942465);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ArrayMesh>());
	return Ref<ArrayMesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ArrayMesh>(_gde_method_bind, _owner));
}


} // namespace godot 