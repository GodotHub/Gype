/**************************************************************************/
/*  mesh_instance3d.cpp                                                   */
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

#include <godot_cpp/classes/mesh_instance3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {

void MeshInstance3D::set_mesh(const Ref<Mesh> &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("set_mesh")._native_ptr(), 194775623);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr));
}

Ref<Mesh> MeshInstance3D::get_mesh() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("get_mesh")._native_ptr(), 1808005922);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Mesh>());
	return Ref<Mesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Mesh>(_gde_method_bind, _owner));
}

void MeshInstance3D::set_skeleton_path(const NodePath &skeleton_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("set_skeleton_path")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &skeleton_path);
}

NodePath MeshInstance3D::get_skeleton_path() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("get_skeleton_path")._native_ptr(), 277076166);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void MeshInstance3D::set_skin(const Ref<Skin> &skin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("set_skin")._native_ptr(), 3971435618);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (skin != nullptr ? &skin->_owner : nullptr));
}

Ref<Skin> MeshInstance3D::get_skin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("get_skin")._native_ptr(), 2074563878);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Skin>());
	return Ref<Skin>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Skin>(_gde_method_bind, _owner));
}

int32_t MeshInstance3D::get_surface_override_material_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("get_surface_override_material_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MeshInstance3D::set_surface_override_material(int32_t surface, const Ref<Material> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("set_surface_override_material")._native_ptr(), 3671737478);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &surface_encoded, (material != nullptr ? &material->_owner : nullptr));
}

Ref<Material> MeshInstance3D::get_surface_override_material(int32_t surface) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("get_surface_override_material")._native_ptr(), 2897466400);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Material>());
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	return Ref<Material>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Material>(_gde_method_bind, _owner, &surface_encoded));
}

Ref<Material> MeshInstance3D::get_active_material(int32_t surface) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("get_active_material")._native_ptr(), 2897466400);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Material>());
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	return Ref<Material>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Material>(_gde_method_bind, _owner, &surface_encoded));
}

void MeshInstance3D::create_trimesh_collision() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("create_trimesh_collision")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void MeshInstance3D::create_convex_collision(bool clean, bool simplify) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("create_convex_collision")._native_ptr(), 2751962654);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t clean_encoded;
	PtrToArg<bool>::encode(clean, &clean_encoded);
	int8_t simplify_encoded;
	PtrToArg<bool>::encode(simplify, &simplify_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clean_encoded, &simplify_encoded);
}

void MeshInstance3D::create_multiple_convex_collisions(const Ref<MeshConvexDecompositionSettings> &settings) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("create_multiple_convex_collisions")._native_ptr(), 628789669);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (settings != nullptr ? &settings->_owner : nullptr));
}

int32_t MeshInstance3D::get_blend_shape_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("get_blend_shape_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t MeshInstance3D::find_blend_shape_by_name(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("find_blend_shape_by_name")._native_ptr(), 4150868206);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name);
}

double MeshInstance3D::get_blend_shape_value(int32_t blend_shape_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("get_blend_shape_value")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t blend_shape_idx_encoded;
	PtrToArg<int64_t>::encode(blend_shape_idx, &blend_shape_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &blend_shape_idx_encoded);
}

void MeshInstance3D::set_blend_shape_value(int32_t blend_shape_idx, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("set_blend_shape_value")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t blend_shape_idx_encoded;
	PtrToArg<int64_t>::encode(blend_shape_idx, &blend_shape_idx_encoded);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &blend_shape_idx_encoded, &value_encoded);
}

void MeshInstance3D::create_debug_tangents() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MeshInstance3D::get_class_static()._native_ptr(), StringName("create_debug_tangents")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 