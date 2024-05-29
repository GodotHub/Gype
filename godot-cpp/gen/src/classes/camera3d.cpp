/**************************************************************************/
/*  camera3d.cpp                                                          */
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

#include <godot_cpp/classes/camera3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/environment.hpp>

namespace godot {

Vector3 Camera3D::project_ray_normal(const Vector2 &screen_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("project_ray_normal")._native_ptr(), 1718073306);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &screen_point);
}

Vector3 Camera3D::project_local_ray_normal(const Vector2 &screen_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("project_local_ray_normal")._native_ptr(), 1718073306);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &screen_point);
}

Vector3 Camera3D::project_ray_origin(const Vector2 &screen_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("project_ray_origin")._native_ptr(), 1718073306);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &screen_point);
}

Vector2 Camera3D::unproject_position(const Vector3 &world_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("unproject_position")._native_ptr(), 3758901831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &world_point);
}

bool Camera3D::is_position_behind(const Vector3 &world_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("is_position_behind")._native_ptr(), 3108956480);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &world_point);
}

Vector3 Camera3D::project_position(const Vector2 &screen_point, double z_depth) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("project_position")._native_ptr(), 2171975744);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	double z_depth_encoded;
	PtrToArg<double>::encode(z_depth, &z_depth_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &screen_point, &z_depth_encoded);
}

void Camera3D::set_perspective(double fov, double z_near, double z_far) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_perspective")._native_ptr(), 2385087082);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fov_encoded;
	PtrToArg<double>::encode(fov, &fov_encoded);
	double z_near_encoded;
	PtrToArg<double>::encode(z_near, &z_near_encoded);
	double z_far_encoded;
	PtrToArg<double>::encode(z_far, &z_far_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fov_encoded, &z_near_encoded, &z_far_encoded);
}

void Camera3D::set_orthogonal(double size, double z_near, double z_far) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_orthogonal")._native_ptr(), 2385087082);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	double z_near_encoded;
	PtrToArg<double>::encode(z_near, &z_near_encoded);
	double z_far_encoded;
	PtrToArg<double>::encode(z_far, &z_far_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded, &z_near_encoded, &z_far_encoded);
}

void Camera3D::set_frustum(double size, const Vector2 &offset, double z_near, double z_far) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_frustum")._native_ptr(), 354890663);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	double z_near_encoded;
	PtrToArg<double>::encode(z_near, &z_near_encoded);
	double z_far_encoded;
	PtrToArg<double>::encode(z_far, &z_far_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded, &offset, &z_near_encoded, &z_far_encoded);
}

void Camera3D::make_current() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("make_current")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Camera3D::clear_current(bool enable_next) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("clear_current")._native_ptr(), 3216645846);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_next_encoded;
	PtrToArg<bool>::encode(enable_next, &enable_next_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_next_encoded);
}

void Camera3D::set_current(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_current")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Camera3D::is_current() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("is_current")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Transform3D Camera3D::get_camera_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_camera_transform")._native_ptr(), 3229777777);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner);
}

Projection Camera3D::get_camera_projection() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_camera_projection")._native_ptr(), 2910717950);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Projection());
	return internal::_call_native_mb_ret<Projection>(_gde_method_bind, _owner);
}

double Camera3D::get_fov() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_fov")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Vector2 Camera3D::get_frustum_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_frustum_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

double Camera3D::get_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Camera3D::get_far() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_far")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Camera3D::get_near() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_near")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Camera3D::set_fov(double fov) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_fov")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fov_encoded;
	PtrToArg<double>::encode(fov, &fov_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fov_encoded);
}

void Camera3D::set_frustum_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_frustum_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

void Camera3D::set_size(double size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

void Camera3D::set_far(double far) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_far")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double far_encoded;
	PtrToArg<double>::encode(far, &far_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &far_encoded);
}

void Camera3D::set_near(double near) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_near")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double near_encoded;
	PtrToArg<double>::encode(near, &near_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &near_encoded);
}

Camera3D::ProjectionType Camera3D::get_projection() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_projection")._native_ptr(), 2624185235);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Camera3D::ProjectionType(0));
	return (Camera3D::ProjectionType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Camera3D::set_projection(Camera3D::ProjectionType mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_projection")._native_ptr(), 4218540108);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

void Camera3D::set_h_offset(double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_h_offset")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset_encoded);
}

double Camera3D::get_h_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_h_offset")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Camera3D::set_v_offset(double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_v_offset")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset_encoded);
}

double Camera3D::get_v_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_v_offset")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Camera3D::set_cull_mask(uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_cull_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

uint32_t Camera3D::get_cull_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_cull_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Camera3D::set_environment(const Ref<Environment> &env) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_environment")._native_ptr(), 4143518816);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (env != nullptr ? &env->_owner : nullptr));
}

Ref<Environment> Camera3D::get_environment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_environment")._native_ptr(), 3082064660);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Environment>());
	return Ref<Environment>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Environment>(_gde_method_bind, _owner));
}

void Camera3D::set_attributes(const Ref<CameraAttributes> &env) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_attributes")._native_ptr(), 2817810567);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (env != nullptr ? &env->_owner : nullptr));
}

Ref<CameraAttributes> Camera3D::get_attributes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_attributes")._native_ptr(), 3921283215);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<CameraAttributes>());
	return Ref<CameraAttributes>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<CameraAttributes>(_gde_method_bind, _owner));
}

void Camera3D::set_keep_aspect_mode(Camera3D::KeepAspect mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_keep_aspect_mode")._native_ptr(), 1740651252);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Camera3D::KeepAspect Camera3D::get_keep_aspect_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_keep_aspect_mode")._native_ptr(), 2790278316);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Camera3D::KeepAspect(0));
	return (Camera3D::KeepAspect)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Camera3D::set_doppler_tracking(Camera3D::DopplerTracking mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_doppler_tracking")._native_ptr(), 3109431270);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Camera3D::DopplerTracking Camera3D::get_doppler_tracking() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_doppler_tracking")._native_ptr(), 1584483649);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Camera3D::DopplerTracking(0));
	return (Camera3D::DopplerTracking)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

TypedArray<Plane> Camera3D::get_frustum() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_frustum")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Plane>());
	return internal::_call_native_mb_ret<TypedArray<Plane>>(_gde_method_bind, _owner);
}

bool Camera3D::is_position_in_frustum(const Vector3 &world_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("is_position_in_frustum")._native_ptr(), 3108956480);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &world_point);
}

RID Camera3D::get_camera_rid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_camera_rid")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID Camera3D::get_pyramid_shape_rid() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_pyramid_shape_rid")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void Camera3D::set_cull_mask_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("set_cull_mask_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool Camera3D::get_cull_mask_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera3D::get_class_static()._native_ptr(), StringName("get_cull_mask_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}


} // namespace godot 