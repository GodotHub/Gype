/**************************************************************************/
/*  marshalls.cpp                                                         */
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

#include <godot_cpp/classes/marshalls.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

Marshalls *Marshalls::get_singleton() {
	static Marshalls *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(Marshalls::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<Marshalls *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &Marshalls::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

String Marshalls::variant_to_base64(const Variant &variant, bool full_objects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Marshalls::get_class_static()._native_ptr(), StringName("variant_to_base64")._native_ptr(), 3876248563);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int8_t full_objects_encoded;
	PtrToArg<bool>::encode(full_objects, &full_objects_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &variant, &full_objects_encoded);
}

Variant Marshalls::base64_to_variant(const String &base64_str, bool allow_objects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Marshalls::get_class_static()._native_ptr(), StringName("base64_to_variant")._native_ptr(), 218087648);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int8_t allow_objects_encoded;
	PtrToArg<bool>::encode(allow_objects, &allow_objects_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &base64_str, &allow_objects_encoded);
}

String Marshalls::raw_to_base64(const PackedByteArray &array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Marshalls::get_class_static()._native_ptr(), StringName("raw_to_base64")._native_ptr(), 3999417757);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &array);
}

PackedByteArray Marshalls::base64_to_raw(const String &base64_str) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Marshalls::get_class_static()._native_ptr(), StringName("base64_to_raw")._native_ptr(), 659035735);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &base64_str);
}

String Marshalls::utf8_to_base64(const String &utf8_str) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Marshalls::get_class_static()._native_ptr(), StringName("utf8_to_base64")._native_ptr(), 1703090593);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &utf8_str);
}

String Marshalls::base64_to_utf8(const String &base64_str) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Marshalls::get_class_static()._native_ptr(), StringName("base64_to_utf8")._native_ptr(), 1703090593);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &base64_str);
}


} // namespace godot 