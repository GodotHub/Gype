/**************************************************************************/
/*  editor_node3d_gizmo.cpp                                               */
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

#include <godot_cpp/classes/editor_node3d_gizmo.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/variant/vector2.hpp>

namespace godot {

void EditorNode3DGizmo::add_lines(const PackedVector3Array &lines, const Ref<Material> &material, bool billboard, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("add_lines")._native_ptr(), 2910971437);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t billboard_encoded;
	PtrToArg<bool>::encode(billboard, &billboard_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lines, (material != nullptr ? &material->_owner : nullptr), &billboard_encoded, &modulate);
}

void EditorNode3DGizmo::add_mesh(const Ref<Mesh> &mesh, const Ref<Material> &material, const Transform3D &transform, const Ref<SkinReference> &skeleton) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("add_mesh")._native_ptr(), 1579955111);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr), (material != nullptr ? &material->_owner : nullptr), &transform, (skeleton != nullptr ? &skeleton->_owner : nullptr));
}

void EditorNode3DGizmo::add_collision_segments(const PackedVector3Array &segments) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("add_collision_segments")._native_ptr(), 334873810);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &segments);
}

void EditorNode3DGizmo::add_collision_triangles(const Ref<TriangleMesh> &triangles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("add_collision_triangles")._native_ptr(), 54901064);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (triangles != nullptr ? &triangles->_owner : nullptr));
}

void EditorNode3DGizmo::add_unscaled_billboard(const Ref<Material> &material, double default_scale, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("add_unscaled_billboard")._native_ptr(), 520007164);
	CHECK_METHOD_BIND(_gde_method_bind);
	double default_scale_encoded;
	PtrToArg<double>::encode(default_scale, &default_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (material != nullptr ? &material->_owner : nullptr), &default_scale_encoded, &modulate);
}

void EditorNode3DGizmo::add_handles(const PackedVector3Array &handles, const Ref<Material> &material, const PackedInt32Array &ids, bool billboard, bool secondary) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("add_handles")._native_ptr(), 2254560097);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t billboard_encoded;
	PtrToArg<bool>::encode(billboard, &billboard_encoded);
	int8_t secondary_encoded;
	PtrToArg<bool>::encode(secondary, &secondary_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &handles, (material != nullptr ? &material->_owner : nullptr), &ids, &billboard_encoded, &secondary_encoded);
}

void EditorNode3DGizmo::set_node_3d(Node *node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("set_node_3d")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

Node3D *EditorNode3DGizmo::get_node_3d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("get_node_3d")._native_ptr(), 151077316);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node3D>(_gde_method_bind, _owner);
}

Ref<EditorNode3DGizmoPlugin> EditorNode3DGizmo::get_plugin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("get_plugin")._native_ptr(), 4250544552);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<EditorNode3DGizmoPlugin>());
	return Ref<EditorNode3DGizmoPlugin>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<EditorNode3DGizmoPlugin>(_gde_method_bind, _owner));
}

void EditorNode3DGizmo::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void EditorNode3DGizmo::set_hidden(bool hidden) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("set_hidden")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t hidden_encoded;
	PtrToArg<bool>::encode(hidden, &hidden_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hidden_encoded);
}

bool EditorNode3DGizmo::is_subgizmo_selected(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("is_subgizmo_selected")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &id_encoded);
}

PackedInt32Array EditorNode3DGizmo::get_subgizmo_selection() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmo::get_class_static()._native_ptr(), StringName("get_subgizmo_selection")._native_ptr(), 1930428628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

void EditorNode3DGizmo::_redraw() {}

String EditorNode3DGizmo::_get_handle_name(int32_t id, bool secondary) const {
	return String();
}

bool EditorNode3DGizmo::_is_handle_highlighted(int32_t id, bool secondary) const {
	return false;
}

Variant EditorNode3DGizmo::_get_handle_value(int32_t id, bool secondary) const {
	return Variant();
}

void EditorNode3DGizmo::_begin_handle_action(int32_t id, bool secondary) {}

void EditorNode3DGizmo::_set_handle(int32_t id, bool secondary, Camera3D *camera, const Vector2 &point) {}

void EditorNode3DGizmo::_commit_handle(int32_t id, bool secondary, const Variant &restore, bool cancel) {}

int32_t EditorNode3DGizmo::_subgizmos_intersect_ray(Camera3D *camera, const Vector2 &point) const {
	return 0;
}

PackedInt32Array EditorNode3DGizmo::_subgizmos_intersect_frustum(Camera3D *camera, const TypedArray<Plane> &frustum) const {
	return PackedInt32Array();
}

void EditorNode3DGizmo::_set_subgizmo_transform(int32_t id, const Transform3D &transform) {}

Transform3D EditorNode3DGizmo::_get_subgizmo_transform(int32_t id) const {
	return Transform3D();
}

void EditorNode3DGizmo::_commit_subgizmos(const PackedInt32Array &ids, const TypedArray<Transform3D> &restores, bool cancel) {}


} // namespace godot 