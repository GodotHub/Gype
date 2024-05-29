/**************************************************************************/
/*  gltf_node.cpp                                                         */
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

#include <godot_cpp/classes/gltf_node.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/string_name.hpp>

namespace godot {

int32_t GLTFNode::get_parent() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_parent")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFNode::set_parent(int32_t parent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_parent")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t parent_encoded;
	PtrToArg<int64_t>::encode(parent, &parent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &parent_encoded);
}

int32_t GLTFNode::get_height() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_height")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFNode::set_height(int32_t height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_height")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &height_encoded);
}

Transform3D GLTFNode::get_xform() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_xform")._native_ptr(), 4183770049);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner);
}

void GLTFNode::set_xform(const Transform3D &xform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_xform")._native_ptr(), 2952846383);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &xform);
}

int32_t GLTFNode::get_mesh() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_mesh")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFNode::set_mesh(int32_t mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_mesh")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mesh_encoded;
	PtrToArg<int64_t>::encode(mesh, &mesh_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh_encoded);
}

int32_t GLTFNode::get_camera() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_camera")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFNode::set_camera(int32_t camera) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_camera")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t camera_encoded;
	PtrToArg<int64_t>::encode(camera, &camera_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera_encoded);
}

int32_t GLTFNode::get_skin() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_skin")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFNode::set_skin(int32_t skin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_skin")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t skin_encoded;
	PtrToArg<int64_t>::encode(skin, &skin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &skin_encoded);
}

int32_t GLTFNode::get_skeleton() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_skeleton")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFNode::set_skeleton(int32_t skeleton) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_skeleton")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t skeleton_encoded;
	PtrToArg<int64_t>::encode(skeleton, &skeleton_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &skeleton_encoded);
}

Vector3 GLTFNode::get_position() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_position")._native_ptr(), 3783033775);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void GLTFNode::set_position(const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_position")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position);
}

Quaternion GLTFNode::get_rotation() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_rotation")._native_ptr(), 2916281908);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Quaternion());
	return internal::_call_native_mb_ret<Quaternion>(_gde_method_bind, _owner);
}

void GLTFNode::set_rotation(const Quaternion &rotation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_rotation")._native_ptr(), 1727505552);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rotation);
}

Vector3 GLTFNode::get_scale() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_scale")._native_ptr(), 3783033775);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void GLTFNode::set_scale(const Vector3 &scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_scale")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale);
}

PackedInt32Array GLTFNode::get_children() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_children")._native_ptr(), 969006518);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

void GLTFNode::set_children(const PackedInt32Array &children) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_children")._native_ptr(), 3614634198);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &children);
}

int32_t GLTFNode::get_light() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_light")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFNode::set_light(int32_t light) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_light")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t light_encoded;
	PtrToArg<int64_t>::encode(light, &light_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light_encoded);
}

Variant GLTFNode::get_additional_data(const StringName &extension_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("get_additional_data")._native_ptr(), 2138907829);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &extension_name);
}

void GLTFNode::set_additional_data(const StringName &extension_name, const Variant &additional_data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFNode::get_class_static()._native_ptr(), StringName("set_additional_data")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &extension_name, &additional_data);
}


} // namespace godot 