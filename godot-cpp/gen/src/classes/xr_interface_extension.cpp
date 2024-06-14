/**************************************************************************/
/*  xr_interface_extension.cpp                                            */
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

#include <godot_cpp/classes/xr_interface_extension.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/string.hpp>

namespace godot {


RID XRInterfaceExtension::get_color_texture() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRInterfaceExtension::get_class_static()._native_ptr(), StringName("get_color_texture")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID XRInterfaceExtension::get_depth_texture() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRInterfaceExtension::get_class_static()._native_ptr(), StringName("get_depth_texture")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID XRInterfaceExtension::get_velocity_texture() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRInterfaceExtension::get_class_static()._native_ptr(), StringName("get_velocity_texture")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void XRInterfaceExtension::add_blit(const RID &render_target, const Rect2 &src_rect, const Rect2i &dst_rect, bool use_layer, uint32_t layer, bool apply_lens_distortion, const Vector2 &eye_center, double k1, double k2, double upscale, double aspect_ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRInterfaceExtension::get_class_static()._native_ptr(), StringName("add_blit")._native_ptr(), 258596971);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_layer_encoded;
	PtrToArg<bool>::encode(use_layer, &use_layer_encoded);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	int8_t apply_lens_distortion_encoded;
	PtrToArg<bool>::encode(apply_lens_distortion, &apply_lens_distortion_encoded);
	double k1_encoded;
	PtrToArg<double>::encode(k1, &k1_encoded);
	double k2_encoded;
	PtrToArg<double>::encode(k2, &k2_encoded);
	double upscale_encoded;
	PtrToArg<double>::encode(upscale, &upscale_encoded);
	double aspect_ratio_encoded;
	PtrToArg<double>::encode(aspect_ratio, &aspect_ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &render_target, &src_rect, &dst_rect, &use_layer_encoded, &layer_encoded, &apply_lens_distortion_encoded, &eye_center, &k1_encoded, &k2_encoded, &upscale_encoded, &aspect_ratio_encoded);
}

RID XRInterfaceExtension::get_render_target_texture(const RID &render_target) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRInterfaceExtension::get_class_static()._native_ptr(), StringName("get_render_target_texture")._native_ptr(), 41030802);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &render_target);
}

StringName XRInterfaceExtension::_get_name() const {
	return StringName();
}

uint32_t XRInterfaceExtension::_get_capabilities() const {
	return 0;
}

bool XRInterfaceExtension::_is_initialized() const {
	return false;
}

bool XRInterfaceExtension::_initialize() {
	return false;
}

void XRInterfaceExtension::_uninitialize() {}

Dictionary XRInterfaceExtension::_get_system_info() const {
	return Dictionary();
}

bool XRInterfaceExtension::_supports_play_area_mode(XRInterface::PlayAreaMode mode) const {
	return false;
}

XRInterface::PlayAreaMode XRInterfaceExtension::_get_play_area_mode() const {
	return XRInterface::PlayAreaMode(0);
}

bool XRInterfaceExtension::_set_play_area_mode(XRInterface::PlayAreaMode mode) const {
	return false;
}

PackedVector3Array XRInterfaceExtension::_get_play_area() const {
	return PackedVector3Array();
}

Vector2 XRInterfaceExtension::_get_render_target_size() {
	return Vector2();
}

uint32_t XRInterfaceExtension::_get_view_count() {
	return 0;
}

Transform3D XRInterfaceExtension::_get_camera_transform() {
	return Transform3D();
}

Transform3D XRInterfaceExtension::_get_transform_for_view(uint32_t view, const Transform3D &cam_transform) {
	return Transform3D();
}

PackedFloat64Array XRInterfaceExtension::_get_projection_for_view(uint32_t view, double aspect, double z_near, double z_far) {
	return PackedFloat64Array();
}

RID XRInterfaceExtension::_get_vrs_texture() {
	return RID();
}

void XRInterfaceExtension::_process() {}

void XRInterfaceExtension::_pre_render() {}

bool XRInterfaceExtension::_pre_draw_viewport(const RID &render_target) {
	return false;
}

void XRInterfaceExtension::_post_draw_viewport(const RID &render_target, const Rect2 &screen_rect) {}

void XRInterfaceExtension::_end_frame() {}

PackedStringArray XRInterfaceExtension::_get_suggested_tracker_names() const {
	return PackedStringArray();
}

PackedStringArray XRInterfaceExtension::_get_suggested_pose_names(const StringName &tracker_name) const {
	return PackedStringArray();
}

XRInterface::TrackingStatus XRInterfaceExtension::_get_tracking_status() const {
	return XRInterface::TrackingStatus(0);
}

void XRInterfaceExtension::_trigger_haptic_pulse(const String &action_name, const StringName &tracker_name, double frequency, double amplitude, double duration_sec, double delay_sec) {}

bool XRInterfaceExtension::_get_anchor_detection_is_enabled() const {
	return false;
}

void XRInterfaceExtension::_set_anchor_detection_is_enabled(bool enabled) {}

int32_t XRInterfaceExtension::_get_camera_feed_id() const {
	return 0;
}

RID XRInterfaceExtension::_get_color_texture() {
	return RID();
}

RID XRInterfaceExtension::_get_depth_texture() {
	return RID();
}

RID XRInterfaceExtension::_get_velocity_texture() {
	return RID();
}


} // namespace godot 