/**************************************************************************/
/*  mobile_vr_interface.cpp                                               */
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

#include <godot_cpp/classes/mobile_vr_interface.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void MobileVRInterface::set_eye_height(double eye_height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("set_eye_height")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double eye_height_encoded;
	PtrToArg<double>::encode(eye_height, &eye_height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &eye_height_encoded);
}

double MobileVRInterface::get_eye_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("get_eye_height")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MobileVRInterface::set_iod(double iod) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("set_iod")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double iod_encoded;
	PtrToArg<double>::encode(iod, &iod_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &iod_encoded);
}

double MobileVRInterface::get_iod() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("get_iod")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MobileVRInterface::set_display_width(double display_width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("set_display_width")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double display_width_encoded;
	PtrToArg<double>::encode(display_width, &display_width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &display_width_encoded);
}

double MobileVRInterface::get_display_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("get_display_width")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MobileVRInterface::set_display_to_lens(double display_to_lens) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("set_display_to_lens")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double display_to_lens_encoded;
	PtrToArg<double>::encode(display_to_lens, &display_to_lens_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &display_to_lens_encoded);
}

double MobileVRInterface::get_display_to_lens() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("get_display_to_lens")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MobileVRInterface::set_oversample(double oversample) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("set_oversample")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double oversample_encoded;
	PtrToArg<double>::encode(oversample, &oversample_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &oversample_encoded);
}

double MobileVRInterface::get_oversample() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("get_oversample")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MobileVRInterface::set_k1(double k) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("set_k1")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double k_encoded;
	PtrToArg<double>::encode(k, &k_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &k_encoded);
}

double MobileVRInterface::get_k1() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("get_k1")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void MobileVRInterface::set_k2(double k) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("set_k2")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double k_encoded;
	PtrToArg<double>::encode(k, &k_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &k_encoded);
}

double MobileVRInterface::get_k2() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MobileVRInterface::get_class_static()._native_ptr(), StringName("get_k2")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 