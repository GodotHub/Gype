/**************************************************************************/
/*  xr_positional_tracker.cpp                                             */
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

#include <godot_cpp/classes/xr_positional_tracker.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>

namespace godot {

XRServer::TrackerType XRPositionalTracker::get_tracker_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("get_tracker_type")._native_ptr(), 2784508102);
	CHECK_METHOD_BIND_RET(_gde_method_bind, XRServer::TrackerType(0));
	return (XRServer::TrackerType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void XRPositionalTracker::set_tracker_type(XRServer::TrackerType type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("set_tracker_type")._native_ptr(), 3055763575);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type);
}

StringName XRPositionalTracker::get_tracker_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("get_tracker_name")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void XRPositionalTracker::set_tracker_name(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("set_tracker_name")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

String XRPositionalTracker::get_tracker_desc() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("get_tracker_desc")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void XRPositionalTracker::set_tracker_desc(const String &description) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("set_tracker_desc")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &description);
}

String XRPositionalTracker::get_tracker_profile() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("get_tracker_profile")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void XRPositionalTracker::set_tracker_profile(const String &profile) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("set_tracker_profile")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &profile);
}

XRPositionalTracker::TrackerHand XRPositionalTracker::get_tracker_hand() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("get_tracker_hand")._native_ptr(), 4181770860);
	CHECK_METHOD_BIND_RET(_gde_method_bind, XRPositionalTracker::TrackerHand(0));
	return (XRPositionalTracker::TrackerHand)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void XRPositionalTracker::set_tracker_hand(XRPositionalTracker::TrackerHand hand) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("set_tracker_hand")._native_ptr(), 3904108980);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hand);
}

bool XRPositionalTracker::has_pose(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("has_pose")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

Ref<XRPose> XRPositionalTracker::get_pose(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("get_pose")._native_ptr(), 4099720006);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<XRPose>());
	return Ref<XRPose>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<XRPose>(_gde_method_bind, _owner, &name));
}

void XRPositionalTracker::invalidate_pose(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("invalidate_pose")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void XRPositionalTracker::set_pose(const StringName &name, const Transform3D &transform, const Vector3 &linear_velocity, const Vector3 &angular_velocity, XRPose::TrackingConfidence tracking_confidence) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("set_pose")._native_ptr(), 3451230163);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &transform, &linear_velocity, &angular_velocity, &tracking_confidence);
}

Variant XRPositionalTracker::get_input(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("get_input")._native_ptr(), 2760726917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &name);
}

void XRPositionalTracker::set_input(const StringName &name, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRPositionalTracker::get_class_static()._native_ptr(), StringName("set_input")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &value);
}


} // namespace godot 