/**************************************************************************/
/*  jsonrpc.cpp                                                           */
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

#include <godot_cpp/classes/jsonrpc.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void JSONRPC::set_scope(const String &scope, Object *target) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JSONRPC::get_class_static()._native_ptr(), StringName("set_scope")._native_ptr(), 2572618360);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scope, (target != nullptr ? &target->_owner : nullptr));
}

Variant JSONRPC::process_action(const Variant &action, bool recurse) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JSONRPC::get_class_static()._native_ptr(), StringName("process_action")._native_ptr(), 2963479484);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int8_t recurse_encoded;
	PtrToArg<bool>::encode(recurse, &recurse_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &action, &recurse_encoded);
}

String JSONRPC::process_string(const String &action) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JSONRPC::get_class_static()._native_ptr(), StringName("process_string")._native_ptr(), 1703090593);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &action);
}

Dictionary JSONRPC::make_request(const String &method, const Variant &params, const Variant &id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JSONRPC::get_class_static()._native_ptr(), StringName("make_request")._native_ptr(), 3423508980);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &method, &params, &id);
}

Dictionary JSONRPC::make_response(const Variant &result, const Variant &id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JSONRPC::get_class_static()._native_ptr(), StringName("make_response")._native_ptr(), 5053918);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &result, &id);
}

Dictionary JSONRPC::make_notification(const String &method, const Variant &params) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JSONRPC::get_class_static()._native_ptr(), StringName("make_notification")._native_ptr(), 2949127017);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &method, &params);
}

Dictionary JSONRPC::make_response_error(int32_t code, const String &message, const Variant &id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JSONRPC::get_class_static()._native_ptr(), StringName("make_response_error")._native_ptr(), 928596297);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t code_encoded;
	PtrToArg<int64_t>::encode(code, &code_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &code_encoded, &message, &id);
}


} // namespace godot 