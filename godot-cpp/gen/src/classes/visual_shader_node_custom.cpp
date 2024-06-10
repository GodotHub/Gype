/**************************************************************************/
/*  visual_shader_node_custom.cpp                                         */
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

#include <godot_cpp/classes/visual_shader_node_custom.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

int32_t VisualShaderNodeCustom::get_option_index(int32_t option) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(VisualShaderNodeCustom::get_class_static()._native_ptr(), StringName("get_option_index")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t option_encoded;
	PtrToArg<int64_t>::encode(option, &option_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &option_encoded);
}

String VisualShaderNodeCustom::_get_name() const {
	return String();
}

String VisualShaderNodeCustom::_get_description() const {
	return String();
}

String VisualShaderNodeCustom::_get_category() const {
	return String();
}

VisualShaderNode::PortType VisualShaderNodeCustom::_get_return_icon_type() const {
	return VisualShaderNode::PortType(0);
}

int32_t VisualShaderNodeCustom::_get_input_port_count() const {
	return 0;
}

VisualShaderNode::PortType VisualShaderNodeCustom::_get_input_port_type(int32_t port) const {
	return VisualShaderNode::PortType(0);
}

String VisualShaderNodeCustom::_get_input_port_name(int32_t port) const {
	return String();
}

Variant VisualShaderNodeCustom::_get_input_port_default_value(int32_t port) const {
	return Variant();
}

int32_t VisualShaderNodeCustom::_get_default_input_port(VisualShaderNode::PortType type) const {
	return 0;
}

int32_t VisualShaderNodeCustom::_get_output_port_count() const {
	return 0;
}

VisualShaderNode::PortType VisualShaderNodeCustom::_get_output_port_type(int32_t port) const {
	return VisualShaderNode::PortType(0);
}

String VisualShaderNodeCustom::_get_output_port_name(int32_t port) const {
	return String();
}

int32_t VisualShaderNodeCustom::_get_property_count() const {
	return 0;
}

String VisualShaderNodeCustom::_get_property_name(int32_t index) const {
	return String();
}

int32_t VisualShaderNodeCustom::_get_property_default_index(int32_t index) const {
	return 0;
}

PackedStringArray VisualShaderNodeCustom::_get_property_options(int32_t index) const {
	return PackedStringArray();
}

String VisualShaderNodeCustom::_get_code(const TypedArray<String> &input_vars, const TypedArray<String> &output_vars, Shader::Mode mode, VisualShader::Type type) const {
	return String();
}

String VisualShaderNodeCustom::_get_func_code(Shader::Mode mode, VisualShader::Type type) const {
	return String();
}

String VisualShaderNodeCustom::_get_global_code(Shader::Mode mode) const {
	return String();
}

bool VisualShaderNodeCustom::_is_highend() const {
	return false;
}

bool VisualShaderNodeCustom::_is_available(Shader::Mode mode, VisualShader::Type type) const {
	return false;
}


} // namespace godot 