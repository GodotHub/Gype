/**************************************************************************/
/*  visual_shader.cpp                                                     */
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

#include <godot_cpp/classes/visual_shader.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>

namespace godot {

void VisualShader::set_mode(Shader::Mode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("set_mode")._native_ptr(), 3978014962);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

void VisualShader::add_node(VisualShader::Type type, const Ref<VisualShaderNode> &node, const Vector2 &position, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("add_node")._native_ptr(), 1560769431);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, (node != nullptr ? &node->_owner : nullptr), &position, &id_encoded);
}

Ref<VisualShaderNode> VisualShader::get_node(VisualShader::Type type, int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("get_node")._native_ptr(), 3784670312);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<VisualShaderNode>());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return Ref<VisualShaderNode>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<VisualShaderNode>(_gde_method_bind, _owner, &type, &id_encoded));
}

void VisualShader::set_node_position(VisualShader::Type type, int32_t id, const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("set_node_position")._native_ptr(), 2726660721);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &id_encoded, &position);
}

Vector2 VisualShader::get_node_position(VisualShader::Type type, int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("get_node_position")._native_ptr(), 2175036082);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &type, &id_encoded);
}

PackedInt32Array VisualShader::get_node_list(VisualShader::Type type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("get_node_list")._native_ptr(), 2370592410);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &type);
}

int32_t VisualShader::get_valid_node_id(VisualShader::Type type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("get_valid_node_id")._native_ptr(), 629467342);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &type);
}

void VisualShader::remove_node(VisualShader::Type type, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("remove_node")._native_ptr(), 844050912);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &id_encoded);
}

void VisualShader::replace_node(VisualShader::Type type, int32_t id, const StringName &new_class) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("replace_node")._native_ptr(), 3144735253);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &id_encoded, &new_class);
}

bool VisualShader::is_node_connection(VisualShader::Type type, int32_t from_node, int32_t from_port, int32_t to_node, int32_t to_port) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("is_node_connection")._native_ptr(), 3922381898);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t from_node_encoded;
	PtrToArg<int64_t>::encode(from_node, &from_node_encoded);
	int64_t from_port_encoded;
	PtrToArg<int64_t>::encode(from_port, &from_port_encoded);
	int64_t to_node_encoded;
	PtrToArg<int64_t>::encode(to_node, &to_node_encoded);
	int64_t to_port_encoded;
	PtrToArg<int64_t>::encode(to_port, &to_port_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &type, &from_node_encoded, &from_port_encoded, &to_node_encoded, &to_port_encoded);
}

bool VisualShader::can_connect_nodes(VisualShader::Type type, int32_t from_node, int32_t from_port, int32_t to_node, int32_t to_port) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("can_connect_nodes")._native_ptr(), 3922381898);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t from_node_encoded;
	PtrToArg<int64_t>::encode(from_node, &from_node_encoded);
	int64_t from_port_encoded;
	PtrToArg<int64_t>::encode(from_port, &from_port_encoded);
	int64_t to_node_encoded;
	PtrToArg<int64_t>::encode(to_node, &to_node_encoded);
	int64_t to_port_encoded;
	PtrToArg<int64_t>::encode(to_port, &to_port_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &type, &from_node_encoded, &from_port_encoded, &to_node_encoded, &to_port_encoded);
}

Error VisualShader::connect_nodes(VisualShader::Type type, int32_t from_node, int32_t from_port, int32_t to_node, int32_t to_port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("connect_nodes")._native_ptr(), 3081049573);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t from_node_encoded;
	PtrToArg<int64_t>::encode(from_node, &from_node_encoded);
	int64_t from_port_encoded;
	PtrToArg<int64_t>::encode(from_port, &from_port_encoded);
	int64_t to_node_encoded;
	PtrToArg<int64_t>::encode(to_node, &to_node_encoded);
	int64_t to_port_encoded;
	PtrToArg<int64_t>::encode(to_port, &to_port_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &type, &from_node_encoded, &from_port_encoded, &to_node_encoded, &to_port_encoded);
}

void VisualShader::disconnect_nodes(VisualShader::Type type, int32_t from_node, int32_t from_port, int32_t to_node, int32_t to_port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("disconnect_nodes")._native_ptr(), 2268060358);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_node_encoded;
	PtrToArg<int64_t>::encode(from_node, &from_node_encoded);
	int64_t from_port_encoded;
	PtrToArg<int64_t>::encode(from_port, &from_port_encoded);
	int64_t to_node_encoded;
	PtrToArg<int64_t>::encode(to_node, &to_node_encoded);
	int64_t to_port_encoded;
	PtrToArg<int64_t>::encode(to_port, &to_port_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &from_node_encoded, &from_port_encoded, &to_node_encoded, &to_port_encoded);
}

void VisualShader::connect_nodes_forced(VisualShader::Type type, int32_t from_node, int32_t from_port, int32_t to_node, int32_t to_port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("connect_nodes_forced")._native_ptr(), 2268060358);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_node_encoded;
	PtrToArg<int64_t>::encode(from_node, &from_node_encoded);
	int64_t from_port_encoded;
	PtrToArg<int64_t>::encode(from_port, &from_port_encoded);
	int64_t to_node_encoded;
	PtrToArg<int64_t>::encode(to_node, &to_node_encoded);
	int64_t to_port_encoded;
	PtrToArg<int64_t>::encode(to_port, &to_port_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &from_node_encoded, &from_port_encoded, &to_node_encoded, &to_port_encoded);
}

TypedArray<Dictionary> VisualShader::get_node_connections(VisualShader::Type type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("get_node_connections")._native_ptr(), 1441964831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &type);
}

void VisualShader::set_graph_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("set_graph_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector2 VisualShader::get_graph_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("get_graph_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void VisualShader::attach_node_to_frame(VisualShader::Type type, int32_t id, int32_t frame) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("attach_node_to_frame")._native_ptr(), 2479945279);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &id_encoded, &frame_encoded);
}

void VisualShader::detach_node_from_frame(VisualShader::Type type, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("detach_node_from_frame")._native_ptr(), 844050912);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type, &id_encoded);
}

void VisualShader::add_varying(const String &name, VisualShader::VaryingMode mode, VisualShader::VaryingType type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("add_varying")._native_ptr(), 2084110726);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &mode, &type);
}

void VisualShader::remove_varying(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("remove_varying")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

bool VisualShader::has_varying(const String &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShader::get_class_static()._native_ptr(), StringName("has_varying")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}


} // namespace godot 