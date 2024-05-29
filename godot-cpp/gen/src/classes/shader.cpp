/**************************************************************************/
/*  shader.cpp                                                            */
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

#include <godot_cpp/classes/shader.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/classes/texture2d.hpp>

namespace godot {

Shader::Mode Shader::get_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shader::get_class_static()._native_ptr(), StringName("get_mode")._native_ptr(), 3392948163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Shader::Mode(0));
	return (Shader::Mode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Shader::set_code(const String &code) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shader::get_class_static()._native_ptr(), StringName("set_code")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &code);
}

String Shader::get_code() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shader::get_class_static()._native_ptr(), StringName("get_code")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void Shader::set_default_texture_parameter(const StringName &name, const Ref<Texture2D> &texture, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shader::get_class_static()._native_ptr(), StringName("set_default_texture_parameter")._native_ptr(), 2750740428);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, (texture != nullptr ? &texture->_owner : nullptr), &index_encoded);
}

Ref<Texture2D> Shader::get_default_texture_parameter(const StringName &name, int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shader::get_class_static()._native_ptr(), StringName("get_default_texture_parameter")._native_ptr(), 3090538643);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &name, &index_encoded));
}

Array Shader::get_shader_uniform_list(bool get_groups) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shader::get_class_static()._native_ptr(), StringName("get_shader_uniform_list")._native_ptr(), 1230511656);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int8_t get_groups_encoded;
	PtrToArg<bool>::encode(get_groups, &get_groups_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &get_groups_encoded);
}


} // namespace godot 