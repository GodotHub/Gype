/**************************************************************************/
/*  camera_attributes_physical.cpp                                        */
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

#include <godot_cpp/classes/camera_attributes_physical.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void CameraAttributesPhysical::set_aperture(double aperture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("set_aperture")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double aperture_encoded;
	PtrToArg<double>::encode(aperture, &aperture_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &aperture_encoded);
}

double CameraAttributesPhysical::get_aperture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("get_aperture")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributesPhysical::set_shutter_speed(double shutter_speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("set_shutter_speed")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double shutter_speed_encoded;
	PtrToArg<double>::encode(shutter_speed, &shutter_speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shutter_speed_encoded);
}

double CameraAttributesPhysical::get_shutter_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("get_shutter_speed")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributesPhysical::set_focal_length(double focal_length) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("set_focal_length")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double focal_length_encoded;
	PtrToArg<double>::encode(focal_length, &focal_length_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &focal_length_encoded);
}

double CameraAttributesPhysical::get_focal_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("get_focal_length")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributesPhysical::set_focus_distance(double focus_distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("set_focus_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double focus_distance_encoded;
	PtrToArg<double>::encode(focus_distance, &focus_distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &focus_distance_encoded);
}

double CameraAttributesPhysical::get_focus_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("get_focus_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributesPhysical::set_near(double near) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("set_near")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double near_encoded;
	PtrToArg<double>::encode(near, &near_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &near_encoded);
}

double CameraAttributesPhysical::get_near() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("get_near")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributesPhysical::set_far(double far) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("set_far")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double far_encoded;
	PtrToArg<double>::encode(far, &far_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &far_encoded);
}

double CameraAttributesPhysical::get_far() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("get_far")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double CameraAttributesPhysical::get_fov() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("get_fov")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributesPhysical::set_auto_exposure_max_exposure_value(double exposure_value_max) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("set_auto_exposure_max_exposure_value")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double exposure_value_max_encoded;
	PtrToArg<double>::encode(exposure_value_max, &exposure_value_max_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &exposure_value_max_encoded);
}

double CameraAttributesPhysical::get_auto_exposure_max_exposure_value() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("get_auto_exposure_max_exposure_value")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void CameraAttributesPhysical::set_auto_exposure_min_exposure_value(double exposure_value_min) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("set_auto_exposure_min_exposure_value")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double exposure_value_min_encoded;
	PtrToArg<double>::encode(exposure_value_min, &exposure_value_min_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &exposure_value_min_encoded);
}

double CameraAttributesPhysical::get_auto_exposure_min_exposure_value() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraAttributesPhysical::get_class_static()._native_ptr(), StringName("get_auto_exposure_min_exposure_value")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 