/**************************************************************************/
/*  navigation_mesh_source_geometry_data3d.cpp                            */
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

#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/transform3d.hpp>

namespace godot {

void NavigationMeshSourceGeometryData3D::set_vertices(const PackedFloat32Array &vertices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData3D::get_class_static()._native_ptr(), StringName("set_vertices")._native_ptr(), 2899603908);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &vertices);
}

PackedFloat32Array NavigationMeshSourceGeometryData3D::get_vertices() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData3D::get_class_static()._native_ptr(), StringName("get_vertices")._native_ptr(), 675695659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedFloat32Array());
	return internal::_call_native_mb_ret<PackedFloat32Array>(_gde_method_bind, _owner);
}

void NavigationMeshSourceGeometryData3D::set_indices(const PackedInt32Array &indices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData3D::get_class_static()._native_ptr(), StringName("set_indices")._native_ptr(), 3614634198);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &indices);
}

PackedInt32Array NavigationMeshSourceGeometryData3D::get_indices() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData3D::get_class_static()._native_ptr(), StringName("get_indices")._native_ptr(), 1930428628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

void NavigationMeshSourceGeometryData3D::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData3D::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool NavigationMeshSourceGeometryData3D::has_data() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData3D::get_class_static()._native_ptr(), StringName("has_data")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationMeshSourceGeometryData3D::add_mesh(const Ref<Mesh> &mesh, const Transform3D &xform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData3D::get_class_static()._native_ptr(), StringName("add_mesh")._native_ptr(), 975462459);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr), &xform);
}

void NavigationMeshSourceGeometryData3D::add_mesh_array(const Array &mesh_array, const Transform3D &xform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData3D::get_class_static()._native_ptr(), StringName("add_mesh_array")._native_ptr(), 4235710913);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh_array, &xform);
}

void NavigationMeshSourceGeometryData3D::add_faces(const PackedVector3Array &faces, const Transform3D &xform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData3D::get_class_static()._native_ptr(), StringName("add_faces")._native_ptr(), 1440358797);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &faces, &xform);
}


} // namespace godot 