/**************************************************************************/
/*  gltf_physics_shape.cpp                                                */
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

#include <godot_cpp/classes/gltf_physics_shape.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/collision_shape3d.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/shape3d.hpp>

namespace godot {


Ref<GLTFPhysicsShape> GLTFPhysicsShape::from_node(CollisionShape3D *shape_node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("from_node")._native_ptr(), 3613751275);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<GLTFPhysicsShape>());
	return Ref<GLTFPhysicsShape>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<GLTFPhysicsShape>(_gde_method_bind, nullptr, (shape_node != nullptr ? &shape_node->_owner : nullptr)));
}

CollisionShape3D *GLTFPhysicsShape::to_node(bool cache_shapes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("to_node")._native_ptr(), 563689933);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int8_t cache_shapes_encoded;
	PtrToArg<bool>::encode(cache_shapes, &cache_shapes_encoded);
	return internal::_call_native_mb_ret_obj<CollisionShape3D>(_gde_method_bind, _owner, &cache_shapes_encoded);
}

Ref<GLTFPhysicsShape> GLTFPhysicsShape::from_resource(const Ref<Shape3D> &shape_resource) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("from_resource")._native_ptr(), 3845569786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<GLTFPhysicsShape>());
	return Ref<GLTFPhysicsShape>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<GLTFPhysicsShape>(_gde_method_bind, nullptr, (shape_resource != nullptr ? &shape_resource->_owner : nullptr)));
}

Ref<Shape3D> GLTFPhysicsShape::to_resource(bool cache_shapes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("to_resource")._native_ptr(), 1913542110);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Shape3D>());
	int8_t cache_shapes_encoded;
	PtrToArg<bool>::encode(cache_shapes, &cache_shapes_encoded);
	return Ref<Shape3D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Shape3D>(_gde_method_bind, _owner, &cache_shapes_encoded));
}

Ref<GLTFPhysicsShape> GLTFPhysicsShape::from_dictionary(const Dictionary &dictionary) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("from_dictionary")._native_ptr(), 2390691823);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<GLTFPhysicsShape>());
	return Ref<GLTFPhysicsShape>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<GLTFPhysicsShape>(_gde_method_bind, nullptr, &dictionary));
}

Dictionary GLTFPhysicsShape::to_dictionary() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("to_dictionary")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

String GLTFPhysicsShape::get_shape_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("get_shape_type")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void GLTFPhysicsShape::set_shape_type(const String &shape_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("set_shape_type")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape_type);
}

Vector3 GLTFPhysicsShape::get_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void GLTFPhysicsShape::set_size(const Vector3 &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("set_size")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

double GLTFPhysicsShape::get_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("get_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GLTFPhysicsShape::set_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("set_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double GLTFPhysicsShape::get_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("get_height")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GLTFPhysicsShape::set_height(double height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("set_height")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &height_encoded);
}

bool GLTFPhysicsShape::get_is_trigger() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("get_is_trigger")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GLTFPhysicsShape::set_is_trigger(bool is_trigger) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("set_is_trigger")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t is_trigger_encoded;
	PtrToArg<bool>::encode(is_trigger, &is_trigger_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &is_trigger_encoded);
}

int32_t GLTFPhysicsShape::get_mesh_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("get_mesh_index")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFPhysicsShape::set_mesh_index(int32_t mesh_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("set_mesh_index")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mesh_index_encoded;
	PtrToArg<int64_t>::encode(mesh_index, &mesh_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh_index_encoded);
}

Ref<ImporterMesh> GLTFPhysicsShape::get_importer_mesh() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("get_importer_mesh")._native_ptr(), 3161779525);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ImporterMesh>());
	return Ref<ImporterMesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ImporterMesh>(_gde_method_bind, _owner));
}

void GLTFPhysicsShape::set_importer_mesh(const Ref<ImporterMesh> &importer_mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFPhysicsShape::get_class_static()._native_ptr(), StringName("set_importer_mesh")._native_ptr(), 2255166972);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (importer_mesh != nullptr ? &importer_mesh->_owner : nullptr));
}


} // namespace godot 