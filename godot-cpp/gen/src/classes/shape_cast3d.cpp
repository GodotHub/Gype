/**************************************************************************/
/*  shape_cast3d.cpp                                                      */
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

#include <godot_cpp/classes/shape_cast3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shape3d.hpp>

namespace godot {

void ShapeCast3D::resource_changed(const Ref<Resource> &resource) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("resource_changed")._native_ptr(), 968641751);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (resource != nullptr ? &resource->_owner : nullptr));
}

void ShapeCast3D::set_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool ShapeCast3D::is_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("is_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ShapeCast3D::set_shape(const Ref<Shape3D> &shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_shape")._native_ptr(), 1549710052);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (shape != nullptr ? &shape->_owner : nullptr));
}

Ref<Shape3D> ShapeCast3D::get_shape() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_shape")._native_ptr(), 3214262478);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Shape3D>());
	return Ref<Shape3D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Shape3D>(_gde_method_bind, _owner));
}

void ShapeCast3D::set_target_position(const Vector3 &local_point) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_target_position")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &local_point);
}

Vector3 ShapeCast3D::get_target_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_target_position")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void ShapeCast3D::set_margin(double margin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_margin")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double margin_encoded;
	PtrToArg<double>::encode(margin, &margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &margin_encoded);
}

double ShapeCast3D::get_margin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_margin")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ShapeCast3D::set_max_results(int32_t max_results) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_max_results")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_results_encoded;
	PtrToArg<int64_t>::encode(max_results, &max_results_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_results_encoded);
}

int32_t ShapeCast3D::get_max_results() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_max_results")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool ShapeCast3D::is_colliding() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("is_colliding")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t ShapeCast3D::get_collision_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_collision_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ShapeCast3D::force_shapecast_update() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("force_shapecast_update")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Object *ShapeCast3D::get_collider(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_collider")._native_ptr(), 3332903315);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret_obj<Object>(_gde_method_bind, _owner, &index_encoded);
}

RID ShapeCast3D::get_collider_rid(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_collider_rid")._native_ptr(), 495598643);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &index_encoded);
}

int32_t ShapeCast3D::get_collider_shape(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_collider_shape")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

Vector3 ShapeCast3D::get_collision_point(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_collision_point")._native_ptr(), 711720468);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &index_encoded);
}

Vector3 ShapeCast3D::get_collision_normal(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_collision_normal")._native_ptr(), 711720468);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &index_encoded);
}

double ShapeCast3D::get_closest_collision_safe_fraction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_closest_collision_safe_fraction")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double ShapeCast3D::get_closest_collision_unsafe_fraction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_closest_collision_unsafe_fraction")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ShapeCast3D::add_exception_rid(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("add_exception_rid")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

void ShapeCast3D::add_exception(CollisionObject3D *node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("add_exception")._native_ptr(), 1976431078);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

void ShapeCast3D::remove_exception_rid(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("remove_exception_rid")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

void ShapeCast3D::remove_exception(CollisionObject3D *node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("remove_exception")._native_ptr(), 1976431078);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

void ShapeCast3D::clear_exceptions() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("clear_exceptions")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void ShapeCast3D::set_collision_mask(uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_collision_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

uint32_t ShapeCast3D::get_collision_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_collision_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ShapeCast3D::set_collision_mask_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_collision_mask_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool ShapeCast3D::get_collision_mask_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_collision_mask_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}

void ShapeCast3D::set_exclude_parent_body(bool mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_exclude_parent_body")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t mask_encoded;
	PtrToArg<bool>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

bool ShapeCast3D::get_exclude_parent_body() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_exclude_parent_body")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ShapeCast3D::set_collide_with_areas(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_collide_with_areas")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool ShapeCast3D::is_collide_with_areas_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("is_collide_with_areas_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ShapeCast3D::set_collide_with_bodies(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_collide_with_bodies")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool ShapeCast3D::is_collide_with_bodies_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("is_collide_with_bodies_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ShapeCast3D::set_debug_shape_custom_color(const Color &debug_shape_custom_color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("set_debug_shape_custom_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &debug_shape_custom_color);
}

Color ShapeCast3D::get_debug_shape_custom_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ShapeCast3D::get_class_static()._native_ptr(), StringName("get_debug_shape_custom_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}


} // namespace godot 