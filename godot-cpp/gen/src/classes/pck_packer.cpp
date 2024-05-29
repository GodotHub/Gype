/**************************************************************************/
/*  pck_packer.cpp                                                        */
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

#include <godot_cpp/classes/pck_packer.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

Error PCKPacker::pck_start(const String &pck_name, int32_t alignment, const String &key, bool encrypt_directory) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PCKPacker::get_class_static()._native_ptr(), StringName("pck_start")._native_ptr(), 508410629);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t alignment_encoded;
	PtrToArg<int64_t>::encode(alignment, &alignment_encoded);
	int8_t encrypt_directory_encoded;
	PtrToArg<bool>::encode(encrypt_directory, &encrypt_directory_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &pck_name, &alignment_encoded, &key, &encrypt_directory_encoded);
}

Error PCKPacker::add_file(const String &pck_path, const String &source_path, bool encrypt) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PCKPacker::get_class_static()._native_ptr(), StringName("add_file")._native_ptr(), 2215643711);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int8_t encrypt_encoded;
	PtrToArg<bool>::encode(encrypt, &encrypt_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &pck_path, &source_path, &encrypt_encoded);
}

Error PCKPacker::flush(bool verbose) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PCKPacker::get_class_static()._native_ptr(), StringName("flush")._native_ptr(), 1633102583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int8_t verbose_encoded;
	PtrToArg<bool>::encode(verbose, &verbose_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &verbose_encoded);
}


} // namespace godot 