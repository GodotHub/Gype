/**************************************************************************/
/*  mesh_data_tool.cpp                                                    */
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

#include <godot_cpp/classes/mesh_data_tool.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/material.hpp>

namespace godot {

void MeshDataTool::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Error MeshDataTool::create_from_surface(const Ref<ArrayMesh> &mesh, int32_t surface) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("create_from_surface")._native_ptr(), 2727020678);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr), &surface_encoded);
}

Error MeshDataTool::commit_to_surface(const Ref<ArrayMesh> &mesh, uint64_t compression_flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("commit_to_surface")._native_ptr(), 2021686445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t compression_flags_encoded;
	PtrToArg<int64_t>::encode(compression_flags, &compression_flags_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr), &compression_flags_encoded);
}

uint64_t MeshDataTool::get_format() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_format")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

int32_t MeshDataTool::get_vertex_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t MeshDataTool::get_edge_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_edge_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t MeshDataTool::get_face_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_face_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MeshDataTool::set_vertex(int32_t idx, const Vector3 &vertex) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_vertex")._native_ptr(), 1530502735);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &vertex);
}

Vector3 MeshDataTool::get_vertex(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex")._native_ptr(), 711720468);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_vertex_normal(int32_t idx, const Vector3 &normal) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_vertex_normal")._native_ptr(), 1530502735);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &normal);
}

Vector3 MeshDataTool::get_vertex_normal(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_normal")._native_ptr(), 711720468);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_vertex_tangent(int32_t idx, const Plane &tangent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_vertex_tangent")._native_ptr(), 1104099133);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &tangent);
}

Plane MeshDataTool::get_vertex_tangent(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_tangent")._native_ptr(), 1372055458);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Plane());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Plane>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_vertex_uv(int32_t idx, const Vector2 &uv) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_vertex_uv")._native_ptr(), 163021252);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &uv);
}

Vector2 MeshDataTool::get_vertex_uv(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_uv")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_vertex_uv2(int32_t idx, const Vector2 &uv2) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_vertex_uv2")._native_ptr(), 163021252);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &uv2);
}

Vector2 MeshDataTool::get_vertex_uv2(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_uv2")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_vertex_color(int32_t idx, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_vertex_color")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &color);
}

Color MeshDataTool::get_vertex_color(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_color")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_vertex_bones(int32_t idx, const PackedInt32Array &bones) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_vertex_bones")._native_ptr(), 3500328261);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &bones);
}

PackedInt32Array MeshDataTool::get_vertex_bones(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_bones")._native_ptr(), 1706082319);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_vertex_weights(int32_t idx, const PackedFloat32Array &weights) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_vertex_weights")._native_ptr(), 1345852415);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &weights);
}

PackedFloat32Array MeshDataTool::get_vertex_weights(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_weights")._native_ptr(), 1542882410);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedFloat32Array());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<PackedFloat32Array>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_vertex_meta(int32_t idx, const Variant &meta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_vertex_meta")._native_ptr(), 2152698145);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &meta);
}

Variant MeshDataTool::get_vertex_meta(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_meta")._native_ptr(), 4227898402);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &idx_encoded);
}

PackedInt32Array MeshDataTool::get_vertex_edges(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_edges")._native_ptr(), 1706082319);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &idx_encoded);
}

PackedInt32Array MeshDataTool::get_vertex_faces(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_vertex_faces")._native_ptr(), 1706082319);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &idx_encoded);
}

int32_t MeshDataTool::get_edge_vertex(int32_t idx, int32_t vertex) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_edge_vertex")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int64_t vertex_encoded;
	PtrToArg<int64_t>::encode(vertex, &vertex_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &idx_encoded, &vertex_encoded);
}

PackedInt32Array MeshDataTool::get_edge_faces(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_edge_faces")._native_ptr(), 1706082319);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_edge_meta(int32_t idx, const Variant &meta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_edge_meta")._native_ptr(), 2152698145);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &meta);
}

Variant MeshDataTool::get_edge_meta(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_edge_meta")._native_ptr(), 4227898402);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &idx_encoded);
}

int32_t MeshDataTool::get_face_vertex(int32_t idx, int32_t vertex) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_face_vertex")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int64_t vertex_encoded;
	PtrToArg<int64_t>::encode(vertex, &vertex_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &idx_encoded, &vertex_encoded);
}

int32_t MeshDataTool::get_face_edge(int32_t idx, int32_t edge) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_face_edge")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int64_t edge_encoded;
	PtrToArg<int64_t>::encode(edge, &edge_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &idx_encoded, &edge_encoded);
}

void MeshDataTool::set_face_meta(int32_t idx, const Variant &meta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_face_meta")._native_ptr(), 2152698145);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &meta);
}

Variant MeshDataTool::get_face_meta(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_face_meta")._native_ptr(), 4227898402);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &idx_encoded);
}

Vector3 MeshDataTool::get_face_normal(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_face_normal")._native_ptr(), 711720468);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &idx_encoded);
}

void MeshDataTool::set_material(const Ref<Material> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("set_material")._native_ptr(), 2757459619);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (material != nullptr ? &material->_owner : nullptr));
}

Ref<Material> MeshDataTool::get_material() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshDataTool::get_class_static()._native_ptr(), StringName("get_material")._native_ptr(), 5934680);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Material>());
	return Ref<Material>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Material>(_gde_method_bind, _owner));
}


} // namespace godot 