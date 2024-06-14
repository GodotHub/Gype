/**************************************************************************/
/*  camera_attributes.cpp                                                 */
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

#include <godot_cpp/classes/camera_attributes.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


void CameraAttributes::set_exposure_multiplier(double multiplier) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("set_exposure_multiplier")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double multiplier_encoded;
	PtrToArg<double>::encode(multiplier, &multiplier_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multiplier_encoded);
}

double CameraAttributes::get_exposure_multiplier() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("get_exposure_multiplier")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributes::set_exposure_sensitivity(double sensitivity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("set_exposure_sensitivity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sensitivity_encoded;
	PtrToArg<double>::encode(sensitivity, &sensitivity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sensitivity_encoded);
}

double CameraAttributes::get_exposure_sensitivity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("get_exposure_sensitivity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributes::set_auto_exposure_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("set_auto_exposure_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool CameraAttributes::is_auto_exposure_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("is_auto_exposure_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CameraAttributes::set_auto_exposure_speed(double exposure_speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("set_auto_exposure_speed")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double exposure_speed_encoded;
	PtrToArg<double>::encode(exposure_speed, &exposure_speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &exposure_speed_encoded);
}

double CameraAttributes::get_auto_exposure_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("get_auto_exposure_speed")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributes::set_auto_exposure_scale(double exposure_grey) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("set_auto_exposure_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double exposure_grey_encoded;
	PtrToArg<double>::encode(exposure_grey, &exposure_grey_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &exposure_grey_encoded);
}

double CameraAttributes::get_auto_exposure_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributes::get_class_static()._native_ptr(), StringName("get_auto_exposure_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 