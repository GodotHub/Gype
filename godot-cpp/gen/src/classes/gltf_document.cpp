/**************************************************************************/
/*  gltf_document.cpp                                                     */
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

#include <godot_cpp/classes/gltf_document.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/node.hpp>

namespace godot {

Error GLTFDocument::append_from_file(const String &path, const Ref<GLTFState> &state, uint32_t flags, const String &base_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("append_from_file")._native_ptr(), 866380864);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path, (state != nullptr ? &state->_owner : nullptr), &flags_encoded, &base_path);
}

Error GLTFDocument::append_from_buffer(const PackedByteArray &bytes, const String &base_path, const Ref<GLTFState> &state, uint32_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("append_from_buffer")._native_ptr(), 1616081266);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &bytes, &base_path, (state != nullptr ? &state->_owner : nullptr), &flags_encoded);
}

Error GLTFDocument::append_from_scene(Node *node, const Ref<GLTFState> &state, uint32_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("append_from_scene")._native_ptr(), 1622574258);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr), (state != nullptr ? &state->_owner : nullptr), &flags_encoded);
}

Node *GLTFDocument::generate_scene(const Ref<GLTFState> &state, double bake_fps, bool trimming, bool remove_immutable_tracks) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("generate_scene")._native_ptr(), 596118388);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	double bake_fps_encoded;
	PtrToArg<double>::encode(bake_fps, &bake_fps_encoded);
	int8_t trimming_encoded;
	PtrToArg<bool>::encode(trimming, &trimming_encoded);
	int8_t remove_immutable_tracks_encoded;
	PtrToArg<bool>::encode(remove_immutable_tracks, &remove_immutable_tracks_encoded);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner, (state != nullptr ? &state->_owner : nullptr), &bake_fps_encoded, &trimming_encoded, &remove_immutable_tracks_encoded);
}

PackedByteArray GLTFDocument::generate_buffer(const Ref<GLTFState> &state) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("generate_buffer")._native_ptr(), 741783455);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, (state != nullptr ? &state->_owner : nullptr));
}

Error GLTFDocument::write_to_filesystem(const Ref<GLTFState> &state, const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("write_to_filesystem")._native_ptr(), 1784551478);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (state != nullptr ? &state->_owner : nullptr), &path);
}

void GLTFDocument::set_image_format(const String &image_format) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("set_image_format")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &image_format);
}

String GLTFDocument::get_image_format() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("get_image_format")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void GLTFDocument::set_lossy_quality(double lossy_quality) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("set_lossy_quality")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double lossy_quality_encoded;
	PtrToArg<double>::encode(lossy_quality, &lossy_quality_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lossy_quality_encoded);
}

double GLTFDocument::get_lossy_quality() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("get_lossy_quality")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GLTFDocument::set_root_node_mode(GLTFDocument::RootNodeMode root_node_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("set_root_node_mode")._native_ptr(), 463633402);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &root_node_mode);
}

GLTFDocument::RootNodeMode GLTFDocument::get_root_node_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("get_root_node_mode")._native_ptr(), 948057992);
	CHECK_METHOD_BIND_RET(_gde_method_bind, GLTFDocument::RootNodeMode(0));
	return (GLTFDocument::RootNodeMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFDocument::register_gltf_document_extension(const Ref<GLTFDocumentExtension> &extension, bool first_priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("register_gltf_document_extension")._native_ptr(), 3752678331);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t first_priority_encoded;
	PtrToArg<bool>::encode(first_priority, &first_priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, nullptr, (extension != nullptr ? &extension->_owner : nullptr), &first_priority_encoded);
}

void GLTFDocument::unregister_gltf_document_extension(const Ref<GLTFDocumentExtension> &extension) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFDocument::get_class_static()._native_ptr(), StringName("unregister_gltf_document_extension")._native_ptr(), 2684415758);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, nullptr, (extension != nullptr ? &extension->_owner : nullptr));
}


} // namespace godot 