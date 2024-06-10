/**************************************************************************/
/*  pin_joint2d.cpp                                                       */
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

#include <godot_cpp/classes/pin_joint2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void PinJoint2D::set_softness(double softness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("set_softness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double softness_encoded;
	PtrToArg<double>::encode(softness, &softness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &softness_encoded);
}

double PinJoint2D::get_softness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("get_softness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PinJoint2D::set_angular_limit_lower(double angular_limit_lower) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("set_angular_limit_lower")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double angular_limit_lower_encoded;
	PtrToArg<double>::encode(angular_limit_lower, &angular_limit_lower_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &angular_limit_lower_encoded);
}

double PinJoint2D::get_angular_limit_lower() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("get_angular_limit_lower")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PinJoint2D::set_angular_limit_upper(double angular_limit_upper) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("set_angular_limit_upper")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double angular_limit_upper_encoded;
	PtrToArg<double>::encode(angular_limit_upper, &angular_limit_upper_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &angular_limit_upper_encoded);
}

double PinJoint2D::get_angular_limit_upper() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("get_angular_limit_upper")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PinJoint2D::set_motor_target_velocity(double motor_target_velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("set_motor_target_velocity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double motor_target_velocity_encoded;
	PtrToArg<double>::encode(motor_target_velocity, &motor_target_velocity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &motor_target_velocity_encoded);
}

double PinJoint2D::get_motor_target_velocity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("get_motor_target_velocity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PinJoint2D::set_motor_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("set_motor_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool PinJoint2D::is_motor_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("is_motor_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void PinJoint2D::set_angular_limit_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("set_angular_limit_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool PinJoint2D::is_angular_limit_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PinJoint2D::get_class_static()._native_ptr(), StringName("is_angular_limit_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 